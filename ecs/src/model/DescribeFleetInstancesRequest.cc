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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeFleetInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFleetInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
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
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeFleetInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFleetInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeFleetInstancesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFleetInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeFleetInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFleetInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFleetInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFleetInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFleetInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFleetInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeFleetInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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
	setCoreParameter("RequestContent", requestContent);
}

int DescribeFleetInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFleetInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFleetInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFleetInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeFleetInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFleetInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeFleetInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFleetInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeFleetInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFleetInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeFleetInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeFleetInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFleetInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeFleetInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFleetInstancesRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetInstancesRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
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
	setCoreParameter("RequestId", requestId);
}

std::string DescribeFleetInstancesRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeFleetInstancesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

