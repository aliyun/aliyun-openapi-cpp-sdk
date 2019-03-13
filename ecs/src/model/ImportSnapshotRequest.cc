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

#include <alibabacloud/ecs/model/ImportSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::ImportSnapshotRequest;

ImportSnapshotRequest::ImportSnapshotRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ImportSnapshot")
{}

ImportSnapshotRequest::~ImportSnapshotRequest()
{}

long ImportSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImportSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ImportSnapshotRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ImportSnapshotRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ImportSnapshotRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ImportSnapshotRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ImportSnapshotRequest::getSnapshotName()const
{
	return snapshotName_;
}

void ImportSnapshotRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setParameter("SnapshotName", snapshotName);
}

std::string ImportSnapshotRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ImportSnapshotRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ImportSnapshotRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ImportSnapshotRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ImportSnapshotRequest::getCallerType()const
{
	return callerType_;
}

void ImportSnapshotRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ImportSnapshotRequest::getOssObject()const
{
	return ossObject_;
}

void ImportSnapshotRequest::setOssObject(const std::string& ossObject)
{
	ossObject_ = ossObject;
	setParameter("OssObject", ossObject);
}

std::string ImportSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ImportSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ImportSnapshotRequest::getSecurityToken()const
{
	return securityToken_;
}

void ImportSnapshotRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ImportSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void ImportSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ImportSnapshotRequest::getEnable()const
{
	return enable_;
}

void ImportSnapshotRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ImportSnapshotRequest::getRequestContent()const
{
	return requestContent_;
}

void ImportSnapshotRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ImportSnapshotRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ImportSnapshotRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ImportSnapshotRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ImportSnapshotRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ImportSnapshotRequest::getCallerUid()const
{
	return callerUid_;
}

void ImportSnapshotRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ImportSnapshotRequest::getApp_ip()const
{
	return app_ip_;
}

void ImportSnapshotRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ImportSnapshotRequest::getOssBucket()const
{
	return ossBucket_;
}

void ImportSnapshotRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setParameter("OssBucket", ossBucket);
}

std::string ImportSnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ImportSnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ImportSnapshotRequest::getRoleName()const
{
	return roleName_;
}

void ImportSnapshotRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string ImportSnapshotRequest::getCallerBid()const
{
	return callerBid_;
}

void ImportSnapshotRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ImportSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void ImportSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ImportSnapshotRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ImportSnapshotRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ImportSnapshotRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ImportSnapshotRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ImportSnapshotRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ImportSnapshotRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ImportSnapshotRequest::getRequestId()const
{
	return requestId_;
}

void ImportSnapshotRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

