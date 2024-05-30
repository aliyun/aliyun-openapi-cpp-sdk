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

#include <alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerHTTPListenerAttributeResult::DescribeLoadBalancerHTTPListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerHTTPListenerAttributeResult::DescribeLoadBalancerHTTPListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerHTTPListenerAttributeResult::~DescribeLoadBalancerHTTPListenerAttributeResult()
{}

void DescribeLoadBalancerHTTPListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["VServerGroupId"].isNull())
			rulesObject.vServerGroupId = valueRulesRule["VServerGroupId"].asString();
		if(!valueRulesRule["Url"].isNull())
			rulesObject.url = valueRulesRule["Url"].asString();
		if(!valueRulesRule["Domain"].isNull())
			rulesObject.domain = valueRulesRule["Domain"].asString();
		if(!valueRulesRule["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRule["RuleName"].asString();
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = valueRulesRule["RuleId"].asString();
		rules_.push_back(rulesObject);
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
	if(!value["AclType"].isNull())
		aclType_ = value["AclType"].asString();
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["HealthCheckHttpVersion"].isNull())
		healthCheckHttpVersion_ = value["HealthCheckHttpVersion"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["XForwardedFor_ClientSrcPort"].isNull())
		xForwardedFor_ClientSrcPort_ = value["XForwardedFor_ClientSrcPort"].asString();
	if(!value["Cookie"].isNull())
		cookie_ = value["Cookie"].asString();
	if(!value["Gzip"].isNull())
		gzip_ = value["Gzip"].asString();
	if(!value["ForwardCode"].isNull())
		forwardCode_ = std::stoi(value["ForwardCode"].asString());
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["HealthCheckTimeout"].isNull())
		healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	if(!value["HealthCheckType"].isNull())
		healthCheckType_ = value["HealthCheckType"].asString();
	if(!value["AclStatus"].isNull())
		aclStatus_ = value["AclStatus"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["CookieTimeout"].isNull())
		cookieTimeout_ = std::stoi(value["CookieTimeout"].asString());
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["ForwardPort"].isNull())
		forwardPort_ = std::stoi(value["ForwardPort"].asString());
	if(!value["XForwardedFor_SLBID"].isNull())
		xForwardedFor_SLBID_ = value["XForwardedFor_SLBID"].asString();
	if(!value["SecurityStatus"].isNull())
		securityStatus_ = value["SecurityStatus"].asString();
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["ListenerForward"].isNull())
		listenerForward_ = value["ListenerForward"].asString();
	if(!value["XForwardedFor"].isNull())
		xForwardedFor_ = value["XForwardedFor"].asString();
	if(!value["IdleTimeout"].isNull())
		idleTimeout_ = std::stoi(value["IdleTimeout"].asString());
	if(!value["RequestTimeout"].isNull())
		requestTimeout_ = std::stoi(value["RequestTimeout"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["XForwardedFor_SLBPORT"].isNull())
		xForwardedFor_SLBPORT_ = value["XForwardedFor_SLBPORT"].asString();
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["StickySessionType"].isNull())
		stickySessionType_ = value["StickySessionType"].asString();
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["VpcIds"].isNull())
		vpcIds_ = value["VpcIds"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["XForwardedFor_proto"].isNull())
		xForwardedFor_proto_ = value["XForwardedFor_proto"].asString();
	if(!value["XForwardedFor_SLBIP"].isNull())
		xForwardedFor_SLBIP_ = value["XForwardedFor_SLBIP"].asString();
	if(!value["StickySession"].isNull())
		stickySession_ = value["StickySession"].asString();
	if(!value["HealthCheckMethod"].isNull())
		healthCheckMethod_ = value["HealthCheckMethod"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();

}

int DescribeLoadBalancerHTTPListenerAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getDescription()const
{
	return description_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getIdleTimeout()const
{
	return idleTimeout_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBPORT()const
{
	return xForwardedFor_SLBPORT_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getSecurityStatus()const
{
	return securityStatus_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getGzip()const
{
	return gzip_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::vector<DescribeLoadBalancerHTTPListenerAttributeResult::Tag> DescribeLoadBalancerHTTPListenerAttributeResult::getTags()const
{
	return tags_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getForwardCode()const
{
	return forwardCode_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getCookie()const
{
	return cookie_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getRequestTimeout()const
{
	return requestTimeout_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getAclId()const
{
	return aclId_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckHttpVersion()const
{
	return healthCheckHttpVersion_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

std::vector<DescribeLoadBalancerHTTPListenerAttributeResult::Rule> DescribeLoadBalancerHTTPListenerAttributeResult::getRules()const
{
	return rules_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getListenerForward()const
{
	return listenerForward_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySession()const
{
	return stickySession_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getAclStatus()const
{
	return aclStatus_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getForwardPort()const
{
	return forwardPort_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getVpcIds()const
{
	return vpcIds_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_ClientSrcPort()const
{
	return xForwardedFor_ClientSrcPort_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor()const
{
	return xForwardedFor_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getAclType()const
{
	return aclType_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

std::vector<std::string> DescribeLoadBalancerHTTPListenerAttributeResult::getAclIds()const
{
	return aclIds_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckType()const
{
	return healthCheckType_;
}

