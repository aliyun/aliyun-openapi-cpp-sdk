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

#include <alibabacloud/ecs/model/DeleteLaunchTemplateRequest.h>

using AlibabaCloud::Ecs::Model::DeleteLaunchTemplateRequest;

DeleteLaunchTemplateRequest::DeleteLaunchTemplateRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteLaunchTemplate")
{}

DeleteLaunchTemplateRequest::~DeleteLaunchTemplateRequest()
{}

std::string DeleteLaunchTemplateRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void DeleteLaunchTemplateRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setCoreParameter("LaunchTemplateName", launchTemplateName);
}

long DeleteLaunchTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteLaunchTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteLaunchTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteLaunchTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteLaunchTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteLaunchTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteLaunchTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteLaunchTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteLaunchTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteLaunchTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteLaunchTemplateRequest::getCallerType()const
{
	return callerType_;
}

void DeleteLaunchTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteLaunchTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLaunchTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteLaunchTemplateRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteLaunchTemplateRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DeleteLaunchTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLaunchTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteLaunchTemplateRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLaunchTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteLaunchTemplateRequest::getEnable()const
{
	return enable_;
}

void DeleteLaunchTemplateRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteLaunchTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteLaunchTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteLaunchTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteLaunchTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteLaunchTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteLaunchTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteLaunchTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteLaunchTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteLaunchTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteLaunchTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteLaunchTemplateRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DeleteLaunchTemplateRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", launchTemplateId);
}

std::string DeleteLaunchTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteLaunchTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteLaunchTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteLaunchTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteLaunchTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteLaunchTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteLaunchTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLaunchTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteLaunchTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteLaunchTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteLaunchTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteLaunchTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteLaunchTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteLaunchTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteLaunchTemplateRequest::getRequestId()const
{
	return requestId_;
}

void DeleteLaunchTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteLaunchTemplateRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteLaunchTemplateRequest::setAkProxy(const std::string& akProxy)
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

#include <alibabacloud/ecs/model/DeleteLaunchTemplateRequest.h>

using AlibabaCloud::Ecs::Model::DeleteLaunchTemplateRequest;

DeleteLaunchTemplateRequest::DeleteLaunchTemplateRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteLaunchTemplate")
{}

DeleteLaunchTemplateRequest::~DeleteLaunchTemplateRequest()
{}

std::string DeleteLaunchTemplateRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void DeleteLaunchTemplateRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setCoreParameter("LaunchTemplateName", launchTemplateName);
}

long DeleteLaunchTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteLaunchTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteLaunchTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteLaunchTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteLaunchTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteLaunchTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteLaunchTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteLaunchTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteLaunchTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteLaunchTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteLaunchTemplateRequest::getCallerType()const
{
	return callerType_;
}

void DeleteLaunchTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteLaunchTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLaunchTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteLaunchTemplateRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteLaunchTemplateRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DeleteLaunchTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLaunchTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteLaunchTemplateRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLaunchTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteLaunchTemplateRequest::getEnable()const
{
	return enable_;
}

void DeleteLaunchTemplateRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteLaunchTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteLaunchTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteLaunchTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteLaunchTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteLaunchTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteLaunchTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteLaunchTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteLaunchTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteLaunchTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteLaunchTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteLaunchTemplateRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DeleteLaunchTemplateRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", launchTemplateId);
}

std::string DeleteLaunchTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteLaunchTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteLaunchTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteLaunchTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteLaunchTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteLaunchTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteLaunchTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLaunchTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteLaunchTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteLaunchTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteLaunchTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteLaunchTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteLaunchTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteLaunchTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteLaunchTemplateRequest::getRequestId()const
{
	return requestId_;
}

void DeleteLaunchTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteLaunchTemplateRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteLaunchTemplateRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

>>>>>>> master
