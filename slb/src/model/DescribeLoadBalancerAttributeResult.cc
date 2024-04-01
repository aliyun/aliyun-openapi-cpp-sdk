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
	auto allListenerPortsAndProtocalNode = value["ListenerPortsAndProtocal"]["ListenerPortAndProtocal"];
	for (auto valueListenerPortsAndProtocalListenerPortAndProtocal : allListenerPortsAndProtocalNode)
	{
		ListenerPortAndProtocal listenerPortsAndProtocalObject;
		if(!valueListenerPortsAndProtocalListenerPortAndProtocal["ListenerProtocal"].isNull())
			listenerPortsAndProtocalObject.listenerProtocal = valueListenerPortsAndProtocalListenerPortAndProtocal["ListenerProtocal"].asString();
		if(!valueListenerPortsAndProtocalListenerPortAndProtocal["ListenerPort"].isNull())
			listenerPortsAndProtocalObject.listenerPort = std::stoi(valueListenerPortsAndProtocalListenerPortAndProtocal["ListenerPort"].asString());
		listenerPortsAndProtocal_.push_back(listenerPortsAndProtocalObject);
	}
	auto allListenerPortsAndProtocolNode = value["ListenerPortsAndProtocol"]["ListenerPortAndProtocol"];
	for (auto valueListenerPortsAndProtocolListenerPortAndProtocol : allListenerPortsAndProtocolNode)
	{
		ListenerPortAndProtocol listenerPortsAndProtocolObject;
		if(!valueListenerPortsAndProtocolListenerPortAndProtocol["ListenerPort"].isNull())
			listenerPortsAndProtocolObject.listenerPort = std::stoi(valueListenerPortsAndProtocolListenerPortAndProtocol["ListenerPort"].asString());
		if(!valueListenerPortsAndProtocolListenerPortAndProtocol["ListenerProtocol"].isNull())
			listenerPortsAndProtocolObject.listenerProtocol = valueListenerPortsAndProtocolListenerPortAndProtocol["ListenerProtocol"].asString();
		listenerPortsAndProtocol_.push_back(listenerPortsAndProtocolObject);
	}
	auto allBackendServersNode = value["BackendServers"]["BackendServer"];
	for (auto valueBackendServersBackendServer : allBackendServersNode)
	{
		BackendServer backendServersObject;
		if(!valueBackendServersBackendServer["Weight"].isNull())
			backendServersObject.weight = std::stoi(valueBackendServersBackendServer["Weight"].asString());
		if(!valueBackendServersBackendServer["ServerId"].isNull())
			backendServersObject.serverId = valueBackendServersBackendServer["ServerId"].asString();
		backendServers_.push_back(backendServersObject);
	}
	auto allListenerPorts = value["ListenerPorts"]["ListenerPort"];
	for (const auto &item : allListenerPorts)
		listenerPorts_.push_back(item.asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["CreateTimeStamp"].isNull())
		createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());
	if(!value["LoadBalancerSpec"].isNull())
		loadBalancerSpec_ = value["LoadBalancerSpec"].asString();
	if(!value["AutoReleaseTime"].isNull())
		autoReleaseTime_ = std::stol(value["AutoReleaseTime"].asString());
	if(!value["IsPublicAddress"].isNull())
		isPublicAddress_ = value["IsPublicAddress"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["AddressType"].isNull())
		addressType_ = value["AddressType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["LoadBalancerStatus"].isNull())
		loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["SlaveZoneId"].isNull())
		slaveZoneId_ = value["SlaveZoneId"].asString();
	if(!value["EndTimeStamp"].isNull())
		endTimeStamp_ = std::stol(value["EndTimeStamp"].asString());
	if(!value["RegionIdAlias"].isNull())
		regionIdAlias_ = value["RegionIdAlias"].asString();
	if(!value["MasterZoneId"].isNull())
		masterZoneId_ = value["MasterZoneId"].asString();

}

std::vector<DescribeLoadBalancerAttributeResult::ListenerPortAndProtocal> DescribeLoadBalancerAttributeResult::getListenerPortsAndProtocal()const
{
	return listenerPortsAndProtocal_;
}

std::string DescribeLoadBalancerAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLoadBalancerAttributeResult::getAddress()const
{
	return address_;
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

std::string DescribeLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeLoadBalancerAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeLoadBalancerAttributeResult::getPayType()const
{
	return payType_;
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

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

std::string DescribeLoadBalancerAttributeResult::getIsPublicAddress()const
{
	return isPublicAddress_;
}

std::string DescribeLoadBalancerAttributeResult::getVpcId()const
{
	return vpcId_;
}

long DescribeLoadBalancerAttributeResult::getEndTimeStamp()const
{
	return endTimeStamp_;
}

std::string DescribeLoadBalancerAttributeResult::getRegionId()const
{
	return regionId_;
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

