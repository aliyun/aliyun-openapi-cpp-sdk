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

#include <alibabacloud/idrsservice/model/CreateAppRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateAppRequest;

CreateAppRequest::CreateAppRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateApp")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAppRequest::~CreateAppRequest()
{}

std::string CreateAppRequest::getClientToken()const
{
	return clientToken_;
}

void CreateAppRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateAppRequest::getDepartmentId()const
{
	return departmentId_;
}

void CreateAppRequest::setDepartmentId(const std::string& departmentId)
{
	departmentId_ = departmentId;
	setParameter("DepartmentId", departmentId);
}

std::string CreateAppRequest::getPackageName()const
{
	return packageName_;
}

void CreateAppRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setParameter("PackageName", packageName);
}

std::string CreateAppRequest::getName()const
{
	return name_;
}

void CreateAppRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

