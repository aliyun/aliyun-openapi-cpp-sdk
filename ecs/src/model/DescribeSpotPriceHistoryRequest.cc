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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeSpotPriceHistoryRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeSpotPriceHistoryRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeSpotPriceHistoryRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeSpotPriceHistoryRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

bool DescribeSpotPriceHistoryRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeSpotPriceHistoryRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeSpotPriceHistoryRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeSpotPriceHistoryRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string DescribeSpotPriceHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSpotPriceHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeSpotPriceHistoryRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeSpotPriceHistoryRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeSpotPriceHistoryRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeSpotPriceHistoryRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeSpotPriceHistoryRequest::getCallerType()const
{
	return callerType_;
}

void DescribeSpotPriceHistoryRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeSpotPriceHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSpotPriceHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSpotPriceHistoryRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSpotPriceHistoryRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeSpotPriceHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSpotPriceHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeSpotPriceHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSpotPriceHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeSpotPriceHistoryRequest::getEnable()const
{
	return enable_;
}

void DescribeSpotPriceHistoryRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeSpotPriceHistoryRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeSpotPriceHistoryRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeSpotPriceHistoryRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeSpotPriceHistoryRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeSpotPriceHistoryRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeSpotPriceHistoryRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeSpotPriceHistoryRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeSpotPriceHistoryRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeSpotPriceHistoryRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeSpotPriceHistoryRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeSpotPriceHistoryRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeSpotPriceHistoryRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int DescribeSpotPriceHistoryRequest::getOffset()const
{
	return offset_;
}

void DescribeSpotPriceHistoryRequest::setOffset(int offset)
{
	offset_ = offset;
	setCoreParameter("Offset", std::to_string(offset));
}

std::string DescribeSpotPriceHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSpotPriceHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSpotPriceHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSpotPriceHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSpotPriceHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSpotPriceHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeSpotPriceHistoryRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeSpotPriceHistoryRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DescribeSpotPriceHistoryRequest::getOSType()const
{
	return oSType_;
}

void DescribeSpotPriceHistoryRequest::setOSType(const std::string& oSType)
{
	oSType_ = oSType;
	setCoreParameter("OSType", oSType);
}

long DescribeSpotPriceHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSpotPriceHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeSpotPriceHistoryRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeSpotPriceHistoryRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeSpotPriceHistoryRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeSpotPriceHistoryRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeSpotPriceHistoryRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeSpotPriceHistoryRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeSpotPriceHistoryRequest::getRequestId()const
{
	return requestId_;
}

void DescribeSpotPriceHistoryRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeSpotPriceHistoryRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeSpotPriceHistoryRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string DescribeSpotPriceHistoryRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeSpotPriceHistoryRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

