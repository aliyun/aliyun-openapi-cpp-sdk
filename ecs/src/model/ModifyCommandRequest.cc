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

#include <alibabacloud/ecs/model/ModifyCommandRequest.h>

using AlibabaCloud::Ecs::Model::ModifyCommandRequest;

ModifyCommandRequest::ModifyCommandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyCommand")
{}

ModifyCommandRequest::~ModifyCommandRequest()
{}

long ModifyCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyCommandRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyCommandRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ModifyCommandRequest::getWorkingDir()const
{
	return workingDir_;
}

void ModifyCommandRequest::setWorkingDir(const std::string& workingDir)
{
	workingDir_ = workingDir;
	setParameter("WorkingDir", workingDir);
}

bool ModifyCommandRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyCommandRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyCommandRequest::getDescription()const
{
	return description_;
}

void ModifyCommandRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyCommandRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyCommandRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyCommandRequest::getCommandId()const
{
	return commandId_;
}

void ModifyCommandRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

std::string ModifyCommandRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyCommandRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyCommandRequest::getCallerType()const
{
	return callerType_;
}

void ModifyCommandRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyCommandRequest::getCommandContent()const
{
	return commandContent_;
}

void ModifyCommandRequest::setCommandContent(const std::string& commandContent)
{
	commandContent_ = commandContent;
	setParameter("CommandContent", commandContent);
}

long ModifyCommandRequest::getTimeout()const
{
	return timeout_;
}

void ModifyCommandRequest::setTimeout(long timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

std::string ModifyCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyCommandRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyCommandRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyCommandRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyCommandRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyCommandRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyCommandRequest::getEnable()const
{
	return enable_;
}

void ModifyCommandRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifyCommandRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyCommandRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyCommandRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyCommandRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyCommandRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyCommandRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyCommandRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyCommandRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyCommandRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyCommandRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyCommandRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyCommandRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyCommandRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyCommandRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyCommandRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyCommandRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifyCommandRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyCommandRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ModifyCommandRequest::getRequestId()const
{
	return requestId_;
}

void ModifyCommandRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ModifyCommandRequest::getName()const
{
	return name_;
}

void ModifyCommandRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

