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

#include <alibabacloud/ecs/model/DescribeLaunchTemplatesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeLaunchTemplatesRequest;

DescribeLaunchTemplatesRequest::DescribeLaunchTemplatesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeLaunchTemplates")
{}

DescribeLaunchTemplatesRequest::~DescribeLaunchTemplatesRequest()
{}

std::vector<std::string> DescribeLaunchTemplatesRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void DescribeLaunchTemplatesRequest::setLaunchTemplateName(const std::vector<std::string>& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	for(int i = 0; i!= launchTemplateName.size(); i++)
		setParameter("LaunchTemplateName."+ std::to_string(i), launchTemplateName.at(i));
}

long DescribeLaunchTemplatesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLaunchTemplatesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeLaunchTemplatesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLaunchTemplatesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLaunchTemplatesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLaunchTemplatesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeLaunchTemplatesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLaunchTemplatesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLaunchTemplatesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLaunchTemplatesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLaunchTemplatesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLaunchTemplatesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeLaunchTemplatesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLaunchTemplatesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLaunchTemplatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLaunchTemplatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLaunchTemplatesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeLaunchTemplatesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeLaunchTemplatesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLaunchTemplatesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLaunchTemplatesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLaunchTemplatesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeLaunchTemplatesRequest::getEnable()const
{
	return enable_;
}

void DescribeLaunchTemplatesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeLaunchTemplatesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLaunchTemplatesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeLaunchTemplatesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLaunchTemplatesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLaunchTemplatesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLaunchTemplatesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::vector<DescribeLaunchTemplatesRequest::TemplateTag> DescribeLaunchTemplatesRequest::getTemplateTag()const
{
	return templateTag_;
}

void DescribeLaunchTemplatesRequest::setTemplateTag(const std::vector<TemplateTag>& templateTag)
{
	templateTag_ = templateTag;
	int i = 0;
	for(int i = 0; i!= templateTag.size(); i++)	{
		auto obj = templateTag.at(i);
		std::string str ="TemplateTag."+ std::to_string(i);
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

std::string DescribeLaunchTemplatesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLaunchTemplatesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLaunchTemplatesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLaunchTemplatesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLaunchTemplatesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLaunchTemplatesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::vector<std::string> DescribeLaunchTemplatesRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DescribeLaunchTemplatesRequest::setLaunchTemplateId(const std::vector<std::string>& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	for(int i = 0; i!= launchTemplateId.size(); i++)
		setParameter("LaunchTemplateId."+ std::to_string(i), launchTemplateId.at(i));
}

std::string DescribeLaunchTemplatesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLaunchTemplatesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLaunchTemplatesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLaunchTemplatesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeLaunchTemplatesRequest::getTemplateResourceGroupId()const
{
	return templateResourceGroupId_;
}

void DescribeLaunchTemplatesRequest::setTemplateResourceGroupId(const std::string& templateResourceGroupId)
{
	templateResourceGroupId_ = templateResourceGroupId;
	setParameter("TemplateResourceGroupId", templateResourceGroupId);
}

std::string DescribeLaunchTemplatesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLaunchTemplatesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeLaunchTemplatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLaunchTemplatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeLaunchTemplatesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLaunchTemplatesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeLaunchTemplatesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLaunchTemplatesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeLaunchTemplatesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLaunchTemplatesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeLaunchTemplatesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLaunchTemplatesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

