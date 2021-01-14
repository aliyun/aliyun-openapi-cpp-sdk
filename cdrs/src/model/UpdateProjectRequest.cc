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

#include <alibabacloud/cdrs/model/UpdateProjectRequest.h>

using AlibabaCloud::CDRS::Model::UpdateProjectRequest;

UpdateProjectRequest::UpdateProjectRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "UpdateProject")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateProjectRequest::~UpdateProjectRequest()
{}

std::string UpdateProjectRequest::getCorpId()const
{
	return corpId_;
}

void UpdateProjectRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateProjectRequest::getIcon()const
{
	return icon_;
}

void UpdateProjectRequest::setIcon(const std::string& icon)
{
	icon_ = icon;
	setBodyParameter("Icon", icon);
}

std::string UpdateProjectRequest::getDescription()const
{
	return description_;
}

void UpdateProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateProjectRequest::getAppName()const
{
	return appName_;
}

void UpdateProjectRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string UpdateProjectRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void UpdateProjectRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

std::string UpdateProjectRequest::getName()const
{
	return name_;
}

void UpdateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateProjectRequest::getAggregateSceneCode()const
{
	return aggregateSceneCode_;
}

void UpdateProjectRequest::setAggregateSceneCode(const std::string& aggregateSceneCode)
{
	aggregateSceneCode_ = aggregateSceneCode;
	setBodyParameter("AggregateSceneCode", aggregateSceneCode);
}

