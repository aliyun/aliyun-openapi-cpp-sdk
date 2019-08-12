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

#include <alibabacloud/ecs/model/DescribeBandwidthLimitationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeBandwidthLimitationRequest;

DescribeBandwidthLimitationRequest::DescribeBandwidthLimitationRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeBandwidthLimitation")
{}

DescribeBandwidthLimitationRequest::~DescribeBandwidthLimitationRequest()
{}

long DescribeBandwidthLimitationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBandwidthLimitationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeBandwidthLimitationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeBandwidthLimitationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeBandwidthLimitationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeBandwidthLimitationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeBandwidthLimitationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeBandwidthLimitationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeBandwidthLimitationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeBandwidthLimitationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeBandwidthLimitationRequest::getCallerType()const
{
	return callerType_;
}

void DescribeBandwidthLimitationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeBandwidthLimitationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBandwidthLimitationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBandwidthLimitationRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeBandwidthLimitationRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeBandwidthLimitationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBandwidthLimitationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeBandwidthLimitationRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBandwidthLimitationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeBandwidthLimitationRequest::getEnable()const
{
	return enable_;
}

void DescribeBandwidthLimitationRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string DescribeBandwidthLimitationRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeBandwidthLimitationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeBandwidthLimitationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeBandwidthLimitationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeBandwidthLimitationRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeBandwidthLimitationRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeBandwidthLimitationRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeBandwidthLimitationRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeBandwidthLimitationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeBandwidthLimitationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeBandwidthLimitationRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeBandwidthLimitationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeBandwidthLimitationRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeBandwidthLimitationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeBandwidthLimitationRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeBandwidthLimitationRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string DescribeBandwidthLimitationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBandwidthLimitationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBandwidthLimitationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBandwidthLimitationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBandwidthLimitationRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeBandwidthLimitationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DescribeBandwidthLimitationRequest::getOperationType()const
{
	return operationType_;
}

void DescribeBandwidthLimitationRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setCoreParameter("OperationType", operationType);
}

long DescribeBandwidthLimitationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBandwidthLimitationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeBandwidthLimitationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeBandwidthLimitationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeBandwidthLimitationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeBandwidthLimitationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeBandwidthLimitationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeBandwidthLimitationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeBandwidthLimitationRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void DescribeBandwidthLimitationRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string DescribeBandwidthLimitationRequest::getRequestId()const
{
	return requestId_;
}

void DescribeBandwidthLimitationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeBandwidthLimitationRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeBandwidthLimitationRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

