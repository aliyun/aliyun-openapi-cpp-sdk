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

#include <alibabacloud/ecs/model/RedeployInstanceRequest.h>

using AlibabaCloud::Ecs::Model::RedeployInstanceRequest;

RedeployInstanceRequest::RedeployInstanceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RedeployInstance")
{}

RedeployInstanceRequest::~RedeployInstanceRequest()
{}

long RedeployInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RedeployInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long RedeployInstanceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RedeployInstanceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool RedeployInstanceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RedeployInstanceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string RedeployInstanceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RedeployInstanceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RedeployInstanceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RedeployInstanceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RedeployInstanceRequest::getCallerType()const
{
	return callerType_;
}

void RedeployInstanceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string RedeployInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RedeployInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool RedeployInstanceRequest::getForceStop()const
{
	return forceStop_;
}

void RedeployInstanceRequest::setForceStop(bool forceStop)
{
	forceStop_ = forceStop;
	setParameter("ForceStop", std::to_string(forceStop));
}

std::string RedeployInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RedeployInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool RedeployInstanceRequest::getEnable()const
{
	return enable_;
}

void RedeployInstanceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string RedeployInstanceRequest::getRequestContent()const
{
	return requestContent_;
}

void RedeployInstanceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string RedeployInstanceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RedeployInstanceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string RedeployInstanceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RedeployInstanceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long RedeployInstanceRequest::getCallerUid()const
{
	return callerUid_;
}

void RedeployInstanceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string RedeployInstanceRequest::getApp_ip()const
{
	return app_ip_;
}

void RedeployInstanceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string RedeployInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RedeployInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RedeployInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RedeployInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RedeployInstanceRequest::getCallerBid()const
{
	return callerBid_;
}

void RedeployInstanceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long RedeployInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RedeployInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool RedeployInstanceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RedeployInstanceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool RedeployInstanceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RedeployInstanceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool RedeployInstanceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RedeployInstanceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string RedeployInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RedeployInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RedeployInstanceRequest::getRequestId()const
{
	return requestId_;
}

void RedeployInstanceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

