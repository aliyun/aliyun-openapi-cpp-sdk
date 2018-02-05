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

#include <alibabacloud/cms/model/CreateMyGroupsRequest.h>

using AlibabaCloud::Cms::Model::CreateMyGroupsRequest;

CreateMyGroupsRequest::CreateMyGroupsRequest() :
	RpcServiceRequest("cms", "2017-03-01", "CreateMyGroups")
{}

CreateMyGroupsRequest::~CreateMyGroupsRequest()
{}

std::string CreateMyGroupsRequest::getContactGroups()const
{
	return contactGroups_;
}

void CreateMyGroupsRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setParameter("ContactGroups", contactGroups);
}

long CreateMyGroupsRequest::getServiceId()const
{
	return serviceId_;
}

void CreateMyGroupsRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", std::to_string(serviceId));
}

std::string CreateMyGroupsRequest::getType()const
{
	return type_;
}

void CreateMyGroupsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateMyGroupsRequest::getGroupName()const
{
	return groupName_;
}

void CreateMyGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string CreateMyGroupsRequest::getBindUrl()const
{
	return bindUrl_;
}

void CreateMyGroupsRequest::setBindUrl(const std::string& bindUrl)
{
	bindUrl_ = bindUrl;
	setParameter("BindUrl", bindUrl);
}

