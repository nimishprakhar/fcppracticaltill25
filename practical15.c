float factorial(int n) 
{ if (n == 0 || n == 1) 
{   return 1;
    } 
    else 
    {
        return n * factorial(n- 1);
    }
}
void main() 
{
    int n, r;
    float ncr;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
if (n < r || n < 0 || r < 0) 
{   printf("ncr value is 0");
}
 ncr=factorial(n) / (factorial(r) * factorial(n - r));
    printf("%dC%d = %f\n",n,r,ncr);
}