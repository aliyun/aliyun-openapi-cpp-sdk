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

#include <alibabacloud/cloudesl/model/BindEslDeviceShelfRequest.h>

using AlibabaCloud::Cloudesl::Model::BindEslDeviceShelfRequest;

BindEslDeviceShelfRequest::BindEslDeviceShelfRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "BindEslDeviceShelf")
{
	setMethod(HttpRequest::Method::Post);
}

BindEslDeviceShelfRequest::~BindEslDeviceShelfRequest()
{}

std::string BindEslDeviceShelfRequest::getStoreId()const
{
	return storeId_;
}

void BindEslDeviceShelfRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string BindEslDeviceShelfRequest::getShelfCode()const
{
	return shelfCode_;
}

void BindEslDeviceShelfRequest::setShelfCode(const std::string& shelfCode)
{
	shelfCode_ = shelfCode;
	setParameter("ShelfCode", shelfCode);
}

std::string BindEslDeviceShelfRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void BindEslDeviceShelfRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setParameter("EslBarCode", eslBarCode);
}

