#pragma once


// ������� ��� ������ 2D �������;
void Show_Matrix(const vector<vector<double>>& a);


// ������� ��� ������ 1D �������
void Show_Matrix(const vector<double>& a);


// ������� ��������� ����������� �������: new_LSize - ����� ���-�� �����
void Resize_Matrix(vector<vector<double>>& a, const unsigned new_LSize);


// ������� ��������� ����������� �������: new_LSize - ����� ���-�� �����, new_RSize - ����� ���-�� ��������
void Resize_Matrix(vector<vector<double>>& a, const unsigned new_LSize, const unsigned new_RSize);


// ������� ��������� ����������� �������: new_Size - ����� ���-�� �������
void Resize_Matrix(vector<double>& a, const unsigned new_Size);


// ������� ��������� ��������� �������� �������
void Random_Array(vector<vector<double>>& a);