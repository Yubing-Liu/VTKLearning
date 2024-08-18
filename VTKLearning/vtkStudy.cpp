#include "vtkStudy.h"

vtkStudy::vtkStudy(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//���Ƴ����ļ�����
	DrawSphere();//��������

}

vtkStudy::~vtkStudy()
{}

void vtkStudy::DrawSphere()
{
	// ����һ������Դ
	vtkSmartPointer<vtkSphereSource> sphereSource =
		vtkSmartPointer<vtkSphereSource>::New();
	sphereSource->SetCenter(0.0, 0.0, 0.0);  // ����������������
	sphereSource->SetRadius(2);  // ��������뾶
	sphereSource->SetPhiResolution(100);  // ���������γ�߷ֱ���
	sphereSource->SetThetaResolution(100);  // ��������ľ��߷ֱ���
	sphereSource->Update();  // ������������
	sphereSources.push_back(sphereSource);
}



