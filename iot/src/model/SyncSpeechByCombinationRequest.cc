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

#include <alibabacloud/iot/model/SyncSpeechByCombinationRequest.h>

using AlibabaCloud::Iot::Model::SyncSpeechByCombinationRequest;

SyncSpeechByCombinationRequest::SyncSpeechByCombinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SyncSpeechByCombination")
{
	setMethod(HttpRequest::Method::Post);
}

SyncSpeechByCombinationRequest::~SyncSpeechByCombinationRequest()
{}

std::string SyncSpeechByCombinationRequest::getSpeechId()const
{
	return speechId_;
}

void SyncSpeechByCombinationRequest::setSpeechId(const std::string& speechId)
{
	speechId_ = speechId;
	setBodyParameter("SpeechId", speechId);
}

std::string SyncSpeechByCombinationRequest::getAudioFormat()const
{
	return audioFormat_;
}

void SyncSpeechByCombinationRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string SyncSpeechByCombinationRequest::getIotId()const
{
	return iotId_;
}

void SyncSpeechByCombinationRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::vector<std::string> SyncSpeechByCombinationRequest::getCombinationList()const
{
	return combinationList_;
}

void SyncSpeechByCombinationRequest::setCombinationList(const std::vector<std::string>& combinationList)
{
	combinationList_ = combinationList;
	for(int dep1 = 0; dep1!= combinationList.size(); dep1++) {
		setBodyParameter("CombinationList."+ std::to_string(dep1), combinationList.at(dep1));
	}
}

std::string SyncSpeechByCombinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SyncSpeechByCombinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

bool SyncSpeechByCombinationRequest::getEnforceFlag()const
{
	return enforceFlag_;
}

void SyncSpeechByCombinationRequest::setEnforceFlag(bool enforceFlag)
{
	enforceFlag_ = enforceFlag;
	setBodyParameter("EnforceFlag", enforceFlag ? "true" : "false");
}

std::string SyncSpeechByCombinationRequest::getProductKey()const
{
	return productKey_;
}

void SyncSpeechByCombinationRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string SyncSpeechByCombinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void SyncSpeechByCombinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SyncSpeechByCombinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void SyncSpeechByCombinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string SyncSpeechByCombinationRequest::getDeviceName()const
{
	return deviceName_;
}

void SyncSpeechByCombinationRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

