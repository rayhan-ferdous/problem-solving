#include<bits/stdc++.h>

using namespace std;

#define	MAXDIGITS	1000		/* maximum length bignum */

#define PLUS		1		/* positive sign bit */
#define MINUS		-1		/* negative sign bit */

typedef struct
{
    char digits[MAXDIGITS];         /* represent the number */
    int signbit;			/* 1 if positive, -1 if negative */
    int lastdigit;			/* index of high-order digit */
} bignum;

void print_bignum(bignum*);
void string_to_bignum(string, bignum*);
void int_to_bignum(int, bignum*);
void initialize_bignum(bignum*);
void add_bignum(bignum*, bignum*, bignum*);
void subtract_bignum(bignum*, bignum*, bignum*);
int compare_bignum(bignum*, bignum*);
void zero_justify(bignum*);
void digit_shift(bignum*, int);
void multiply_bignum(bignum*, bignum*, bignum*);
void divide_bignum(bignum*, bignum*, bignum*);

bignum f[30];

void fact()
{
    int_to_bignum(1, &f[0]);

    for(int i = 1; i <= 25; i++)
    {
        bignum current, prev, result;

        int_to_bignum(i, &current);
        prev = f[i-1];
        multiply_bignum(&current, &prev, &result);

        f[i] = result;

        ///print_bignum(&f[i]);
    }
}

int main()
{
    //freopen("in", "r", stdin);

    fact();

    long long testcase;
    cin >> testcase;

    for(long long t = 1; t <= testcase; t++)
    {
        bignum finalresult;

        string word;
        cin >> word;

        //cout << word << endl;

        int letter[100];
        for(int i = 65; i <= 90; i++)
            letter[i] = 0;

        int sz = word.size();

        for(int i = 0; i < sz; i++)
        {
            int ch = word[i];
            letter[ch]++;

            //cout << (char)ch << "  " << letter[ch] << endl;
        }

        bignum n = f[sz];
        //print_bignum(&n);
        //cout << endl;

        for(int i = 65; i <= 90; i++)
        {
            if(letter[i] > 1)
            {
                //cout << (char)i << letter[i] << endl;

                bignum div;
                int_to_bignum(letter[i], &div);

                //print_bignum(&div);
                //cout << endl << "fac -> ";

                bignum facdiv;
                facdiv = f[letter[i]];

                //print_bignum(&facdiv);
                //cout << endl;

                bignum result;
                divide_bignum(&n, &facdiv, &result);

                //print_bignum(&result);
                //cout << endl;

                n = result;

                finalresult = result;
            }
        }

        cout << "Data set " << t << ": " ;

        print_bignum(&finalresult);

        cout << endl;


    }











    return 0;
}

void print_bignum(bignum *n)
{
    int i;

    if (n->signbit == MINUS) printf("-");
    for (i=n->lastdigit; i>=0; i--)
        printf("%c",'0'+ n->digits[i]);

}

void string_to_bignum (string s, bignum* n)
{
    n->signbit = PLUS; // TODO: currently no negative numbers

    for (int i = 0; i < MAXDIGITS; i++) n->digits[i] = (char) 0;

    n->lastdigit = -1;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        n->lastdigit++;
        n->digits[n->lastdigit] = s[i] - 48;
    }

    if (s == "0") n->lastdigit = 0;
}

void int_to_bignum(int s, bignum *n)
{
    int i;				/* counter */
    int t;				/* int to work with */

    if (s >= 0) n->signbit = PLUS;
    else n->signbit = MINUS;

    for (i=0; i<MAXDIGITS; i++) n->digits[i] = (char) 0;

    n->lastdigit = -1;

    t = abs(s);

    while (t > 0)
    {
        n->lastdigit ++;
        n->digits[ n->lastdigit ] = (t % 10);
        t = t / 10;
    }

    if (s == 0) n->lastdigit = 0;
}

void initialize_bignum(bignum *n)
{
    int_to_bignum(0,n);
}

/*	c = a +-/* b;	*/

void add_bignum(bignum *a, bignum *b, bignum *c)
{
    int carry;			/* carry digit */
    int i;				/* counter */

    initialize_bignum(c);

    if (a->signbit == b->signbit) c->signbit = a->signbit;
    else
    {
        if (a->signbit == MINUS)
        {
            a->signbit = PLUS;
            subtract_bignum(b,a,c);
            a->signbit = MINUS;
        }
        else
        {
            b->signbit = PLUS;
            subtract_bignum(a,b,c);
            b->signbit = MINUS;
        }
        return;
    }

    c->lastdigit = max(a->lastdigit,b->lastdigit)+1;
    carry = 0;

    for (i=0; i<=(c->lastdigit); i++)
    {
        c->digits[i] = (char) (carry+a->digits[i]+b->digits[i]) % 10;
        carry = (carry + a->digits[i] + b->digits[i]) / 10;
    }

    zero_justify(c);
}


