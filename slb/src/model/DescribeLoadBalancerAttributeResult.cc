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

#include <alibabacloud/slb/model/DescribeLoadBalancerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerAttributeResult::DescribeLoadBalancerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerAttributeResult::DescribeLoadBalancerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerAttributeResult::~DescribeLoadBalancerAttributeResult()
{}

void DescribeLoadBalancerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenerPortsAndProtocal = value["ListenerPortsAndProtocal"]["ListenerPortAndProtocal"];
	for (auto value : allListenerPortsAndProtocal)
	{
		ListenerPortAndProtocal listenerPortsAndProtocalObject;
		if(!value["ListenerPort"].isNull())
			listenerPortsAndProtocalObject.listenerPort = std::stoi(value["ListenerPort"].asString());
		if(!value["ListenerProtocal"].isNull())
			listenerPortsAndProtocalObject.listenerProtocal = value["ListenerProtocal"].asString();
		listenerPortsAndProtocal_.push_back(listenerPortsAndProtocalObject);
	}
	auto allListenerPortsAndProtocol = value["ListenerPortsAndProtocol"]["ListenerPortAndProtocol"];
	for (auto value : allListenerPortsAndProtocol)
	{
		ListenerPortAndProtocol listenerPortsAndProtocolObject;
		if(!value["ListenerPort"].isNull())
			listenerPortsAndProtocolObject.listenerPort = std::stoi(value["ListenerPort"].asString());
		if(!value["ListenerProtocol"].isNull())
			listenerPortsAndProtocolObject.listenerProtocol = value["ListenerProtocol"].asString();
		if(!value["ListenerForward"].isNull())
			listenerPortsAndProtocolObject.listenerForward = value["ListenerForward"].asString();
		if(!value["ForwardPort"].isNull())
			listenerPortsAndProtocolObject.forwardPort = std::stoi(value["ForwardPort"].asString());
		if(!value["Description"].isNull())
			listenerPortsAndProtocolObject.description = value["Description"].asString();
		listenerPortsAndProtocol_.push_back(listenerPortsAndProtocolObject);
	}
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServersObject;
		if(!value["ServerId"].isNull())
			backendServersObject.serverId = value["ServerId"].asString();
		if(!value["Weight"].isNull())
			backendServersObject.weight = std::stoi(value["Weight"].asString());
		if(!value["Type"].isNull())
			backendServersObject.type = value["Type"].asString();
		if(!value["ServerIp"].isNull())
			backendServersObject.serverIp = value["ServerIp"].asString();
		if(!value["VpcId"].isNull())
			backendServersObject.vpcId = value["VpcId"].asString();
		if(!value["Description"].isNull())
			backendServersObject.description = value["Description"].asString();
		backendServers_.push_back(backendServersObject);
	}
	auto allListenerPorts = value["ListenerPorts"]["ListenerPort"];
	for (const auto &item : allListenerPorts)
		listenerPorts_.push_back(item.asString());
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["LoadBalancerStatus"].isNull())
		loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["RegionIdAlias"].isNull())
		regionIdAlias_ = value["RegionIdAlias"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["AddressType"].isNull())
		addressType_ = value["AddressType"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["AutoReleaseTime"].isNull())
		autoReleaseTime_ = std::stol(value["AutoReleaseTime"].asString());
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["LoadBalancerSpec"].isNull())
		loadBalancerSpec_ = value["LoadBalancerSpec"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimeStamp"].isNull())
		createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["EndTimeStamp"].isNull())
		endTimeStamp_ = std::stol(value["EndTimeStamp"].asString());
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["MasterZoneId"].isNull())
		masterZoneId_ = value["MasterZoneId"].asString();
	if(!value["SlaveZoneId"].isNull())
		slaveZoneId_ = value["SlaveZoneId"].asString();
	if(!value["AddressIPVersion"].isNull())
		addressIPVersion_ = value["AddressIPVersion"].asString();
	if(!value["CloudType"].isNull())
		cloudType_ = value["CloudType"].asString();
	if(!value["RenewalDuration"].isNull())
		renewalDuration_ = std::stoi(value["RenewalDuration"].asString());
	if(!value["RenewalStatus"].isNull())
		renewalStatus_ = value["RenewalStatus"].asString();
	if(!value["RenewalCycUnit"].isNull())
		renewalCycUnit_ = value["RenewalCycUnit"].asString();
	if(!value["HasReservedInfo"].isNull())
		hasReservedInfo_ = value["HasReservedInfo"].asString();
	if(!value["ReservedInfoOrderType"].isNull())
		reservedInfoOrderType_ = value["ReservedInfoOrderType"].asString();
	if(!value["ReservedInfoInternetChargeType"].isNull())
		reservedInfoInternetChargeType_ = value["ReservedInfoInternetChargeType"].asString();
	if(!value["ReservedInfoBandwidth"].isNull())
		reservedInfoBandwidth_ = value["ReservedInfoBandwidth"].asString();
	if(!value["ReservedInfoActiveTime"].isNull())
		reservedInfoActiveTime_ = value["ReservedInfoActiveTime"].asString();
	if(!value["DeleteProtection"].isNull())
		deleteProtection_ = value["DeleteProtection"].asString();
	if(!value["CloudInstanceType"].isNull())
		cloudInstanceType_ = value["CloudInstanceType"].asString();
	if(!value["CloudInstanceId"].isNull())
		cloudInstanceId_ = value["CloudInstanceId"].asString();
	if(!value["TunnelType"].isNull())
		tunnelType_ = value["TunnelType"].asString();
	if(!value["CloudInstanceUid"].isNull())
		cloudInstanceUid_ = std::stol(value["CloudInstanceUid"].asString());

}

