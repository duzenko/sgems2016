/********************************************************************************
** Form generated from reading UI file 'csv_masked_import.ui'
**
** Created: Thu 23. Jun 17:49:41 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSV_MASKED_IMPORT_H
#define UI_CSV_MASKED_IMPORT_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CsvMaskedImport
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel4_4;
    QLineEdit *name_;
    QCheckBox *is_xyz_locations_;
    QGroupBox *xyz_column;
    QGridLayout *gridLayout_3;
    QLabel *TextLabel4;
    QComboBox *X_col_name_;
    QLabel *TextLabel4_2;
    QComboBox *Y_col_name_;
    QLabel *TextLabel4_3;
    QComboBox *Z_col_name_;
    QGroupBox *nxyz_groupBox;
    QGridLayout *gridLayout_2;
    QLabel *TextLabel1;
    QFrame *Line1_2_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *Spacer9;
    QGridLayout *_4;
    QLabel *TextLabel4_6;
    QSpinBox *ny_;
    QSpinBox *nz_;
    QLabel *TextLabel4_7;
    QSpinBox *nx_;
    QLabel *TextLabel4_8;
    QSpacerItem *Spacer8;
    QSpacerItem *Spacer14_2;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel1_2;
    QFrame *Line1_2;
    QLabel *TextLabel2_2;
    QGroupBox *GroupBox1_2;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *Spacer9_2;
    QGridLayout *gridLayout;
    QLineEdit *x_size_;
    QLineEdit *y_size_;
    QLineEdit *z_size_;
    QLabel *TextLabel4_5;
    QLabel *TextLabel4_2_2;
    QLabel *TextLabel4_3_2;
    QSpacerItem *Spacer8_2;
    QGroupBox *origin_box;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1_2_2;
    QHBoxLayout *hboxLayout3;
    QFrame *Line1_2_2;
    QLabel *TextLabel2;
    QGroupBox *GroupBox1_2_2;
    QGridLayout *gridLayout2;
    QLabel *TextLabel4_5_2;
    QLineEdit *xmn_;
    QSpacerItem *Spacer10_2;
    QLabel *TextLabel4_5_2_2;
    QLineEdit *ymn_;
    QLabel *TextLabel4_5_2_2_2;
    QLineEdit *zmn_;
    QSpacerItem *Spacer10_2_2;
    QGroupBox *mask_def_box;
    QVBoxLayout *verticalLayout;
    QLabel *TextLabel1_2_2_2_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *TextLabel4_9;
    QComboBox *mask_col_name_;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hboxLayout4;
    QLabel *TextLabel1_2_2_2_2;
    QFrame *Line1_2_2_2_2;
    QGroupBox *groupBox5;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacer24;
    QCheckBox *use_no_data_value_;
    QSpacerItem *spacer25;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacer23;
    QGroupBox *NoDataValueBox;
    QHBoxLayout *hboxLayout7;
    QLabel *textLabel1;
    QLineEdit *no_data_value_edit_;
    QSpacerItem *spacer22;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CsvMaskedImport)
    {
        if (CsvMaskedImport->objectName().isEmpty())
            CsvMaskedImport->setObjectName(QString::fromUtf8("CsvMaskedImport"));
        CsvMaskedImport->resize(305, 724);
        verticalLayout_2 = new QVBoxLayout(CsvMaskedImport);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TextLabel4_4 = new QLabel(CsvMaskedImport);
        TextLabel4_4->setObjectName(QString::fromUtf8("TextLabel4_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel4_4->sizePolicy().hasHeightForWidth());
        TextLabel4_4->setSizePolicy(sizePolicy);
        TextLabel4_4->setWordWrap(false);

        hboxLayout->addWidget(TextLabel4_4);

        name_ = new QLineEdit(CsvMaskedImport);
        name_->setObjectName(QString::fromUtf8("name_"));

        hboxLayout->addWidget(name_);


        verticalLayout_2->addLayout(hboxLayout);

        is_xyz_locations_ = new QCheckBox(CsvMaskedImport);
        is_xyz_locations_->setObjectName(QString::fromUtf8("is_xyz_locations_"));
        is_xyz_locations_->setChecked(true);

        verticalLayout_2->addWidget(is_xyz_locations_);

        xyz_column = new QGroupBox(CsvMaskedImport);
        xyz_column->setObjectName(QString::fromUtf8("xyz_column"));
        xyz_column->setEnabled(true);
        gridLayout_3 = new QGridLayout(xyz_column);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        TextLabel4 = new QLabel(xyz_column);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        sizePolicy.setHeightForWidth(TextLabel4->sizePolicy().hasHeightForWidth());
        TextLabel4->setSizePolicy(sizePolicy);
        TextLabel4->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel4, 0, 0, 1, 1);

        X_col_name_ = new QComboBox(xyz_column);
        X_col_name_->setObjectName(QString::fromUtf8("X_col_name_"));

        gridLayout_3->addWidget(X_col_name_, 0, 1, 1, 1);

        TextLabel4_2 = new QLabel(xyz_column);
        TextLabel4_2->setObjectName(QString::fromUtf8("TextLabel4_2"));
        sizePolicy.setHeightForWidth(TextLabel4_2->sizePolicy().hasHeightForWidth());
        TextLabel4_2->setSizePolicy(sizePolicy);
        TextLabel4_2->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel4_2, 1, 0, 1, 1);

        Y_col_name_ = new QComboBox(xyz_column);
        Y_col_name_->setObjectName(QString::fromUtf8("Y_col_name_"));

        gridLayout_3->addWidget(Y_col_name_, 1, 1, 1, 1);

        TextLabel4_3 = new QLabel(xyz_column);
        TextLabel4_3->setObjectName(QString::fromUtf8("TextLabel4_3"));
        sizePolicy.setHeightForWidth(TextLabel4_3->sizePolicy().hasHeightForWidth());
        TextLabel4_3->setSizePolicy(sizePolicy);
        TextLabel4_3->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel4_3, 2, 0, 1, 1);

        Z_col_name_ = new QComboBox(xyz_column);
        Z_col_name_->setObjectName(QString::fromUtf8("Z_col_name_"));

        gridLayout_3->addWidget(Z_col_name_, 2, 1, 1, 1);


        verticalLayout_2->addWidget(xyz_column);

        nxyz_groupBox = new QGroupBox(CsvMaskedImport);
        nxyz_groupBox->setObjectName(QString::fromUtf8("nxyz_groupBox"));
        nxyz_groupBox->setEnabled(false);
        nxyz_groupBox->setMaximumSize(QSize(32767, 120));
        gridLayout_2 = new QGridLayout(nxyz_groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        TextLabel1 = new QLabel(nxyz_groupBox);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
        TextLabel1->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        TextLabel1->setFont(font);
        TextLabel1->setWordWrap(false);

        gridLayout_2->addWidget(TextLabel1, 0, 0, 1, 1);

        Line1_2_3 = new QFrame(nxyz_groupBox);
        Line1_2_3->setObjectName(QString::fromUtf8("Line1_2_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Line1_2_3->sizePolicy().hasHeightForWidth());
        Line1_2_3->setSizePolicy(sizePolicy2);
        Line1_2_3->setFrameShape(QFrame::HLine);
        Line1_2_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(Line1_2_3, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Spacer9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(Spacer9);

        _4 = new QGridLayout();
        _4->setSpacing(6);
        _4->setContentsMargins(0, 0, 0, 0);
        _4->setObjectName(QString::fromUtf8("_4"));
        TextLabel4_6 = new QLabel(nxyz_groupBox);
        TextLabel4_6->setObjectName(QString::fromUtf8("TextLabel4_6"));
        sizePolicy.setHeightForWidth(TextLabel4_6->sizePolicy().hasHeightForWidth());
        TextLabel4_6->setSizePolicy(sizePolicy);
        TextLabel4_6->setWordWrap(false);

        _4->addWidget(TextLabel4_6, 0, 0, 1, 1);

        ny_ = new QSpinBox(nxyz_groupBox);
        ny_->setObjectName(QString::fromUtf8("ny_"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ny_->sizePolicy().hasHeightForWidth());
        ny_->setSizePolicy(sizePolicy3);
        ny_->setMaximumSize(QSize(80, 32767));
        ny_->setMinimum(1);
        ny_->setMaximum(1000000000);

        _4->addWidget(ny_, 1, 1, 1, 1);

        nz_ = new QSpinBox(nxyz_groupBox);
        nz_->setObjectName(QString::fromUtf8("nz_"));
        sizePolicy3.setHeightForWidth(nz_->sizePolicy().hasHeightForWidth());
        nz_->setSizePolicy(sizePolicy3);
        nz_->setMaximumSize(QSize(80, 32767));
        nz_->setMinimum(1);
        nz_->setMaximum(1000000000);

        _4->addWidget(nz_, 2, 1, 1, 1);

        TextLabel4_7 = new QLabel(nxyz_groupBox);
        TextLabel4_7->setObjectName(QString::fromUtf8("TextLabel4_7"));
        sizePolicy.setHeightForWidth(TextLabel4_7->sizePolicy().hasHeightForWidth());
        TextLabel4_7->setSizePolicy(sizePolicy);
        TextLabel4_7->setWordWrap(false);

        _4->addWidget(TextLabel4_7, 1, 0, 1, 1);

        nx_ = new QSpinBox(nxyz_groupBox);
        nx_->setObjectName(QString::fromUtf8("nx_"));
        sizePolicy3.setHeightForWidth(nx_->sizePolicy().hasHeightForWidth());
        nx_->setSizePolicy(sizePolicy3);
        nx_->setMaximumSize(QSize(80, 32767));
        nx_->setMinimum(1);
        nx_->setMaximum(100000000);

        _4->addWidget(nx_, 0, 1, 1, 1);

        TextLabel4_8 = new QLabel(nxyz_groupBox);
        TextLabel4_8->setObjectName(QString::fromUtf8("TextLabel4_8"));
        sizePolicy.setHeightForWidth(TextLabel4_8->sizePolicy().hasHeightForWidth());
        TextLabel4_8->setSizePolicy(sizePolicy);
        TextLabel4_8->setWordWrap(false);

        _4->addWidget(TextLabel4_8, 2, 0, 1, 1);


        horizontalLayout->addLayout(_4);

        Spacer8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(Spacer8);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);


        verticalLayout_2->addWidget(nxyz_groupBox);

        Spacer14_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(Spacer14_2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        TextLabel1_2 = new QLabel(CsvMaskedImport);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        sizePolicy1.setHeightForWidth(TextLabel1_2->sizePolicy().hasHeightForWidth());
        TextLabel1_2->setSizePolicy(sizePolicy1);
        TextLabel1_2->setFont(font);
        TextLabel1_2->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel1_2);

        Line1_2 = new QFrame(CsvMaskedImport);
        Line1_2->setObjectName(QString::fromUtf8("Line1_2"));
        sizePolicy2.setHeightForWidth(Line1_2->sizePolicy().hasHeightForWidth());
        Line1_2->setSizePolicy(sizePolicy2);
        Line1_2->setFrameShape(QFrame::HLine);
        Line1_2->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(Line1_2);


        verticalLayout_2->addLayout(hboxLayout1);

        TextLabel2_2 = new QLabel(CsvMaskedImport);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        TextLabel2_2->setWordWrap(false);

        verticalLayout_2->addWidget(TextLabel2_2);

        GroupBox1_2 = new QGroupBox(CsvMaskedImport);
        GroupBox1_2->setObjectName(QString::fromUtf8("GroupBox1_2"));
        GroupBox1_2->setMaximumSize(QSize(32767, 120));
        hboxLayout2 = new QHBoxLayout(GroupBox1_2);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        Spacer9_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer9_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        x_size_ = new QLineEdit(GroupBox1_2);
        x_size_->setObjectName(QString::fromUtf8("x_size_"));
        x_size_->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(x_size_, 0, 1, 1, 1);

        y_size_ = new QLineEdit(GroupBox1_2);
        y_size_->setObjectName(QString::fromUtf8("y_size_"));
        y_size_->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(y_size_, 1, 1, 1, 1);

        z_size_ = new QLineEdit(GroupBox1_2);
        z_size_->setObjectName(QString::fromUtf8("z_size_"));
        z_size_->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(z_size_, 2, 1, 1, 1);

        TextLabel4_5 = new QLabel(GroupBox1_2);
        TextLabel4_5->setObjectName(QString::fromUtf8("TextLabel4_5"));
        sizePolicy.setHeightForWidth(TextLabel4_5->sizePolicy().hasHeightForWidth());
        TextLabel4_5->setSizePolicy(sizePolicy);
        TextLabel4_5->setWordWrap(false);

        gridLayout->addWidget(TextLabel4_5, 0, 0, 1, 1);

        TextLabel4_2_2 = new QLabel(GroupBox1_2);
        TextLabel4_2_2->setObjectName(QString::fromUtf8("TextLabel4_2_2"));
        sizePolicy.setHeightForWidth(TextLabel4_2_2->sizePolicy().hasHeightForWidth());
        TextLabel4_2_2->setSizePolicy(sizePolicy);
        TextLabel4_2_2->setWordWrap(false);

        gridLayout->addWidget(TextLabel4_2_2, 1, 0, 1, 1);

        TextLabel4_3_2 = new QLabel(GroupBox1_2);
        TextLabel4_3_2->setObjectName(QString::fromUtf8("TextLabel4_3_2"));
        sizePolicy.setHeightForWidth(TextLabel4_3_2->sizePolicy().hasHeightForWidth());
        TextLabel4_3_2->setSizePolicy(sizePolicy);
        TextLabel4_3_2->setWordWrap(false);

        gridLayout->addWidget(TextLabel4_3_2, 2, 0, 1, 1);


        hboxLayout2->addLayout(gridLayout);

        Spacer8_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer8_2);


        verticalLayout_2->addWidget(GroupBox1_2);

        origin_box = new QGroupBox(CsvMaskedImport);
        origin_box->setObjectName(QString::fromUtf8("origin_box"));
        origin_box->setEnabled(false);
        QFont font1;
        font1.setStrikeOut(false);
        font1.setKerning(true);
        origin_box->setFont(font1);
        gridLayout1 = new QGridLayout(origin_box);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TextLabel1_2_2 = new QLabel(origin_box);
        TextLabel1_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2"));
        sizePolicy1.setHeightForWidth(TextLabel1_2_2->sizePolicy().hasHeightForWidth());
        TextLabel1_2_2->setSizePolicy(sizePolicy1);
        TextLabel1_2_2->setFont(font);
        TextLabel1_2_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_2_2, 0, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        Line1_2_2 = new QFrame(origin_box);
        Line1_2_2->setObjectName(QString::fromUtf8("Line1_2_2"));
        sizePolicy2.setHeightForWidth(Line1_2_2->sizePolicy().hasHeightForWidth());
        Line1_2_2->setSizePolicy(sizePolicy2);
        Line1_2_2->setFrameShape(QFrame::HLine);
        Line1_2_2->setFrameShadow(QFrame::Sunken);

        hboxLayout3->addWidget(Line1_2_2);


        gridLayout1->addLayout(hboxLayout3, 0, 1, 1, 1);

        TextLabel2 = new QLabel(origin_box);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel2, 1, 0, 1, 2);

        GroupBox1_2_2 = new QGroupBox(origin_box);
        GroupBox1_2_2->setObjectName(QString::fromUtf8("GroupBox1_2_2"));
        GroupBox1_2_2->setMaximumSize(QSize(32767, 120));
        gridLayout2 = new QGridLayout(GroupBox1_2_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TextLabel4_5_2 = new QLabel(GroupBox1_2_2);
        TextLabel4_5_2->setObjectName(QString::fromUtf8("TextLabel4_5_2"));
        sizePolicy.setHeightForWidth(TextLabel4_5_2->sizePolicy().hasHeightForWidth());
        TextLabel4_5_2->setSizePolicy(sizePolicy);
        TextLabel4_5_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel4_5_2, 0, 0, 1, 1);

        xmn_ = new QLineEdit(GroupBox1_2_2);
        xmn_->setObjectName(QString::fromUtf8("xmn_"));
        xmn_->setAlignment(Qt::AlignRight);

        gridLayout2->addWidget(xmn_, 0, 1, 1, 1);

        Spacer10_2 = new QSpacerItem(16, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(Spacer10_2, 0, 2, 1, 1);

        TextLabel4_5_2_2 = new QLabel(GroupBox1_2_2);
        TextLabel4_5_2_2->setObjectName(QString::fromUtf8("TextLabel4_5_2_2"));
        sizePolicy.setHeightForWidth(TextLabel4_5_2_2->sizePolicy().hasHeightForWidth());
        TextLabel4_5_2_2->setSizePolicy(sizePolicy);
        TextLabel4_5_2_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel4_5_2_2, 0, 3, 1, 1);

        ymn_ = new QLineEdit(GroupBox1_2_2);
        ymn_->setObjectName(QString::fromUtf8("ymn_"));
        ymn_->setAlignment(Qt::AlignRight);

        gridLayout2->addWidget(ymn_, 0, 4, 1, 1);

        TextLabel4_5_2_2_2 = new QLabel(GroupBox1_2_2);
        TextLabel4_5_2_2_2->setObjectName(QString::fromUtf8("TextLabel4_5_2_2_2"));
        sizePolicy.setHeightForWidth(TextLabel4_5_2_2_2->sizePolicy().hasHeightForWidth());
        TextLabel4_5_2_2_2->setSizePolicy(sizePolicy);
        TextLabel4_5_2_2_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel4_5_2_2_2, 0, 5, 1, 1);

        zmn_ = new QLineEdit(GroupBox1_2_2);
        zmn_->setObjectName(QString::fromUtf8("zmn_"));
        zmn_->setAlignment(Qt::AlignRight);

        gridLayout2->addWidget(zmn_, 0, 6, 1, 1);

        Spacer10_2_2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(Spacer10_2_2, 0, 7, 1, 1);


        gridLayout1->addWidget(GroupBox1_2_2, 2, 0, 1, 2);


        verticalLayout_2->addWidget(origin_box);

        mask_def_box = new QGroupBox(CsvMaskedImport);
        mask_def_box->setObjectName(QString::fromUtf8("mask_def_box"));
        mask_def_box->setEnabled(false);
        verticalLayout = new QVBoxLayout(mask_def_box);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TextLabel1_2_2_2_3 = new QLabel(mask_def_box);
        TextLabel1_2_2_2_3->setObjectName(QString::fromUtf8("TextLabel1_2_2_2_3"));
        sizePolicy1.setHeightForWidth(TextLabel1_2_2_2_3->sizePolicy().hasHeightForWidth());
        TextLabel1_2_2_2_3->setSizePolicy(sizePolicy1);
        TextLabel1_2_2_2_3->setFont(font);
        TextLabel1_2_2_2_3->setWordWrap(false);

        verticalLayout->addWidget(TextLabel1_2_2_2_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        TextLabel4_9 = new QLabel(mask_def_box);
        TextLabel4_9->setObjectName(QString::fromUtf8("TextLabel4_9"));
        sizePolicy.setHeightForWidth(TextLabel4_9->sizePolicy().hasHeightForWidth());
        TextLabel4_9->setSizePolicy(sizePolicy);
        TextLabel4_9->setWordWrap(false);

        horizontalLayout_2->addWidget(TextLabel4_9);

        mask_col_name_ = new QComboBox(mask_def_box);
        mask_col_name_->setObjectName(QString::fromUtf8("mask_col_name_"));

        horizontalLayout_2->addWidget(mask_col_name_);

        horizontalSpacer_2 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(mask_def_box);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        TextLabel1_2_2_2_2 = new QLabel(CsvMaskedImport);
        TextLabel1_2_2_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2_2_2"));
        sizePolicy1.setHeightForWidth(TextLabel1_2_2_2_2->sizePolicy().hasHeightForWidth());
        TextLabel1_2_2_2_2->setSizePolicy(sizePolicy1);
        TextLabel1_2_2_2_2->setFont(font);
        TextLabel1_2_2_2_2->setWordWrap(false);

        hboxLayout4->addWidget(TextLabel1_2_2_2_2);

        Line1_2_2_2_2 = new QFrame(CsvMaskedImport);
        Line1_2_2_2_2->setObjectName(QString::fromUtf8("Line1_2_2_2_2"));
        sizePolicy2.setHeightForWidth(Line1_2_2_2_2->sizePolicy().hasHeightForWidth());
        Line1_2_2_2_2->setSizePolicy(sizePolicy2);
        Line1_2_2_2_2->setFrameShape(QFrame::HLine);
        Line1_2_2_2_2->setFrameShadow(QFrame::Sunken);

        hboxLayout4->addWidget(Line1_2_2_2_2);


        verticalLayout_2->addLayout(hboxLayout4);

        groupBox5 = new QGroupBox(CsvMaskedImport);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        vboxLayout = new QVBoxLayout(groupBox5);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacer24 = new QSpacerItem(31, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacer24);

        use_no_data_value_ = new QCheckBox(groupBox5);
        use_no_data_value_->setObjectName(QString::fromUtf8("use_no_data_value_"));

        hboxLayout5->addWidget(use_no_data_value_);

        spacer25 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacer25);


        vboxLayout->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacer23 = new QSpacerItem(22, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacer23);

        NoDataValueBox = new QGroupBox(groupBox5);
        NoDataValueBox->setObjectName(QString::fromUtf8("NoDataValueBox"));
        NoDataValueBox->setEnabled(false);
        hboxLayout7 = new QHBoxLayout(NoDataValueBox);
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        textLabel1 = new QLabel(NoDataValueBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout7->addWidget(textLabel1);

        no_data_value_edit_ = new QLineEdit(NoDataValueBox);
        no_data_value_edit_->setObjectName(QString::fromUtf8("no_data_value_edit_"));

        hboxLayout7->addWidget(no_data_value_edit_);


        hboxLayout6->addWidget(NoDataValueBox);

        spacer22 = new QSpacerItem(22, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacer22);


        vboxLayout->addLayout(hboxLayout6);


        verticalLayout_2->addWidget(groupBox5);

        verticalSpacer = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(name_, is_xyz_locations_);
        QWidget::setTabOrder(is_xyz_locations_, nx_);
        QWidget::setTabOrder(nx_, ny_);
        QWidget::setTabOrder(ny_, nz_);
        QWidget::setTabOrder(nz_, x_size_);
        QWidget::setTabOrder(x_size_, y_size_);
        QWidget::setTabOrder(y_size_, z_size_);
        QWidget::setTabOrder(z_size_, xmn_);
        QWidget::setTabOrder(xmn_, ymn_);
        QWidget::setTabOrder(ymn_, zmn_);
        QWidget::setTabOrder(zmn_, use_no_data_value_);
        QWidget::setTabOrder(use_no_data_value_, no_data_value_edit_);

        retranslateUi(CsvMaskedImport);
        QObject::connect(use_no_data_value_, SIGNAL(toggled(bool)), NoDataValueBox, SLOT(setEnabled(bool)));
        QObject::connect(is_xyz_locations_, SIGNAL(toggled(bool)), nxyz_groupBox, SLOT(setDisabled(bool)));
        QObject::connect(is_xyz_locations_, SIGNAL(toggled(bool)), origin_box, SLOT(setDisabled(bool)));
        QObject::connect(is_xyz_locations_, SIGNAL(toggled(bool)), xyz_column, SLOT(setEnabled(bool)));
        QObject::connect(is_xyz_locations_, SIGNAL(toggled(bool)), mask_def_box, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(CsvMaskedImport);
    } // setupUi

    void retranslateUi(QWidget *CsvMaskedImport)
    {
        CsvMaskedImport->setWindowTitle(QApplication::translate("CsvMaskedImport", "Grid Characteristics", 0, QApplication::UnicodeUTF8));
        TextLabel4_4->setText(QApplication::translate("CsvMaskedImport", "Grid name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        name_->setToolTip(QApplication::translate("CsvMaskedImport", "name of new grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_xyz_locations_->setText(QApplication::translate("CsvMaskedImport", "File contains x,y,z locations", 0, QApplication::UnicodeUTF8));
        xyz_column->setTitle(QApplication::translate("CsvMaskedImport", "Coordinates", 0, QApplication::UnicodeUTF8));
        TextLabel4->setText(QApplication::translate("CsvMaskedImport", "Col. for X coordinates", 0, QApplication::UnicodeUTF8));
        TextLabel4_2->setText(QApplication::translate("CsvMaskedImport", "Col. for Y coordinates", 0, QApplication::UnicodeUTF8));
        TextLabel4_3->setText(QApplication::translate("CsvMaskedImport", "Col. for Z coordinates", 0, QApplication::UnicodeUTF8));
        nxyz_groupBox->setTitle(QString());
        TextLabel1->setText(QApplication::translate("CsvMaskedImport", "Grid Dimensions", 0, QApplication::UnicodeUTF8));
        TextLabel4_6->setText(QApplication::translate("CsvMaskedImport", "Number of cells in X", 0, QApplication::UnicodeUTF8));
        TextLabel4_7->setText(QApplication::translate("CsvMaskedImport", "Number of cells in Y", 0, QApplication::UnicodeUTF8));
        TextLabel4_8->setText(QApplication::translate("CsvMaskedImport", "Number of cells in Z", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("CsvMaskedImport", "Cell Size", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("CsvMaskedImport", "The dimensions of a single cell", 0, QApplication::UnicodeUTF8));
        GroupBox1_2->setTitle(QString());
        x_size_->setText(QApplication::translate("CsvMaskedImport", "1.0", 0, QApplication::UnicodeUTF8));
        y_size_->setText(QApplication::translate("CsvMaskedImport", "1.0", 0, QApplication::UnicodeUTF8));
        z_size_->setText(QApplication::translate("CsvMaskedImport", "1.0", 0, QApplication::UnicodeUTF8));
        TextLabel4_5->setText(QApplication::translate("CsvMaskedImport", "Size in X", 0, QApplication::UnicodeUTF8));
        TextLabel4_2_2->setText(QApplication::translate("CsvMaskedImport", "Size in Y", 0, QApplication::UnicodeUTF8));
        TextLabel4_3_2->setText(QApplication::translate("CsvMaskedImport", "Size in Z", 0, QApplication::UnicodeUTF8));
        origin_box->setTitle(QString());
        TextLabel1_2_2->setText(QApplication::translate("CsvMaskedImport", "Origin Coordinates", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("CsvMaskedImport", "The coordinates of the lower left corner of the grid", 0, QApplication::UnicodeUTF8));
        GroupBox1_2_2->setTitle(QString());
        TextLabel4_5_2->setText(QApplication::translate("CsvMaskedImport", "Ox", 0, QApplication::UnicodeUTF8));
        xmn_->setText(QApplication::translate("CsvMaskedImport", "0", 0, QApplication::UnicodeUTF8));
        TextLabel4_5_2_2->setText(QApplication::translate("CsvMaskedImport", "Oy", 0, QApplication::UnicodeUTF8));
        ymn_->setText(QApplication::translate("CsvMaskedImport", "0", 0, QApplication::UnicodeUTF8));
        TextLabel4_5_2_2_2->setText(QApplication::translate("CsvMaskedImport", "Oz", 0, QApplication::UnicodeUTF8));
        zmn_->setText(QApplication::translate("CsvMaskedImport", "0", 0, QApplication::UnicodeUTF8));
        mask_def_box->setTitle(QString());
        TextLabel1_2_2_2_3->setText(QApplication::translate("CsvMaskedImport", "Mask Definition", 0, QApplication::UnicodeUTF8));
        TextLabel4_9->setText(QApplication::translate("CsvMaskedImport", "Col. for mask", 0, QApplication::UnicodeUTF8));
        TextLabel1_2_2_2_2->setText(QApplication::translate("CsvMaskedImport", "No Data Value", 0, QApplication::UnicodeUTF8));
        groupBox5->setTitle(QString());
        use_no_data_value_->setText(QApplication::translate("CsvMaskedImport", "Use No-Data-Value", 0, QApplication::UnicodeUTF8));
        NoDataValueBox->setTitle(QString());
        textLabel1->setText(QApplication::translate("CsvMaskedImport", "No-Data-Value:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CsvMaskedImport: public Ui_CsvMaskedImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSV_MASKED_IMPORT_H