void subtract_bignum(bignum *a, bignum *b, bignum *c)
{
    int borrow;			/* has anything been borrowed? */
    int v;				/* placeholder digit */
    int i;				/* counter */

    initialize_bignum(c);

    if ((a->signbit == MINUS) || (b->signbit == MINUS))
    {
        b->signbit = -1 * b->signbit;
        add_bignum(a,b,c);
        b->signbit = -1 * b->signbit;
        return;
    }

    if (compare_bignum(a,b) == PLUS)
    {
        subtract_bignum(b,a,c);
        c->signbit = MINUS;
        return;
    }

    c->lastdigit = max(a->lastdigit,b->lastdigit);
    borrow = 0;

    for (i=0; i<=(c->lastdigit); i++)
    {
        v = (a->digits[i] - borrow - b->digits[i]);
        if (a->digits[i] > 0)
            borrow = 0;
        if (v < 0)
        {
            v = v + 10;
            borrow = 1;
        }

        c->digits[i] = (char) v % 10;
    }

    zero_justify(c);
}

int compare_bignum(bignum *a, bignum *b)
{
    int i;				/* counter */

    if ((a->signbit == MINUS) && (b->signbit == PLUS)) return(PLUS);
    if ((a->signbit == PLUS) && (b->signbit == MINUS)) return(MINUS);

    if (b->lastdigit > a->lastdigit) return (PLUS * a->signbit);
    if (a->lastdigit > b->lastdigit) return (MINUS * a->signbit);

    for (i = a->lastdigit; i>=0; i--)
    {
        if (a->digits[i] > b->digits[i]) return(MINUS * a->signbit);
        if (b->digits[i] > a->digits[i]) return(PLUS * a->signbit);
    }

    return(0);
}

void zero_justify(bignum *n)
{
    while ((n->lastdigit > 0) && (n->digits[ n->lastdigit ] == 0))
        n->lastdigit --;

    if ((n->lastdigit == 0) && (n->digits[0] == 0))
        n->signbit = PLUS;	/* hack to avoid -0 */
}


void digit_shift(bignum *n, int d)		/* multiply n by 10^d */
{
    int i;				/* counter */

    if ((n->lastdigit == 0) && (n->digits[0] == 0)) return;

    for (i=n->lastdigit; i>=0; i--)
        n->digits[i+d] = n->digits[i];

    for (i=0; i<d; i++) n->digits[i] = 0;

    n->lastdigit = n->lastdigit + d;
}



void multiply_bignum(bignum *a, bignum *b, bignum *c)
{
    bignum row;			/* represent shifted row */
    bignum tmp;			/* placeholder bignum */
    int i,j;			/* counters */

    initialize_bignum(c);

    row = *a;

    for (i=0; i<=b->lastdigit; i++)
    {
        for (j=1; j<=b->digits[i]; j++)
        {
            add_bignum(c,&row,&tmp);
            *c = tmp;
        }
        digit_shift(&row,1);
    }

    c->signbit = a->signbit * b->signbit;

    zero_justify(c);
}


void divide_bignum(bignum *a, bignum *b, bignum *c)
{
    bignum row;                     /* represent shifted row */
    bignum tmp;                     /* placeholder bignum */
    int asign, bsign;		/* temporary signs */
    int i,j;                        /* counters */

    initialize_bignum(c);

    c->signbit = a->signbit * b->signbit;

    asign = a->signbit;
    bsign = b->signbit;

    a->signbit = PLUS;
    b->signbit = PLUS;

    initialize_bignum(&row);
    initialize_bignum(&tmp);

    c->lastdigit = a->lastdigit;

    for (i=a->lastdigit; i>=0; i--)
    {
        digit_shift(&row,1);
        row.digits[0] = a->digits[i];
        c->digits[i] = 0;
        while (compare_bignum(&row,b) != PLUS)
        {
            c->digits[i] ++;
            subtract_bignum(&row,b,&tmp);
            row = tmp;
        }
    }

    zero_justify(c);

    a->signbit = asign;
    b->signbit = bsign;
}
