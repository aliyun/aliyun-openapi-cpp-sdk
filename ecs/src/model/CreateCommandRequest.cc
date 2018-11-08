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

#include <alibabacloud/ecs/model/CreateCommandRequest.h>

using AlibabaCloud::Ecs::Model::CreateCommandRequest;

CreateCommandRequest::CreateCommandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateCommand")
{}

CreateCommandRequest::~CreateCommandRequest()
{}

long CreateCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateCommandRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateCommandRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string CreateCommandRequest::getWorkingDir()const
{
	return workingDir_;
}

void CreateCommandRequest::setWorkingDir(const std::string& workingDir)
{
	workingDir_ = workingDir;
	setParameter("WorkingDir", workingDir);
}

bool CreateCommandRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateCommandRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateCommandRequest::getDescription()const
{
	return description_;
}

void CreateCommandRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateCommandRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateCommandRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateCommandRequest::getType()const
{
	return type_;
}

void CreateCommandRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateCommandRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateCommandRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateCommandRequest::getCallerType()const
{
	return callerType_;
}

void CreateCommandRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateCommandRequest::getCommandContent()const
{
	return commandContent_;
}

void CreateCommandRequest::setCommandContent(const std::string& commandContent)
{
	commandContent_ = commandContent;
	setParameter("CommandContent", commandContent);
}

long CreateCommandRequest::getTimeout()const
{
	return timeout_;
}

void CreateCommandRequest::setTimeout(long timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

std::string CreateCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateCommandRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateCommandRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateCommandRequest::getRegionId()const
{
	return regionId_;
}

void CreateCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateCommandRequest::getEnable()const
{
	return enable_;
}

void CreateCommandRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CreateCommandRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateCommandRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateCommandRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateCommandRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateCommandRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateCommandRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateCommandRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateCommandRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateCommandRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateCommandRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateCommandRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateCommandRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateCommandRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateCommandRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateCommandRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateCommandRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateCommandRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateCommandRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateCommandRequest::getRequestId()const
{
	return requestId_;
}

void CreateCommandRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateCommandRequest::getName()const
{
	return name_;
}

void CreateCommandRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

