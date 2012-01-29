/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerFooBarWidget.h"
#include "ui_qSlicerFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_Igyne
class qSlicerFooBarWidgetPrivate
  : public Ui_qSlicerFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerFooBarWidget);
protected:
  qSlicerFooBarWidget* const q_ptr;

public:
  qSlicerFooBarWidgetPrivate(
    qSlicerFooBarWidget& object);
  virtual void setupUi(qSlicerFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerFooBarWidgetPrivate
::qSlicerFooBarWidgetPrivate(
  qSlicerFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerFooBarWidgetPrivate
::setupUi(qSlicerFooBarWidget* widget)
{
  this->Ui_qSlicerFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerFooBarWidget
::qSlicerFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerFooBarWidget
::~qSlicerFooBarWidget()
{
}
