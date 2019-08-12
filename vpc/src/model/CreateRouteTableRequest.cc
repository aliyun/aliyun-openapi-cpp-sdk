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

#include <alibabacloud/vpc/model/CreateRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouteTableRequest;

CreateRouteTableRequest::CreateRouteTableRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateRouteTable")
{}

CreateRouteTableRequest::~CreateRouteTableRequest()
{}

long CreateRouteTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRouteTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateRouteTableRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRouteTableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long CreateRouteTableRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateRouteTableRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string CreateRouteTableRequest::getDescription()const
{
	return description_;
}

void CreateRouteTableRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

bool CreateRouteTableRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateRouteTableRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateRouteTableRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateRouteTableRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateRouteTableRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateRouteTableRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateRouteTableRequest::getCallerType()const
{
	return callerType_;
}

void CreateRouteTableRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateRouteTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRouteTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateRouteTableRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateRouteTableRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateRouteTableRequest::getRouteTableName()const
{
	return routeTableName_;
}

void CreateRouteTableRequest::setRouteTableName(const std::string& routeTableName)
{
	routeTableName_ = routeTableName;
	setCoreParameter("RouteTableName", std::to_string(routeTableName));
}

std::string CreateRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void CreateRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateRouteTableRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateRouteTableRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool CreateRouteTableRequest::getEnable()const
{
	return enable_;
}

void CreateRouteTableRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateRouteTableRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateRouteTableRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateRouteTableRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateRouteTableRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateRouteTableRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateRouteTableRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateRouteTableRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateRouteTableRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateRouteTableRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateRouteTableRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateRouteTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRouteTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateRouteTableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRouteTableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateRouteTableRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateRouteTableRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateRouteTableRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRouteTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool CreateRouteTableRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateRouteTableRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateRouteTableRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateRouteTableRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateRouteTableRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateRouteTableRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateRouteTableRequest::getRequestId()const
{
	return requestId_;
}

void CreateRouteTableRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateRouteTableRequest::getVpcId()const
{
	return vpcId_;
}

void CreateRouteTableRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

