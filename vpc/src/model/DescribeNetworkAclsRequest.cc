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

#include <alibabacloud/vpc/model/DescribeNetworkAclsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNetworkAclsRequest;

DescribeNetworkAclsRequest::DescribeNetworkAclsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeNetworkAcls")
{}

DescribeNetworkAclsRequest::~DescribeNetworkAclsRequest()
{}

long DescribeNetworkAclsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkAclsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeNetworkAclsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeNetworkAclsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long DescribeNetworkAclsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeNetworkAclsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeNetworkAclsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeNetworkAclsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeNetworkAclsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeNetworkAclsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeNetworkAclsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkAclsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeNetworkAclsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeNetworkAclsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeNetworkAclsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeNetworkAclsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeNetworkAclsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeNetworkAclsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeNetworkAclsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkAclsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeNetworkAclsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeNetworkAclsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DescribeNetworkAclsRequest::getEnable()const
{
	return enable_;
}

void DescribeNetworkAclsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string DescribeNetworkAclsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeNetworkAclsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeNetworkAclsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkAclsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeNetworkAclsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeNetworkAclsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeNetworkAclsRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void DescribeNetworkAclsRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string DescribeNetworkAclsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeNetworkAclsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeNetworkAclsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeNetworkAclsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeNetworkAclsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeNetworkAclsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeNetworkAclsRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeNetworkAclsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string DescribeNetworkAclsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkAclsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkAclsRequest::getNetworkAclName()const
{
	return networkAclName_;
}

void DescribeNetworkAclsRequest::setNetworkAclName(const std::string& networkAclName)
{
	networkAclName_ = networkAclName;
	setCoreParameter("NetworkAclName", networkAclName);
}

std::string DescribeNetworkAclsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeNetworkAclsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeNetworkAclsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkAclsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeNetworkAclsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeNetworkAclsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool DescribeNetworkAclsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeNetworkAclsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeNetworkAclsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeNetworkAclsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeNetworkAclsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeNetworkAclsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeNetworkAclsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeNetworkAclsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeNetworkAclsRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeNetworkAclsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

