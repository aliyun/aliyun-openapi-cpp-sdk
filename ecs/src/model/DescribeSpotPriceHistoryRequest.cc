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

#include <alibabacloud/ecs/model/DescribeSpotPriceHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSpotPriceHistoryRequest;

DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSpotPriceHistory")
{}

DescribeSpotPriceHistoryRequest::~DescribeSpotPriceHistoryRequest()
{}

long DescribeSpotPriceHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSpotPriceHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeSpotPriceHistoryRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeSpotPriceHistoryRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeSpotPriceHistoryRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeSpotPriceHistoryRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

bool DescribeSpotPriceHistoryRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeSpotPriceHistoryRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeSpotPriceHistoryRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeSpotPriceHistoryRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string DescribeSpotPriceHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSpotPriceHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeSpotPriceHistoryRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeSpotPriceHistoryRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeSpotPriceHistoryRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeSpotPriceHistoryRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeSpotPriceHistoryRequest::getCallerType()const
{
	return callerType_;
}

void DescribeSpotPriceHistoryRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeSpotPriceHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSpotPriceHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSpotPriceHistoryRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSpotPriceHistoryRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSpotPriceHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSpotPriceHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSpotPriceHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSpotPriceHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeSpotPriceHistoryRequest::getEnable()const
{
	return enable_;
}

void DescribeSpotPriceHistoryRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeSpotPriceHistoryRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeSpotPriceHistoryRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeSpotPriceHistoryRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeSpotPriceHistoryRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeSpotPriceHistoryRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeSpotPriceHistoryRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeSpotPriceHistoryRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeSpotPriceHistoryRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeSpotPriceHistoryRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeSpotPriceHistoryRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeSpotPriceHistoryRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeSpotPriceHistoryRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

int DescribeSpotPriceHistoryRequest::getOffset()const
{
	return offset_;
}

void DescribeSpotPriceHistoryRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

std::string DescribeSpotPriceHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSpotPriceHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSpotPriceHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSpotPriceHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSpotPriceHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSpotPriceHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeSpotPriceHistoryRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeSpotPriceHistoryRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string DescribeSpotPriceHistoryRequest::getOSType()const
{
	return oSType_;
}

void DescribeSpotPriceHistoryRequest::setOSType(const std::string& oSType)
{
	oSType_ = oSType;
	setParameter("OSType", oSType);
}

long DescribeSpotPriceHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSpotPriceHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeSpotPriceHistoryRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeSpotPriceHistoryRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeSpotPriceHistoryRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeSpotPriceHistoryRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeSpotPriceHistoryRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeSpotPriceHistoryRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeSpotPriceHistoryRequest::getRequestId()const
{
	return requestId_;
}

void DescribeSpotPriceHistoryRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeSpotPriceHistoryRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeSpotPriceHistoryRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

