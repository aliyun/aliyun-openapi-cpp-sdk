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

#include <alibabacloud/ecs/model/DescribeFleetInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetInstancesRequest;

DescribeFleetInstancesRequest::DescribeFleetInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleetInstances")
{}

DescribeFleetInstancesRequest::~DescribeFleetInstancesRequest()
{}

long DescribeFleetInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeFleetInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFleetInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeFleetInstancesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeFleetInstancesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeFleetInstancesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeFleetInstancesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeFleetInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFleetInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeFleetInstancesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFleetInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeFleetInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFleetInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeFleetInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFleetInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeFleetInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFleetInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeFleetInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeFleetInstancesRequest::getEnable()const
{
	return enable_;
}

void DescribeFleetInstancesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeFleetInstancesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeFleetInstancesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeFleetInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFleetInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeFleetInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFleetInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeFleetInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFleetInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeFleetInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFleetInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeFleetInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFleetInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeFleetInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeFleetInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeFleetInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFleetInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeFleetInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeFleetInstancesRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetInstancesRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", std::to_string(fleetId));
}

bool DescribeFleetInstancesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeFleetInstancesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeFleetInstancesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeFleetInstancesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeFleetInstancesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeFleetInstancesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeFleetInstancesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeFleetInstancesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeFleetInstancesRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeFleetInstancesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

