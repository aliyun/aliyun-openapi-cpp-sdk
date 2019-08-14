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

#include <alibabacloud/cms/model/UpdateMyGroupsRequest.h>

using AlibabaCloud::Cms::Model::UpdateMyGroupsRequest;

UpdateMyGroupsRequest::UpdateMyGroupsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "UpdateMyGroups")
{}

UpdateMyGroupsRequest::~UpdateMyGroupsRequest()
{}

std::string UpdateMyGroupsRequest::getContactGroups()const
{
	return contactGroups_;
}

void UpdateMyGroupsRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setCoreParameter("ContactGroups", contactGroups);
}

std::string UpdateMyGroupsRequest::getGroupId()const
{
	return groupId_;
}

void UpdateMyGroupsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

long UpdateMyGroupsRequest::getServiceId()const
{
	return serviceId_;
}

void UpdateMyGroupsRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setCoreParameter("ServiceId", std::to_string(serviceId));
}

std::string UpdateMyGroupsRequest::getType()const
{
	return type_;
}

void UpdateMyGroupsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string UpdateMyGroupsRequest::getGroupName()const
{
	return groupName_;
}

void UpdateMyGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string UpdateMyGroupsRequest::getBindUrls()const
{
	return bindUrls_;
}

void UpdateMyGroupsRequest::setBindUrls(const std::string& bindUrls)
{
	bindUrls_ = bindUrls;
	setCoreParameter("BindUrls", bindUrls);
}

