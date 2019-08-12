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

#include <alibabacloud/emr/model/DeleteAlertDingDingGroupsRequest.h>

using AlibabaCloud::Emr::Model::DeleteAlertDingDingGroupsRequest;

DeleteAlertDingDingGroupsRequest::DeleteAlertDingDingGroupsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteAlertDingDingGroups")
{}

DeleteAlertDingDingGroupsRequest::~DeleteAlertDingDingGroupsRequest()
{}

long DeleteAlertDingDingGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteAlertDingDingGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteAlertDingDingGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAlertDingDingGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteAlertDingDingGroupsRequest::getIds()const
{
	return ids_;
}

void DeleteAlertDingDingGroupsRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setCoreParameter("Ids", std::to_string(ids));
}

std::string DeleteAlertDingDingGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteAlertDingDingGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

