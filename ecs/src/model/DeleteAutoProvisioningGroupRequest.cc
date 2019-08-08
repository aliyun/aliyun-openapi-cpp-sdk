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

#include <alibabacloud/ecs/model/DeleteAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::DeleteAutoProvisioningGroupRequest;

DeleteAutoProvisioningGroupRequest::DeleteAutoProvisioningGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteAutoProvisioningGroup")
{}

DeleteAutoProvisioningGroupRequest::~DeleteAutoProvisioningGroupRequest()
{}

long DeleteAutoProvisioningGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteAutoProvisioningGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteAutoProvisioningGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteAutoProvisioningGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteAutoProvisioningGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteAutoProvisioningGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteAutoProvisioningGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteAutoProvisioningGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteAutoProvisioningGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteAutoProvisioningGroupRequest::getCallerType()const
{
	return callerType_;
}

void DeleteAutoProvisioningGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteAutoProvisioningGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteAutoProvisioningGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteAutoProvisioningGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteAutoProvisioningGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteAutoProvisioningGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAutoProvisioningGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteAutoProvisioningGroupRequest::getEnable()const
{
	return enable_;
}

void DeleteAutoProvisioningGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteAutoProvisioningGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteAutoProvisioningGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

bool DeleteAutoProvisioningGroupRequest::getTerminateInstances()const
{
	return terminateInstances_;
}

void DeleteAutoProvisioningGroupRequest::setTerminateInstances(bool terminateInstances)
{
	terminateInstances_ = terminateInstances;
	setCoreParameter("TerminateInstances", terminateInstances ? "true" : "false");
}

std::string DeleteAutoProvisioningGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteAutoProvisioningGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteAutoProvisioningGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteAutoProvisioningGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteAutoProvisioningGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteAutoProvisioningGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteAutoProvisioningGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteAutoProvisioningGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteAutoProvisioningGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteAutoProvisioningGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteAutoProvisioningGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteAutoProvisioningGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteAutoProvisioningGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteAutoProvisioningGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteAutoProvisioningGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteAutoProvisioningGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteAutoProvisioningGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteAutoProvisioningGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteAutoProvisioningGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DeleteAutoProvisioningGroupRequest::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

void DeleteAutoProvisioningGroupRequest::setAutoProvisioningGroupId(const std::string& autoProvisioningGroupId)
{
	autoProvisioningGroupId_ = autoProvisioningGroupId;
	setCoreParameter("AutoProvisioningGroupId", autoProvisioningGroupId);
}

bool DeleteAutoProvisioningGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteAutoProvisioningGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteAutoProvisioningGroupRequest::getRequestId()const
{
	return requestId_;
}

void DeleteAutoProvisioningGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteAutoProvisioningGroupRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteAutoProvisioningGroupRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

