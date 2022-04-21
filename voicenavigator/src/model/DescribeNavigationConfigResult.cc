/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/voicenavigator/model/DescribeNavigationConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeNavigationConfigResult::DescribeNavigationConfigResult() :
	ServiceResult()
{}

DescribeNavigationConfigResult::DescribeNavigationConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNavigationConfigResult::~DescribeNavigationConfigResult()
{}

void DescribeNavigationConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto repeatingConfigNode = value["RepeatingConfig"];
		auto allUtterances = repeatingConfigNode["Utterances"]["Utterance"];
		for (auto value : allUtterances)
			repeatingConfig_.utterances.push_back(value.asString());
	auto askingBackConfigNode = value["AskingBackConfig"];
	if(!askingBackConfigNode["NegativeFeedbackPrompt"].isNull())
		askingBackConfig_.negativeFeedbackPrompt = askingBackConfigNode["NegativeFeedbackPrompt"].asString();
	if(!askingBackConfigNode["NegativeFeedbackAction"].isNull())
		askingBackConfig_.negativeFeedbackAction = askingBackConfigNode["NegativeFeedbackAction"].asString();
	if(!askingBackConfigNode["NegativeFeedbackActionParams"].isNull())
		askingBackConfig_.negativeFeedbackActionParams = askingBackConfigNode["NegativeFeedbackActionParams"].asString();
	if(!askingBackConfigNode["EnableNegativeFeedback"].isNull())
		askingBackConfig_.enableNegativeFeedback = askingBackConfigNode["EnableNegativeFeedback"].asString() == "true";
	if(!askingBackConfigNode["Enabled"].isNull())
		askingBackConfig_.enabled = askingBackConfigNode["Enabled"].asString() == "true";
	if(!askingBackConfigNode["Prompt"].isNull())
		askingBackConfig_.prompt = askingBackConfigNode["Prompt"].asString();
		auto allNegativeFeedbackUtterances = askingBackConfigNode["NegativeFeedbackUtterances"]["Utterance"];
		for (auto value : allNegativeFeedbackUtterances)
			askingBackConfig_.negativeFeedbackUtterances.push_back(value.asString());
	auto silenceTimeoutConfigNode = value["SilenceTimeoutConfig"];
	if(!silenceTimeoutConfigNode["Timeout"].isNull())
		silenceTimeoutConfig_.timeout = std::stol(silenceTimeoutConfigNode["Timeout"].asString());
	if(!silenceTimeoutConfigNode["IntentTrigger"].isNull())
		silenceTimeoutConfig_.intentTrigger = silenceTimeoutConfigNode["IntentTrigger"].asString();
	if(!silenceTimeoutConfigNode["FinalPrompt"].isNull())
		silenceTimeoutConfig_.finalPrompt = silenceTimeoutConfigNode["FinalPrompt"].asString();
	if(!silenceTimeoutConfigNode["SourceType"].isNull())
		silenceTimeoutConfig_.sourceType = silenceTimeoutConfigNode["SourceType"].asString();
	if(!silenceTimeoutConfigNode["FinalAction"].isNull())
		silenceTimeoutConfig_.finalAction = silenceTimeoutConfigNode["FinalAction"].asString();
	if(!silenceTimeoutConfigNode["Prompt"].isNull())
		silenceTimeoutConfig_.prompt = silenceTimeoutConfigNode["Prompt"].asString();
	if(!silenceTimeoutConfigNode["Threshold"].isNull())
		silenceTimeoutConfig_.threshold = std::stoi(silenceTimeoutConfigNode["Threshold"].asString());
	if(!silenceTimeoutConfigNode["FinalActionParams"].isNull())
		silenceTimeoutConfig_.finalActionParams = silenceTimeoutConfigNode["FinalActionParams"].asString();
	auto greetingConfigNode = value["GreetingConfig"];
	if(!greetingConfigNode["IntentTrigger"].isNull())
		greetingConfig_.intentTrigger = greetingConfigNode["IntentTrigger"].asString();
	if(!greetingConfigNode["GreetingWords"].isNull())
		greetingConfig_.greetingWords = greetingConfigNode["GreetingWords"].asString();
	if(!greetingConfigNode["SourceType"].isNull())
		greetingConfig_.sourceType = greetingConfigNode["SourceType"].asString();
	auto unrecognizingConfigNode = value["UnrecognizingConfig"];
	if(!unrecognizingConfigNode["FinalPrompt"].isNull())
		unrecognizingConfig_.finalPrompt = unrecognizingConfigNode["FinalPrompt"].asString();
	if(!unrecognizingConfigNode["FinalAction"].isNull())
		unrecognizingConfig_.finalAction = unrecognizingConfigNode["FinalAction"].asString();
	if(!unrecognizingConfigNode["FinalActionParams"].isNull())
		unrecognizingConfig_.finalActionParams = unrecognizingConfigNode["FinalActionParams"].asString();
	if(!unrecognizingConfigNode["Threshold"].isNull())
		unrecognizingConfig_.threshold = std::stoi(unrecognizingConfigNode["Threshold"].asString());
	if(!unrecognizingConfigNode["Prompt"].isNull())
		unrecognizingConfig_.prompt = unrecognizingConfigNode["Prompt"].asString();
	auto complainingConfigNode = value["ComplainingConfig"];
	if(!complainingConfigNode["FinalAction"].isNull())
		complainingConfig_.finalAction = complainingConfigNode["FinalAction"].asString();
	if(!complainingConfigNode["Prompt"].isNull())
		complainingConfig_.prompt = complainingConfigNode["Prompt"].asString();
	if(!complainingConfigNode["FinalActionParams"].isNull())
		complainingConfig_.finalActionParams = complainingConfigNode["FinalActionParams"].asString();
		auto allUtterances1 = complainingConfigNode["Utterances"]["Utterance"];
		for (auto value : allUtterances1)
			complainingConfig_.utterances1.push_back(value.asString());

}

DescribeNavigationConfigResult::RepeatingConfig DescribeNavigationConfigResult::getRepeatingConfig()const
{
	return repeatingConfig_;
}

DescribeNavigationConfigResult::AskingBackConfig DescribeNavigationConfigResult::getAskingBackConfig()const
{
	return askingBackConfig_;
}

DescribeNavigationConfigResult::SilenceTimeoutConfig DescribeNavigationConfigResult::getSilenceTimeoutConfig()const
{
	return silenceTimeoutConfig_;
}

DescribeNavigationConfigResult::GreetingConfig DescribeNavigationConfigResult::getGreetingConfig()const
{
	return greetingConfig_;
}

DescribeNavigationConfigResult::UnrecognizingConfig DescribeNavigationConfigResult::getUnrecognizingConfig()const
{
	return unrecognizingConfig_;
}

DescribeNavigationConfigResult::ComplainingConfig DescribeNavigationConfigResult::getComplainingConfig()const
{
	return complainingConfig_;
}

