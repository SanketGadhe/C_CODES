/* Write a C program to find the eligibility of admission for 
a professional course based on the following criteria: Go to 
the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in
 Phy >=55 and Marks in Chem>=50 and
  Total in all three subject >=190 or Total in Maths and 
  Physics >=140 */
  #include<stdio.h>
  int main()
  {
      int phy,chm,mat,total;
      printf("Enter The MArks You Scored In Physics=");
      scanf("%d",&phy);
      printf("Enter The MArks You Scored In Chemistry=");
      scanf("%d",&chm);
      printf("Enter The MArks You Scored In Maths=");
      scanf("%d",&mat);
      total=phy+chm+mat;
      if(mat>=65&&phy>=55&&chm>=50){
          
      
      if(total>=190||(phy+mat)>=140){
         
   
  printf("You are eligible for the Admission Process");
      }
      else{
           printf("You are Not eligible for the Admission Process");
      }
  }
      else{
          printf("You are Not eligible for the Admission Process");
      }
      return 0;
  }