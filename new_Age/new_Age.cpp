#include <iostream>
#include <string.h>
using namespace std;

//int max_el_in_row(int arr[], int n)
//{
//	int max = arr[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//void swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void bubble(int arr[], int size, int** point)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			swap(arr[j], arr[j + 1]);
//			int* temp = point[j];
//			point[j] = point[j + 1];
//			point[j + 1] = temp;
//		}
//	}
//}
//void print(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//}
//int main()
//{
//	int** A, * B;
//	int n, m;
//	cin >> n >> m;
//	A = new int* [n];
//	B = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		A[i] = new int[m];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		B[j] = max_el_in_row(A[j], m);
//	}
//	bubble(B, n, A);
//	print(B, n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << endl;
//		print(A[i], m);
//	}
//    for(int i=0;i<n;++i)
//    {
//	  	delete[] A[i];
//    }
//	system("pause");
//	return 0;
//}
/*այն տողերը, որոնց տարրերի գումարը պարզ թիվ է: */
//bool is_odd(int x)
//{
//	if (x <= 1)
//		return false;
//	for (int i = 2; i * i <= x; i++)
//		if (x % i == 0)
//			return false;
//	return true;
//}
//bool row_check(int arr[], int size)
//{
//	int sum = arr[0];
//	for (int i = 1; i < size; i++)
//	{
//		sum += arr[i];
//	}
//	return(is_odd(sum));
//}
//int main()
//{
//	int** A;
//	int n, m;
//	cin >> n >> m;
//	A = new int* [n];									
//														
//	for (int i = 0; i < n; i++)							
//	{													
//		A[i] = new int[m];								
//	}													
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (row_check(A[i], m))
//		{
//			cout << "The required row is: " << ++i << endl;
//		}
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		delete[] A[i];
//	}
//	return 0;
//}

/*Կառուցել և արտածել միաչափ զանգված որի i-րդ տարրը հավասար է 
մատրիցի i-րդ սյան տարրերի միջին թվաբանականին:*/
//double Sum(int arr[], int l, int v) {
//	int sum = 0;
//	for (int i = 1; i < l * v; i += v) {         			  
//		sum += arr[i];											  
//	}															  
//	return (double)sum / l;										  
//}																  
//int main()													  	
//{																  
//	const int n{ 4 }, m{ 3 };								  
//	int A[n][m];	
//	double b[m];
//	for (int i = 0; i < n; i++) {							 
//		for (int j = 0; j < m; j++) {						 
//			cin >> A[i][j];
//		}													  
//	}
//
//	for (int i = 0; i < m; i++)
//	{															 
//		b[i] = Sum(&A[0][i], n, m);	
//		cout << b[i] << "\t";
//	}
//
//	return 0;
//}

/*Տրված է ամբողջ թվերի մատրից: Կարգավորել մատրիցի տողերը դրանցում
ա) դրական տարրերի գումարների աճման կարգով,*/
//int sum_of_pos(int* arr, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > 0)
//			sum += arr[i];
//	}
//	return sum;
//}
//int main()
//{
//	int** A;
//	int n, m;
//	cin >> n >> m;
//	A = new int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		A[i] = new int[m];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//	for (int j = 0; j < n - 1; j++) {
//		for(int i = 0; i < n - j - 1; i++){
//		if (sum_of_pos(A[i], m) > sum_of_pos(A[i + 1], m)){
//			int* temp = A[i];
//			A[i] = A[i + 1];
//			A[i + 1] = temp;
//		}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << A[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		delete[] A[i];
//	}
//	return 0;
//}

/*Հեռացնել տրված իրական թվերի մատրիցի բոլոր այն տողերը, 
ա) որոնց տարրերը համընկնում են առաջին տողի տարրերի
հետ*/
//bool is_Same(int* firstLine, int* otherLine, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (otherLine[i] != firstLine[i])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//void print(int* arr, int size)
//{
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << "\t";
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int** A = new int* [n];							 
//													 
//	for (int i = 0; i < n; i++)						 
//	{												 
//		A[i] = new int[m];							 
//	}												 
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//	for (int i = 1; i < n; i++) {
//		if (is_Same(A[0], A[i], m)){
//			delete A[i];
//			for (int j = i; j < n - 1; j++) {
//				A[j] = A[j + 1];
//			}
//			i--;
//			n--;
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		print(A[j], m);
//		cout << endl;
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		delete[] A[i];
//	}
//	return 0;
//}

