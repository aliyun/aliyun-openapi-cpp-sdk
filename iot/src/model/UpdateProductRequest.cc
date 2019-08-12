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

#include <alibabacloud/iot/model/UpdateProductRequest.h>

using AlibabaCloud::Iot::Model::UpdateProductRequest;

UpdateProductRequest::UpdateProductRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateProduct")
{}

UpdateProductRequest::~UpdateProductRequest()
{}

std::string UpdateProductRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateProductRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

std::string UpdateProductRequest::getProductName()const
{
	return productName_;
}

void UpdateProductRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", std::to_string(productName));
}

std::string UpdateProductRequest::getDescription()const
{
	return description_;
}

void UpdateProductRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string UpdateProductRequest::getProductKey()const
{
	return productKey_;
}

void UpdateProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", std::to_string(productKey));
}

std::string UpdateProductRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateProductRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

