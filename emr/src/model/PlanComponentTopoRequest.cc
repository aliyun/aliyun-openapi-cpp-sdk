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

#include <alibabacloud/emr/model/PlanComponentTopoRequest.h>

using AlibabaCloud::Emr::Model::PlanComponentTopoRequest;

PlanComponentTopoRequest::PlanComponentTopoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PlanComponentTopo")
{}

PlanComponentTopoRequest::~PlanComponentTopoRequest()
{}

std::string PlanComponentTopoRequest::getClusterType()const
{
	return clusterType_;
}

void PlanComponentTopoRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", std::to_string(clusterType));
}

long PlanComponentTopoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PlanComponentTopoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string PlanComponentTopoRequest::getRegionId()const
{
	return regionId_;
}

void PlanComponentTopoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::vector<PlanComponentTopoRequest::HostGroup> PlanComponentTopoRequest::getHostGroup()const
{
	return hostGroup_;
}

void PlanComponentTopoRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	int i = 0;
	for(int i = 0; i!= hostGroup.size(); i++)	{
		auto obj = hostGroup.at(i);
		std::string str ="HostGroup."+ std::to_string(i);
		setCoreParameter(str + ".GroupType", std::to_string(obj.groupType));
		setCoreParameter(str + ".NodeCount", obj.nodeCount);
		setCoreParameter(str + ".GroupName", std::to_string(obj.groupName));
	}
}

std::vector<PlanComponentTopoRequest::HostInfo> PlanComponentTopoRequest::getHostInfo()const
{
	return hostInfo_;
}

void PlanComponentTopoRequest::setHostInfo(const std::vector<HostInfo>& hostInfo)
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

std::string PlanComponentTopoRequest::getStackName()const
{
	return stackName_;
}

void PlanComponentTopoRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", std::to_string(stackName));
}

std::string PlanComponentTopoRequest::getClusterId()const
{
	return clusterId_;
}

void PlanComponentTopoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string PlanComponentTopoRequest::getStackVersion()const
{
	return stackVersion_;
}

void PlanComponentTopoRequest::setStackVersion(const std::string& stackVersion)
{
	stackVersion_ = stackVersion;
	setCoreParameter("StackVersion", std::to_string(stackVersion));
}

std::vector<PlanComponentTopoRequest::ServiceInfo> PlanComponentTopoRequest::getServiceInfo()const
{
	return serviceInfo_;
}

void PlanComponentTopoRequest::setServiceInfo(const std::vector<ServiceInfo>& serviceInfo)
{
	serviceInfo_ = serviceInfo;
	int i = 0;
	for(int i = 0; i!= serviceInfo.size(); i++)	{
		auto obj = serviceInfo.at(i);
		std::string str ="ServiceInfo."+ std::to_string(i);
		setCoreParameter(str + ".ServiceEcmVersion", std::to_string(obj.serviceEcmVersion));
		setCoreParameter(str + ".ServiceVersion", std::to_string(obj.serviceVersion));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
	}
}

std::string PlanComponentTopoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PlanComponentTopoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

