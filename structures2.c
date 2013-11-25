/*structures cont'd*/

struct Date
	{
		int month;
		int day;
		int year;
	};
struct Employee
	{
		char name[50];
		int id;
		Date hire;
	};
	
int main()
	{
		struct Date birth;
		struct Date hire;
		struct Date finalExam;
		struct Employee cashier;
		
		cashier.id=5234;
		cashier.hire.month=12;
	return 0;
	}
		