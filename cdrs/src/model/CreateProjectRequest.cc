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

#include <alibabacloud/cdrs/model/CreateProjectRequest.h>

using AlibabaCloud::CDRS::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "CreateProject")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest()
{}

std::string CreateProjectRequest::getClientToken()const
{
	return clientToken_;
}

void CreateProjectRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateProjectRequest::getIcon()const
{
	return icon_;
}

void CreateProjectRequest::setIcon(const std::string& icon)
{
	icon_ = icon;
	setBodyParameter("Icon", icon);
}

std::string CreateProjectRequest::getDescription()const
{
	return description_;
}

void CreateProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateProjectRequest::getAppName()const
{
	return appName_;
}

void CreateProjectRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string CreateProjectRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void CreateProjectRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

std::string CreateProjectRequest::getName()const
{
	return name_;
}

void CreateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateProjectRequest::getAggregateSceneCode()const
{
	return aggregateSceneCode_;
}

void CreateProjectRequest::setAggregateSceneCode(const std::string& aggregateSceneCode)
{
	aggregateSceneCode_ = aggregateSceneCode;
	setBodyParameter("AggregateSceneCode", aggregateSceneCode);
}

