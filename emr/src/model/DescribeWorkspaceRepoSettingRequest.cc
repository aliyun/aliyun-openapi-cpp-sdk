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

#include <alibabacloud/emr/model/DescribeWorkspaceRepoSettingRequest.h>

using AlibabaCloud::Emr::Model::DescribeWorkspaceRepoSettingRequest;

DescribeWorkspaceRepoSettingRequest::DescribeWorkspaceRepoSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeWorkspaceRepoSetting")
{}

DescribeWorkspaceRepoSettingRequest::~DescribeWorkspaceRepoSettingRequest()
{}

long DescribeWorkspaceRepoSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeWorkspaceRepoSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeWorkspaceRepoSettingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeWorkspaceRepoSettingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeWorkspaceRepoSettingRequest::getRegionId()const
{
	return regionId_;
}

void DescribeWorkspaceRepoSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeWorkspaceRepoSettingRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void DescribeWorkspaceRepoSettingRequest::setWorkspaceId(const std::string& workspaceId)
{
	workspaceId_ = workspaceId;
	setCoreParameter("WorkspaceId", workspaceId);
}

