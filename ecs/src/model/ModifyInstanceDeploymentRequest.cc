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

#include <alibabacloud/ecs/model/ModifyInstanceDeploymentRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceDeploymentRequest;

ModifyInstanceDeploymentRequest::ModifyInstanceDeploymentRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceDeployment")
{}

ModifyInstanceDeploymentRequest::~ModifyInstanceDeploymentRequest()
{}

long ModifyInstanceDeploymentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceDeploymentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyInstanceDeploymentRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyInstanceDeploymentRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyInstanceDeploymentRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyInstanceDeploymentRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyInstanceDeploymentRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyInstanceDeploymentRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyInstanceDeploymentRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyInstanceDeploymentRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyInstanceDeploymentRequest::getCallerType()const
{
	return callerType_;
}

void ModifyInstanceDeploymentRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyInstanceDeploymentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceDeploymentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyInstanceDeploymentRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceDeploymentRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyInstanceDeploymentRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceDeploymentRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceDeploymentRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceDeploymentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyInstanceDeploymentRequest::getEnable()const
{
	return enable_;
}

void ModifyInstanceDeploymentRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string ModifyInstanceDeploymentRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyInstanceDeploymentRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyInstanceDeploymentRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyInstanceDeploymentRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyInstanceDeploymentRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyInstanceDeploymentRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyInstanceDeploymentRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyInstanceDeploymentRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyInstanceDeploymentRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void ModifyInstanceDeploymentRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setCoreParameter("DeploymentSetId", deploymentSetId);
}

std::string ModifyInstanceDeploymentRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyInstanceDeploymentRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyInstanceDeploymentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceDeploymentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceDeploymentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceDeploymentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyInstanceDeploymentRequest::getTenancy()const
{
	return tenancy_;
}

void ModifyInstanceDeploymentRequest::setTenancy(const std::string& tenancy)
{
	tenancy_ = tenancy;
	setCoreParameter("Tenancy", tenancy);
}

std::string ModifyInstanceDeploymentRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyInstanceDeploymentRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

std::string ModifyInstanceDeploymentRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyInstanceDeploymentRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyInstanceDeploymentRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceDeploymentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyInstanceDeploymentRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyInstanceDeploymentRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyInstanceDeploymentRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyInstanceDeploymentRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ModifyInstanceDeploymentRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyInstanceDeploymentRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyInstanceDeploymentRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceDeploymentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceDeploymentRequest::getRequestId()const
{
	return requestId_;
}

void ModifyInstanceDeploymentRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyInstanceDeploymentRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyInstanceDeploymentRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

bool ModifyInstanceDeploymentRequest::getForce()const
{
	return force_;
}

void ModifyInstanceDeploymentRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force);
}

std::string ModifyInstanceDeploymentRequest::getAffinity()const
{
	return affinity_;
}

void ModifyInstanceDeploymentRequest::setAffinity(const std::string& affinity)
{
	affinity_ = affinity;
	setCoreParameter("Affinity", affinity);
}

