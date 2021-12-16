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

#include <alibabacloud/iot/model/UpdateSpeechRequest.h>

using AlibabaCloud::Iot::Model::UpdateSpeechRequest;

UpdateSpeechRequest::UpdateSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSpeechRequest::~UpdateSpeechRequest()
{}

std::string UpdateSpeechRequest::getVoice()const
{
	return voice_;
}

void UpdateSpeechRequest::setVoice(const std::string& voice)
{
	voice_ = voice;
	setBodyParameter("Voice", voice);
}

std::string UpdateSpeechRequest::getProjectCode()const
{
	return projectCode_;
}

void UpdateSpeechRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

std::string UpdateSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateSpeechRequest::getSoundCodeConfig()const
{
	return soundCodeConfig_;
}

void UpdateSpeechRequest::setSoundCodeConfig(const std::string& soundCodeConfig)
{
	soundCodeConfig_ = soundCodeConfig;
	setBodyParameter("SoundCodeConfig", soundCodeConfig);
}

bool UpdateSpeechRequest::getEnableSoundCode()const
{
	return enableSoundCode_;
}

void UpdateSpeechRequest::setEnableSoundCode(bool enableSoundCode)
{
	enableSoundCode_ = enableSoundCode;
	setBodyParameter("EnableSoundCode", enableSoundCode ? "true" : "false");
}

int UpdateSpeechRequest::getVolume()const
{
	return volume_;
}

void UpdateSpeechRequest::setVolume(int volume)
{
	volume_ = volume;
	setBodyParameter("Volume", std::to_string(volume));
}

std::string UpdateSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int UpdateSpeechRequest::getSpeechRate()const
{
	return speechRate_;
}

void UpdateSpeechRequest::setSpeechRate(int speechRate)
{
	speechRate_ = speechRate;
	setBodyParameter("SpeechRate", std::to_string(speechRate));
}

std::string UpdateSpeechRequest::getSpeechCode()const
{
	return speechCode_;
}

void UpdateSpeechRequest::setSpeechCode(const std::string& speechCode)
{
	speechCode_ = speechCode;
	setBodyParameter("SpeechCode", speechCode);
}

