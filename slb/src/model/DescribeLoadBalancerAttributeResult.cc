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
		ListenerPortAndProtocal listenerPortAndProtocalObject;
		listenerPortAndProtocalObject.listenerPort = std::stoi(value["ListenerPort"].asString());
		listenerPortAndProtocalObject.listenerProtocal = value["ListenerProtocal"].asString();
		listenerPortsAndProtocal_.push_back(listenerPortAndProtocalObject);
	}
	auto allListenerPortsAndProtocol = value["ListenerPortsAndProtocol"]["ListenerPortAndProtocol"];
	for (auto value : allListenerPortsAndProtocol)
	{
		ListenerPortAndProtocol listenerPortAndProtocolObject;
		listenerPortAndProtocolObject.listenerPort = std::stoi(value["ListenerPort"].asString());
		listenerPortAndProtocolObject.listenerProtocol = value["ListenerProtocol"].asString();
		listenerPortsAndProtocol_.push_back(listenerPortAndProtocolObject);
	}
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServerObject;
		backendServerObject.serverId = value["ServerId"].asString();
		backendServerObject.weight = std::stoi(value["Weight"].asString());
		backendServers_.push_back(backendServerObject);
	}
	auto allListenerPorts = value["ListenerPorts"]["ListenerPort"];
	for (const auto &item : allListenerPorts)
		listenerPorts_.push_back(item.asString());
	loadBalancerId_ = value["LoadBalancerId"].asString();
	resourceGroupId_ = value["ResourceGroupId"].asString();
	loadBalancerName_ = value["LoadBalancerName"].asString();
	loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	regionId_ = value["RegionId"].asString();
	regionIdAlias_ = value["RegionIdAlias"].asString();
	address_ = value["Address"].asString();
	addressType_ = value["AddressType"].asString();
	vpcId_ = value["VpcId"].asString();
	vSwitchId_ = value["VSwitchId"].asString();
	networkType_ = value["NetworkType"].asString();
	internetChargeType_ = value["InternetChargeType"].asString();
	autoReleaseTime_ = std::stol(value["AutoReleaseTime"].asString());
	bandwidth_ = std::stoi(value["Bandwidth"].asString());
	loadBalancerSpec_ = value["LoadBalancerSpec"].asString();
	createTime_ = value["CreateTime"].asString();
	createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());
	endTime_ = value["EndTime"].asString();
	endTimeStamp_ = std::stol(value["EndTimeStamp"].asString());
	payType_ = value["PayType"].asString();
	masterZoneId_ = value["MasterZoneId"].asString();
	slaveZoneId_ = value["SlaveZoneId"].asString();

}

std::string DescribeLoadBalancerAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeLoadBalancerAttributeResult::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
}

std::string DescribeLoadBalancerAttributeResult::getAddress()const
{
	return address_;
}

void DescribeLoadBalancerAttributeResult::setAddress(const std::string& address)
{
	address_ = address;
}

std::string DescribeLoadBalancerAttributeResult::getEndTime()const
{
	return endTime_;
}

void DescribeLoadBalancerAttributeResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeLoadBalancerAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeLoadBalancerAttributeResult::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
}

std::string DescribeLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

void DescribeLoadBalancerAttributeResult::setCreateTime(const std::string& createTime)
{
	createTime_ = createTime;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancerAttributeResult::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
}

std::string DescribeLoadBalancerAttributeResult::getPayType()const
{
	return payType_;
}

void DescribeLoadBalancerAttributeResult::setPayType(const std::string& payType)
{
	payType_ = payType;
}

std::string DescribeLoadBalancerAttributeResult::getSlaveZoneId()const
{
	return slaveZoneId_;
}

void DescribeLoadBalancerAttributeResult::setSlaveZoneId(const std::string& slaveZoneId)
{
	slaveZoneId_ = slaveZoneId;
}

std::string DescribeLoadBalancerAttributeResult::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeLoadBalancerAttributeResult::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerSpec()const
{
	return loadBalancerSpec_;
}

void DescribeLoadBalancerAttributeResult::setLoadBalancerSpec(const std::string& loadBalancerSpec)
{
	loadBalancerSpec_ = loadBalancerSpec;
}

std::string DescribeLoadBalancerAttributeResult::getRegionIdAlias()const
{
	return regionIdAlias_;
}

void DescribeLoadBalancerAttributeResult::setRegionIdAlias(const std::string& regionIdAlias)
{
	regionIdAlias_ = regionIdAlias;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void DescribeLoadBalancerAttributeResult::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
}

std::string DescribeLoadBalancerAttributeResult::getVpcId()const
{
	return vpcId_;
}

void DescribeLoadBalancerAttributeResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

long DescribeLoadBalancerAttributeResult::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void DescribeLoadBalancerAttributeResult::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
}

std::string DescribeLoadBalancerAttributeResult::getNetworkType()const
{
	return networkType_;
}

void DescribeLoadBalancerAttributeResult::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
}

int DescribeLoadBalancerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

void DescribeLoadBalancerAttributeResult::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
}

std::string DescribeLoadBalancerAttributeResult::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancerAttributeResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

std::string DescribeLoadBalancerAttributeResult::getAddressType()const
{
	return addressType_;
}

void DescribeLoadBalancerAttributeResult::setAddressType(const std::string& addressType)
{
	addressType_ = addressType;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

void DescribeLoadBalancerAttributeResult::setLoadBalancerStatus(const std::string& loadBalancerStatus)
{
	loadBalancerStatus_ = loadBalancerStatus;
}

std::vector<std::string> DescribeLoadBalancerAttributeResult::getListenerPorts()const
{
	return listenerPorts_;
}

void DescribeLoadBalancerAttributeResult::setListenerPorts(const std::vector<std::string>& listenerPorts)
{
	listenerPorts_ = listenerPorts;
}

long DescribeLoadBalancerAttributeResult::getCreateTimeStamp()const
{
	return createTimeStamp_;
}

void DescribeLoadBalancerAttributeResult::setCreateTimeStamp(long createTimeStamp)
{
	createTimeStamp_ = createTimeStamp;
}

std::string DescribeLoadBalancerAttributeResult::getMasterZoneId()const
{
	return masterZoneId_;
}

void DescribeLoadBalancerAttributeResult::setMasterZoneId(const std::string& masterZoneId)
{
	masterZoneId_ = masterZoneId;
}

long DescribeLoadBalancerAttributeResult::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void DescribeLoadBalancerAttributeResult::setAutoReleaseTime(long autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
}

