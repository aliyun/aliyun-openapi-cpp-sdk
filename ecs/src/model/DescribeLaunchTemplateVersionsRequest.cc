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
	setCoreParameter("LaunchTemplateName", std::to_string(launchTemplateName));
}

long DescribeLaunchTemplateVersionsRequest::getMaxVersion()const
{
	return maxVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMaxVersion(long maxVersion)
{
	maxVersion_ = maxVersion;
	setCoreParameter("MaxVersion", maxVersion);
}

long DescribeLaunchTemplateVersionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeLaunchTemplateVersionsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeLaunchTemplateVersionsRequest::getDefaultVersion()const
{
	return defaultVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setDefaultVersion(bool defaultVersion)
{
	defaultVersion_ = defaultVersion;
	setCoreParameter("DefaultVersion", defaultVersion ? "true" : "false");
}

bool DescribeLaunchTemplateVersionsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLaunchTemplateVersionsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

long DescribeLaunchTemplateVersionsRequest::getMinVersion()const
{
	return minVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMinVersion(long minVersion)
{
	minVersion_ = minVersion;
	setCoreParameter("MinVersion", minVersion);
}

std::string DescribeLaunchTemplateVersionsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLaunchTemplateVersionsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeLaunchTemplateVersionsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeLaunchTemplateVersionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLaunchTemplateVersionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeLaunchTemplateVersionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLaunchTemplateVersionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeLaunchTemplateVersionsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeLaunchTemplateVersionsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribeLaunchTemplateVersionsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLaunchTemplateVersionsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLaunchTemplateVersionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLaunchTemplateVersionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeLaunchTemplateVersionsRequest::getEnable()const
{
	return enable_;
}

void DescribeLaunchTemplateVersionsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeLaunchTemplateVersionsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLaunchTemplateVersionsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeLaunchTemplateVersionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLaunchTemplateVersionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeLaunchTemplateVersionsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeLaunchTemplateVersionsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLaunchTemplateVersionsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", std::to_string(launchTemplateId));
}

std::string DescribeLaunchTemplateVersionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeLaunchTemplateVersionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeLaunchTemplateVersionsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLaunchTemplateVersionsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeLaunchTemplateVersionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::vector<long> DescribeLaunchTemplateVersionsRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateVersion(const std::vector<long>& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	for(int i = 0; i!= launchTemplateVersion.size(); i++)
		setCoreParameter("LaunchTemplateVersion."+ std::to_string(i), launchTemplateVersion.at(i));
}

bool DescribeLaunchTemplateVersionsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLaunchTemplateVersionsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLaunchTemplateVersionsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLaunchTemplateVersionsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLaunchTemplateVersionsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLaunchTemplateVersionsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLaunchTemplateVersionsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLaunchTemplateVersionsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeLaunchTemplateVersionsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeLaunchTemplateVersionsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

bool DescribeLaunchTemplateVersionsRequest::getDetailFlag()const
{
	return detailFlag_;
}

void DescribeLaunchTemplateVersionsRequest::setDetailFlag(bool detailFlag)
{
	detailFlag_ = detailFlag;
	setCoreParameter("DetailFlag", detailFlag ? "true" : "false");
}

