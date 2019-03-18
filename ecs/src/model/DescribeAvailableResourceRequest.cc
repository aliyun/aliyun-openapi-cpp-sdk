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

#include <alibabacloud/ecs/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAvailableResource")
{}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest()
{}

long DescribeAvailableResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

float DescribeAvailableResourceRequest::getMemory()const
{
	return memory_;
}

void DescribeAvailableResourceRequest::setMemory(float memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

long DescribeAvailableResourceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAvailableResourceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeAvailableResourceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeAvailableResourceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

bool DescribeAvailableResourceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAvailableResourceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getDataDiskCategory()const
{
	return dataDiskCategory_;
}

void DescribeAvailableResourceRequest::setDataDiskCategory(const std::string& dataDiskCategory)
{
	dataDiskCategory_ = dataDiskCategory;
	setParameter("DataDiskCategory", dataDiskCategory);
}

std::string DescribeAvailableResourceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAvailableResourceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeAvailableResourceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAvailableResourceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAvailableResourceRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAvailableResourceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeAvailableResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableResourceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeAvailableResourceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

int DescribeAvailableResourceRequest::getCores()const
{
	return cores_;
}

void DescribeAvailableResourceRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

std::string DescribeAvailableResourceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAvailableResourceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeAvailableResourceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeAvailableResourceRequest::getEnable()const
{
	return enable_;
}

void DescribeAvailableResourceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAvailableResourceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeAvailableResourceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void DescribeAvailableResourceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string DescribeAvailableResourceRequest::getScope()const
{
	return scope_;
}

void DescribeAvailableResourceRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::string DescribeAvailableResourceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAvailableResourceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAvailableResourceRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeAvailableResourceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeAvailableResourceRequest::getNetworkCategory()const
{
	return networkCategory_;
}

void DescribeAvailableResourceRequest::setNetworkCategory(const std::string& networkCategory)
{
	networkCategory_ = networkCategory;
	setParameter("NetworkCategory", networkCategory);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeAvailableResourceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAvailableResourceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeAvailableResourceRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAvailableResourceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeAvailableResourceRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAvailableResourceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAvailableResourceRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void DescribeAvailableResourceRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

std::string DescribeAvailableResourceRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAvailableResourceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeAvailableResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableResourceRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeAvailableResourceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

bool DescribeAvailableResourceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAvailableResourceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeAvailableResourceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAvailableResourceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeAvailableResourceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAvailableResourceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void DescribeAvailableResourceRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string DescribeAvailableResourceRequest::getDestinationResource()const
{
	return destinationResource_;
}

void DescribeAvailableResourceRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setParameter("DestinationResource", destinationResource);
}

std::string DescribeAvailableResourceRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAvailableResourceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeAvailableResourceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

