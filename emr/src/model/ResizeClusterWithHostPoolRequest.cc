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

#include <alibabacloud/emr/model/ResizeClusterWithHostPoolRequest.h>

using AlibabaCloud::Emr::Model::ResizeClusterWithHostPoolRequest;

ResizeClusterWithHostPoolRequest::ResizeClusterWithHostPoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ResizeClusterWithHostPool")
{}

ResizeClusterWithHostPoolRequest::~ResizeClusterWithHostPoolRequest()
{}

long ResizeClusterWithHostPoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResizeClusterWithHostPoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ResizeClusterWithHostPoolRequest::getRegionId()const
{
	return regionId_;
}

void ResizeClusterWithHostPoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<ResizeClusterWithHostPoolRequest::HostGroup> ResizeClusterWithHostPoolRequest::getHostGroup()const
{
	return hostGroup_;
}

void ResizeClusterWithHostPoolRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	int i = 0;
	for(int i = 0; i!= hostGroup.size(); i++)	{
		auto obj = hostGroup.at(i);
		std::string str ="HostGroup."+ std::to_string(i);
		setCoreParameter(str + ".GroupType", std::to_string(obj.groupType));
		setCoreParameter(str + ".GroupId", std::to_string(obj.groupId));
		setCoreParameter(str + ".GroupName", std::to_string(obj.groupName));
	}
}

std::vector<ResizeClusterWithHostPoolRequest::HostInfo> ResizeClusterWithHostPoolRequest::getHostInfo()const
{
	return hostInfo_;
}

void ResizeClusterWithHostPoolRequest::setHostInfo(const std::vector<HostInfo>& hostInfo)
{
	hostInfo_ = hostInfo;
	int i = 0;
	for(int i = 0; i!= hostInfo.size(); i++)	{
		auto obj = hostInfo.at(i);
		std::string str ="HostInfo."+ std::to_string(i);
		setCoreParameter(str + ".HpHostBizId", std::to_string(obj.hpHostBizId));
		setCoreParameter(str + ".HostName", std::to_string(obj.hostName));
		setCoreParameter(str + ".Role", std::to_string(obj.role));
		setCoreParameter(str + ".GroupId", std::to_string(obj.groupId));
		setCoreParameter(str + ".PrivateIp", std::to_string(obj.privateIp));
		setCoreParameter(str + ".ServiceComponentInfo", obj.serviceComponentInfo);
		setCoreParameter(str + ".HostGroupName", std::to_string(obj.hostGroupName));
		setCoreParameter(str + ".HostGroupType", std::to_string(obj.hostGroupType));
	}
}

std::string ResizeClusterWithHostPoolRequest::getClusterId()const
{
	return clusterId_;
}

void ResizeClusterWithHostPoolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ResizeClusterWithHostPoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResizeClusterWithHostPoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

