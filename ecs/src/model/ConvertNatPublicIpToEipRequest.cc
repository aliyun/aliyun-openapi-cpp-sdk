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

#include <alibabacloud/ecs/model/ConvertNatPublicIpToEipRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ConvertNatPublicIpToEipRequest::ConvertNatPublicIpToEipRequest() :
	EcsRequest("ConvertNatPublicIpToEip")
{}

ConvertNatPublicIpToEipRequest::~ConvertNatPublicIpToEipRequest()
{}

std::string ConvertNatPublicIpToEipRequest::getApp_ip()const
{
	return app_ip_;
}

void ConvertNatPublicIpToEipRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

long ConvertNatPublicIpToEipRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ConvertNatPublicIpToEipRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ConvertNatPublicIpToEipRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ConvertNatPublicIpToEipRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ConvertNatPublicIpToEipRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ConvertNatPublicIpToEipRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ConvertNatPublicIpToEipRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ConvertNatPublicIpToEipRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ConvertNatPublicIpToEipRequest::getCallerBid()const
{
	return callerBid_;
}

void ConvertNatPublicIpToEipRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ConvertNatPublicIpToEipRequest::getOwnerId()const
{
	return ownerId_;
}

void ConvertNatPublicIpToEipRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ConvertNatPublicIpToEipRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ConvertNatPublicIpToEipRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ConvertNatPublicIpToEipRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ConvertNatPublicIpToEipRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ConvertNatPublicIpToEipRequest::getCallerType()const
{
	return callerType_;
}

void ConvertNatPublicIpToEipRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool ConvertNatPublicIpToEipRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ConvertNatPublicIpToEipRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ConvertNatPublicIpToEipRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ConvertNatPublicIpToEipRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string ConvertNatPublicIpToEipRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConvertNatPublicIpToEipRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool ConvertNatPublicIpToEipRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ConvertNatPublicIpToEipRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ConvertNatPublicIpToEipRequest::getInstanceId()const
{
	return instanceId_;
}

void ConvertNatPublicIpToEipRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ConvertNatPublicIpToEipRequest::getSecurityToken()const
{
	return securityToken_;
}

void ConvertNatPublicIpToEipRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ConvertNatPublicIpToEipRequest::getRegionId()const
{
	return regionId_;
}

void ConvertNatPublicIpToEipRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConvertNatPublicIpToEipRequest::getRequestId()const
{
	return requestId_;
}

void ConvertNatPublicIpToEipRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

bool ConvertNatPublicIpToEipRequest::getEnable()const
{
	return enable_;
}

void ConvertNatPublicIpToEipRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ConvertNatPublicIpToEipRequest::getRequestContent()const
{
	return requestContent_;
}

void ConvertNatPublicIpToEipRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ConvertNatPublicIpToEipRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ConvertNatPublicIpToEipRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ConvertNatPublicIpToEipRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ConvertNatPublicIpToEipRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ConvertNatPublicIpToEipRequest::getCallerUid()const
{
	return callerUid_;
}

void ConvertNatPublicIpToEipRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

