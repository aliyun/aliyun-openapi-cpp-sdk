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

#include <alibabacloud/retailcloud/model/CreateAppGroupRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateAppGroupRequest;

CreateAppGroupRequest::CreateAppGroupRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateAppGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAppGroupRequest::~CreateAppGroupRequest()
{}

std::string CreateAppGroupRequest::getBizCode()const
{
	return bizCode_;
}

void CreateAppGroupRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setBodyParameter("BizCode", bizCode);
}

std::string CreateAppGroupRequest::getName()const
{
	return name_;
}

void CreateAppGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

