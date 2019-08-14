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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacePermissionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeNetworkInterfacePermissionsRequest;

DescribeNetworkInterfacePermissionsRequest::DescribeNetworkInterfacePermissionsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeNetworkInterfacePermissions")
{}

DescribeNetworkInterfacePermissionsRequest::~DescribeNetworkInterfacePermissionsRequest()
{}

long DescribeNetworkInterfacePermissionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkInterfacePermissionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeNetworkInterfacePermissionsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeNetworkInterfacePermissionsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeNetworkInterfacePermissionsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeNetworkInterfacePermissionsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeNetworkInterfacePermissionsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeNetworkInterfacePermissionsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeNetworkInterfacePermissionsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeNetworkInterfacePermissionsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeNetworkInterfacePermissionsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeNetworkInterfacePermissionsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeNetworkInterfacePermissionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkInterfacePermissionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeNetworkInterfacePermissionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeNetworkInterfacePermissionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeNetworkInterfacePermissionsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeNetworkInterfacePermissionsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeNetworkInterfacePermissionsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeNetworkInterfacePermissionsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeNetworkInterfacePermissionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkInterfacePermissionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeNetworkInterfacePermissionsRequest::getEnable()const
{
	return enable_;
}

void DescribeNetworkInterfacePermissionsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeNetworkInterfacePermissionsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeNetworkInterfacePermissionsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeNetworkInterfacePermissionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkInterfacePermissionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeNetworkInterfacePermissionsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeNetworkInterfacePermissionsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeNetworkInterfacePermissionsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeNetworkInterfacePermissionsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeNetworkInterfacePermissionsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeNetworkInterfacePermissionsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeNetworkInterfacePermissionsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeNetworkInterfacePermissionsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::vector<std::string> DescribeNetworkInterfacePermissionsRequest::getNetworkInterfacePermissionId()const
{
	return networkInterfacePermissionId_;
}

void DescribeNetworkInterfacePermissionsRequest::setNetworkInterfacePermissionId(const std::vector<std::string>& networkInterfacePermissionId)
{
	networkInterfacePermissionId_ = networkInterfacePermissionId;
	for(int i = 0; i!= networkInterfacePermissionId.size(); i++)
		setCoreParameter("NetworkInterfacePermissionId."+ std::to_string(i), networkInterfacePermissionId.at(i));
}

std::string DescribeNetworkInterfacePermissionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkInterfacePermissionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkInterfacePermissionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNetworkInterfacePermissionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeNetworkInterfacePermissionsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeNetworkInterfacePermissionsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeNetworkInterfacePermissionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkInterfacePermissionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeNetworkInterfacePermissionsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeNetworkInterfacePermissionsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeNetworkInterfacePermissionsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeNetworkInterfacePermissionsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeNetworkInterfacePermissionsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeNetworkInterfacePermissionsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeNetworkInterfacePermissionsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeNetworkInterfacePermissionsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeNetworkInterfacePermissionsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeNetworkInterfacePermissionsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string DescribeNetworkInterfacePermissionsRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void DescribeNetworkInterfacePermissionsRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

