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

#include <alibabacloud/ens/model/DescribeLoadBalancerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
	auto allBackendServersNode = value["BackendServers"]["rs"];
	for (auto valueBackendServersrs : allBackendServersNode)
	{
		Rs backendServersObject;
		if(!valueBackendServersrs["ServerId"].isNull())
			backendServersObject.serverId = valueBackendServersrs["ServerId"].asString();
		if(!valueBackendServersrs["Ip"].isNull())
			backendServersObject.ip = valueBackendServersrs["Ip"].asString();
		if(!valueBackendServersrs["Port"].isNull())
			backendServersObject.port = valueBackendServersrs["Port"].asString();
		if(!valueBackendServersrs["Type"].isNull())
			backendServersObject.type = valueBackendServersrs["Type"].asString();
		if(!valueBackendServersrs["Weight"].isNull())
			backendServersObject.weight = std::stoi(valueBackendServersrs["Weight"].asString());
		backendServers_.push_back(backendServersObject);
	}
	auto allListenerPortsAndProtocolsNode = value["ListenerPortsAndProtocols"]["listener"];
	for (auto valueListenerPortsAndProtocolslistener : allListenerPortsAndProtocolsNode)
	{
		Listener listenerPortsAndProtocolsObject;
		if(!valueListenerPortsAndProtocolslistener["ListenerPort"].isNull())
			listenerPortsAndProtocolsObject.listenerPort = std::stoi(valueListenerPortsAndProtocolslistener["ListenerPort"].asString());
		if(!valueListenerPortsAndProtocolslistener["ListenerProtocol"].isNull())
			listenerPortsAndProtocolsObject.listenerProtocol = valueListenerPortsAndProtocolslistener["ListenerProtocol"].asString();
		if(!valueListenerPortsAndProtocolslistener["Description"].isNull())
			listenerPortsAndProtocolsObject.description = valueListenerPortsAndProtocolslistener["Description"].asString();
		if(!valueListenerPortsAndProtocolslistener["ListenerForward"].isNull())
			listenerPortsAndProtocolsObject.listenerForward = valueListenerPortsAndProtocolslistener["ListenerForward"].asString();
		if(!valueListenerPortsAndProtocolslistener["ForwardPort"].isNull())
			listenerPortsAndProtocolsObject.forwardPort = std::stoi(valueListenerPortsAndProtocolslistener["ForwardPort"].asString());
		if(!valueListenerPortsAndProtocolslistener["BackendServerPort"].isNull())
			listenerPortsAndProtocolsObject.backendServerPort = std::stoi(valueListenerPortsAndProtocolslistener["BackendServerPort"].asString());
		listenerPortsAndProtocols_.push_back(listenerPortsAndProtocolsObject);
	}
	auto allListenerPorts = value["ListenerPorts"]["listenerPort"];
	for (const auto &item : allListenerPorts)
		listenerPorts_.push_back(item.asString());
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["LoadBalancerStatus"].isNull())
		loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	if(!value["EnsRegionId"].isNull())
		ensRegionId_ = value["EnsRegionId"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["NetworkId"].isNull())
		networkId_ = value["NetworkId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["LoadBalancerSpec"].isNull())
		loadBalancerSpec_ = value["LoadBalancerSpec"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["AddressIPVersion"].isNull())
		addressIPVersion_ = value["AddressIPVersion"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();

}

std::string DescribeLoadBalancerAttributeResult::getAddress()const
{
	return address_;
}

std::string DescribeLoadBalancerAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLoadBalancerAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeLoadBalancerAttributeResult::getAddressIPVersion()const
{
	return addressIPVersion_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string DescribeLoadBalancerAttributeResult::getPayType()const
{
	return payType_;
}

std::vector<DescribeLoadBalancerAttributeResult::Rs> DescribeLoadBalancerAttributeResult::getBackendServers()const
{
	return backendServers_;
}

std::string DescribeLoadBalancerAttributeResult::getNetworkId()const
{
	return networkId_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerSpec()const
{
	return loadBalancerSpec_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

int DescribeLoadBalancerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::vector<DescribeLoadBalancerAttributeResult::Listener> DescribeLoadBalancerAttributeResult::getListenerPortsAndProtocols()const
{
	return listenerPortsAndProtocols_;
}

std::string DescribeLoadBalancerAttributeResult::getEnsRegionId()const
{
	return ensRegionId_;
}

std::string DescribeLoadBalancerAttributeResult::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

std::vector<std::string> DescribeLoadBalancerAttributeResult::getListenerPorts()const
{
	return listenerPorts_;
}

