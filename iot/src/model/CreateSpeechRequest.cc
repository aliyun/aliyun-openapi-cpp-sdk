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

#include <alibabacloud/iot/model/CreateSpeechRequest.h>

using AlibabaCloud::Iot::Model::CreateSpeechRequest;

CreateSpeechRequest::CreateSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSpeechRequest::~CreateSpeechRequest()
{}

std::string CreateSpeechRequest::getVoice()const
{
	return voice_;
}

void CreateSpeechRequest::setVoice(const std::string& voice)
{
	voice_ = voice;
	setBodyParameter("Voice", voice);
}

std::string CreateSpeechRequest::getProjectCode()const
{
	return projectCode_;
}

void CreateSpeechRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

std::string CreateSpeechRequest::getAudioFormat()const
{
	return audioFormat_;
}

void CreateSpeechRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string CreateSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateSpeechRequest::getText()const
{
	return text_;
}

void CreateSpeechRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

std::string CreateSpeechRequest::getSoundCodeConfig()const
{
	return soundCodeConfig_;
}

void CreateSpeechRequest::setSoundCodeConfig(const std::string& soundCodeConfig)
{
	soundCodeConfig_ = soundCodeConfig;
	setBodyParameter("SoundCodeConfig", soundCodeConfig);
}

std::string CreateSpeechRequest::getSpeechType()const
{
	return speechType_;
}

void CreateSpeechRequest::setSpeechType(const std::string& speechType)
{
	speechType_ = speechType;
	setBodyParameter("SpeechType", speechType);
}

bool CreateSpeechRequest::getEnableSoundCode()const
{
	return enableSoundCode_;
}

void CreateSpeechRequest::setEnableSoundCode(bool enableSoundCode)
{
	enableSoundCode_ = enableSoundCode;
	setBodyParameter("EnableSoundCode", enableSoundCode ? "true" : "false");
}

int CreateSpeechRequest::getVolume()const
{
	return volume_;
}

void CreateSpeechRequest::setVolume(int volume)
{
	volume_ = volume;
	setBodyParameter("Volume", std::to_string(volume));
}

std::string CreateSpeechRequest::getBizCode()const
{
	return bizCode_;
}

void CreateSpeechRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setBodyParameter("BizCode", bizCode);
}

std::string CreateSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int CreateSpeechRequest::getSpeechRate()const
{
	return speechRate_;
}

void CreateSpeechRequest::setSpeechRate(int speechRate)
{
	speechRate_ = speechRate;
	setBodyParameter("SpeechRate", std::to_string(speechRate));
}

