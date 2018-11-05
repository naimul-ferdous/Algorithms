package com.naimul.algorithms;
import java.util.Scanner;
import java.util.regex.Pattern;

public class ReverseWords {
	
	static String reverseWords(String str) {
		Pattern pattern= Pattern.compile("\\s");
		String[] temp= pattern.split(str);
		String result= "";
		
		for(int i=0;i<temp.length;i++) {
			if(i==temp.length-1) 
				result= temp[i]+result;
			else 
				result= " "+temp[i]+result;
		}
		
		return result;
	}

	public static void main(String[] args) {
//		Scanner scanner= new Scanner(System.in);
//		System.out.println("Enter Sentence: ");
//		String input= scanner.next();
//		String output= reverseWords(input);
		String string= "Bangladesh and Dhaka";
		String output= reverseWords(string);
		System.out.println(output);

	}

}
