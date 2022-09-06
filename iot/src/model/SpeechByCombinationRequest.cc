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

#include <alibabacloud/iot/model/SpeechByCombinationRequest.h>

using AlibabaCloud::Iot::Model::SpeechByCombinationRequest;

SpeechByCombinationRequest::SpeechByCombinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SpeechByCombination")
{
	setMethod(HttpRequest::Method::Post);
}

SpeechByCombinationRequest::~SpeechByCombinationRequest()
{}

std::string SpeechByCombinationRequest::getSpeechId()const
{
	return speechId_;
}

void SpeechByCombinationRequest::setSpeechId(const std::string& speechId)
{
	speechId_ = speechId;
	setBodyParameter("SpeechId", speechId);
}

std::string SpeechByCombinationRequest::getAudioFormat()const
{
	return audioFormat_;
}

void SpeechByCombinationRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string SpeechByCombinationRequest::getIotId()const
{
	return iotId_;
}

void SpeechByCombinationRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::vector<std::string> SpeechByCombinationRequest::getCombinationList()const
{
	return combinationList_;
}

void SpeechByCombinationRequest::setCombinationList(const std::vector<std::string>& combinationList)
{
	combinationList_ = combinationList;
	for(int dep1 = 0; dep1!= combinationList.size(); dep1++) {
		setBodyParameter("CombinationList."+ std::to_string(dep1), combinationList.at(dep1));
	}
}

std::string SpeechByCombinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SpeechByCombinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

bool SpeechByCombinationRequest::getEnforceFlag()const
{
	return enforceFlag_;
}

void SpeechByCombinationRequest::setEnforceFlag(bool enforceFlag)
{
	enforceFlag_ = enforceFlag;
	setBodyParameter("EnforceFlag", enforceFlag ? "true" : "false");
}

std::string SpeechByCombinationRequest::getProductKey()const
{
	return productKey_;
}

void SpeechByCombinationRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string SpeechByCombinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void SpeechByCombinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SpeechByCombinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void SpeechByCombinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string SpeechByCombinationRequest::getDeviceName()const
{
	return deviceName_;
}

void SpeechByCombinationRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

