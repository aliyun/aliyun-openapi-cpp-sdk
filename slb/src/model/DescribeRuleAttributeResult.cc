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

#include <alibabacloud/slb/model/DescribeRuleAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeRuleAttributeResult::DescribeRuleAttributeResult() :
	ServiceResult()
{}

DescribeRuleAttributeResult::DescribeRuleAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleAttributeResult::~DescribeRuleAttributeResult()
{}

void DescribeRuleAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["Cookie"].isNull())
		cookie_ = value["Cookie"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["RuleId"].isNull())
		ruleId_ = value["RuleId"].asString();
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["HealthCheckTimeout"].isNull())
		healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	if(!value["CookieTimeout"].isNull())
		cookieTimeout_ = std::stoi(value["CookieTimeout"].asString());
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["ListenerPort"].isNull())
		listenerPort_ = value["ListenerPort"].asString();
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["RuleName"].isNull())
		ruleName_ = value["RuleName"].asString();
	if(!value["StickySessionType"].isNull())
		stickySessionType_ = value["StickySessionType"].asString();
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["ListenerSync"].isNull())
		listenerSync_ = value["ListenerSync"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["StickySession"].isNull())
		stickySession_ = value["StickySession"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();

}

std::string DescribeRuleAttributeResult::getCookie()const
{
	return cookie_;
}

int DescribeRuleAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

std::string DescribeRuleAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeRuleAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeRuleAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

int DescribeRuleAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeRuleAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

std::string DescribeRuleAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeRuleAttributeResult::getRuleId()const
{
	return ruleId_;
}

std::string DescribeRuleAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

std::string DescribeRuleAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

int DescribeRuleAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

std::string DescribeRuleAttributeResult::getUrl()const
{
	return url_;
}

std::string DescribeRuleAttributeResult::getStickySession()const
{
	return stickySession_;
}

int DescribeRuleAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeRuleAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

int DescribeRuleAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeRuleAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

std::string DescribeRuleAttributeResult::getListenerSync()const
{
	return listenerSync_;
}

std::string DescribeRuleAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

std::string DescribeRuleAttributeResult::getDomain()const
{
	return domain_;
}

std::string DescribeRuleAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::string DescribeRuleAttributeResult::getRuleName()const
{
	return ruleName_;
}

