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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoProvisioningGroupsRequest;

DescribeAutoProvisioningGroupsRequest::DescribeAutoProvisioningGroupsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoProvisioningGroups")
{}

DescribeAutoProvisioningGroupsRequest::~DescribeAutoProvisioningGroupsRequest()
{}

long DescribeAutoProvisioningGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoProvisioningGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeAutoProvisioningGroupsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAutoProvisioningGroupsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeAutoProvisioningGroupsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAutoProvisioningGroupsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAutoProvisioningGroupsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeAutoProvisioningGroupsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAutoProvisioningGroupsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAutoProvisioningGroupsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAutoProvisioningGroupsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeAutoProvisioningGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoProvisioningGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAutoProvisioningGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAutoProvisioningGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAutoProvisioningGroupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAutoProvisioningGroupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAutoProvisioningGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoProvisioningGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeAutoProvisioningGroupsRequest::getEnable()const
{
	return enable_;
}

void DescribeAutoProvisioningGroupsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAutoProvisioningGroupsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeAutoProvisioningGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoProvisioningGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAutoProvisioningGroupsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAutoProvisioningGroupsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAutoProvisioningGroupsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAutoProvisioningGroupsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeAutoProvisioningGroupsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAutoProvisioningGroupsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeAutoProvisioningGroupsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAutoProvisioningGroupsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::vector<std::string> DescribeAutoProvisioningGroupsRequest::getAutoProvisioningGroupStatus()const
{
	return autoProvisioningGroupStatus_;
}

void DescribeAutoProvisioningGroupsRequest::setAutoProvisioningGroupStatus(const std::vector<std::string>& autoProvisioningGroupStatus)
{
	autoProvisioningGroupStatus_ = autoProvisioningGroupStatus;
	for(int i = 0; i!= autoProvisioningGroupStatus.size(); i++)
		setCoreParameter("AutoProvisioningGroupStatus."+ std::to_string(i), autoProvisioningGroupStatus.at(i));
}

std::string DescribeAutoProvisioningGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoProvisioningGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoProvisioningGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoProvisioningGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAutoProvisioningGroupsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAutoProvisioningGroupsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeAutoProvisioningGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoProvisioningGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeAutoProvisioningGroupsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAutoProvisioningGroupsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeAutoProvisioningGroupsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAutoProvisioningGroupsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::vector<std::string> DescribeAutoProvisioningGroupsRequest::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

void DescribeAutoProvisioningGroupsRequest::setAutoProvisioningGroupId(const std::vector<std::string>& autoProvisioningGroupId)
{
	autoProvisioningGroupId_ = autoProvisioningGroupId;
	for(int i = 0; i!= autoProvisioningGroupId.size(); i++)
		setCoreParameter("AutoProvisioningGroupId."+ std::to_string(i), autoProvisioningGroupId.at(i));
}

bool DescribeAutoProvisioningGroupsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAutoProvisioningGroupsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAutoProvisioningGroupsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeAutoProvisioningGroupsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeAutoProvisioningGroupsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string DescribeAutoProvisioningGroupsRequest::getAutoProvisioningGroupName()const
{
	return autoProvisioningGroupName_;
}

void DescribeAutoProvisioningGroupsRequest::setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName)
{
	autoProvisioningGroupName_ = autoProvisioningGroupName;
	setCoreParameter("AutoProvisioningGroupName", autoProvisioningGroupName);
}

