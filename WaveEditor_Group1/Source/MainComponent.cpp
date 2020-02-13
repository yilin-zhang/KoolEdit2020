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
    addAndMakeVisible(&gui);
    addAndMakeVisible(&cap);
    setSize(500, 500);

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
}

void MainComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
}