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
	listenerPort_ = std::stoi(value["ListenerPort"].asString());
	backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	bandwidth_ = std::stoi(value["Bandwidth"].asString());
	status_ = value["Status"].asString();
	securityStatus_ = value["SecurityStatus"].asString();
	xForwardedFor_ = value["XForwardedFor"].asString();
	scheduler_ = value["Scheduler"].asString();
	stickySession_ = value["StickySession"].asString();
	stickySessionType_ = value["StickySessionType"].asString();
	cookieTimeout_ = std::stoi(value["CookieTimeout"].asString());
	cookie_ = value["Cookie"].asString();
	healthCheck_ = value["HealthCheck"].asString();
	healthCheckDomain_ = value["HealthCheckDomain"].asString();
	healthCheckURI_ = value["HealthCheckURI"].asString();
	healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	maxConnection_ = std::stoi(value["MaxConnection"].asString());
	vServerGroupId_ = value["VServerGroupId"].asString();
	gzip_ = value["Gzip"].asString();
	xForwardedFor_SLBIP_ = value["XForwardedFor_SLBIP"].asString();
	xForwardedFor_SLBID_ = value["XForwardedFor_SLBID"].asString();
	xForwardedFor_proto_ = value["XForwardedFor_proto"].asString();

}

int DescribeLoadBalancerHTTPListenerAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getSecurityStatus()const
{
	return securityStatus_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setSecurityStatus(const std::string& securityStatus)
{
	securityStatus_ = securityStatus;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getGzip()const
{
	return gzip_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStatus()const
{
	return status_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getCookie()const
{
	return cookie_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySession()const
{
	return stickySession_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor()const
{
	return xForwardedFor_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void DescribeLoadBalancerHTTPListenerAttributeResult::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
}

