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
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["PersistenceTimeout"].isNull())
		persistenceTimeout_ = std::stoi(value["PersistenceTimeout"].asString());
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["HealthCheckConnectTimeout"].isNull())
		healthCheckConnectTimeout_ = std::stoi(value["HealthCheckConnectTimeout"].asString());
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["HealthCheckReq"].isNull())
		healthCheckReq_ = value["HealthCheckReq"].asString();
	if(!value["HealthCheckExp"].isNull())
		healthCheckExp_ = value["HealthCheckExp"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["MasterSlaveServerGroupId"].isNull())
		masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["AclType"].isNull())
		aclType_ = value["AclType"].asString();
	if(!value["AclStatus"].isNull())
		aclStatus_ = value["AclStatus"].asString();
	if(!value["VpcIds"].isNull())
		vpcIds_ = value["VpcIds"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getStatus()const
{
	return status_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getDescription()const
{
	return description_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getAclId()const
{
	return aclId_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckReq()const
{
	return healthCheckReq_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getAclStatus()const
{
	return aclStatus_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getVpcIds()const
{
	return vpcIds_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckExp()const
{
	return healthCheckExp_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getAclType()const
{
	return aclType_;
}

