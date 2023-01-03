import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        int iTemp = 0;
        for(int i = 1; i<=iRow; i++)
        {
            for(int j = 1; j <=iCol; j++)
            {
                if(j%2 == 0)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
               
            }
            System.out.println();
        }
    }
}

class Program37_4
{
    public static void main(String[] a)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        int iFirst = sobj.nextInt();

        System.out.println("Enter the number of columns");
        int iLast = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iFirst, iLast);
    }
}