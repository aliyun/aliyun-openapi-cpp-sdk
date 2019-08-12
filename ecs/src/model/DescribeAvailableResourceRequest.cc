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

bool DescribeAvailableResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

float DescribeAvailableResourceRequest::getMemory()const
{
	return memory_;
}

void DescribeAvailableResourceRequest::setMemory(float memory)
{
	memory_ = memory;
	setCoreParameter("Memory", std::to_string(memory));
}

bool DescribeAvailableResourceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAvailableResourceRequest::setCallerParentId(bool callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeAvailableResourceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

bool DescribeAvailableResourceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAvailableResourceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getDataDiskCategory()const
{
	return dataDiskCategory_;
}

void DescribeAvailableResourceRequest::setDataDiskCategory(const std::string& dataDiskCategory)
{
	dataDiskCategory_ = dataDiskCategory;
	setCoreParameter("DataDiskCategory", dataDiskCategory);
}

std::string DescribeAvailableResourceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAvailableResourceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeAvailableResourceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAvailableResourceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAvailableResourceRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAvailableResourceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeAvailableResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableResourceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeAvailableResourceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

int DescribeAvailableResourceRequest::getCores()const
{
	return cores_;
}

void DescribeAvailableResourceRequest::setCores(int cores)
{
	cores_ = cores;
	setCoreParameter("Cores", std::to_string(cores));
}

std::string DescribeAvailableResourceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAvailableResourceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAvailableResourceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeAvailableResourceRequest::getEnable()const
{
	return enable_;
}

void DescribeAvailableResourceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAvailableResourceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeAvailableResourceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void DescribeAvailableResourceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string DescribeAvailableResourceRequest::getScope()const
{
	return scope_;
}

void DescribeAvailableResourceRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", scope);
}

std::string DescribeAvailableResourceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAvailableResourceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAvailableResourceRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeAvailableResourceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeAvailableResourceRequest::getNetworkCategory()const
{
	return networkCategory_;
}

void DescribeAvailableResourceRequest::setNetworkCategory(const std::string& networkCategory)
{
	networkCategory_ = networkCategory;
	setCoreParameter("NetworkCategory", networkCategory);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeAvailableResourceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAvailableResourceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

bool DescribeAvailableResourceRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAvailableResourceRequest::setCallerUid(bool callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAvailableResourceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAvailableResourceRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void DescribeAvailableResourceRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

std::string DescribeAvailableResourceRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAvailableResourceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

bool DescribeAvailableResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeAvailableResourceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool DescribeAvailableResourceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAvailableResourceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeAvailableResourceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAvailableResourceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeAvailableResourceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAvailableResourceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void DescribeAvailableResourceRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string DescribeAvailableResourceRequest::getDestinationResource()const
{
	return destinationResource_;
}

void DescribeAvailableResourceRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setCoreParameter("DestinationResource", destinationResource);
}

std::string DescribeAvailableResourceRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAvailableResourceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeAvailableResourceRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeAvailableResourceRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string DescribeAvailableResourceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

