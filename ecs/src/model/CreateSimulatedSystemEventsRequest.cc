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

#include <alibabacloud/ecs/model/CreateSimulatedSystemEventsRequest.h>

using AlibabaCloud::Ecs::Model::CreateSimulatedSystemEventsRequest;

CreateSimulatedSystemEventsRequest::CreateSimulatedSystemEventsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateSimulatedSystemEvents")
{}

CreateSimulatedSystemEventsRequest::~CreateSimulatedSystemEventsRequest()
{}

long CreateSimulatedSystemEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSimulatedSystemEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSimulatedSystemEventsRequest::getNotBefore()const
{
	return notBefore_;
}

void CreateSimulatedSystemEventsRequest::setNotBefore(const std::string& notBefore)
{
	notBefore_ = notBefore;
	setParameter("NotBefore", notBefore);
}

long CreateSimulatedSystemEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateSimulatedSystemEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateSimulatedSystemEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateSimulatedSystemEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateSimulatedSystemEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateSimulatedSystemEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateSimulatedSystemEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateSimulatedSystemEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateSimulatedSystemEventsRequest::getCallerType()const
{
	return callerType_;
}

void CreateSimulatedSystemEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateSimulatedSystemEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSimulatedSystemEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateSimulatedSystemEventsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateSimulatedSystemEventsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateSimulatedSystemEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateSimulatedSystemEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateSimulatedSystemEventsRequest::getRegionId()const
{
	return regionId_;
}

void CreateSimulatedSystemEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateSimulatedSystemEventsRequest::getEnable()const
{
	return enable_;
}

void CreateSimulatedSystemEventsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string CreateSimulatedSystemEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateSimulatedSystemEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateSimulatedSystemEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateSimulatedSystemEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateSimulatedSystemEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateSimulatedSystemEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateSimulatedSystemEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateSimulatedSystemEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateSimulatedSystemEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateSimulatedSystemEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateSimulatedSystemEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSimulatedSystemEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSimulatedSystemEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSimulatedSystemEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateSimulatedSystemEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateSimulatedSystemEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateSimulatedSystemEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSimulatedSystemEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateSimulatedSystemEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateSimulatedSystemEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateSimulatedSystemEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateSimulatedSystemEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateSimulatedSystemEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateSimulatedSystemEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> CreateSimulatedSystemEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSimulatedSystemEventsRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

std::string CreateSimulatedSystemEventsRequest::getRequestId()const
{
	return requestId_;
}

void CreateSimulatedSystemEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateSimulatedSystemEventsRequest::getEventType()const
{
	return eventType_;
}

void CreateSimulatedSystemEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

