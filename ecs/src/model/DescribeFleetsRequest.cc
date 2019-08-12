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

bool DescribeFleetsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetsRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

bool DescribeFleetsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFleetsRequest::setCallerParentId(bool callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId ? "true" : "false");
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
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeFleetsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFleetsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeFleetsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFleetsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeFleetsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFleetsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFleetsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFleetsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFleetsRequest::getFleetName()const
{
	return fleetName_;
}

void DescribeFleetsRequest::setFleetName(const std::string& fleetName)
{
	fleetName_ = fleetName;
	setCoreParameter("FleetName", fleetName);
}

std::vector<std::string> DescribeFleetsRequest::getFleetStatus()const
{
	return fleetStatus_;
}

void DescribeFleetsRequest::setFleetStatus(const std::vector<std::string>& fleetStatus)
{
	fleetStatus_ = fleetStatus;
	for(int i = 0; i!= fleetStatus.size(); i++)
		setCoreParameter("FleetStatus."+ std::to_string(i), fleetStatus.at(i));
}

std::string DescribeFleetsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFleetsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeFleetsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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
	setCoreParameter("RequestContent", requestContent);
}

int DescribeFleetsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFleetsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFleetsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFleetsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeFleetsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFleetsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

bool DescribeFleetsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFleetsRequest::setCallerUid(bool callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid ? "true" : "false");
}

std::string DescribeFleetsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFleetsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeFleetsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeFleetsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFleetsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

bool DescribeFleetsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetsRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::vector<std::string> DescribeFleetsRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetsRequest::setFleetId(const std::vector<std::string>& fleetId)
{
	fleetId_ = fleetId;
	for(int i = 0; i!= fleetId.size(); i++)
		setCoreParameter("FleetId."+ std::to_string(i), fleetId.at(i));
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
	setCoreParameter("RequestId", requestId);
}

std::string DescribeFleetsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeFleetsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

