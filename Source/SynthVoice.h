/*
  ==============================================================================

    SynthVoice.h
    Created: 16 Jul 2018 8:02:30pm
    Author:  Isaac Bries

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SynthVoice    : public Component,
							 SynthesiserVoice
{
public:
    SynthVoice();
    ~SynthVoice();

    void paint (Graphics&) override;
    void resized() override;
	
	// Pure virtual functions inherited from SynthesiserVoice
	bool canPlaySound(SynthesiserSound*);
	void startNote(int midiNoteNumber, float velocity, SynthesiserSound* sound, int currentPitchWheelPosition);
	void stopNote(float velocity, bool allowTailOff);
	void pitchWheelMoved(int newPitchWheelValue);
	void controllerMoved(int controllerNumber, int newControllerValue);
	void renderNextBlock(AudioBuffer<double> &outputBuffer, int startSample, int numSamples);

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SynthVoice)
};
