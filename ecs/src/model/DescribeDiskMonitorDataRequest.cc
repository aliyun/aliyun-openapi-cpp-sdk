<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/DescribeDiskMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiskMonitorDataRequest;

DescribeDiskMonitorDataRequest::DescribeDiskMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDiskMonitorData")
{}

DescribeDiskMonitorDataRequest::~DescribeDiskMonitorDataRequest()
{}

long DescribeDiskMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDiskMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDiskMonitorDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDiskMonitorDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDiskMonitorDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDiskMonitorDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDiskMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDiskMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDiskMonitorDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDiskMonitorDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDiskMonitorDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDiskMonitorDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDiskMonitorDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDiskMonitorDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDiskMonitorDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDiskMonitorDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDiskMonitorDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeDiskMonitorDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeDiskMonitorDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDiskMonitorDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DescribeDiskMonitorDataRequest::getEnable()const
{
	return enable_;
}

void DescribeDiskMonitorDataRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeDiskMonitorDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDiskMonitorDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDiskMonitorDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDiskMonitorDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDiskMonitorDataRequest::getDiskId()const
{
	return diskId_;
}

void DescribeDiskMonitorDataRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

std::string DescribeDiskMonitorDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDiskMonitorDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDiskMonitorDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDiskMonitorDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDiskMonitorDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDiskMonitorDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int DescribeDiskMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeDiskMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string DescribeDiskMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDiskMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDiskMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDiskMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDiskMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDiskMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDiskMonitorDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDiskMonitorDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDiskMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDiskMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeDiskMonitorDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDiskMonitorDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDiskMonitorDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDiskMonitorDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDiskMonitorDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDiskMonitorDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDiskMonitorDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDiskMonitorDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDiskMonitorDataRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeDiskMonitorDataRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

=======
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

#include <alibabacloud/ecs/model/DescribeDiskMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiskMonitorDataRequest;

DescribeDiskMonitorDataRequest::DescribeDiskMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDiskMonitorData")
{}

DescribeDiskMonitorDataRequest::~DescribeDiskMonitorDataRequest()
{}

long DescribeDiskMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDiskMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDiskMonitorDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDiskMonitorDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDiskMonitorDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDiskMonitorDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDiskMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDiskMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDiskMonitorDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDiskMonitorDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDiskMonitorDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDiskMonitorDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDiskMonitorDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDiskMonitorDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDiskMonitorDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDiskMonitorDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDiskMonitorDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeDiskMonitorDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeDiskMonitorDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDiskMonitorDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DescribeDiskMonitorDataRequest::getEnable()const
{
	return enable_;
}

void DescribeDiskMonitorDataRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeDiskMonitorDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDiskMonitorDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDiskMonitorDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDiskMonitorDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDiskMonitorDataRequest::getDiskId()const
{
	return diskId_;
}

void DescribeDiskMonitorDataRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

std::string DescribeDiskMonitorDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDiskMonitorDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDiskMonitorDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDiskMonitorDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDiskMonitorDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDiskMonitorDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int DescribeDiskMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeDiskMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string DescribeDiskMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDiskMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDiskMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDiskMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDiskMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDiskMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDiskMonitorDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDiskMonitorDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDiskMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDiskMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeDiskMonitorDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDiskMonitorDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDiskMonitorDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDiskMonitorDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDiskMonitorDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDiskMonitorDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDiskMonitorDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDiskMonitorDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDiskMonitorDataRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeDiskMonitorDataRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

>>>>>>> master
