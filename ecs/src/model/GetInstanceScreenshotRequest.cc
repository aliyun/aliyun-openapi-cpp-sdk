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

#include <alibabacloud/ecs/model/GetInstanceScreenshotRequest.h>

using AlibabaCloud::Ecs::Model::GetInstanceScreenshotRequest;

GetInstanceScreenshotRequest::GetInstanceScreenshotRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "GetInstanceScreenshot")
{}

GetInstanceScreenshotRequest::~GetInstanceScreenshotRequest()
{}

long GetInstanceScreenshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetInstanceScreenshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long GetInstanceScreenshotRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetInstanceScreenshotRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool GetInstanceScreenshotRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetInstanceScreenshotRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string GetInstanceScreenshotRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetInstanceScreenshotRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetInstanceScreenshotRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetInstanceScreenshotRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string GetInstanceScreenshotRequest::getCallerType()const
{
	return callerType_;
}

void GetInstanceScreenshotRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string GetInstanceScreenshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceScreenshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetInstanceScreenshotRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetInstanceScreenshotRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string GetInstanceScreenshotRequest::getRegionId()const
{
	return regionId_;
}

void GetInstanceScreenshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool GetInstanceScreenshotRequest::getEnable()const
{
	return enable_;
}

void GetInstanceScreenshotRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string GetInstanceScreenshotRequest::getRequestContent()const
{
	return requestContent_;
}

void GetInstanceScreenshotRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string GetInstanceScreenshotRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetInstanceScreenshotRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string GetInstanceScreenshotRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetInstanceScreenshotRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long GetInstanceScreenshotRequest::getCallerUid()const
{
	return callerUid_;
}

void GetInstanceScreenshotRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string GetInstanceScreenshotRequest::getApp_ip()const
{
	return app_ip_;
}

void GetInstanceScreenshotRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string GetInstanceScreenshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetInstanceScreenshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool GetInstanceScreenshotRequest::getWakeup()const
{
	return wakeup_;
}

void GetInstanceScreenshotRequest::setWakeup(bool wakeup)
{
	wakeup_ = wakeup;
	setParameter("Wakeup", std::to_string(wakeup));
}

std::string GetInstanceScreenshotRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetInstanceScreenshotRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetInstanceScreenshotRequest::getCallerBid()const
{
	return callerBid_;
}

void GetInstanceScreenshotRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long GetInstanceScreenshotRequest::getOwnerId()const
{
	return ownerId_;
}

void GetInstanceScreenshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool GetInstanceScreenshotRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetInstanceScreenshotRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool GetInstanceScreenshotRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetInstanceScreenshotRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool GetInstanceScreenshotRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetInstanceScreenshotRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string GetInstanceScreenshotRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceScreenshotRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetInstanceScreenshotRequest::getRequestId()const
{
	return requestId_;
}

void GetInstanceScreenshotRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

