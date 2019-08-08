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

#include <alibabacloud/ecs/model/DescribeInstanceMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceMonitorDataRequest;

DescribeInstanceMonitorDataRequest::DescribeInstanceMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceMonitorData")
{}

DescribeInstanceMonitorDataRequest::~DescribeInstanceMonitorDataRequest()
{}

long DescribeInstanceMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeInstanceMonitorDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeInstanceMonitorDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeInstanceMonitorDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeInstanceMonitorDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeInstanceMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeInstanceMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeInstanceMonitorDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeInstanceMonitorDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeInstanceMonitorDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeInstanceMonitorDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeInstanceMonitorDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeInstanceMonitorDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeInstanceMonitorDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceMonitorDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstanceMonitorDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstanceMonitorDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeInstanceMonitorDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceMonitorDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DescribeInstanceMonitorDataRequest::getEnable()const
{
	return enable_;
}

void DescribeInstanceMonitorDataRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeInstanceMonitorDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeInstanceMonitorDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeInstanceMonitorDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeInstanceMonitorDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeInstanceMonitorDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeInstanceMonitorDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeInstanceMonitorDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeInstanceMonitorDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeInstanceMonitorDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeInstanceMonitorDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int DescribeInstanceMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeInstanceMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string DescribeInstanceMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstanceMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeInstanceMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeInstanceMonitorDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeInstanceMonitorDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeInstanceMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeInstanceMonitorDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeInstanceMonitorDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeInstanceMonitorDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeInstanceMonitorDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeInstanceMonitorDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeInstanceMonitorDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeInstanceMonitorDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceMonitorDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInstanceMonitorDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeInstanceMonitorDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeInstanceMonitorDataRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeInstanceMonitorDataRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

