class Vector3 {
	private:
		float x, y, z;

	public:
		Vector3();
		Vector3(float x, float y, float z);
		Vector3 operator +(Vector3 vector3);
		Vector3 operator -(Vector3 vector3);
		float operator *(Vector3 vector3);
		float getLength();
		float getCos(Vector3 vector3);
		void print();
};
