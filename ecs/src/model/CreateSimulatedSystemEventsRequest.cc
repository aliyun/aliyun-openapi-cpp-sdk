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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateSimulatedSystemEventsRequest::getNotBefore()const
{
	return notBefore_;
}

void CreateSimulatedSystemEventsRequest::setNotBefore(const std::string& notBefore)
{
	notBefore_ = notBefore;
	setCoreParameter("NotBefore", notBefore);
}

long CreateSimulatedSystemEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateSimulatedSystemEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateSimulatedSystemEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateSimulatedSystemEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string CreateSimulatedSystemEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateSimulatedSystemEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateSimulatedSystemEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateSimulatedSystemEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateSimulatedSystemEventsRequest::getCallerType()const
{
	return callerType_;
}

void CreateSimulatedSystemEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateSimulatedSystemEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSimulatedSystemEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateSimulatedSystemEventsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateSimulatedSystemEventsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string CreateSimulatedSystemEventsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateSimulatedSystemEventsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateSimulatedSystemEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateSimulatedSystemEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateSimulatedSystemEventsRequest::getRegionId()const
{
	return regionId_;
}

void CreateSimulatedSystemEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateSimulatedSystemEventsRequest::getEnable()const
{
	return enable_;
}

void CreateSimulatedSystemEventsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string CreateSimulatedSystemEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateSimulatedSystemEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateSimulatedSystemEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateSimulatedSystemEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateSimulatedSystemEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateSimulatedSystemEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateSimulatedSystemEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateSimulatedSystemEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateSimulatedSystemEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateSimulatedSystemEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateSimulatedSystemEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSimulatedSystemEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSimulatedSystemEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSimulatedSystemEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateSimulatedSystemEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateSimulatedSystemEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateSimulatedSystemEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSimulatedSystemEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool CreateSimulatedSystemEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateSimulatedSystemEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool CreateSimulatedSystemEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateSimulatedSystemEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool CreateSimulatedSystemEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateSimulatedSystemEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::vector<std::string> CreateSimulatedSystemEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSimulatedSystemEventsRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), std::to_string(instanceId.at(i)));
}

std::string CreateSimulatedSystemEventsRequest::getRequestId()const
{
	return requestId_;
}

void CreateSimulatedSystemEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateSimulatedSystemEventsRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateSimulatedSystemEventsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string CreateSimulatedSystemEventsRequest::getEventType()const
{
	return eventType_;
}

void CreateSimulatedSystemEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

