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
	setParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

bool ResizeClusterV2Request::getAutoPayOrder()const
{
	return autoPayOrder_;
}

void ResizeClusterV2Request::setAutoPayOrder(bool autoPayOrder)
{
	autoPayOrder_ = autoPayOrder;
	setParameter("AutoPayOrder", autoPayOrder ? "true" : "false");
}

std::string ResizeClusterV2Request::getClusterId()const
{
	return clusterId_;
}

void ResizeClusterV2Request::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ResizeClusterV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResizeClusterV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ResizeClusterV2Request::getVswitchId()const
{
	return vswitchId_;
}

void ResizeClusterV2Request::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
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
		std::string hostComponentInfoObjStr = "HostComponentInfo." + std::to_string(dep1 + 1);
		setParameter(hostComponentInfoObjStr + ".HostName", hostComponentInfoObj.hostName);
		for(int dep2 = 0; dep2!= hostComponentInfoObj.componentNameList.size(); dep2++) {
			setParameter(hostComponentInfoObjStr + ".ComponentNameList."+ std::to_string(dep2), hostComponentInfoObj.componentNameList.at(dep2));
		}
		setParameter(hostComponentInfoObjStr + ".ServiceName", hostComponentInfoObj.serviceName);
	}
}

std::string ResizeClusterV2Request::getClickhouseConf()const
{
	return clickhouseConf_;
}

void ResizeClusterV2Request::setClickhouseConf(const std::string& clickhouseConf)
{
	clickhouseConf_ = clickhouseConf;
	setParameter("ClickhouseConf", clickhouseConf);
}

std::string ResizeClusterV2Request::getRegionId()const
{
	return regionId_;
}

void ResizeClusterV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
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
		std::string hostGroupObjStr = "HostGroup." + std::to_string(dep1 + 1);
		setParameter(hostGroupObjStr + ".Period", std::to_string(hostGroupObj.period));
		setParameter(hostGroupObjStr + ".SysDiskCapacity", std::to_string(hostGroupObj.sysDiskCapacity));
		setParameter(hostGroupObjStr + ".HostKeyPairName", hostGroupObj.hostKeyPairName);
		setParameter(hostGroupObjStr + ".PrivatePoolOptionsId", hostGroupObj.privatePoolOptionsId);
		setParameter(hostGroupObjStr + ".DiskCapacity", std::to_string(hostGroupObj.diskCapacity));
		setParameter(hostGroupObjStr + ".SysDiskType", hostGroupObj.sysDiskType);
		setParameter(hostGroupObjStr + ".ClusterId", hostGroupObj.clusterId);
		setParameter(hostGroupObjStr + ".DiskType", hostGroupObj.diskType);
		setParameter(hostGroupObjStr + ".HostGroupName", hostGroupObj.hostGroupName);
		setParameter(hostGroupObjStr + ".VswitchId", std::to_string(hostGroupObj.vswitchId));
		setParameter(hostGroupObjStr + ".DiskCount", std::to_string(hostGroupObj.diskCount));
		setParameter(hostGroupObjStr + ".AutoRenew", hostGroupObj.autoRenew ? "true" : "false");
		setParameter(hostGroupObjStr + ".HostGroupId", hostGroupObj.hostGroupId);
		setParameter(hostGroupObjStr + ".NodeCount", std::to_string(hostGroupObj.nodeCount));
		setParameter(hostGroupObjStr + ".InstanceType", hostGroupObj.instanceType);
		setParameter(hostGroupObjStr + ".Comment", hostGroupObj.comment);
		setParameter(hostGroupObjStr + ".ChargeType", hostGroupObj.chargeType);
		setParameter(hostGroupObjStr + ".CreateType", hostGroupObj.createType);
		setParameter(hostGroupObjStr + ".HostPassword", hostGroupObj.hostPassword);
		setParameter(hostGroupObjStr + ".HostGroupType", hostGroupObj.hostGroupType);
		setParameter(hostGroupObjStr + ".PrivatePoolOptionsMatchCriteria", hostGroupObj.privatePoolOptionsMatchCriteria);
	}
}

std::vector<ResizeClusterV2Request::PromotionInfo> ResizeClusterV2Request::getPromotionInfo()const
{
	return promotionInfo_;
}

void ResizeClusterV2Request::setPromotionInfo(const std::vector<PromotionInfo>& promotionInfo)
{
	promotionInfo_ = promotionInfo;
	for(int dep1 = 0; dep1!= promotionInfo.size(); dep1++) {
		auto promotionInfoObj = promotionInfo.at(dep1);
		std::string promotionInfoObjStr = "PromotionInfo." + std::to_string(dep1 + 1);
		setParameter(promotionInfoObjStr + ".PromotionOptionCode", promotionInfoObj.promotionOptionCode);
		setParameter(promotionInfoObjStr + ".ProductCode", promotionInfoObj.productCode);
		setParameter(promotionInfoObjStr + ".PromotionOptionNo", promotionInfoObj.promotionOptionNo);
	}
}

