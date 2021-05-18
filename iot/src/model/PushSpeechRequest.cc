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

#include <alibabacloud/iot/model/PushSpeechRequest.h>

using AlibabaCloud::Iot::Model::PushSpeechRequest;

PushSpeechRequest::PushSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PushSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

PushSpeechRequest::~PushSpeechRequest()
{}

std::string PushSpeechRequest::getProjectCode()const
{
	return projectCode_;
}

void PushSpeechRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

std::string PushSpeechRequest::getIotId()const
{
	return iotId_;
}

void PushSpeechRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string PushSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PushSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string PushSpeechRequest::getPushMode()const
{
	return pushMode_;
}

void PushSpeechRequest::setPushMode(const std::string& pushMode)
{
	pushMode_ = pushMode;
	setBodyParameter("PushMode", pushMode);
}

std::string PushSpeechRequest::getGroupId()const
{
	return groupId_;
}

void PushSpeechRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::vector<std::string> PushSpeechRequest::getSpeechCodeList()const
{
	return speechCodeList_;
}

void PushSpeechRequest::setSpeechCodeList(const std::vector<std::string>& speechCodeList)
{
	speechCodeList_ = speechCodeList;
	for(int dep1 = 0; dep1!= speechCodeList.size(); dep1++) {
		setBodyParameter("SpeechCodeList."+ std::to_string(dep1), speechCodeList.at(dep1));
	}
}

std::string PushSpeechRequest::getProductKey()const
{
	return productKey_;
}

void PushSpeechRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string PushSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void PushSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PushSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void PushSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string PushSpeechRequest::getDeviceName()const
{
	return deviceName_;
}

void PushSpeechRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

