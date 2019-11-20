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

#include <alibabacloud/iot/model/GetProductMetaListByNameRequest.h>

using AlibabaCloud::Iot::Model::GetProductMetaListByNameRequest;

GetProductMetaListByNameRequest::GetProductMetaListByNameRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetProductMetaListByName")
{
	setMethod(HttpRequest::Method::Post);
}

GetProductMetaListByNameRequest::~GetProductMetaListByNameRequest()
{}

std::string GetProductMetaListByNameRequest::getProductKey()const
{
	return productKey_;
}

void GetProductMetaListByNameRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string GetProductMetaListByNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetProductMetaListByNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetProductMetaListByNameRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void GetProductMetaListByNameRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string GetProductMetaListByNameRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetProductMetaListByNameRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string GetProductMetaListByNameRequest::getDeviceName()const
{
	return deviceName_;
}

void GetProductMetaListByNameRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

std::string GetProductMetaListByNameRequest::getPage()const
{
	return page_;
}

void GetProductMetaListByNameRequest::setPage(const std::string& page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

