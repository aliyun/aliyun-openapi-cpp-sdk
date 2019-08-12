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

#include <alibabacloud/vpc/model/UnassociateRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateRouteTableRequest;

UnassociateRouteTableRequest::UnassociateRouteTableRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnassociateRouteTable")
{}

UnassociateRouteTableRequest::~UnassociateRouteTableRequest()
{}

long UnassociateRouteTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateRouteTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateRouteTableRequest::getClientToken()const
{
	return clientToken_;
}

void UnassociateRouteTableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long UnassociateRouteTableRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnassociateRouteTableRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UnassociateRouteTableRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnassociateRouteTableRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UnassociateRouteTableRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnassociateRouteTableRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnassociateRouteTableRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnassociateRouteTableRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnassociateRouteTableRequest::getCallerType()const
{
	return callerType_;
}

void UnassociateRouteTableRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UnassociateRouteTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnassociateRouteTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UnassociateRouteTableRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UnassociateRouteTableRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string UnassociateRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassociateRouteTableRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnassociateRouteTableRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool UnassociateRouteTableRequest::getEnable()const
{
	return enable_;
}

void UnassociateRouteTableRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string UnassociateRouteTableRequest::getRequestContent()const
{
	return requestContent_;
}

void UnassociateRouteTableRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UnassociateRouteTableRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnassociateRouteTableRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UnassociateRouteTableRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnassociateRouteTableRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string UnassociateRouteTableRequest::getRouteTableId()const
{
	return routeTableId_;
}

void UnassociateRouteTableRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setCoreParameter("RouteTableId", routeTableId);
}

long UnassociateRouteTableRequest::getCallerUid()const
{
	return callerUid_;
}

void UnassociateRouteTableRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UnassociateRouteTableRequest::getApp_ip()const
{
	return app_ip_;
}

void UnassociateRouteTableRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UnassociateRouteTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateRouteTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassociateRouteTableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassociateRouteTableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UnassociateRouteTableRequest::getCallerBid()const
{
	return callerBid_;
}

void UnassociateRouteTableRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UnassociateRouteTableRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateRouteTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool UnassociateRouteTableRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnassociateRouteTableRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UnassociateRouteTableRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnassociateRouteTableRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string UnassociateRouteTableRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void UnassociateRouteTableRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

bool UnassociateRouteTableRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnassociateRouteTableRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UnassociateRouteTableRequest::getRequestId()const
{
	return requestId_;
}

void UnassociateRouteTableRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

