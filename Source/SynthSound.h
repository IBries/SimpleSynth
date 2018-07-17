/*
  ==============================================================================

    SynthSound.h
    Created: 16 Jul 2018 8:01:50pm
    Author:  Isaac Bries

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SynthSound    : public Component,
							 SynthesiserSound
{
public:
    SynthSound();
    ~SynthSound();

    void paint (Graphics&) override;
    void resized() override;

	// Pure virtual functions inherited from SynthesiserSound
	bool appliesToNote(int midiNoteNumber);
	bool appliesToChannel(int midiChannel);

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SynthSound)
};
