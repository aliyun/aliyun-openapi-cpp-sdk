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
{
	setMethod(HttpRequest::Method::Post);
}

ResizeClusterV2Request::~ResizeClusterV2Request()
{}

bool ResizeClusterV2Request::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ResizeClusterV2Request::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

bool ResizeClusterV2Request::getAutoPayOrder()const
{
	return autoPayOrder_;
}

void ResizeClusterV2Request::setAutoPayOrder(bool autoPayOrder)
{
	autoPayOrder_ = autoPayOrder;
	setCoreParameter("AutoPayOrder", autoPayOrder ? "true" : "false");
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

std::string ResizeClusterV2Request::getVswitchId()const
{
	return vswitchId_;
}

void ResizeClusterV2Request::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setCoreParameter("VswitchId", vswitchId);
}

std::vector<ResizeClusterV2Request::HostComponentInfo> ResizeClusterV2Request::getHostComponentInfo()const
{
	return hostComponentInfo_;
}

void ResizeClusterV2Request::setHostComponentInfo(const std::vector<HostComponentInfo>& hostComponentInfo)
{
	hostComponentInfo_ = hostComponentInfo;
	for(int dep1 = 0; dep1!= hostComponentInfo.size(); dep1++) {
		auto hostComponentInfoObj = hostComponentInfo.at(dep1);
		std::string hostComponentInfoObjStr = "HostComponentInfo." + std::to_string(dep1);
		setCoreParameter(hostComponentInfoObjStr + ".HostName", hostComponentInfoObj.hostName);
		for(int dep2 = 0; dep2!= componentNameList.size(); dep2++)
			setCoreParameter(hostComponentInfoObjStr + ".ComponentNameList."+ std::to_string(dep2), hostComponentInfoObj.componentNameList.at(dep2));
		setCoreParameter(hostComponentInfoObjStr + ".ServiceName", hostComponentInfoObj.serviceName);
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
	for(int dep1 = 0; dep1!= hostGroup.size(); dep1++) {
		auto hostGroupObj = hostGroup.at(dep1);
		std::string hostGroupObjStr = "HostGroup." + std::to_string(dep1);
		setCoreParameter(hostGroupObjStr + ".Period", std::to_string(hostGroupObj.period));
		setCoreParameter(hostGroupObjStr + ".SysDiskCapacity", std::to_string(hostGroupObj.sysDiskCapacity));
		setCoreParameter(hostGroupObjStr + ".HostKeyPairName", hostGroupObj.hostKeyPairName);
		setCoreParameter(hostGroupObjStr + ".DiskCapacity", std::to_string(hostGroupObj.diskCapacity));
		setCoreParameter(hostGroupObjStr + ".SysDiskType", hostGroupObj.sysDiskType);
		setCoreParameter(hostGroupObjStr + ".ClusterId", hostGroupObj.clusterId);
		setCoreParameter(hostGroupObjStr + ".DiskType", hostGroupObj.diskType);
		setCoreParameter(hostGroupObjStr + ".HostGroupName", hostGroupObj.hostGroupName);
		setCoreParameter(hostGroupObjStr + ".VswitchId", std::to_string(hostGroupObj.vswitchId));
		setCoreParameter(hostGroupObjStr + ".DiskCount", std::to_string(hostGroupObj.diskCount));
		setCoreParameter(hostGroupObjStr + ".AutoRenew", hostGroupObj.autoRenew ? "true" : "false");
		setCoreParameter(hostGroupObjStr + ".HostGroupId", hostGroupObj.hostGroupId);
		setCoreParameter(hostGroupObjStr + ".NodeCount", std::to_string(hostGroupObj.nodeCount));
		setCoreParameter(hostGroupObjStr + ".InstanceType", hostGroupObj.instanceType);
		setCoreParameter(hostGroupObjStr + ".Comment", hostGroupObj.comment);
		setCoreParameter(hostGroupObjStr + ".ChargeType", hostGroupObj.chargeType);
		setCoreParameter(hostGroupObjStr + ".CreateType", hostGroupObj.createType);
		setCoreParameter(hostGroupObjStr + ".HostPassword", hostGroupObj.hostPassword);
		setCoreParameter(hostGroupObjStr + ".HostGroupType", hostGroupObj.hostGroupType);
	}
}

