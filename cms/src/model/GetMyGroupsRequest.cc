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

#include <alibabacloud/cms/model/GetMyGroupsRequest.h>

using AlibabaCloud::Cms::Model::GetMyGroupsRequest;

GetMyGroupsRequest::GetMyGroupsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "GetMyGroups")
{}

GetMyGroupsRequest::~GetMyGroupsRequest()
{}

bool GetMyGroupsRequest::getSelectContactGroups()const
{
	return selectContactGroups_;
}

void GetMyGroupsRequest::setSelectContactGroups(bool selectContactGroups)
{
	selectContactGroups_ = selectContactGroups;
	setCoreParameter("SelectContactGroups", selectContactGroups ? "true" : "false");
}

std::string GetMyGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void GetMyGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

long GetMyGroupsRequest::getGroupId()const
{
	return groupId_;
}

void GetMyGroupsRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string GetMyGroupsRequest::getType()const
{
	return type_;
}

void GetMyGroupsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string GetMyGroupsRequest::getGroupName()const
{
	return groupName_;
}

void GetMyGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string GetMyGroupsRequest::getBindUrl()const
{
	return bindUrl_;
}

void GetMyGroupsRequest::setBindUrl(const std::string& bindUrl)
{
	bindUrl_ = bindUrl;
	setCoreParameter("BindUrl", bindUrl);
}

