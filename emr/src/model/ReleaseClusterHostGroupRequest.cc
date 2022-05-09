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

#include <alibabacloud/emr/model/ReleaseClusterHostGroupRequest.h>

using AlibabaCloud::Emr::Model::ReleaseClusterHostGroupRequest;

ReleaseClusterHostGroupRequest::ReleaseClusterHostGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ReleaseClusterHostGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseClusterHostGroupRequest::~ReleaseClusterHostGroupRequest()
{}

long ReleaseClusterHostGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseClusterHostGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ReleaseClusterHostGroupRequest::getEnableGracefulDecommission()const
{
	return enableGracefulDecommission_;
}

void ReleaseClusterHostGroupRequest::setEnableGracefulDecommission(bool enableGracefulDecommission)
{
	enableGracefulDecommission_ = enableGracefulDecommission;
	setParameter("EnableGracefulDecommission", enableGracefulDecommission ? "true" : "false");
}

std::string ReleaseClusterHostGroupRequest::getClusterId()const
{
	return clusterId_;
}

void ReleaseClusterHostGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ReleaseClusterHostGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseClusterHostGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReleaseClusterHostGroupRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseClusterHostGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReleaseClusterHostGroupRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ReleaseClusterHostGroupRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::string ReleaseClusterHostGroupRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void ReleaseClusterHostGroupRequest::setInstanceIdList(const std::string& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	setParameter("InstanceIdList", instanceIdList);
}

int ReleaseClusterHostGroupRequest::getReleaseNumber()const
{
	return releaseNumber_;
}

void ReleaseClusterHostGroupRequest::setReleaseNumber(int releaseNumber)
{
	releaseNumber_ = releaseNumber;
	setParameter("ReleaseNumber", std::to_string(releaseNumber));
}

int ReleaseClusterHostGroupRequest::getDecommissionTimeout()const
{
	return decommissionTimeout_;
}

void ReleaseClusterHostGroupRequest::setDecommissionTimeout(int decommissionTimeout)
{
	decommissionTimeout_ = decommissionTimeout;
	setParameter("DecommissionTimeout", std::to_string(decommissionTimeout));
}

