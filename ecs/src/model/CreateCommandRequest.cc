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

bool CreateCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCommandRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

bool CreateCommandRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateCommandRequest::setCallerParentId(bool callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId ? "true" : "false");
}

std::string CreateCommandRequest::getWorkingDir()const
{
	return workingDir_;
}

void CreateCommandRequest::setWorkingDir(const std::string& workingDir)
{
	workingDir_ = workingDir;
	setCoreParameter("WorkingDir", workingDir);
}

bool CreateCommandRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateCommandRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateCommandRequest::getDescription()const
{
	return description_;
}

void CreateCommandRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateCommandRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateCommandRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateCommandRequest::getType()const
{
	return type_;
}

void CreateCommandRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateCommandRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateCommandRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateCommandRequest::getCallerType()const
{
	return callerType_;
}

void CreateCommandRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateCommandRequest::getCommandContent()const
{
	return commandContent_;
}

void CreateCommandRequest::setCommandContent(const std::string& commandContent)
{
	commandContent_ = commandContent;
	setCoreParameter("CommandContent", commandContent);
}

bool CreateCommandRequest::getTimeout()const
{
	return timeout_;
}

void CreateCommandRequest::setTimeout(bool timeout)
{
	timeout_ = timeout;
	setCoreParameter("Timeout", timeout ? "true" : "false");
}

std::string CreateCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateCommandRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateCommandRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string CreateCommandRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateCommandRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateCommandRequest::getRegionId()const
{
	return regionId_;
}

void CreateCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateCommandRequest::getEnable()const
{
	return enable_;
}

void CreateCommandRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateCommandRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateCommandRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateCommandRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateCommandRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateCommandRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateCommandRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

bool CreateCommandRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateCommandRequest::setCallerUid(bool callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid ? "true" : "false");
}

std::string CreateCommandRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateCommandRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateCommandRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateCommandRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

bool CreateCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCommandRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

bool CreateCommandRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateCommandRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateCommandRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateCommandRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateCommandRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateCommandRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateCommandRequest::getRequestId()const
{
	return requestId_;
}

void CreateCommandRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateCommandRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateCommandRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string CreateCommandRequest::getName()const
{
	return name_;
}

void CreateCommandRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

bool CreateCommandRequest::getEnableParameter()const
{
	return enableParameter_;
}

void CreateCommandRequest::setEnableParameter(bool enableParameter)
{
	enableParameter_ = enableParameter;
	setCoreParameter("EnableParameter", enableParameter ? "true" : "false");
}

