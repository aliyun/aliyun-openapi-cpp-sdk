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

#include <alibabacloud/retailcloud/model/BindGroupRequest.h>

using AlibabaCloud::Retailcloud::Model::BindGroupRequest;

BindGroupRequest::BindGroupRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "BindGroup")
{
	setMethod(HttpRequest::Method::Post);
}

BindGroupRequest::~BindGroupRequest()
{}

std::string BindGroupRequest::getBizCode()const
{
	return bizCode_;
}

void BindGroupRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

long BindGroupRequest::getAppId()const
{
	return appId_;
}

void BindGroupRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string BindGroupRequest::getName()const
{
	return name_;
}

void BindGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

