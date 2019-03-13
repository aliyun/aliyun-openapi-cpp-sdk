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

#include <alibabacloud/ecs/model/DeleteLaunchTemplateVersionRequest.h>

using AlibabaCloud::Ecs::Model::DeleteLaunchTemplateVersionRequest;

DeleteLaunchTemplateVersionRequest::DeleteLaunchTemplateVersionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteLaunchTemplateVersion")
{}

DeleteLaunchTemplateVersionRequest::~DeleteLaunchTemplateVersionRequest()
{}

std::string DeleteLaunchTemplateVersionRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void DeleteLaunchTemplateVersionRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setParameter("LaunchTemplateName", launchTemplateName);
}

long DeleteLaunchTemplateVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteLaunchTemplateVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteLaunchTemplateVersionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteLaunchTemplateVersionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteLaunchTemplateVersionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteLaunchTemplateVersionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::vector<long> DeleteLaunchTemplateVersionRequest::getDeleteVersion()const
{
	return deleteVersion_;
}

void DeleteLaunchTemplateVersionRequest::setDeleteVersion(const std::vector<long>& deleteVersion)
{
	deleteVersion_ = deleteVersion;
	for(int i = 0; i!= deleteVersion.size(); i++)
		setParameter("DeleteVersion."+ std::to_string(i), std::to_string(deleteVersion.at(i)));
}

std::string DeleteLaunchTemplateVersionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteLaunchTemplateVersionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteLaunchTemplateVersionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteLaunchTemplateVersionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteLaunchTemplateVersionRequest::getCallerType()const
{
	return callerType_;
}

void DeleteLaunchTemplateVersionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DeleteLaunchTemplateVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLaunchTemplateVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteLaunchTemplateVersionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteLaunchTemplateVersionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DeleteLaunchTemplateVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLaunchTemplateVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteLaunchTemplateVersionRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLaunchTemplateVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DeleteLaunchTemplateVersionRequest::getEnable()const
{
	return enable_;
}

void DeleteLaunchTemplateVersionRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DeleteLaunchTemplateVersionRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteLaunchTemplateVersionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteLaunchTemplateVersionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteLaunchTemplateVersionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteLaunchTemplateVersionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteLaunchTemplateVersionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteLaunchTemplateVersionRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteLaunchTemplateVersionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteLaunchTemplateVersionRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteLaunchTemplateVersionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteLaunchTemplateVersionRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DeleteLaunchTemplateVersionRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

std::string DeleteLaunchTemplateVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteLaunchTemplateVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteLaunchTemplateVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteLaunchTemplateVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteLaunchTemplateVersionRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteLaunchTemplateVersionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteLaunchTemplateVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLaunchTemplateVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteLaunchTemplateVersionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteLaunchTemplateVersionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteLaunchTemplateVersionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteLaunchTemplateVersionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DeleteLaunchTemplateVersionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteLaunchTemplateVersionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteLaunchTemplateVersionRequest::getRequestId()const
{
	return requestId_;
}

void DeleteLaunchTemplateVersionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

