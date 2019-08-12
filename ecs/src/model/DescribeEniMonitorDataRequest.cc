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

#include <alibabacloud/ecs/model/DescribeEniMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeEniMonitorDataRequest;

DescribeEniMonitorDataRequest::DescribeEniMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeEniMonitorData")
{}

DescribeEniMonitorDataRequest::~DescribeEniMonitorDataRequest()
{}

long DescribeEniMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEniMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeEniMonitorDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeEniMonitorDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeEniMonitorDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeEniMonitorDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeEniMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeEniMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeEniMonitorDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeEniMonitorDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeEniMonitorDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeEniMonitorDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeEniMonitorDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeEniMonitorDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeEniMonitorDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeEniMonitorDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeEniMonitorDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeEniMonitorDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribeEniMonitorDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeEniMonitorDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeEniMonitorDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEniMonitorDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeEniMonitorDataRequest::getEnable()const
{
	return enable_;
}

void DescribeEniMonitorDataRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeEniMonitorDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeEniMonitorDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeEniMonitorDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeEniMonitorDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeEniMonitorDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeEniMonitorDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeEniMonitorDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeEniMonitorDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeEniMonitorDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeEniMonitorDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

int DescribeEniMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeEniMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string DescribeEniMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEniMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeEniMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeEniMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeEniMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeEniMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeEniMonitorDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeEniMonitorDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeEniMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEniMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeEniMonitorDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeEniMonitorDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeEniMonitorDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeEniMonitorDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeEniMonitorDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeEniMonitorDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeEniMonitorDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeEniMonitorDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeEniMonitorDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeEniMonitorDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeEniMonitorDataRequest::getEniId()const
{
	return eniId_;
}

void DescribeEniMonitorDataRequest::setEniId(const std::string& eniId)
{
	eniId_ = eniId;
	setCoreParameter("EniId", std::to_string(eniId));
}

