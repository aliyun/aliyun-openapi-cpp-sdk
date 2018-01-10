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
	listenerPort_ = std::stoi(value["ListenerPort"].asString());
	backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	status_ = value["Status"].asString();
	bandwidth_ = std::stoi(value["Bandwidth"].asString());
	scheduler_ = value["Scheduler"].asString();
	synProxy_ = value["SynProxy"].asString();
	persistenceTimeout_ = std::stoi(value["PersistenceTimeout"].asString());
	establishedTimeout_ = std::stoi(value["EstablishedTimeout"].asString());
	healthCheck_ = value["HealthCheck"].asString();
	healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	healthCheckConnectTimeout_ = std::stoi(value["HealthCheckConnectTimeout"].asString());
	healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	healthCheckDomain_ = value["HealthCheckDomain"].asString();
	healthCheckURI_ = value["HealthCheckURI"].asString();
	healthCheckType_ = value["HealthCheckType"].asString();
	maxConnection_ = std::stoi(value["MaxConnection"].asString());
	vServerGroupId_ = value["VServerGroupId"].asString();
	masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();

}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getStatus()const
{
	return status_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getSynProxy()const
{
	return synProxy_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setSynProxy(const std::string& synProxy)
{
	synProxy_ = synProxy;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckConnectTimeout(int healthCheckConnectTimeout)
{
	healthCheckConnectTimeout_ = healthCheckConnectTimeout;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setPersistenceTimeout(int persistenceTimeout)
{
	persistenceTimeout_ = persistenceTimeout;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
}

std::string DescribeLoadBalancerTCPListenerAttributeResult::getHealthCheckType()const
{
	return healthCheckType_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
}

int DescribeLoadBalancerTCPListenerAttributeResult::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

void DescribeLoadBalancerTCPListenerAttributeResult::setEstablishedTimeout(int establishedTimeout)
{
	establishedTimeout_ = establishedTimeout;
}

