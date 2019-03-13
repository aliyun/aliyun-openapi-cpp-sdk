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

#include <alibabacloud/ecs/model/DetachNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::DetachNetworkInterfaceRequest;

DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DetachNetworkInterface")
{}

DetachNetworkInterfaceRequest::~DetachNetworkInterfaceRequest()
{}

long DetachNetworkInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DetachNetworkInterfaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DetachNetworkInterfaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DetachNetworkInterfaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DetachNetworkInterfaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DetachNetworkInterfaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DetachNetworkInterfaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DetachNetworkInterfaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DetachNetworkInterfaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DetachNetworkInterfaceRequest::getCallerType()const
{
	return callerType_;
}

void DetachNetworkInterfaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DetachNetworkInterfaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachNetworkInterfaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DetachNetworkInterfaceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DetachNetworkInterfaceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DetachNetworkInterfaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DetachNetworkInterfaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DetachNetworkInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void DetachNetworkInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DetachNetworkInterfaceRequest::getEnable()const
{
	return enable_;
}

void DetachNetworkInterfaceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DetachNetworkInterfaceRequest::getRequestContent()const
{
	return requestContent_;
}

void DetachNetworkInterfaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DetachNetworkInterfaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DetachNetworkInterfaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DetachNetworkInterfaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DetachNetworkInterfaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DetachNetworkInterfaceRequest::getCallerUid()const
{
	return callerUid_;
}

void DetachNetworkInterfaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DetachNetworkInterfaceRequest::getApp_ip()const
{
	return app_ip_;
}

void DetachNetworkInterfaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DetachNetworkInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachNetworkInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachNetworkInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachNetworkInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DetachNetworkInterfaceRequest::getCallerBid()const
{
	return callerBid_;
}

void DetachNetworkInterfaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DetachNetworkInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachNetworkInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DetachNetworkInterfaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DetachNetworkInterfaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DetachNetworkInterfaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DetachNetworkInterfaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DetachNetworkInterfaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DetachNetworkInterfaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DetachNetworkInterfaceRequest::getInstanceId()const
{
	return instanceId_;
}

void DetachNetworkInterfaceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DetachNetworkInterfaceRequest::getRequestId()const
{
	return requestId_;
}

void DetachNetworkInterfaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DetachNetworkInterfaceRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void DetachNetworkInterfaceRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

