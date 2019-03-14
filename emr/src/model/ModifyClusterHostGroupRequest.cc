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

#include <alibabacloud/emr/model/ModifyClusterHostGroupRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterHostGroupRequest;

ModifyClusterHostGroupRequest::ModifyClusterHostGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterHostGroup")
{}

ModifyClusterHostGroupRequest::~ModifyClusterHostGroupRequest()
{}

std::string ModifyClusterHostGroupRequest::getVswitchId()const
{
	return vswitchId_;
}

void ModifyClusterHostGroupRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
}

long ModifyClusterHostGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterHostGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterHostGroupRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterHostGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClusterHostGroupRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ModifyClusterHostGroupRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::string ModifyClusterHostGroupRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyClusterHostGroupRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string ModifyClusterHostGroupRequest::getComment()const
{
	return comment_;
}

void ModifyClusterHostGroupRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

std::string ModifyClusterHostGroupRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterHostGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyClusterHostGroupRequest::getHostGroupName()const
{
	return hostGroupName_;
}

void ModifyClusterHostGroupRequest::setHostGroupName(const std::string& hostGroupName)
{
	hostGroupName_ = hostGroupName;
	setParameter("HostGroupName", hostGroupName);
}

std::string ModifyClusterHostGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterHostGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

