#ifndef EMGVIEW_HPP
#define EMGVIEW_HPP

#include <gui_generated/emg_screen/EMGViewBase.hpp>
#include <gui/emg_screen/EMGPresenter.hpp>

class EMGView : public EMGViewBase
{
public:
    EMGView();
    virtual ~EMGView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // EMGVIEW_HPP
