/*
 * sigseg3.c
 * 
 * Copyright 2019 popic <popic@RTRKN524>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 
 #include <stdio.h>
 #include <limits.h>
 #include <stdlib.h>
 
 int main(int argc, char* argv[]){     
	printf("%ld \n", INT_MAX);     
	int n = INT_MAX;     
	int A[n];     
	int i = 0;     
	while (i<n)       
	A[i] = rand()%10;        
	return EXIT_SUCCESS; 
}
// svrha programa je da alocira niz cjelobrojnih
// vrijednosti i inicijalizuje ih slucajnim brojem.
// Ali, avaj, segmentation fault se pojavljuje.