/*Տրված է բնական թվերի մատրից: Կարգավորել մատրիցի
տողերը դրանցում
ա) պարզ թվերի քանակների նվազման կարգով*/
//bool isOdd(int x)
//{
//	if (x == 2)
//		return true;
//	if (x <= 1 || (x % 2 == 0 && x != 2))
//		return false;
//	for (int i = 3; i < x; i += 2)
//	{
//		if (x % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int countOfOdd(int arr[], int size)
//{
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		if (isOdd(arr[i])) {
//			count++;
//		}
//	}
//	return count;
//}
//void bubble(int** matrix, int row, int column)
//{
//	int* temp;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < row - i - 1; j++) {
//			if (countOfOdd(matrix[j], column) < countOfOdd(matrix[j + 1], column)) {
//				temp = matrix[j];
//				matrix[j] = matrix[j + 1];
//				matrix[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int row, column;
//	cin >> row >> column;
//	int** matrix = new int*[row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new int[column];
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//	
//	bubble(matrix, row, column);
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cout << matrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < row; ++i)
//	{
//		delete[] matrix[i];
//	}
//	return 0;
//}

/*Հեռացնել տրված իրական թվերի մատրիցի բոլոր այն տողերը, որոնք նշանափոխ հաջորդականություն են*/
//bool isLandmark(double arr[], int size)
//{
//	int count = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (arr[i + 1] / arr[i] < 0)
//			count++;
//		else
//			return false;
//	}
//	return(count == (size - 1));
//}
//void print(double** matrix, int row, int column)
//{
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cout << matrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int row, column;
//	cin >> row >> column;
//	double** matrix = new double*[row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new double[column];
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//	
//	for (int i = 0; i < row; i++) {
//	if (isLandmark(matrix[i], column)){
//		delete matrix[i];
//		for (int j = i; j < row - 1; j++) {
//			matrix[j] = matrix[j + 1];
//		}
//		i--;
//		row--;
//	}
//	}
//	print(matrix, row, column);
//
//	for (int i = 0; i < row; ++i)
//	{
//		delete[] matrix[i];
//	}
//	return 0;
//}

/*Տրված իրական թվերի քառակուսային մատրիցի սկզբից ավելացնել մի նոր
տող՝ բաղկացած սկզբնական մատրիցի համապատասխան
տողերի նվազագույն տարրերից:*/
//int minelinrow(int arr[], int size)
//{
//	int min = arr[0];
//	for (int i = 1; i < size; i++) {
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	return min;
//}
//int* minelsinmatrix(int** matrix, int row)
//{
//	int* arr = new int[row];
//	for (int i = 0; i < row; i++) {
//		arr[i] = minelinrow(matrix[i], row);
//	}
//	return arr;
//}
//int main()
//{
//	int row;
//	cin >> row;
//	int** matrix = new int*[row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new int[row];
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < row; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	int** newmatrix = new int*[row + 1];
//	newmatrix[0] = minelsinmatrix(matrix, row);
//	for (int i = 1; i < row + 1; i++) {
//		newmatrix[i] = matrix[i - 1];
//	}
//	for (int i = 0; i < row + 1; i++) {
//		for (int j = 0; j < row; j++) {
//			cout << newmatrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < row; ++i)
//	{
//		delete[] matrix[i];
//	}
//	//for (int i = 0; i < row + 1; ++i)
//	//{
//	//	delete[] newmatrix[i];
//	//}
//	delete[] newmatrix;
//	return 0;
//}

