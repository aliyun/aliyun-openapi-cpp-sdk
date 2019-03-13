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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeEniMonitorDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeEniMonitorDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeEniMonitorDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeEniMonitorDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeEniMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeEniMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeEniMonitorDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeEniMonitorDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeEniMonitorDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeEniMonitorDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeEniMonitorDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeEniMonitorDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeEniMonitorDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeEniMonitorDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeEniMonitorDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeEniMonitorDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeEniMonitorDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeEniMonitorDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeEniMonitorDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEniMonitorDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeEniMonitorDataRequest::getEnable()const
{
	return enable_;
}

void DescribeEniMonitorDataRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeEniMonitorDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeEniMonitorDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeEniMonitorDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeEniMonitorDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeEniMonitorDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeEniMonitorDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeEniMonitorDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeEniMonitorDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeEniMonitorDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeEniMonitorDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

int DescribeEniMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeEniMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string DescribeEniMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEniMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeEniMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeEniMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeEniMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeEniMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeEniMonitorDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeEniMonitorDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeEniMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEniMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeEniMonitorDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeEniMonitorDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeEniMonitorDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeEniMonitorDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeEniMonitorDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeEniMonitorDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeEniMonitorDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeEniMonitorDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeEniMonitorDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeEniMonitorDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeEniMonitorDataRequest::getEniId()const
{
	return eniId_;
}

void DescribeEniMonitorDataRequest::setEniId(const std::string& eniId)
{
	eniId_ = eniId;
	setParameter("EniId", eniId);
}

