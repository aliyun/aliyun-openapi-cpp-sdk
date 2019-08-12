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

#include <alibabacloud/emr/model/CreateClusterHostGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateClusterHostGroupRequest;

CreateClusterHostGroupRequest::CreateClusterHostGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateClusterHostGroup")
{}

CreateClusterHostGroupRequest::~CreateClusterHostGroupRequest()
{}

long CreateClusterHostGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterHostGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateClusterHostGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterHostGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateClusterHostGroupRequest::getComment()const
{
	return comment_;
}

void CreateClusterHostGroupRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", comment);
}

std::string CreateClusterHostGroupRequest::getClusterId()const
{
	return clusterId_;
}

void CreateClusterHostGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateClusterHostGroupRequest::getHostGroupName()const
{
	return hostGroupName_;
}

void CreateClusterHostGroupRequest::setHostGroupName(const std::string& hostGroupName)
{
	hostGroupName_ = hostGroupName;
	setCoreParameter("HostGroupName", hostGroupName);
}

std::string CreateClusterHostGroupRequest::getHostGroupType()const
{
	return hostGroupType_;
}

void CreateClusterHostGroupRequest::setHostGroupType(const std::string& hostGroupType)
{
	hostGroupType_ = hostGroupType;
	setCoreParameter("HostGroupType", hostGroupType);
}

std::string CreateClusterHostGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterHostGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

