// 1. दो Numbers का Sum निकालो
// Solution
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);

    return 0;
}


// 2. Rectangle का Area निकालो
// Solution
#include <stdio.h>

int main() {
    float length, width;

    scanf("%f %f", &length, &width);

    printf("Area = %.2f", length * width);

    return 0;
}


// 3. Number Even है या Odd
// Solution
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}


// 4. सबसे बड़ा Number
// Solution
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d", a);
    else
        printf("%d", b);

    return 0;
}

// 5. Positive, Negative या Zero
// Solution
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}

// 6. 1 से 10 तक Print करो
// Solution
#include <stdio.h>

int main() {

    for(int i=1;i<=10;i++)
        printf("%d\n",i);

    return 0;
}

// 7. 10 से 1 तक Print करो
// Solution
#include <stdio.h>

int main() {

    for(int i=10;i>=1;i--)
        printf("%d\n",i);

    return 0;
}

// 8. 1 से N तक Sum
// Solution
#include <stdio.h>

int main() {

    int n,sum=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        sum+=i;

    printf("%d",sum);

    return 0;
}

// 9. Table Print करो
// Solution
#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);

    return 0;
}

// 10. Factorial
// Solution
#include <stdio.h>

int main() {

    int n;
    long long fact=1;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        fact*=i;

    printf("%lld",fact);

    return 0;
}