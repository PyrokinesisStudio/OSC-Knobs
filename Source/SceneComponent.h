/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class SceneComponent  : public Component,
                        public Slider::Listener,
                        public Button::Listener
{
public:
    //==============================================================================
    SceneComponent ();
    ~SceneComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void showConnectionErrorMessage (const String& messageText);
    ApplicationProperties appProperties;
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* screw2_png;
    static const int screw2_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    OSCSender oscSender;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> slider1;
    ScopedPointer<Slider> slider2;
    ScopedPointer<Slider> slider3;
    ScopedPointer<Slider> slider4;
    ScopedPointer<TextEditor> textEditorPrefix;
    ScopedPointer<Label> label;
    ScopedPointer<TextEditor> textEditorMsg3;
    ScopedPointer<TextEditor> textEditorMsg4;
    ScopedPointer<TextEditor> textEditorMsg1;
    ScopedPointer<TextEditor> textEditorMsg2;
    ScopedPointer<TextEditor> textEditorPort;
    ScopedPointer<TextEditor> textEditorIP;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<TextButton> textButtonConnect;
    ScopedPointer<TextButton> textButtonSave;
    ScopedPointer<TextButton> textButtonReset;
    Image cachedImage_screw2_png_1;
    Image cachedImage_screw2_png_2;
    Image cachedImage_screw2_png_3;
    Image cachedImage_screw2_png_4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SceneComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
