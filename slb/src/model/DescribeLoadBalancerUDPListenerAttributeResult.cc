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
	listenerPort_ = std::stoi(value["ListenerPort"].asString());
	backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	status_ = value["Status"].asString();
	bandwidth_ = std::stoi(value["Bandwidth"].asString());
	scheduler_ = value["Scheduler"].asString();
	persistenceTimeout_ = std::stoi(value["PersistenceTimeout"].asString());
	healthCheck_ = value["HealthCheck"].asString();
	healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	healthCheckConnectTimeout_ = std::stoi(value["HealthCheckConnectTimeout"].asString());
	healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	healthCheckReq_ = value["HealthCheckReq"].asString();
	healthCheckExp_ = value["HealthCheckExp"].asString();
	maxConnection_ = std::stoi(value["MaxConnection"].asString());
	vServerGroupId_ = value["VServerGroupId"].asString();
	masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();

}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getStatus()const
{
	return status_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthCheckConnectTimeout(int healthCheckConnectTimeout)
{
	healthCheckConnectTimeout_ = healthCheckConnectTimeout;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setPersistenceTimeout(int persistenceTimeout)
{
	persistenceTimeout_ = persistenceTimeout;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckReq()const
{
	return healthCheckReq_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthCheckReq(const std::string& healthCheckReq)
{
	healthCheckReq_ = healthCheckReq;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckExp()const
{
	return healthCheckExp_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setHealthCheckExp(const std::string& healthCheckExp)
{
	healthCheckExp_ = healthCheckExp;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void DescribeLoadBalancerUDPListenerAttributeResult::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
}

