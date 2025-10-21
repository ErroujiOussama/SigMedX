#ifndef EEGVIEW_HPP
#define EEGVIEW_HPP

#include <gui_generated/eeg_screen/EEGViewBase.hpp>
#include <gui/eeg_screen/EEGPresenter.hpp>

class EEGView : public EEGViewBase
{
public:
    EEGView();
    virtual ~EEGView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // EEGVIEW_HPP
