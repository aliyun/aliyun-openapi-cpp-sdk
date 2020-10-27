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

#include <alibabacloud/cloudesl/model/UnbindEslDeviceShelfRequest.h>

using AlibabaCloud::Cloudesl::Model::UnbindEslDeviceShelfRequest;

UnbindEslDeviceShelfRequest::UnbindEslDeviceShelfRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "UnbindEslDeviceShelf")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindEslDeviceShelfRequest::~UnbindEslDeviceShelfRequest()
{}

std::string UnbindEslDeviceShelfRequest::getStoreId()const
{
	return storeId_;
}

void UnbindEslDeviceShelfRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string UnbindEslDeviceShelfRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void UnbindEslDeviceShelfRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setParameter("EslBarCode", eslBarCode);
}

