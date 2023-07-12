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

#include <alibabacloud/iot/model/CreateSharePromotionSpeechModelRequest.h>

using AlibabaCloud::Iot::Model::CreateSharePromotionSpeechModelRequest;

CreateSharePromotionSpeechModelRequest::CreateSharePromotionSpeechModelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSharePromotionSpeechModel")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSharePromotionSpeechModelRequest::~CreateSharePromotionSpeechModelRequest()
{}

std::string CreateSharePromotionSpeechModelRequest::getVoice()const
{
	return voice_;
}

void CreateSharePromotionSpeechModelRequest::setVoice(const std::string& voice)
{
	voice_ = voice;
	setBodyParameter("Voice", voice);
}

std::string CreateSharePromotionSpeechModelRequest::getSharePromotionActivityId()const
{
	return sharePromotionActivityId_;
}

void CreateSharePromotionSpeechModelRequest::setSharePromotionActivityId(const std::string& sharePromotionActivityId)
{
	sharePromotionActivityId_ = sharePromotionActivityId;
	setBodyParameter("SharePromotionActivityId", sharePromotionActivityId);
}

std::string CreateSharePromotionSpeechModelRequest::getAudioFormat()const
{
	return audioFormat_;
}

void CreateSharePromotionSpeechModelRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string CreateSharePromotionSpeechModelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSharePromotionSpeechModelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateSharePromotionSpeechModelRequest::getText()const
{
	return text_;
}

void CreateSharePromotionSpeechModelRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

std::string CreateSharePromotionSpeechModelRequest::getSpeechModelType()const
{
	return speechModelType_;
}

void CreateSharePromotionSpeechModelRequest::setSpeechModelType(const std::string& speechModelType)
{
	speechModelType_ = speechModelType;
	setBodyParameter("SpeechModelType", speechModelType);
}

std::string CreateSharePromotionSpeechModelRequest::getShareTaskCode()const
{
	return shareTaskCode_;
}

void CreateSharePromotionSpeechModelRequest::setShareTaskCode(const std::string& shareTaskCode)
{
	shareTaskCode_ = shareTaskCode;
	setBodyParameter("ShareTaskCode", shareTaskCode);
}

int CreateSharePromotionSpeechModelRequest::getVolume()const
{
	return volume_;
}

void CreateSharePromotionSpeechModelRequest::setVolume(int volume)
{
	volume_ = volume;
	setBodyParameter("Volume", std::to_string(volume));
}

std::string CreateSharePromotionSpeechModelRequest::getBizCode()const
{
	return bizCode_;
}

void CreateSharePromotionSpeechModelRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setBodyParameter("BizCode", bizCode);
}

std::string CreateSharePromotionSpeechModelRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSharePromotionSpeechModelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSharePromotionSpeechModelRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSharePromotionSpeechModelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int CreateSharePromotionSpeechModelRequest::getSpeechRate()const
{
	return speechRate_;
}

void CreateSharePromotionSpeechModelRequest::setSpeechRate(int speechRate)
{
	speechRate_ = speechRate;
	setBodyParameter("SpeechRate", std::to_string(speechRate));
}

