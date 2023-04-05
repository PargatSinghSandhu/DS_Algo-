



int largest = a[0];
int slargest = -1;

for (int i=0; i<n;i++)
{
    if(a[i]>largest)
    {
        slargest = a[i];
        largest = slargest;
    }
}
