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

#include <alibabacloud/vpc/model/DescribeRouteEntryListRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouteEntryListRequest;

DescribeRouteEntryListRequest::DescribeRouteEntryListRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeRouteEntryList")
{}

DescribeRouteEntryListRequest::~DescribeRouteEntryListRequest()
{}

long DescribeRouteEntryListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouteEntryListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRouteEntryListRequest::getRouteEntryName()const
{
	return routeEntryName_;
}

void DescribeRouteEntryListRequest::setRouteEntryName(const std::string& routeEntryName)
{
	routeEntryName_ = routeEntryName;
	setCoreParameter("RouteEntryName", routeEntryName);
}

long DescribeRouteEntryListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRouteEntryListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRouteEntryListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRouteEntryListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRouteEntryListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRouteEntryListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRouteEntryListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRouteEntryListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRouteEntryListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRouteEntryListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRouteEntryListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRouteEntryListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRouteEntryListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeRouteEntryListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeRouteEntryListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRouteEntryListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRouteEntryListRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeRouteEntryListRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setCoreParameter("NextToken", nextToken);
}

std::string DescribeRouteEntryListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRouteEntryListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DescribeRouteEntryListRequest::getEnable()const
{
	return enable_;
}

void DescribeRouteEntryListRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeRouteEntryListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRouteEntryListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRouteEntryListRequest::getRouteEntryType()const
{
	return routeEntryType_;
}

void DescribeRouteEntryListRequest::setRouteEntryType(const std::string& routeEntryType)
{
	routeEntryType_ = routeEntryType;
	setCoreParameter("RouteEntryType", routeEntryType);
}

std::string DescribeRouteEntryListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRouteEntryListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRouteEntryListRequest::getIpVersion()const
{
	return ipVersion_;
}

void DescribeRouteEntryListRequest::setIpVersion(const std::string& ipVersion)
{
	ipVersion_ = ipVersion;
	setCoreParameter("IpVersion", ipVersion);
}

std::string DescribeRouteEntryListRequest::getNextHopId()const
{
	return nextHopId_;
}

void DescribeRouteEntryListRequest::setNextHopId(const std::string& nextHopId)
{
	nextHopId_ = nextHopId;
	setCoreParameter("NextHopId", nextHopId);
}

std::string DescribeRouteEntryListRequest::getNextHopType()const
{
	return nextHopType_;
}

void DescribeRouteEntryListRequest::setNextHopType(const std::string& nextHopType)
{
	nextHopType_ = nextHopType;
	setCoreParameter("NextHopType", nextHopType);
}

std::string DescribeRouteEntryListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRouteEntryListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeRouteEntryListRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DescribeRouteEntryListRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setCoreParameter("RouteTableId", routeTableId);
}

long DescribeRouteEntryListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRouteEntryListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRouteEntryListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRouteEntryListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRouteEntryListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouteEntryListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRouteEntryListRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void DescribeRouteEntryListRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setCoreParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string DescribeRouteEntryListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouteEntryListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeRouteEntryListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRouteEntryListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRouteEntryListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouteEntryListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeRouteEntryListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRouteEntryListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRouteEntryListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRouteEntryListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

int DescribeRouteEntryListRequest::getMaxResult()const
{
	return maxResult_;
}

void DescribeRouteEntryListRequest::setMaxResult(int maxResult)
{
	maxResult_ = maxResult;
	setCoreParameter("MaxResult", std::to_string(maxResult));
}

bool DescribeRouteEntryListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRouteEntryListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRouteEntryListRequest::getRouteEntryId()const
{
	return routeEntryId_;
}

void DescribeRouteEntryListRequest::setRouteEntryId(const std::string& routeEntryId)
{
	routeEntryId_ = routeEntryId;
	setCoreParameter("RouteEntryId", routeEntryId);
}

std::string DescribeRouteEntryListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRouteEntryListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

