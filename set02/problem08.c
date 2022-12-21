include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main()
{
	// input number of triangles
	int n = input_n();

	// declare triangle array
	Triangle t[n];

	// input n triangles with base and altitude
	input_n_triangles(n, t);

	// find area of each triangle
	find_n_areas(n, t);

	// find smallest triangle
	Triangle smallest = find_smallest_triangle(n, t);

	// output result
	output(n, t, smallest);

	return 0;
}

int input_n()
{
	int n;
	printf("Enter the number of triangles: ");
	scanf("%d", &n);
	return n;
}
Triangle input_triangle()
{
	Triangle t;
	printf("Enter base and altitude: ");
	scanf("%f %f", &t.base, &t.altitude);
	return t;
}
void input_n_triangles(int n, Triangle t[n])
{
	for (int i = 0; i < n; i++) {
		t[i] = input_triangle();
	}
}
void find_area(Triangle *t)
{
	t->area = 0.5 * t->base * t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
	for (int i = 0; i < n; i++) {
		find_area(&t[i]);
	}
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
	Triangle smallest = t[0];
	for (int i = 1; i < n; i++) {
		if (t[i].area < smallest.area) {
			smallest = t[i];
		}
	}
	return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
	printf("Input data: \n");
	for (int i = 0; i < n; i++) {
		printf("Base = %.2f, Altitude = %.2f, Area = %.2f\n", t[i].base, t[i].altitude, t[i].area);
	}
	printf("\nThe smallest triangle is: \n");
	printf("Base = %.2f, Altitude = %.2f, Area = %.2f\n", smallest.base, smallest.altitude, smallest.area);
}