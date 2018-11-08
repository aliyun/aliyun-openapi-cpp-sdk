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

#include <alibabacloud/ecs/model/DescribeLaunchTemplateVersionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeLaunchTemplateVersionsRequest;

DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeLaunchTemplateVersions")
{}

DescribeLaunchTemplateVersionsRequest::~DescribeLaunchTemplateVersionsRequest()
{}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setParameter("LaunchTemplateName", launchTemplateName);
}

long DescribeLaunchTemplateVersionsRequest::getMaxVersion()const
{
	return maxVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMaxVersion(long maxVersion)
{
	maxVersion_ = maxVersion;
	setParameter("MaxVersion", std::to_string(maxVersion));
}

long DescribeLaunchTemplateVersionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeLaunchTemplateVersionsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLaunchTemplateVersionsRequest::getDefaultVersion()const
{
	return defaultVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setDefaultVersion(bool defaultVersion)
{
	defaultVersion_ = defaultVersion;
	setParameter("DefaultVersion", std::to_string(defaultVersion));
}

bool DescribeLaunchTemplateVersionsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLaunchTemplateVersionsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

long DescribeLaunchTemplateVersionsRequest::getMinVersion()const
{
	return minVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMinVersion(long minVersion)
{
	minVersion_ = minVersion;
	setParameter("MinVersion", std::to_string(minVersion));
}

std::string DescribeLaunchTemplateVersionsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLaunchTemplateVersionsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLaunchTemplateVersionsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeLaunchTemplateVersionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLaunchTemplateVersionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLaunchTemplateVersionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLaunchTemplateVersionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLaunchTemplateVersionsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLaunchTemplateVersionsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLaunchTemplateVersionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLaunchTemplateVersionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeLaunchTemplateVersionsRequest::getEnable()const
{
	return enable_;
}

void DescribeLaunchTemplateVersionsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeLaunchTemplateVersionsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLaunchTemplateVersionsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeLaunchTemplateVersionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLaunchTemplateVersionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLaunchTemplateVersionsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLaunchTemplateVersionsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLaunchTemplateVersionsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

std::string DescribeLaunchTemplateVersionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLaunchTemplateVersionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeLaunchTemplateVersionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<long> DescribeLaunchTemplateVersionsRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateVersion(const std::vector<long>& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	for(int i = 0; i!= launchTemplateVersion.size(); i++)
		setParameter("LaunchTemplateVersion."+ std::to_string(i), std::to_string(launchTemplateVersion.at(i)));
}

bool DescribeLaunchTemplateVersionsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLaunchTemplateVersionsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeLaunchTemplateVersionsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLaunchTemplateVersionsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeLaunchTemplateVersionsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLaunchTemplateVersionsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeLaunchTemplateVersionsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLaunchTemplateVersionsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

bool DescribeLaunchTemplateVersionsRequest::getDetailFlag()const
{
	return detailFlag_;
}

void DescribeLaunchTemplateVersionsRequest::setDetailFlag(bool detailFlag)
{
	detailFlag_ = detailFlag;
	setParameter("DetailFlag", std::to_string(detailFlag));
}

