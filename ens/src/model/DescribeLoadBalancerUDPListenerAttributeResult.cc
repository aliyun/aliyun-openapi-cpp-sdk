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

#include <alibabacloud/ens/model/DescribeLoadBalancerUDPListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["HealthCheckConnectTimeout"].isNull())
		healthCheckConnectTimeout_ = std::stoi(value["HealthCheckConnectTimeout"].asString());
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["HealthCheckReq"].isNull())
		healthCheckReq_ = value["HealthCheckReq"].asString();
	if(!value["HealthCheckExp"].isNull())
		healthCheckExp_ = value["HealthCheckExp"].asString();
	if(!value["EipTransmit"].isNull())
		eipTransmit_ = value["EipTransmit"].asString();
	if(!value["EstablishedTimeout"].isNull())
		establishedTimeout_ = std::stoi(value["EstablishedTimeout"].asString());

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

int DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerUDPListenerAttributeResult::getHealthCheckReq()const
{
	return healthCheckReq_;
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

std::string DescribeLoadBalancerUDPListenerAttributeResult::getEipTransmit()const
{
	return eipTransmit_;
}

int DescribeLoadBalancerUDPListenerAttributeResult::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

