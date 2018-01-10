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

#include <alibabacloud/ecs/model/SignAgreementRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

SignAgreementRequest::SignAgreementRequest() :
	EcsRequest("SignAgreement")
{}

SignAgreementRequest::~SignAgreementRequest()
{}

std::string SignAgreementRequest::getApp_ip()const
{
	return app_ip_;
}

void SignAgreementRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

long SignAgreementRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SignAgreementRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SignAgreementRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SignAgreementRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SignAgreementRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SignAgreementRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string SignAgreementRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SignAgreementRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool SignAgreementRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SignAgreementRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SignAgreementRequest::getCallerBid()const
{
	return callerBid_;
}

void SignAgreementRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SignAgreementRequest::getOwnerId()const
{
	return ownerId_;
}

void SignAgreementRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SignAgreementRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SignAgreementRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SignAgreementRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SignAgreementRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SignAgreementRequest::getCallerType()const
{
	return callerType_;
}

void SignAgreementRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool SignAgreementRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SignAgreementRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SignAgreementRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SignAgreementRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string SignAgreementRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SignAgreementRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool SignAgreementRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SignAgreementRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SignAgreementRequest::getSecurityToken()const
{
	return securityToken_;
}

void SignAgreementRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SignAgreementRequest::getRequestId()const
{
	return requestId_;
}

void SignAgreementRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

bool SignAgreementRequest::getEnable()const
{
	return enable_;
}

void SignAgreementRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string SignAgreementRequest::getRequestContent()const
{
	return requestContent_;
}

void SignAgreementRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SignAgreementRequest::getAgreementType()const
{
	return agreementType_;
}

void SignAgreementRequest::setAgreementType(const std::string& agreementType)
{
	agreementType_ = agreementType;
	setParameter("AgreementType", agreementType);
}

std::string SignAgreementRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SignAgreementRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SignAgreementRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SignAgreementRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SignAgreementRequest::getCallerUid()const
{
	return callerUid_;
}

void SignAgreementRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

