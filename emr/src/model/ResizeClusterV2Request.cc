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

#include <alibabacloud/emr/model/ResizeClusterV2Request.h>

using AlibabaCloud::Emr::Model::ResizeClusterV2Request;

ResizeClusterV2Request::ResizeClusterV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "ResizeClusterV2")
{}

ResizeClusterV2Request::~ResizeClusterV2Request()
{}

std::string ResizeClusterV2Request::getVswitchId()const
{
	return vswitchId_;
}

void ResizeClusterV2Request::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setCoreParameter("VswitchId", vswitchId);
}

bool ResizeClusterV2Request::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ResizeClusterV2Request::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp);
}

bool ResizeClusterV2Request::getAutoPayOrder()const
{
	return autoPayOrder_;
}

void ResizeClusterV2Request::setAutoPayOrder(bool autoPayOrder)
{
	autoPayOrder_ = autoPayOrder;
	setCoreParameter("AutoPayOrder", autoPayOrder);
}

std::vector<ResizeClusterV2Request::HostComponentInfo> ResizeClusterV2Request::getHostComponentInfo()const
{
	return hostComponentInfo_;
}

void ResizeClusterV2Request::setHostComponentInfo(const std::vector<HostComponentInfo>& hostComponentInfo)
{
	hostComponentInfo_ = hostComponentInfo;
	int i = 0;
	for(int i = 0; i!= hostComponentInfo.size(); i++)	{
		auto obj = hostComponentInfo.at(i);
		std::string str ="HostComponentInfo."+ std::to_string(i);
		setCoreParameter(str + ".HostName", std::to_string(obj.hostName));
		for(int i = 0; i!= obj.componentNameList.size(); i++)				setCoreParameter(str + ".ComponentNameList."+ std::to_string(i), std::to_string(obj.componentNameList.at(i)));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
	}
}

std::string ResizeClusterV2Request::getRegionId()const
{
	return regionId_;
}

void ResizeClusterV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<ResizeClusterV2Request::HostGroup> ResizeClusterV2Request::getHostGroup()const
{
	return hostGroup_;
}

void ResizeClusterV2Request::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	int i = 0;
	for(int i = 0; i!= hostGroup.size(); i++)	{
		auto obj = hostGroup.at(i);
		std::string str ="HostGroup."+ std::to_string(i);
		setCoreParameter(str + ".Period", obj.period);
		setCoreParameter(str + ".SysDiskCapacity", obj.sysDiskCapacity);
		setCoreParameter(str + ".HostKeyPairName", std::to_string(obj.hostKeyPairName));
		setCoreParameter(str + ".DiskCapacity", obj.diskCapacity);
		setCoreParameter(str + ".SysDiskType", std::to_string(obj.sysDiskType));
		setCoreParameter(str + ".ClusterId", std::to_string(obj.clusterId));
		setCoreParameter(str + ".DiskType", std::to_string(obj.diskType));
		setCoreParameter(str + ".HostGroupName", std::to_string(obj.hostGroupName));
		setCoreParameter(str + ".VswitchId", obj.vswitchId);
		setCoreParameter(str + ".DiskCount", obj.diskCount);
		setCoreParameter(str + ".AutoRenew", obj.autoRenew ? "true" : "false");
		setCoreParameter(str + ".HostGroupId", std::to_string(obj.hostGroupId));
		setCoreParameter(str + ".NodeCount", obj.nodeCount);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".Comment", std::to_string(obj.comment));
		setCoreParameter(str + ".ChargeType", std::to_string(obj.chargeType));
		setCoreParameter(str + ".CreateType", std::to_string(obj.createType));
		setCoreParameter(str + ".HostPassword", std::to_string(obj.hostPassword));
		setCoreParameter(str + ".HostGroupType", std::to_string(obj.hostGroupType));
	}
}

std::string ResizeClusterV2Request::getClusterId()const
{
	return clusterId_;
}

void ResizeClusterV2Request::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ResizeClusterV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResizeClusterV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

