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

#include <alibabacloud/ecs/model/GetInstanceConsoleOutputRequest.h>

using AlibabaCloud::Ecs::Model::GetInstanceConsoleOutputRequest;

GetInstanceConsoleOutputRequest::GetInstanceConsoleOutputRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "GetInstanceConsoleOutput")
{}

GetInstanceConsoleOutputRequest::~GetInstanceConsoleOutputRequest()
{}

long GetInstanceConsoleOutputRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetInstanceConsoleOutputRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long GetInstanceConsoleOutputRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetInstanceConsoleOutputRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool GetInstanceConsoleOutputRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetInstanceConsoleOutputRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string GetInstanceConsoleOutputRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetInstanceConsoleOutputRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetInstanceConsoleOutputRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetInstanceConsoleOutputRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string GetInstanceConsoleOutputRequest::getCallerType()const
{
	return callerType_;
}

void GetInstanceConsoleOutputRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string GetInstanceConsoleOutputRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceConsoleOutputRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetInstanceConsoleOutputRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void GetInstanceConsoleOutputRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string GetInstanceConsoleOutputRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetInstanceConsoleOutputRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string GetInstanceConsoleOutputRequest::getRegionId()const
{
	return regionId_;
}

void GetInstanceConsoleOutputRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool GetInstanceConsoleOutputRequest::getEnable()const
{
	return enable_;
}

void GetInstanceConsoleOutputRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string GetInstanceConsoleOutputRequest::getRequestContent()const
{
	return requestContent_;
}

void GetInstanceConsoleOutputRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string GetInstanceConsoleOutputRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetInstanceConsoleOutputRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string GetInstanceConsoleOutputRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetInstanceConsoleOutputRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long GetInstanceConsoleOutputRequest::getCallerUid()const
{
	return callerUid_;
}

void GetInstanceConsoleOutputRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string GetInstanceConsoleOutputRequest::getApp_ip()const
{
	return app_ip_;
}

void GetInstanceConsoleOutputRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string GetInstanceConsoleOutputRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetInstanceConsoleOutputRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetInstanceConsoleOutputRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetInstanceConsoleOutputRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetInstanceConsoleOutputRequest::getCallerBid()const
{
	return callerBid_;
}

void GetInstanceConsoleOutputRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long GetInstanceConsoleOutputRequest::getOwnerId()const
{
	return ownerId_;
}

void GetInstanceConsoleOutputRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool GetInstanceConsoleOutputRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetInstanceConsoleOutputRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool GetInstanceConsoleOutputRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetInstanceConsoleOutputRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool GetInstanceConsoleOutputRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetInstanceConsoleOutputRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string GetInstanceConsoleOutputRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceConsoleOutputRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetInstanceConsoleOutputRequest::getRequestId()const
{
	return requestId_;
}

void GetInstanceConsoleOutputRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

