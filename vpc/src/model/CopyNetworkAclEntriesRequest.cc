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

#include <alibabacloud/vpc/model/CopyNetworkAclEntriesRequest.h>

using AlibabaCloud::Vpc::Model::CopyNetworkAclEntriesRequest;

CopyNetworkAclEntriesRequest::CopyNetworkAclEntriesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CopyNetworkAclEntries")
{}

CopyNetworkAclEntriesRequest::~CopyNetworkAclEntriesRequest()
{}

long CopyNetworkAclEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CopyNetworkAclEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CopyNetworkAclEntriesRequest::getClientToken()const
{
	return clientToken_;
}

void CopyNetworkAclEntriesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long CopyNetworkAclEntriesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CopyNetworkAclEntriesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CopyNetworkAclEntriesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CopyNetworkAclEntriesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CopyNetworkAclEntriesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CopyNetworkAclEntriesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CopyNetworkAclEntriesRequest::getCallerType()const
{
	return callerType_;
}

void CopyNetworkAclEntriesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CopyNetworkAclEntriesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CopyNetworkAclEntriesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CopyNetworkAclEntriesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CopyNetworkAclEntriesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CopyNetworkAclEntriesRequest::getRegionId()const
{
	return regionId_;
}

void CopyNetworkAclEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CopyNetworkAclEntriesRequest::getSecurityToken()const
{
	return securityToken_;
}

void CopyNetworkAclEntriesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool CopyNetworkAclEntriesRequest::getEnable()const
{
	return enable_;
}

void CopyNetworkAclEntriesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CopyNetworkAclEntriesRequest::getRequestContent()const
{
	return requestContent_;
}

void CopyNetworkAclEntriesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CopyNetworkAclEntriesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CopyNetworkAclEntriesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CopyNetworkAclEntriesRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void CopyNetworkAclEntriesRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string CopyNetworkAclEntriesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CopyNetworkAclEntriesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CopyNetworkAclEntriesRequest::getCallerUid()const
{
	return callerUid_;
}

void CopyNetworkAclEntriesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CopyNetworkAclEntriesRequest::getApp_ip()const
{
	return app_ip_;
}

void CopyNetworkAclEntriesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CopyNetworkAclEntriesRequest::getSourceNetworkAclId()const
{
	return sourceNetworkAclId_;
}

void CopyNetworkAclEntriesRequest::setSourceNetworkAclId(const std::string& sourceNetworkAclId)
{
	sourceNetworkAclId_ = sourceNetworkAclId;
	setCoreParameter("SourceNetworkAclId", sourceNetworkAclId);
}

std::string CopyNetworkAclEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopyNetworkAclEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CopyNetworkAclEntriesRequest::getCallerBid()const
{
	return callerBid_;
}

void CopyNetworkAclEntriesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CopyNetworkAclEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void CopyNetworkAclEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool CopyNetworkAclEntriesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CopyNetworkAclEntriesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CopyNetworkAclEntriesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CopyNetworkAclEntriesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CopyNetworkAclEntriesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CopyNetworkAclEntriesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CopyNetworkAclEntriesRequest::getRequestId()const
{
	return requestId_;
}

void CopyNetworkAclEntriesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

