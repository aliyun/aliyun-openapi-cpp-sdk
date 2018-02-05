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

#include <alibabacloud/ecs/model/DescribeResourcesModificationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeResourcesModificationRequest;

DescribeResourcesModificationRequest::DescribeResourcesModificationRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeResourcesModification")
{}

DescribeResourcesModificationRequest::~DescribeResourcesModificationRequest()
{}

long DescribeResourcesModificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeResourcesModificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeResourcesModificationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeResourcesModificationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeResourcesModificationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeResourcesModificationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeResourcesModificationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeResourcesModificationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeResourcesModificationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeResourcesModificationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeResourcesModificationRequest::getCallerType()const
{
	return callerType_;
}

void DescribeResourcesModificationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeResourcesModificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeResourcesModificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeResourcesModificationRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeResourcesModificationRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeResourcesModificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeResourcesModificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeResourcesModificationRequest::getRegionId()const
{
	return regionId_;
}

void DescribeResourcesModificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeResourcesModificationRequest::getEnable()const
{
	return enable_;
}

void DescribeResourcesModificationRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeResourcesModificationRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeResourcesModificationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

bool DescribeResourcesModificationRequest::getMigrateAcrossZone()const
{
	return migrateAcrossZone_;
}

void DescribeResourcesModificationRequest::setMigrateAcrossZone(bool migrateAcrossZone)
{
	migrateAcrossZone_ = migrateAcrossZone;
	setParameter("MigrateAcrossZone", std::to_string(migrateAcrossZone));
}

std::string DescribeResourcesModificationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeResourcesModificationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeResourcesModificationRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeResourcesModificationRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeResourcesModificationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeResourcesModificationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeResourcesModificationRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeResourcesModificationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeResourcesModificationRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeResourcesModificationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeResourcesModificationRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeResourcesModificationRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeResourcesModificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeResourcesModificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeResourcesModificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeResourcesModificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeResourcesModificationRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeResourcesModificationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string DescribeResourcesModificationRequest::getOperationType()const
{
	return operationType_;
}

void DescribeResourcesModificationRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setParameter("OperationType", operationType);
}

long DescribeResourcesModificationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeResourcesModificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeResourcesModificationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeResourcesModificationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeResourcesModificationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeResourcesModificationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeResourcesModificationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeResourcesModificationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeResourcesModificationRequest::getDestinationResource()const
{
	return destinationResource_;
}

void DescribeResourcesModificationRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setParameter("DestinationResource", destinationResource);
}

std::string DescribeResourcesModificationRequest::getRequestId()const
{
	return requestId_;
}

void DescribeResourcesModificationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

