typedef struct bunk_class
{
	int sem;
	int no_of_students;
 	char reason[20];
	char punishment[200];
}B_C;


typedef struct person_details
{
	char name[30];
	char DOB[20];
	char sex[8];
	int age;
	float height;
	float weight;
	char unique_id[30];
	char permanent_address[200];
	char contact_id[30];
}P_D;


typedef struct student
{
	char name[20];
	int roll;
	float exam1_marks;
	float exam2_marks;
	float exam3_marks;
	float avg_marks;
}STD;


typedef struct iPod
{
	char type[20];
	float cost;
	float memory;
	int id;
}I_P;


typedef struct browser
{
	char name[20];
	char owner[20];
  	float version;
  	char add_ons[3][20];
}BRWSER;
int main()
{
    return 0;
}
