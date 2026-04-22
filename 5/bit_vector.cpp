#include <cstdio>
#include <cstdlib>
#include <cstring>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH – 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);

unsigned int b2u(char *bv);
int b2s(char *bv);
int b2o(char *bv);
int b2t(char *bv);

void bit_addition(char *bv1, char *bv2, char *result);
unsigned int unsigned_addition(char *bv1, char *bv2);
int twos_complement_addition(char *bv1, char *bv2);
int ones_complement_addition(char *bv1, char *bv2);
int sign_magnitude_addition(char *bv1, char *bv2);

int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf(“Error: invalid number of arguments\n”);
        print_command(argv);
    }

    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf(“Error: invalid arguments\n”);
        print_command(argv);
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);
    print_bit_vector(bv1);

    printf("B2U: %u\n", b2u(bv1));
    printf("B2S: %d\n", b2s(bv1));
    printf("B2O: %d\n", b2o(bv1));
    printf("B2T: %d\n", b2t(bv1));

    print_bit_vector(bv2);

    printf("B2U: %u\n", b2u(bv2));
    printf("B2S: %d\n", b2s(bv2));
    printf("B2O: %d\n", b2o(bv2));
    printf("B2T: %d\n", b2t(bv2));

    printf("Addition >>>\n");
    printf(" Unsigned addition: %u\n", unsigned_addition(bv1, bv2);
    printf(" Sign magnitude addition: %d\n", sign_magnitude_addition(bv1, bv2));
    printf(" One’s complement addition: %d\n", ones_complement_addition(bv1, bv2);
    printf(" Two’s complement addition: %d\n", twos_complement_addition(bv1, bv2);

    return 0;
}

void print_command(char *argv[])
{
    printf(“Command: %s <first bit vector> <second bit vector>\n”, argv[0]);
    printf(“Example: %s 0110 1000\n”, argv[0]);
    exit(1);
}

int check_validity(char *input)
{
    if(input)
}

void init_bit_vector(char *input, char *bv)
{
    // TODO: implement the function
}

void print_bit_vector(char *bv)
{
    // TODO: implement the function
}

unsigned int b2u(char *bv)
{
    unsigned int ret;
    // TODO: implement this function
    return ret
}

int b2s(char *bv)
{
    int ret;
    // TODO: implement this function
    return ret;
}

int b2o(char *bv)
{
    int ret;
    // TODO: implement this function
    return ret;
}

int b2t(char *bv)
{
    int ret;
    // TODO: implement this function
    return ret;
}

void bit_addition(char *bv1, char *bv2, char *result)
{
    // TODO: implement this function
}

unsigned int unsigned_addition(char *bv1, char *bv2)
{
    char result[BIT_VECTOR_LENGTH];
    bit_addition(bv1, bv2, result);
    return b2u(result);
}

int twos_complement_addition(char *bv1, char *bv2)
{
    char result[BIT_VECTOR_LENGTH];
    bit_addition(bv1, bv2, result);
    return b2t(result);
}

// Please implement ones_complement_addition() and sign_magnitude_addition() similarly