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

#include <alibabacloud/iot/model/ShareSpeechByCombinationRequest.h>

using AlibabaCloud::Iot::Model::ShareSpeechByCombinationRequest;

ShareSpeechByCombinationRequest::ShareSpeechByCombinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ShareSpeechByCombination")
{
	setMethod(HttpRequest::Method::Post);
}

ShareSpeechByCombinationRequest::~ShareSpeechByCombinationRequest()
{}

std::string ShareSpeechByCombinationRequest::getSpeechId()const
{
	return speechId_;
}

void ShareSpeechByCombinationRequest::setSpeechId(const std::string& speechId)
{
	speechId_ = speechId;
	setBodyParameter("SpeechId", speechId);
}

std::string ShareSpeechByCombinationRequest::getAudioFormat()const
{
	return audioFormat_;
}

void ShareSpeechByCombinationRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string ShareSpeechByCombinationRequest::getIotId()const
{
	return iotId_;
}

void ShareSpeechByCombinationRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::vector<std::string> ShareSpeechByCombinationRequest::getCombinationList()const
{
	return combinationList_;
}

void ShareSpeechByCombinationRequest::setCombinationList(const std::vector<std::string>& combinationList)
{
	combinationList_ = combinationList;
	for(int dep1 = 0; dep1!= combinationList.size(); dep1++) {
		setBodyParameter("CombinationList."+ std::to_string(dep1), combinationList.at(dep1));
	}
}

std::string ShareSpeechByCombinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ShareSpeechByCombinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string ShareSpeechByCombinationRequest::getProductKey()const
{
	return productKey_;
}

void ShareSpeechByCombinationRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string ShareSpeechByCombinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void ShareSpeechByCombinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ShareSpeechByCombinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void ShareSpeechByCombinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ShareSpeechByCombinationRequest::getDeviceName()const
{
	return deviceName_;
}

void ShareSpeechByCombinationRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

