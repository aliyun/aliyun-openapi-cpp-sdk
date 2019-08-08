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

#include <alibabacloud/ecs/model/ExportSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::ExportSnapshotRequest;

ExportSnapshotRequest::ExportSnapshotRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ExportSnapshot")
{}

ExportSnapshotRequest::~ExportSnapshotRequest()
{}

long ExportSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExportSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExportSnapshotRequest::getSnapshotId()const
{
	return snapshotId_;
}

void ExportSnapshotRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", snapshotId);
}

long ExportSnapshotRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ExportSnapshotRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ExportSnapshotRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ExportSnapshotRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ExportSnapshotRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ExportSnapshotRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ExportSnapshotRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ExportSnapshotRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ExportSnapshotRequest::getCallerType()const
{
	return callerType_;
}

void ExportSnapshotRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ExportSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExportSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ExportSnapshotRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExportSnapshotRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ExportSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void ExportSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ExportSnapshotRequest::getEnable()const
{
	return enable_;
}

void ExportSnapshotRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ExportSnapshotRequest::getRequestContent()const
{
	return requestContent_;
}

void ExportSnapshotRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ExportSnapshotRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ExportSnapshotRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ExportSnapshotRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ExportSnapshotRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ExportSnapshotRequest::getCallerUid()const
{
	return callerUid_;
}

void ExportSnapshotRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ExportSnapshotRequest::getApp_ip()const
{
	return app_ip_;
}

void ExportSnapshotRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ExportSnapshotRequest::getOssBucket()const
{
	return ossBucket_;
}

void ExportSnapshotRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", ossBucket);
}

std::string ExportSnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExportSnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ExportSnapshotRequest::getRoleName()const
{
	return roleName_;
}

void ExportSnapshotRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setCoreParameter("RoleName", roleName);
}

std::string ExportSnapshotRequest::getCallerBid()const
{
	return callerBid_;
}

void ExportSnapshotRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ExportSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void ExportSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ExportSnapshotRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ExportSnapshotRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ExportSnapshotRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ExportSnapshotRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ExportSnapshotRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ExportSnapshotRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ExportSnapshotRequest::getRequestId()const
{
	return requestId_;
}

void ExportSnapshotRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ExportSnapshotRequest::getAkProxy()const
{
	return akProxy_;
}

void ExportSnapshotRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

