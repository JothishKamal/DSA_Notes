#include<bits/stdc++.h>
using namespace std;

// // Matrix
// class Matrix{
//   int rows,columns;
//   int **matrix;
//   public:
//     Matrix(){}

//     Matrix(int rows, int columns){
//       this->rows=rows;
//       this->columns=columns;

//       matrix=(int**)malloc(sizeof(int*)*rows);
//       for(int i=0; i<rows; i++){
//         matrix[i]=(int*)malloc(sizeof(int)*columns);
//       }
//     }

//     Matrix(Matrix &obj){
//       this->rows=obj.rows;
//       this->columns=obj.columns;
      
//       this->matrix=(int**)malloc(sizeof(int*)*this->rows);
//       for(int i=0; i<this->rows; i++) this->matrix[i]=(int*)malloc(sizeof(int)*this->columns);

//       for(int i=0; i<rows; i++){
//         for(int j=0; j<columns; j++){
//           this->matrix[i][j]=obj.matrix[i][j];
//         }
//       }
//     }

//     void getMatrix(){
//       cin >> rows >> columns;
      
//       matrix=(int**)malloc(sizeof(int*)*rows);
//       for(int i=0; i<rows; i++){
//         matrix[i]=(int*)malloc(sizeof(int)*columns);
//       }

//       for(int i=0; i<rows; i++){
//         for(int j=0; j<columns; j++){
//           cin >> matrix[i][j];
//         }
//       }
//     }

//     void putMatrix(){
//       for(int i=0; i<rows; i++){
//         for(int j=0; j<columns; j++){
//           printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//       }
//     }

//     Matrix operator+(const Matrix &m){
//       if(rows == m.rows && columns == m.columns){
//         Matrix res(rows,columns);

//         for(int i=0; i<rows; i++){
//           for(int j=0; j<columns; j++){
//             res.matrix[i][j]=matrix[i][j] + m.matrix[i][j];
//           }
//         }
        
//         return res;
//       } else {
//         throw std::invalid_argument("Matrix dimensions don't match");
//       }
//     }

//     Matrix operator-(const Matrix &m){
//       if(rows == m.rows && columns == m.columns){
//         Matrix res(rows,columns);

//         for(int i=0; i<rows; i++){
//           for(int j=0; j<columns; j++){
//             res.matrix[i][j]=matrix[i][j] - m.matrix[i][j];
//           }
//         }
        
//         return res;
//       } else {
//         throw std::invalid_argument("Matrix dimensions don't match");
//       }
//     }

//     Matrix operator*(const Matrix &m){
//       if(columns == m.rows){
//         Matrix res(rows,m.columns);
        
//         for(int i=0; i<rows; i++){
//           for(int j=0; j<m.columns; j++){
//             int tempSum=0;
//             for(int k=0; k<m.rows; k++){
//               tempSum+=matrix[i][k]*m.matrix[k][j];
//             }
//             res.matrix[i][j]=tempSum;
//           }
//         }

//         return res;
//       } else {
//         throw std::invalid_argument("Matrix dimensions don't match");
//       }
//     }

//     ~Matrix(){
//       for(int i=0; i<rows; i++) free(matrix[i]);
//       free(matrix);
//     }
// };

// int main(void){
//   Matrix x,y;
//   x.getMatrix();
//   y.getMatrix();
  
//   Matrix z = x+y;
//   Matrix a = x-y;
//   Matrix b = x*y;
  
//   z.putMatrix();
//   a.putMatrix();
//   b.putMatrix();
// }


// // String
// #include<string.h>
// class String{
//   char *s;
//   int len;
//   public:
//     String(){}

//     void getString(){
//       s=(char*)malloc(20*sizeof(char));
//       cin >> s;
//       len=strlen(s);
//     }

//     void putString(){
//       cout << s << endl;
//     }

//     int operator==(String &obj){
//       int flag=0;
//       for(int i=0; i<len; i++){
//         if(s[i]!=obj.s[i]) flag=1;
//       }

//       if(!flag) return 1;
//       else return 0;
//     }

//     inline int length(){
//       return len;
//     }
// };

// int main(void){
//   String x,y;
  
//   x.getString();
//   y.getString();

//   if(x==y) cout << "Yes";
//   else cout << "No";
// }

