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

#include <alibabacloud/ecs/model/InstallCloudAssistantRequest.h>

using AlibabaCloud::Ecs::Model::InstallCloudAssistantRequest;

InstallCloudAssistantRequest::InstallCloudAssistantRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "InstallCloudAssistant")
{}

InstallCloudAssistantRequest::~InstallCloudAssistantRequest()
{}

bool InstallCloudAssistantRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void InstallCloudAssistantRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

bool InstallCloudAssistantRequest::getCallerParentId()const
{
	return callerParentId_;
}

void InstallCloudAssistantRequest::setCallerParentId(bool callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId ? "true" : "false");
}

bool InstallCloudAssistantRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void InstallCloudAssistantRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string InstallCloudAssistantRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void InstallCloudAssistantRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string InstallCloudAssistantRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void InstallCloudAssistantRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string InstallCloudAssistantRequest::getCallerType()const
{
	return callerType_;
}

void InstallCloudAssistantRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string InstallCloudAssistantRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InstallCloudAssistantRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string InstallCloudAssistantRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void InstallCloudAssistantRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string InstallCloudAssistantRequest::getSecurityToken()const
{
	return securityToken_;
}

void InstallCloudAssistantRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string InstallCloudAssistantRequest::getRegionId()const
{
	return regionId_;
}

void InstallCloudAssistantRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool InstallCloudAssistantRequest::getEnable()const
{
	return enable_;
}

void InstallCloudAssistantRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string InstallCloudAssistantRequest::getRequestContent()const
{
	return requestContent_;
}

void InstallCloudAssistantRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string InstallCloudAssistantRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void InstallCloudAssistantRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string InstallCloudAssistantRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void InstallCloudAssistantRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

bool InstallCloudAssistantRequest::getCallerUid()const
{
	return callerUid_;
}

void InstallCloudAssistantRequest::setCallerUid(bool callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid ? "true" : "false");
}

std::string InstallCloudAssistantRequest::getApp_ip()const
{
	return app_ip_;
}

void InstallCloudAssistantRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string InstallCloudAssistantRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void InstallCloudAssistantRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string InstallCloudAssistantRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void InstallCloudAssistantRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string InstallCloudAssistantRequest::getCallerBid()const
{
	return callerBid_;
}

void InstallCloudAssistantRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

bool InstallCloudAssistantRequest::getOwnerId()const
{
	return ownerId_;
}

void InstallCloudAssistantRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

bool InstallCloudAssistantRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void InstallCloudAssistantRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool InstallCloudAssistantRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void InstallCloudAssistantRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool InstallCloudAssistantRequest::getSecurity_transport()const
{
	return security_transport_;
}

void InstallCloudAssistantRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> InstallCloudAssistantRequest::getInstanceId()const
{
	return instanceId_;
}

void InstallCloudAssistantRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

std::string InstallCloudAssistantRequest::getRequestId()const
{
	return requestId_;
}

void InstallCloudAssistantRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string InstallCloudAssistantRequest::getAkProxy()const
{
	return akProxy_;
}

void InstallCloudAssistantRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

