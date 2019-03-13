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

#include <alibabacloud/ecs/model/DescribeHpcClustersRequest.h>

using AlibabaCloud::Ecs::Model::DescribeHpcClustersRequest;

DescribeHpcClustersRequest::DescribeHpcClustersRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeHpcClusters")
{}

DescribeHpcClustersRequest::~DescribeHpcClustersRequest()
{}

long DescribeHpcClustersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHpcClustersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeHpcClustersRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeHpcClustersRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long DescribeHpcClustersRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeHpcClustersRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeHpcClustersRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeHpcClustersRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeHpcClustersRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeHpcClustersRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeHpcClustersRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeHpcClustersRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeHpcClustersRequest::getCallerType()const
{
	return callerType_;
}

void DescribeHpcClustersRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeHpcClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeHpcClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeHpcClustersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHpcClustersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeHpcClustersRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeHpcClustersRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeHpcClustersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeHpcClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeHpcClustersRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeHpcClustersRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool DescribeHpcClustersRequest::getEnable()const
{
	return enable_;
}

void DescribeHpcClustersRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeHpcClustersRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeHpcClustersRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeHpcClustersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeHpcClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeHpcClustersRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeHpcClustersRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeHpcClustersRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeHpcClustersRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeHpcClustersRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeHpcClustersRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeHpcClustersRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeHpcClustersRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeHpcClustersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHpcClustersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeHpcClustersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHpcClustersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeHpcClustersRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeHpcClustersRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeHpcClustersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHpcClustersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeHpcClustersRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeHpcClustersRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeHpcClustersRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeHpcClustersRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeHpcClustersRequest::getHpcClusterIds()const
{
	return hpcClusterIds_;
}

void DescribeHpcClustersRequest::setHpcClusterIds(const std::string& hpcClusterIds)
{
	hpcClusterIds_ = hpcClusterIds;
	setParameter("HpcClusterIds", hpcClusterIds);
}

bool DescribeHpcClustersRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeHpcClustersRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeHpcClustersRequest::getRequestId()const
{
	return requestId_;
}

void DescribeHpcClustersRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

