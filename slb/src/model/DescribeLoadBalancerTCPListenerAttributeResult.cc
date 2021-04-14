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

#include <alibabacloud/slb/model/DescribeLoadBalancerTCPListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerTCPListenerAttributeResult::DescribeLoadBalancerTCPListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerTCPListenerAttributeResult::DescribeLoadBalancerTCPListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerTCPListenerAttributeResult::~DescribeLoadBalancerTCPListenerAttributeResult()
{}

void DescribeLoadBalancerTCPListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortRangesNode = value["PortRanges"]["PortRange"];
	for (auto valuePortRangesPortRange : allPortRangesNode)
	{
		PortRange portRangesObject;
		if(!valuePortRangesPortRange["EndPort"].isNull())
			portRangesObject.endPort = std::stoi(valuePortRangesPortRange["EndPort"].asString());
		if(!valuePortRangesPortRange["StartPort"].isNull())
			portRangesObject.startPort = std::stoi(valuePortRangesPortRange["StartPort"].asString());
		portRanges_.push_back(portRangesObject);
	}
	auto allAclIds = value["AclIds"]["AclId"];
	for (const auto &item : allAclIds)
		aclIds_.push_back(item.asString());
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["AclStatus"].isNull())
		aclStatus_ = value["AclStatus"].asString();
	if(!value["AclType"].isNull())
		aclType_ = value["AclType"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["ConnectionDrain"].isNull())
		connectionDrain_ = value["ConnectionDrain"].asString();
	if(!value["ConnectionDrainTimeout"].isNull())
		connectionDrainTimeout_ = std::stoi(value["ConnectionDrainTimeout"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EstablishedTimeout"].isNull())
		establishedTimeout_ = std::stoi(value["EstablishedTimeout"].asString());
	if(!value["FailoverStrategy"].isNull())
		failoverStrategy_ = value["FailoverStrategy"].asString();
	if(!value["FailoverThreshold"].isNull())
		failoverThreshold_ = std::stoi(value["FailoverThreshold"].asString());
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["HealthCheckConnectTimeout"].isNull())
		healthCheckConnectTimeout_ = std::stoi(value["HealthCheckConnectTimeout"].asString());
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["HealthCheckMethod"].isNull())
		healthCheckMethod_ = value["HealthCheckMethod"].asString();
	if(!value["HealthCheckTcpFastCloseEnabled"].isNull())
		healthCheckTcpFastCloseEnabled_ = value["HealthCheckTcpFastCloseEnabled"].asString() == "true";
	if(!value["HealthCheckType"].isNull())
		healthCheckType_ = value["HealthCheckType"].asString();
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["MasterServerGroupId"].isNull())
		masterServerGroupId_ = value["MasterServerGroupId"].asString();
	if(!value["MasterSlaveModeEnabled"].isNull())
		masterSlaveModeEnabled_ = value["MasterSlaveModeEnabled"].asString() == "true";
	if(!value["MasterSlaveServerGroupId"].isNull())
		masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["PersistenceTimeout"].isNull())
		persistenceTimeout_ = std::stoi(value["PersistenceTimeout"].asString());
	if(!value["ProxyProtocolV2Enabled"].isNull())
		proxyProtocolV2Enabled_ = value["ProxyProtocolV2Enabled"].asString() == "true";
	if(!value["ProxyProtocolVpcIdEnabled"].isNull())
		proxyProtocolVpcIdEnabled_ = value["ProxyProtocolVpcIdEnabled"].asString() == "true";
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["SlaveServerGroupId"].isNull())
		slaveServerGroupId_ = value["SlaveServerGroupId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["SynProxy"].isNull())
		synProxy_ = value["SynProxy"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["VpcIds"].isNull())
		vpcIds_ = value["VpcIds"].asString();
	if(!value["WorkingServerGroupId"].isNull())
		workingServerGroupId_ = value["WorkingServerGroupId"].asString();

}

int DescribeLoadBalancerTCPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

bool DescribeLoadBalancerTCPListenerAttributeResult::getProxyProtocolVpcIdEnabled()const
{
	return proxyProtocolVpcIdEnabled_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getSynProxy()const
{
	return synProxy_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getFailoverThreshold()const
{
	return failoverThreshold_;
}

bool DescribeLoadBalancerTCPListenerAttributeResult::getProxyProtocolV2Enabled()const
{
	return proxyProtocolV2Enabled_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getWorkingServerGroupId()const
{
	return workingServerGroupId_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

bool DescribeLoadBalancerTCPListenerAttributeResult::getMasterSlaveModeEnabled()const
{
	return masterSlaveModeEnabled_;
}

bool DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckTcpFastCloseEnabled()const
{
	return healthCheckTcpFastCloseEnabled_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getConnectionDrainTimeout()const
{
	return connectionDrainTimeout_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getMasterServerGroupId()const
{
	return masterServerGroupId_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getSlaveServerGroupId()const
{
	return slaveServerGroupId_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getStatus()const
{
	return status_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

std::vector<DescribeLoadBalancerTCPListenerAttributeResult::PortRange> DescribeLoadBalancerTCPListenerAttributeResult::getPortRanges()const
{
	return portRanges_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getAclId()const
{
	return aclId_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getConnectionDrain()const
{
	return connectionDrain_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getAclStatus()const
{
	return aclStatus_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getVpcIds()const
{
	return vpcIds_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getFailoverStrategy()const
{
	return failoverStrategy_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getAclType()const
{
	return aclType_;
}

std::vector<std::string> DescribeLoadBalancerTCPListenerAttributeResult::getAclIds()const
{
	return aclIds_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckType()const
{
	return healthCheckType_;
}

