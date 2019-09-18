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

#include <alibabacloud/emr/model/ListUserGroupsRequest.h>

using AlibabaCloud::Emr::Model::ListUserGroupsRequest;

ListUserGroupsRequest::ListUserGroupsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListUserGroups")
{}

ListUserGroupsRequest::~ListUserGroupsRequest()
{}

long ListUserGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListUserGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListUserGroupsRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void ListUserGroupsRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setCoreParameter("FuzzyName", fuzzyName);
}

std::string ListUserGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUserGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListUserGroupsRequest::getRegionId()const
{
	return regionId_;
}

void ListUserGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

