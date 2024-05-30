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

#include <alibabacloud/slb/model/DescribeLoadBalancerUDPListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerUDPListenerAttributeResult::DescribeLoadBalancerUDPListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerUDPListenerAttributeResult::DescribeLoadBalancerUDPListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerUDPListenerAttributeResult::~DescribeLoadBalancerUDPListenerAttributeResult()
{}

void DescribeLoadBalancerUDPListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortRangesNode = value["PortRanges"]["PortRange"];
	for (auto valuePortRangesPortRange : allPortRangesNode)
	{
		PortRange portRangesObject;
		if(!valuePortRangesPortRange["StartPort"].isNull())
			portRangesObject.startPort = std::stoi(valuePortRangesPortRange["StartPort"].asString());
		if(!valuePortRangesPortRange["EndPort"].isNull())
			portRangesObject.endPort = std::stoi(valuePortRangesPortRange["EndPort"].asString());
		portRanges_.push_back(portRangesObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	auto allAclIds = value["AclIds"]["AclId"];
	for (const auto &item : allAclIds)
		aclIds_.push_back(item.asString());
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["AclType"].isNull())
		aclType_ = value["AclType"].asString();
	if(!value["ConnectionDrainTimeout"].isNull())
		connectionDrainTimeout_ = std::stoi(value["ConnectionDrainTimeout"].asString());
	if(!value["FailoverStrategy"].isNull())
		failoverStrategy_ = value["FailoverStrategy"].asString();
	if(!value["WorkingServerGroupId"].isNull())
		workingServerGroupId_ = value["WorkingServerGroupId"].asString();
	if(!value["HealthCheckSwitch"].isNull())
		healthCheckSwitch_ = value["HealthCheckSwitch"].asString();
	if(!value["FullNatEnabled"].isNull())
		fullNatEnabled_ = value["FullNatEnabled"].asString() == "true";
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["QuicVersion"].isNull())
		quicVersion_ = value["QuicVersion"].asString();
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["HealthCheckType"].isNull())
		healthCheckType_ = value["HealthCheckType"].asString();
	if(!value["MasterSlaveServerGroupId"].isNull())
		masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["AclStatus"].isNull())
		aclStatus_ = value["AclStatus"].asString();
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["MasterServerGroupId"].isNull())
		masterServerGroupId_ = value["MasterServerGroupId"].asString();
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["ProxyProtocolV2Enabled"].isNull())
		proxyProtocolV2Enabled_ = value["ProxyProtocolV2Enabled"].asString() == "true";
	if(!value["SlaveServerGroupId"].isNull())
		slaveServerGroupId_ = value["SlaveServerGroupId"].asString();
	if(!value["PersistenceTimeout"].isNull())
		persistenceTimeout_ = std::stoi(value["PersistenceTimeout"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["HealthCheckExp"].isNull())
		healthCheckExp_ = value["HealthCheckExp"].asString();
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["FailoverThreshold"].isNull())
		failoverThreshold_ = std::stoi(value["FailoverThreshold"].asString());
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["VpcIds"].isNull())
		vpcIds_ = value["VpcIds"].asString();
	if(!value["HealthCheckConnectTimeout"].isNull())
		healthCheckConnectTimeout_ = std::stoi(value["HealthCheckConnectTimeout"].asString());
	if(!value["MasterSlaveModeEnabled"].isNull())
		masterSlaveModeEnabled_ = value["MasterSlaveModeEnabled"].asString() == "true";
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["ConnectionDrain"].isNull())
		connectionDrain_ = value["ConnectionDrain"].asString();
	if(!value["HealthCheckReq"].isNull())
		healthCheckReq_ = value["HealthCheckReq"].asString();
	if(!value["HealthCheckMethod"].isNull())
		healthCheckMethod_ = value["HealthCheckMethod"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();

}

int DescribeLoadBalancerUDPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getDescription()const
{
	return description_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

bool DescribeLoadBalancerUDPListenerAttributeResult::getProxyProtocolV2Enabled()const
{
	return proxyProtocolV2Enabled_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getFailoverThreshold()const
{
	return failoverThreshold_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getWorkingServerGroupId()const
{
	return workingServerGroupId_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

bool DescribeLoadBalancerUDPListenerAttributeResult::getMasterSlaveModeEnabled()const
{
	return masterSlaveModeEnabled_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getConnectionDrainTimeout()const
{
	return connectionDrainTimeout_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getMasterServerGroupId()const
{
	return masterServerGroupId_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getQuicVersion()const
{
	return quicVersion_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getSlaveServerGroupId()const
{
	return slaveServerGroupId_;
}

std::vector<DescribeLoadBalancerUDPListenerAttributeResult::Tag> DescribeLoadBalancerUDPListenerAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getStatus()const
{
	return status_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

std::vector<DescribeLoadBalancerUDPListenerAttributeResult::PortRange> DescribeLoadBalancerUDPListenerAttributeResult::getPortRanges()const
{
	return portRanges_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getAclId()const
{
	return aclId_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getConnectionDrain()const
{
	return connectionDrain_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckSwitch()const
{
	return healthCheckSwitch_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getAclStatus()const
{
	return aclStatus_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckReq()const
{
	return healthCheckReq_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getVpcIds()const
{
	return vpcIds_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getFailoverStrategy()const
{
	return failoverStrategy_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckExp()const
{
	return healthCheckExp_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getAclType()const
{
	return aclType_;
}

bool DescribeLoadBalancerUDPListenerAttributeResult::getFullNatEnabled()const
{
	return fullNatEnabled_;
}

std::vector<std::string> DescribeLoadBalancerUDPListenerAttributeResult::getAclIds()const
{
	return aclIds_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckType()const
{
	return healthCheckType_;
}

