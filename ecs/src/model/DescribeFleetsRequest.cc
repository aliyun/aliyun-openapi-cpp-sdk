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

#include <alibabacloud/ecs/model/DescribeFleetsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetsRequest;

DescribeFleetsRequest::DescribeFleetsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleets")
{}

DescribeFleetsRequest::~DescribeFleetsRequest()
{}

long DescribeFleetsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeFleetsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFleetsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeFleetsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeFleetsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeFleetsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeFleetsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeFleetsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFleetsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeFleetsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFleetsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeFleetsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFleetsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeFleetsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFleetsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeFleetsRequest::getFleetName()const
{
	return fleetName_;
}

void DescribeFleetsRequest::setFleetName(const std::string& fleetName)
{
	fleetName_ = fleetName;
	setCoreParameter("FleetName", std::to_string(fleetName));
}

std::vector<std::string> DescribeFleetsRequest::getFleetStatus()const
{
	return fleetStatus_;
}

void DescribeFleetsRequest::setFleetStatus(const std::vector<std::string>& fleetStatus)
{
	fleetStatus_ = fleetStatus;
	for(int i = 0; i!= fleetStatus.size(); i++)
		setCoreParameter("FleetStatus."+ std::to_string(i), std::to_string(fleetStatus.at(i)));
}

std::string DescribeFleetsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFleetsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeFleetsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeFleetsRequest::getEnable()const
{
	return enable_;
}

void DescribeFleetsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeFleetsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeFleetsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeFleetsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFleetsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeFleetsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFleetsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeFleetsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFleetsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeFleetsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFleetsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeFleetsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFleetsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeFleetsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeFleetsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeFleetsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFleetsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeFleetsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::vector<std::string> DescribeFleetsRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetsRequest::setFleetId(const std::vector<std::string>& fleetId)
{
	fleetId_ = fleetId;
	for(int i = 0; i!= fleetId.size(); i++)
		setCoreParameter("FleetId."+ std::to_string(i), std::to_string(fleetId.at(i)));
}

bool DescribeFleetsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeFleetsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeFleetsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeFleetsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeFleetsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeFleetsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeFleetsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeFleetsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeFleetsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeFleetsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

