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

#include <alibabacloud/slb/model/DescribeLoadBalancerHTTPSListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerHTTPSListenerAttributeResult::DescribeLoadBalancerHTTPSListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerHTTPSListenerAttributeResult::DescribeLoadBalancerHTTPSListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerHTTPSListenerAttributeResult::~DescribeLoadBalancerHTTPSListenerAttributeResult()
{}

void DescribeLoadBalancerHTTPSListenerAttributeResult::parse(const std::string &payload)
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
	serverCertificateId_ = value["ServerCertificateId"].asString();
	cACertificateId_ = value["CACertificateId"].asString();
	maxConnection_ = std::stoi(value["MaxConnection"].asString());
	vServerGroupId_ = value["VServerGroupId"].asString();
	gzip_ = value["Gzip"].asString();
	xForwardedFor_SLBIP_ = value["XForwardedFor_SLBIP"].asString();
	xForwardedFor_SLBID_ = value["XForwardedFor_SLBID"].asString();
	xForwardedFor_proto_ = value["XForwardedFor_proto"].asString();

}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getSecurityStatus()const
{
	return securityStatus_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setSecurityStatus(const std::string& securityStatus)
{
	securityStatus_ = securityStatus;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getGzip()const
{
	return gzip_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getServerCertificateId()const
{
	return serverCertificateId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getStatus()const
{
	return status_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getCookie()const
{
	return cookie_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getCACertificateId()const
{
	return cACertificateId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getStickySession()const
{
	return stickySession_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor()const
{
	return xForwardedFor_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void DescribeLoadBalancerHTTPSListenerAttributeResult::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
}

