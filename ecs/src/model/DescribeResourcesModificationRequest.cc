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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

float DescribeResourcesModificationRequest::getMemory()const
{
	return memory_;
}

void DescribeResourcesModificationRequest::setMemory(float memory)
{
	memory_ = memory;
	setCoreParameter("Memory", memory);
}

long DescribeResourcesModificationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeResourcesModificationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeResourcesModificationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeResourcesModificationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeResourcesModificationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeResourcesModificationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeResourcesModificationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeResourcesModificationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeResourcesModificationRequest::getCallerType()const
{
	return callerType_;
}

void DescribeResourcesModificationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeResourcesModificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeResourcesModificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeResourcesModificationRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeResourcesModificationRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

int DescribeResourcesModificationRequest::getCores()const
{
	return cores_;
}

void DescribeResourcesModificationRequest::setCores(int cores)
{
	cores_ = cores;
	setCoreParameter("Cores", cores);
}

std::string DescribeResourcesModificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeResourcesModificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeResourcesModificationRequest::getRegionId()const
{
	return regionId_;
}

void DescribeResourcesModificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeResourcesModificationRequest::getEnable()const
{
	return enable_;
}

void DescribeResourcesModificationRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeResourcesModificationRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeResourcesModificationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

bool DescribeResourcesModificationRequest::getMigrateAcrossZone()const
{
	return migrateAcrossZone_;
}

void DescribeResourcesModificationRequest::setMigrateAcrossZone(bool migrateAcrossZone)
{
	migrateAcrossZone_ = migrateAcrossZone;
	setCoreParameter("MigrateAcrossZone", migrateAcrossZone ? "true" : "false");
}

std::string DescribeResourcesModificationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeResourcesModificationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeResourcesModificationRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeResourcesModificationRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string DescribeResourcesModificationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeResourcesModificationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeResourcesModificationRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeResourcesModificationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeResourcesModificationRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeResourcesModificationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeResourcesModificationRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeResourcesModificationRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", std::to_string(resourceId));
}

std::string DescribeResourcesModificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeResourcesModificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeResourcesModificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeResourcesModificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeResourcesModificationRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeResourcesModificationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string DescribeResourcesModificationRequest::getOperationType()const
{
	return operationType_;
}

void DescribeResourcesModificationRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setCoreParameter("OperationType", std::to_string(operationType));
}

long DescribeResourcesModificationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeResourcesModificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeResourcesModificationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeResourcesModificationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeResourcesModificationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeResourcesModificationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeResourcesModificationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeResourcesModificationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeResourcesModificationRequest::getDestinationResource()const
{
	return destinationResource_;
}

void DescribeResourcesModificationRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setCoreParameter("DestinationResource", std::to_string(destinationResource));
}

std::string DescribeResourcesModificationRequest::getRequestId()const
{
	return requestId_;
}

void DescribeResourcesModificationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeResourcesModificationRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeResourcesModificationRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

