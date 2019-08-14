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

#include <alibabacloud/ecs/model/DeleteCommandRequest.h>

using AlibabaCloud::Ecs::Model::DeleteCommandRequest;

DeleteCommandRequest::DeleteCommandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteCommand")
{}

DeleteCommandRequest::~DeleteCommandRequest()
{}

long DeleteCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteCommandRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteCommandRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteCommandRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteCommandRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteCommandRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteCommandRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteCommandRequest::getCommandId()const
{
	return commandId_;
}

void DeleteCommandRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setCoreParameter("CommandId", commandId);
}

std::string DeleteCommandRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteCommandRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteCommandRequest::getCallerType()const
{
	return callerType_;
}

void DeleteCommandRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteCommandRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteCommandRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DeleteCommandRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteCommandRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteCommandRequest::getRegionId()const
{
	return regionId_;
}

void DeleteCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteCommandRequest::getEnable()const
{
	return enable_;
}

void DeleteCommandRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteCommandRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteCommandRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteCommandRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteCommandRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteCommandRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteCommandRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteCommandRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteCommandRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteCommandRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteCommandRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteCommandRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteCommandRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteCommandRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteCommandRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteCommandRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteCommandRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteCommandRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteCommandRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteCommandRequest::getRequestId()const
{
	return requestId_;
}

void DeleteCommandRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteCommandRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteCommandRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