/*Տրված իրական թվերի մատրիցի սկզբից ավելացնել մի նոր
տող՝ բաղկացած սկզբնական մատրիցի համապատասխան
սյուների նվազագույն տարրերից*/
//int minelincolumn(int* arr, int row, int column) {
//	int min = 0;
//	for (int i = 0; i < row * column; i = i + column) {         			  
//		if (min > arr[i])
//			min = arr[i];
//	}			
//	return min;
//}																  
//int main()
//{
//	int row, column;
//	cin >> row >> column;
//	int** matrix = new int* [row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new int[column];
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	int* new_line = new int[column];
//	for (int i = 0; i < column; i++) {
//		new_line[i] = minelincolumn(&matrix[0][i], row, column);
//	}
//	
//	int** newmatrix = new int* [row + 1];
//	newmatrix[0] = new_line;
//	for (int i = 1; i < row + 1; i++) {
//		newmatrix[i] = matrix[i - 1];
//	}
//	
//	for (int i = 0; i < row + 1; i++) {
//		for (int j = 0; j < column; j++) {
//			cout << newmatrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}

/*Պարզել, թե տրված բնական թվերի հաջորդականության
տարրերի գրառման մեջ որ թվանշանն է մասնակցում առավելագույն քանակով:*/
//int main() {
//    int n;
//    cout << "Nermutseq zangvatsi tarreri qanaky: \n";
//    cin >> n;
//    int* a = new int[n];
//    // nor b zangvats vorum kstananq amen tvanshani krknutyunneri qanaky
//    int b[10] = {0};
//    cout << "Nermutseq zangvatsi tarrery: \n";
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        while (a[i]) {
//            b[a[i] % 10]++;
//            a[i] /= 10;
//        }
//    }
//    // max-i mej kstananq b zangvatsi amenamets tarry
//    int max = b[0];
//    // m-i mej kstananq amenashaty krknvox tvanshany vory hamynknum b-i e amenamets tarri indexi het
//    int m = 0;
//    for (int i = 1; i < 10; i++) {
//        if (b[i] > max) {
//            max = b[i];
//            m = i;
//        }
//    }
//    cout << m << " tvanshany krknvum e amenashaty \n";
//
//    return 0;
//}

/*Տրված է բնական թվերի մատրից: Կառուցել և արտածել միաչափ զանգված, 
որը պարունակում է մատրիցի բոլոր այն տողերի կարգահամարները, որոնցում կա 2-ի աստիճան հանդիսացող
գոնե մեկ թիվ,*/
//bool isdegree2(int arr[], int length);
//int main()
//{
//	int** matrix;
//	int row, column;
//	cin >> row >> column;
//	matrix = new int* [row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new int[column];
//	}
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//	int count = 0;
//	int* arrd2 = new int[count];
//	for (int i = 0, j = 0; i < row; i++) {
//		if (isdegree2(matrix[i], column)) {
//			arrd2[j] = i;
//			j++;
//			count++;
//		}
//	}
//	for (int i = 0; i < count; i++) {
//		cout << arrd2[i] << "\t";
//	}
//	return 0;
//}
//bool isdegree2(int arr[], int length)
//{
//	for (int i = 0; i < length; i++) {
//		while (arr[i]) {
//			if (arr[i] % 2 == 0) {
//				arr[i] /= 2;
//			}
//			else
//				break;
//		}
//	}
//	for (int i = 0; i < length; i++) {
//		if (arr[i] == 1) {
//			return true;
//		}
//	}
//	return false;
//}

/*որի i-րդ տարրը հավասար է true, եթե մատրիցի i-րդ
տողի պարզ թվերը կարգավորված են նվազման կարգով,
և հավասար է false՝ հակառակ դեպքում*/
//bool isOdd(int element)
//{
//	if (element <= 1)
//		return false;
//	for (int i = 2; i * i <= element; i++)
//		if (element % i == 0)
//			return false;
//	return true;
//}
//bool checkline(int line[], int length)
//{
//	int count = 0;
//	int* oddArr = new int[count];
//	for (int i = 0, j = 0; i < length; i++) {
//		if (isOdd(line[i])) {
//			count++;
//			oddArr[j] = line[i];
//			j++;
//		}
//	}
//	if (count == 0)
//		return false;
//	for (int i = 0; i < count - 1; i++) {
//		if (oddArr[i] < oddArr[i + 1])
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int** matrix;
//	int row, column;
//	cin >> row >> column;
//	matrix = new int* [row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new int[column];
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//	bool* checkarr = new bool[row];
//	for (int i = 0; i < row; i++) {
//		checkarr[i] = checkline(matrix[i], column);
//	}
//	for (int i = 0; i < row; i++) {
//		if (checkarr[i])
//			cout << "true" << "\t";
//		else
//			cout << "false" << "\t";
//	}
//	return true;
//}

/*Հեռացնել տրված իրական թվերի մատրիցի բոլոր այն տողերը, որոնք պարունակում են մատրիցի նվազագույն տարրին
հավասար տարրեր:*/
//int minElinMatrix(int** matrix, int row, int column)
//{
//	int min = matrix[0][0];
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			if (min > matrix[i][j]) {
//				min = matrix[i][j];
//			}
//		}
//	}
//	return min;
//}
//bool haveMinEl(int line[], int length, int min)
//{
//	for (int i = 0; i < length; i++) {
//		if (line[i] == min)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int row, column;
//	cin >> row >> column;
//	int** matrix = new int* [row];
//	for (int i = 0; i < row; i++) {
//		matrix[i] = new int[column];
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//	int min = minElinMatrix(matrix, row, column);
//
//	for (int i = 0; i < row; i++) {
//		if (haveMinEl(matrix[i], column, min)) {
//			for (int j = i; j < row - 1; j++) {
//				matrix[j] = matrix[j + 1];
//			}
//			row--;
//			i--;
//		}
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			cout << matrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}

/*(1.0) Տրված սիմվոլային տողի համար կառուցել մի նոր տող, որտեղ բոլոր իրար հաջորդող նույն
սիմվոլների փոխարեն թողնված է նրանցից մեկը միայն և արտածել ստացված տողը:*/
//int main()
//{
//	char* str = new char;
//	cin >> str;
//	char* newstr = new char;
//	newstr = str;
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i] == str[i + 1]) {
//			for (int j = i; j < strlen(newstr); j++) {
//				newstr[j] = newstr[j + 1];
//			}
//		}
//	}
//	cout << newstr;
//}

//struct Movie {
//	char vernagir[64];
//	char rezhisor[64];
//	int tevoxutyun, tari;
//};
//void input(Movie& a) {
//	cin >> a.vernagir >> a.rezhisor >> a.tevoxutyun >> a.tari;
//}
//void print(Movie& a) {
//	cout << a.vernagir << " " << a.rezhisor << " " << a.tevoxutyun << " " << a.tari;
//}
//int main()
//{
//	int N;
//	cin >> N;
//	Movie* movie = new Movie[N];
//	for (int i = 0; i < N; i++) {
//		input(movie[i]);
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 1; j < N - 1; j++) {
//			if (strstr(movie[i].vernagir, "k") && movie[i].tari < 2000 && movie[i].tevoxutyun > movie[j].tevoxutyun)
//				print(movie[i]);
//		}
//	}
//
//	return 0;
//}

//double f(double n)
//{
//	double hakadarc;
//	hakadarc = 1 / n;
//	return hakadarc;
//}
//double f1(double* arr, int n)
//{
//	double sum;
//	for (int i = 0, j = -1; i < n; i++, j *= j) {
//		sum = j * (10 + f(arr[i]));
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	double* arr = new double[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cout << f(arr[i]) << " ";
//	}
//	cout << endl;
//	cout << f1(arr, n);
//	return 0;
//}

#pragma region Spiral
//int main()
//{
//    int size;
//    cin >> size;
//    int** matrix = new int* [size];
//    for (int i = 0; i < size; i++) {
//        matrix[i] = new int[size];
//    }
//    int sideLength = size;
//    int numberOfSquares = size;
//    int current = size * size;
//
//    for (int i = 0; i < numberOfSquares; i++)
//    {
//        // First row
//        for (int j = 0; j < sideLength; j++)
//        {
//            matrix[i][i + j] = current--;
//        }
//
//        // Last column
//        for (int j = 1; j < sideLength - 1; j++)
//        {
//            matrix[i + j][size - 1 - i] = current--;
//        }
//
//        // Last row
//        for (int j = sideLength - 1; j > 0; j--)
//        {
//            matrix[size - 1 - i][i + j] = current--;
//        }
//
//        // First column
//        for (int j = sideLength - 1; j > 0; j--)
//        {
//            matrix[i + j][i] = current--;
//        }
//
//        sideLength -= 2;
//    }
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < size; i++) {
//        delete[] matrix[i];
//    }
//
//    return 0;
//}
#pragma endregion



