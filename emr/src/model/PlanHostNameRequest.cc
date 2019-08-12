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

#include <alibabacloud/emr/model/PlanHostNameRequest.h>

using AlibabaCloud::Emr::Model::PlanHostNameRequest;

PlanHostNameRequest::PlanHostNameRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PlanHostName")
{}

PlanHostNameRequest::~PlanHostNameRequest()
{}

long PlanHostNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PlanHostNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string PlanHostNameRequest::getRegionId()const
{
	return regionId_;
}

void PlanHostNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::vector<PlanHostNameRequest::HostGroup> PlanHostNameRequest::getHostGroup()const
{
	return hostGroup_;
}

void PlanHostNameRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	int i = 0;
	for(int i = 0; i!= hostGroup.size(); i++)	{
		auto obj = hostGroup.at(i);
		std::string str ="HostGroup."+ std::to_string(i);
		setCoreParameter(str + ".GroupType", std::to_string(obj.groupType));
		setCoreParameter(str + ".GroupName", std::to_string(obj.groupName));
	}
}

std::vector<PlanHostNameRequest::HostInfo> PlanHostNameRequest::getHostInfo()const
{
	return hostInfo_;
}

void PlanHostNameRequest::setHostInfo(const std::vector<HostInfo>& hostInfo)
{
	hostInfo_ = hostInfo;
	int i = 0;
	for(int i = 0; i!= hostInfo.size(); i++)	{
		auto obj = hostInfo.at(i);
		std::string str ="HostInfo."+ std::to_string(i);
		setCoreParameter(str + ".HpHostBizId", std::to_string(obj.hpHostBizId));
		setCoreParameter(str + ".HostGroupName", std::to_string(obj.hostGroupName));
	}
}

std::string PlanHostNameRequest::getClusterId()const
{
	return clusterId_;
}

void PlanHostNameRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string PlanHostNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PlanHostNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

