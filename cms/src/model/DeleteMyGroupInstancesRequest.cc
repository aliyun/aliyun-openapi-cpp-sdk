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

#include <alibabacloud/cms/model/DeleteMyGroupInstancesRequest.h>

using AlibabaCloud::Cms::Model::DeleteMyGroupInstancesRequest;

DeleteMyGroupInstancesRequest::DeleteMyGroupInstancesRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DeleteMyGroupInstances")
{}

DeleteMyGroupInstancesRequest::~DeleteMyGroupInstancesRequest()
{}

std::string DeleteMyGroupInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DeleteMyGroupInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string DeleteMyGroupInstancesRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void DeleteMyGroupInstancesRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setCoreParameter("InstanceIdList", instanceIdList);
}

long DeleteMyGroupInstancesRequest::getGroupId()const
{
	return groupId_;
}

void DeleteMyGroupInstancesRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DeleteMyGroupInstancesRequest::getCategory()const
{
	return category_;
}

void DeleteMyGroupInstancesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

