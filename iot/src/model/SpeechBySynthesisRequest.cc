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

#include <alibabacloud/iot/model/SpeechBySynthesisRequest.h>

using AlibabaCloud::Iot::Model::SpeechBySynthesisRequest;

SpeechBySynthesisRequest::SpeechBySynthesisRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SpeechBySynthesis")
{
	setMethod(HttpRequest::Method::Post);
}

SpeechBySynthesisRequest::~SpeechBySynthesisRequest()
{}

std::string SpeechBySynthesisRequest::getVoice()const
{
	return voice_;
}

void SpeechBySynthesisRequest::setVoice(const std::string& voice)
{
	voice_ = voice;
	setBodyParameter("Voice", voice);
}

std::string SpeechBySynthesisRequest::getSpeechId()const
{
	return speechId_;
}

void SpeechBySynthesisRequest::setSpeechId(const std::string& speechId)
{
	speechId_ = speechId;
	setBodyParameter("SpeechId", speechId);
}

std::string SpeechBySynthesisRequest::getAudioFormat()const
{
	return audioFormat_;
}

void SpeechBySynthesisRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string SpeechBySynthesisRequest::getIotId()const
{
	return iotId_;
}

void SpeechBySynthesisRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string SpeechBySynthesisRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SpeechBySynthesisRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string SpeechBySynthesisRequest::getText()const
{
	return text_;
}

void SpeechBySynthesisRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

std::string SpeechBySynthesisRequest::getProductKey()const
{
	return productKey_;
}

void SpeechBySynthesisRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

int SpeechBySynthesisRequest::getVolume()const
{
	return volume_;
}

void SpeechBySynthesisRequest::setVolume(int volume)
{
	volume_ = volume;
	setBodyParameter("Volume", std::to_string(volume));
}

std::string SpeechBySynthesisRequest::getApiProduct()const
{
	return apiProduct_;
}

void SpeechBySynthesisRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SpeechBySynthesisRequest::getApiRevision()const
{
	return apiRevision_;
}

void SpeechBySynthesisRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string SpeechBySynthesisRequest::getDeviceName()const
{
	return deviceName_;
}

void SpeechBySynthesisRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

int SpeechBySynthesisRequest::getSpeechRate()const
{
	return speechRate_;
}

void SpeechBySynthesisRequest::setSpeechRate(int speechRate)
{
	speechRate_ = speechRate;
	setBodyParameter("SpeechRate", std::to_string(speechRate));
}

