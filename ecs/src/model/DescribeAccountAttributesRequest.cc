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

#include <alibabacloud/ecs/model/DescribeAccountAttributesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAccountAttributesRequest;

DescribeAccountAttributesRequest::DescribeAccountAttributesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAccountAttributes")
{}

DescribeAccountAttributesRequest::~DescribeAccountAttributesRequest()
{}

long DescribeAccountAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAccountAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeAccountAttributesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAccountAttributesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeAccountAttributesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAccountAttributesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::vector<std::string> DescribeAccountAttributesRequest::getAttributeName()const
{
	return attributeName_;
}

void DescribeAccountAttributesRequest::setAttributeName(const std::vector<std::string>& attributeName)
{
	attributeName_ = attributeName;
	for(int i = 0; i!= attributeName.size(); i++)
		setParameter("AttributeName."+ std::to_string(i), attributeName.at(i));
}

std::string DescribeAccountAttributesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAccountAttributesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeAccountAttributesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAccountAttributesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAccountAttributesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAccountAttributesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeAccountAttributesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAccountAttributesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAccountAttributesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeAccountAttributesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeAccountAttributesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAccountAttributesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeAccountAttributesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAccountAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeAccountAttributesRequest::getEnable()const
{
	return enable_;
}

void DescribeAccountAttributesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string DescribeAccountAttributesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAccountAttributesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeAccountAttributesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAccountAttributesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAccountAttributesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAccountAttributesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeAccountAttributesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAccountAttributesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeAccountAttributesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAccountAttributesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeAccountAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccountAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAccountAttributesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAccountAttributesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeAccountAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccountAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeAccountAttributesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAccountAttributesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeAccountAttributesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAccountAttributesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeAccountAttributesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAccountAttributesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeAccountAttributesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAccountAttributesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeAccountAttributesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAccountAttributesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

