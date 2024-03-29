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

#include <alibabacloud/iot/model/GetSpeechDeviceDetailRequest.h>

using AlibabaCloud::Iot::Model::GetSpeechDeviceDetailRequest;

GetSpeechDeviceDetailRequest::GetSpeechDeviceDetailRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetSpeechDeviceDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetSpeechDeviceDetailRequest::~GetSpeechDeviceDetailRequest()
{}

std::string GetSpeechDeviceDetailRequest::getIotId()const
{
	return iotId_;
}

void GetSpeechDeviceDetailRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string GetSpeechDeviceDetailRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetSpeechDeviceDetailRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string GetSpeechDeviceDetailRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetSpeechDeviceDetailRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetSpeechDeviceDetailRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetSpeechDeviceDetailRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

