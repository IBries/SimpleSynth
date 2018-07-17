/*
  ==============================================================================

    SynthVoice.cpp
    Created: 16 Jul 2018 8:02:30pm
    Author:  Isaac Bries

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "SynthVoice.h"

//==============================================================================
SynthVoice::SynthVoice()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

SynthVoice::~SynthVoice()
{
}

void SynthVoice::paint (Graphics& g)
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
    g.drawText ("SynthVoice", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void SynthVoice::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

bool SynthVoice::canPlaySound(SynthesiserSound *)
{
	return true;
}

void SynthVoice::startNote(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
}

void SynthVoice::stopNote(float velocity, bool allowTailOff)
{
}

void SynthVoice::pitchWheelMoved(int newPitchWheelValue)
{
}

void SynthVoice::controllerMoved(int controllerNumber, int newControllerValue)
{
}

void SynthVoice::renderNextBlock(AudioBuffer<double>& outputBuffer, int startSample, int numSamples)
{
}
