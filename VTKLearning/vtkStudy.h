#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vtkStudy.h"

#include <vtkSphereSource.h>//��ͷ�ļ������������������弸�����ݵ��ࡣ
#include <vtkPolyDataMapper.h>//��ͷ�ļ����������ڽ�vtkPolyData����ӳ��Ϊ���ӻ�������ࡣ
#include "vtkActor.h"//��ͷ�ļ������˱�ʾ���ӻ�������࣬���Խ�vtkPolyDataMapper��װΪһ�����ӻ�����
#include <vtkProperty.h>//��ͷ�ļ��������������ÿ��ӻ��������ԣ�������ɫ��͸���ȵȣ����ࡣ
#include "vtkRenderer.h"//��ͷ�ļ������˹������Ⱦ���ӻ�������࣬���Խ����vtkActor��ӵ�vtkRenderer�н�����Ⱦ��
#include <vtkGenericOpenGLRenderWindow.h>//��ͷ�ļ����������ض�ƽ̨�޹ص�OpenGL��Ⱦ�����࣬�����ڲ�ͬ��ͼ�ν��棨��Qt������ʾ��Ⱦ�����


class vtkStudy : public QMainWindow
{
    Q_OBJECT

        std::vector<vtkSmartPointer<vtkSphereSource>> sphereSources;    //���ڱ���������Դ����

public:
    vtkStudy(QWidget* parent = nullptr);
    ~vtkStudy();

    void DrawSphere();//��������

private:
    Ui::vtkStudyClass ui;
};
