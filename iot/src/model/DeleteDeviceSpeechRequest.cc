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

#include <alibabacloud/iot/model/DeleteDeviceSpeechRequest.h>

using AlibabaCloud::Iot::Model::DeleteDeviceSpeechRequest;

DeleteDeviceSpeechRequest::DeleteDeviceSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteDeviceSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDeviceSpeechRequest::~DeleteDeviceSpeechRequest()
{}

std::string DeleteDeviceSpeechRequest::getIotId()const
{
	return iotId_;
}

void DeleteDeviceSpeechRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string DeleteDeviceSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteDeviceSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteDeviceSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteDeviceSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteDeviceSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteDeviceSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<DeleteDeviceSpeechRequest::DeviceSpeechList> DeleteDeviceSpeechRequest::getDeviceSpeechList()const
{
	return deviceSpeechList_;
}

void DeleteDeviceSpeechRequest::setDeviceSpeechList(const std::vector<DeviceSpeechList>& deviceSpeechList)
{
	deviceSpeechList_ = deviceSpeechList;
	for(int dep1 = 0; dep1!= deviceSpeechList.size(); dep1++) {
		auto deviceSpeechListObj = deviceSpeechList.at(dep1);
		std::string deviceSpeechListObjStr = "DeviceSpeechList." + std::to_string(dep1 + 1);
		setParameter(deviceSpeechListObjStr + ".BizCode", deviceSpeechListObj.bizCode);
		setParameter(deviceSpeechListObjStr + ".AudioFormat", deviceSpeechListObj.audioFormat);
	}
}

