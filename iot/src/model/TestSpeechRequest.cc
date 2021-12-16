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

#include <alibabacloud/iot/model/TestSpeechRequest.h>

using AlibabaCloud::Iot::Model::TestSpeechRequest;

TestSpeechRequest::TestSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "TestSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

TestSpeechRequest::~TestSpeechRequest()
{}

std::string TestSpeechRequest::getVoice()const
{
	return voice_;
}

void TestSpeechRequest::setVoice(const std::string& voice)
{
	voice_ = voice;
	setBodyParameter("Voice", voice);
}

std::string TestSpeechRequest::getProjectCode()const
{
	return projectCode_;
}

void TestSpeechRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

std::string TestSpeechRequest::getAudioFormat()const
{
	return audioFormat_;
}

void TestSpeechRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string TestSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void TestSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string TestSpeechRequest::getText()const
{
	return text_;
}

void TestSpeechRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

std::string TestSpeechRequest::getSoundCodeConfig()const
{
	return soundCodeConfig_;
}

void TestSpeechRequest::setSoundCodeConfig(const std::string& soundCodeConfig)
{
	soundCodeConfig_ = soundCodeConfig;
	setBodyParameter("SoundCodeConfig", soundCodeConfig);
}

std::string TestSpeechRequest::getSpeechType()const
{
	return speechType_;
}

void TestSpeechRequest::setSpeechType(const std::string& speechType)
{
	speechType_ = speechType;
	setBodyParameter("SpeechType", speechType);
}

bool TestSpeechRequest::getEnableSoundCode()const
{
	return enableSoundCode_;
}

void TestSpeechRequest::setEnableSoundCode(bool enableSoundCode)
{
	enableSoundCode_ = enableSoundCode;
	setBodyParameter("EnableSoundCode", enableSoundCode ? "true" : "false");
}

int TestSpeechRequest::getVolume()const
{
	return volume_;
}

void TestSpeechRequest::setVolume(int volume)
{
	volume_ = volume;
	setBodyParameter("Volume", std::to_string(volume));
}

std::string TestSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void TestSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string TestSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void TestSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int TestSpeechRequest::getSpeechRate()const
{
	return speechRate_;
}

void TestSpeechRequest::setSpeechRate(int speechRate)
{
	speechRate_ = speechRate;
	setBodyParameter("SpeechRate", std::to_string(speechRate));
}

