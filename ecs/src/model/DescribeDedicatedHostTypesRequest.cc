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

#include <alibabacloud/ecs/model/DescribeDedicatedHostTypesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDedicatedHostTypesRequest;

DescribeDedicatedHostTypesRequest::DescribeDedicatedHostTypesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDedicatedHostTypes")
{}

DescribeDedicatedHostTypesRequest::~DescribeDedicatedHostTypesRequest()
{}

long DescribeDedicatedHostTypesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostTypesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDedicatedHostTypesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDedicatedHostTypesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDedicatedHostTypesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDedicatedHostTypesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDedicatedHostTypesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDedicatedHostTypesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDedicatedHostTypesRequest::getSupportedInstanceTypeFamily()const
{
	return supportedInstanceTypeFamily_;
}

void DescribeDedicatedHostTypesRequest::setSupportedInstanceTypeFamily(const std::string& supportedInstanceTypeFamily)
{
	supportedInstanceTypeFamily_ = supportedInstanceTypeFamily;
	setCoreParameter("SupportedInstanceTypeFamily", supportedInstanceTypeFamily);
}

std::string DescribeDedicatedHostTypesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDedicatedHostTypesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDedicatedHostTypesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDedicatedHostTypesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDedicatedHostTypesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedHostTypesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedHostTypesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeDedicatedHostTypesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeDedicatedHostTypesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDedicatedHostTypesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDedicatedHostTypesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostTypesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeDedicatedHostTypesRequest::getEnable()const
{
	return enable_;
}

void DescribeDedicatedHostTypesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeDedicatedHostTypesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDedicatedHostTypesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDedicatedHostTypesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDedicatedHostTypesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDedicatedHostTypesRequest::getDedicatedHostType()const
{
	return dedicatedHostType_;
}

void DescribeDedicatedHostTypesRequest::setDedicatedHostType(const std::string& dedicatedHostType)
{
	dedicatedHostType_ = dedicatedHostType;
	setCoreParameter("DedicatedHostType", dedicatedHostType);
}

std::string DescribeDedicatedHostTypesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDedicatedHostTypesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDedicatedHostTypesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDedicatedHostTypesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDedicatedHostTypesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDedicatedHostTypesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDedicatedHostTypesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostTypesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDedicatedHostTypesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDedicatedHostTypesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDedicatedHostTypesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDedicatedHostTypesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDedicatedHostTypesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostTypesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeDedicatedHostTypesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDedicatedHostTypesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDedicatedHostTypesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDedicatedHostTypesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDedicatedHostTypesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDedicatedHostTypesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDedicatedHostTypesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDedicatedHostTypesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDedicatedHostTypesRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeDedicatedHostTypesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

