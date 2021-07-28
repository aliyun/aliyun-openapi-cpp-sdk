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

#include <alibabacloud/retailcloud/model/UnbindGroupRequest.h>

using AlibabaCloud::Retailcloud::Model::UnbindGroupRequest;

UnbindGroupRequest::UnbindGroupRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "UnbindGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindGroupRequest::~UnbindGroupRequest()
{}

std::string UnbindGroupRequest::getBizCode()const
{
	return bizCode_;
}

void UnbindGroupRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

long UnbindGroupRequest::getAppId()const
{
	return appId_;
}

void UnbindGroupRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string UnbindGroupRequest::getName()const
{
	return name_;
}

void UnbindGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

