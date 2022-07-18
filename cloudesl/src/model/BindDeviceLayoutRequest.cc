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

#include <alibabacloud/cloudesl/model/BindDeviceLayoutRequest.h>

using AlibabaCloud::Cloudesl::Model::BindDeviceLayoutRequest;

BindDeviceLayoutRequest::BindDeviceLayoutRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "BindDeviceLayout")
{
	setMethod(HttpRequest::Method::Post);
}

BindDeviceLayoutRequest::~BindDeviceLayoutRequest()
{}

std::string BindDeviceLayoutRequest::getStoreId()const
{
	return storeId_;
}

void BindDeviceLayoutRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string BindDeviceLayoutRequest::getLayoutId()const
{
	return layoutId_;
}

void BindDeviceLayoutRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setBodyParameter("LayoutId", layoutId);
}

std::string BindDeviceLayoutRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void BindDeviceLayoutRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

