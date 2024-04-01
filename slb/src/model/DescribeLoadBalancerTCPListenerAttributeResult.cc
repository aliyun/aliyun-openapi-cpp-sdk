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
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["ConnectPort"].isNull())
		connectPort_ = std::stoi(value["ConnectPort"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["PersistenceTimeout"].isNull())
		persistenceTimeout_ = std::stoi(value["PersistenceTimeout"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["SynProxy"].isNull())
		synProxy_ = value["SynProxy"].asString();
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["Interval"].isNull())
		interval_ = std::stoi(value["Interval"].asString());
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["EstablishedTimeout"].isNull())
		establishedTimeout_ = std::stoi(value["EstablishedTimeout"].asString());
	if(!value["HealthCheckType"].isNull())
		healthCheckType_ = value["HealthCheckType"].asString();
	if(!value["MasterSlaveServerGroupId"].isNull())
		masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["ConnectTimeout"].isNull())
		connectTimeout_ = std::stoi(value["ConnectTimeout"].asString());
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();

}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getStatus()const
{
	return status_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getConnectTimeout()const
{
	return connectTimeout_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getConnectPort()const
{
	return connectPort_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getSynProxy()const
{
	return synProxy_;
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

int DescribeLoadBalancerTCPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckType()const
{
	return healthCheckType_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getInterval()const
{
	return interval_;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

