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

#include <alibabacloud/vpc/model/DeleteRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::DeleteRouteTableRequest;

DeleteRouteTableRequest::DeleteRouteTableRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteRouteTable")
{}

DeleteRouteTableRequest::~DeleteRouteTableRequest()
{}

long DeleteRouteTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRouteTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteRouteTableRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteRouteTableRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteRouteTableRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteRouteTableRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteRouteTableRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteRouteTableRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteRouteTableRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteRouteTableRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteRouteTableRequest::getCallerType()const
{
	return callerType_;
}

void DeleteRouteTableRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DeleteRouteTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteRouteTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteRouteTableRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteRouteTableRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DeleteRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteRouteTableRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteRouteTableRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool DeleteRouteTableRequest::getEnable()const
{
	return enable_;
}

void DeleteRouteTableRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DeleteRouteTableRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteRouteTableRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteRouteTableRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteRouteTableRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteRouteTableRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteRouteTableRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string DeleteRouteTableRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DeleteRouteTableRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}

long DeleteRouteTableRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteRouteTableRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteRouteTableRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteRouteTableRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteRouteTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRouteTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRouteTableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRouteTableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteRouteTableRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteRouteTableRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteRouteTableRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRouteTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteRouteTableRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteRouteTableRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteRouteTableRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteRouteTableRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DeleteRouteTableRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteRouteTableRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteRouteTableRequest::getRequestId()const
{
	return requestId_;
}

void DeleteRouteTableRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

