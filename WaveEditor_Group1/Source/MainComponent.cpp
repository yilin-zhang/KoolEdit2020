/*
  ==============================================================================

    MainComponent.cpp
    Created: 7 Feb 2020 3:03:43pm
    Author:  user

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    gui = new GUIComponent(cap);
    addAndMakeVisible(gui);
    addAndMakeVisible(cap);
    setSize(700, 700);
}

MainComponent::~MainComponent()
{
}

void MainComponent::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("MainComponent", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void MainComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    gui->setBounds(getLocalBounds());
}
