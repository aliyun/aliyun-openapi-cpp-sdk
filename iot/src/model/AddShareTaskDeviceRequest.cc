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

#include <alibabacloud/iot/model/AddShareTaskDeviceRequest.h>

using AlibabaCloud::Iot::Model::AddShareTaskDeviceRequest;

AddShareTaskDeviceRequest::AddShareTaskDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "AddShareTaskDevice")
{
	setMethod(HttpRequest::Method::Post);
}

AddShareTaskDeviceRequest::~AddShareTaskDeviceRequest()
{}

std::string AddShareTaskDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void AddShareTaskDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> AddShareTaskDeviceRequest::getIotIdList()const
{
	return iotIdList_;
}

void AddShareTaskDeviceRequest::setIotIdList(const std::vector<std::string>& iotIdList)
{
	iotIdList_ = iotIdList;
	for(int dep1 = 0; dep1!= iotIdList.size(); dep1++) {
		setBodyParameter("IotIdList."+ std::to_string(dep1), iotIdList.at(dep1));
	}
}

std::string AddShareTaskDeviceRequest::getShareTaskId()const
{
	return shareTaskId_;
}

void AddShareTaskDeviceRequest::setShareTaskId(const std::string& shareTaskId)
{
	shareTaskId_ = shareTaskId;
	setBodyParameter("ShareTaskId", shareTaskId);
}

std::string AddShareTaskDeviceRequest::getProductKey()const
{
	return productKey_;
}

void AddShareTaskDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string AddShareTaskDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void AddShareTaskDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string AddShareTaskDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void AddShareTaskDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

