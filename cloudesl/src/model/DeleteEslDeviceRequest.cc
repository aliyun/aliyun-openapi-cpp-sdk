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

#include <alibabacloud/cloudesl/model/DeleteEslDeviceRequest.h>

using AlibabaCloud::Cloudesl::Model::DeleteEslDeviceRequest;

DeleteEslDeviceRequest::DeleteEslDeviceRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "DeleteEslDevice")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteEslDeviceRequest::~DeleteEslDeviceRequest()
{}

std::string DeleteEslDeviceRequest::getStoreId()const
{
	return storeId_;
}

void DeleteEslDeviceRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string DeleteEslDeviceRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DeleteEslDeviceRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setParameter("EslBarCode", eslBarCode);
}

