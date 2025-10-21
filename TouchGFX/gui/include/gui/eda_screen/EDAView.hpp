#ifndef EDAVIEW_HPP
#define EDAVIEW_HPP

#include <gui_generated/eda_screen/EDAViewBase.hpp>
#include <gui/eda_screen/EDAPresenter.hpp>

class EDAView : public EDAViewBase
{
public:
    EDAView();
    virtual ~EDAView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // EDAVIEW_HPP
