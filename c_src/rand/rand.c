
static int seed;

void my_srand(int s)		//function definition
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 110351545 +12345;
	
	return((unsigned)(seed/65536) % 32768);
}