int DescribeLoadBalancerAttributeResult::getRenewalDuration()const
{
	return renewalDuration_;
}

std::vector<DescribeLoadBalancerAttributeResult::ListenerPortAndProtocal> DescribeLoadBalancerAttributeResult::getListenerPortsAndProtocal()const
{
	return listenerPortsAndProtocal_;
}

std::string DescribeLoadBalancerAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeLoadBalancerAttributeResult::getAddress()const
{
	return address_;
}

std::string DescribeLoadBalancerAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLoadBalancerAttributeResult::getAddressIPVersion()const
{
	return addressIPVersion_;
}

std::vector<DescribeLoadBalancerAttributeResult::ListenerPortAndProtocol> DescribeLoadBalancerAttributeResult::getListenerPortsAndProtocol()const
{
	return listenerPortsAndProtocol_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::vector<DescribeLoadBalancerAttributeResult::BackendServer> DescribeLoadBalancerAttributeResult::getBackendServers()const
{
	return backendServers_;
}

std::string DescribeLoadBalancerAttributeResult::getHasReservedInfo()const
{
	return hasReservedInfo_;
}

std::string DescribeLoadBalancerAttributeResult::getReservedInfoBandwidth()const
{
	return reservedInfoBandwidth_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerSpec()const
{
	return loadBalancerSpec_;
}

std::string DescribeLoadBalancerAttributeResult::getNetworkType()const
{
	return networkType_;
}

int DescribeLoadBalancerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::vector<std::string> DescribeLoadBalancerAttributeResult::getListenerPorts()const
{
	return listenerPorts_;
}

std::string DescribeLoadBalancerAttributeResult::getMasterZoneId()const
{
	return masterZoneId_;
}

std::string DescribeLoadBalancerAttributeResult::getTunnelType()const
{
	return tunnelType_;
}

std::string DescribeLoadBalancerAttributeResult::getCloudType()const
{
	return cloudType_;
}

std::string DescribeLoadBalancerAttributeResult::getCloudInstanceType()const
{
	return cloudInstanceType_;
}

std::string DescribeLoadBalancerAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeLoadBalancerAttributeResult::getRenewalStatus()const
{
	return renewalStatus_;
}

long DescribeLoadBalancerAttributeResult::getCloudInstanceUid()const
{
	return cloudInstanceUid_;
}

std::string DescribeLoadBalancerAttributeResult::getRenewalCycUnit()const
{
	return renewalCycUnit_;
}

std::string DescribeLoadBalancerAttributeResult::getPayType()const
{
	return payType_;
}

std::string DescribeLoadBalancerAttributeResult::getReservedInfoActiveTime()const
{
	return reservedInfoActiveTime_;
}

std::string DescribeLoadBalancerAttributeResult::getCloudInstanceId()const
{
	return cloudInstanceId_;
}

std::string DescribeLoadBalancerAttributeResult::getSlaveZoneId()const
{
	return slaveZoneId_;
}

std::string DescribeLoadBalancerAttributeResult::getInternetChargeType()const
{
	return internetChargeType_;
}

std::string DescribeLoadBalancerAttributeResult::getRegionIdAlias()const
{
	return regionIdAlias_;
}

std::string DescribeLoadBalancerAttributeResult::getReservedInfoInternetChargeType()const
{
	return reservedInfoInternetChargeType_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

std::string DescribeLoadBalancerAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeLoadBalancerAttributeResult::getDeleteProtection()const
{
	return deleteProtection_;
}

long DescribeLoadBalancerAttributeResult::getEndTimeStamp()const
{
	return endTimeStamp_;
}

std::string DescribeLoadBalancerAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeLoadBalancerAttributeResult::getReservedInfoOrderType()const
{
	return reservedInfoOrderType_;
}

std::string DescribeLoadBalancerAttributeResult::getAddressType()const
{
	return addressType_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

long DescribeLoadBalancerAttributeResult::getCreateTimeStamp()const
{
	return createTimeStamp_;
}

long DescribeLoadBalancerAttributeResult::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

