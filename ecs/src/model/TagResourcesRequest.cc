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

#include <alibabacloud/ecs/model/TagResourcesRequest.h>

using AlibabaCloud::Ecs::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "TagResources")
{}

TagResourcesRequest::~TagResourcesRequest()
{}

long TagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long TagResourcesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void TagResourcesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool TagResourcesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void TagResourcesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string TagResourcesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void TagResourcesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string TagResourcesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void TagResourcesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string TagResourcesRequest::getCallerType()const
{
	return callerType_;
}

void TagResourcesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string TagResourcesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TagResourcesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string TagResourcesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void TagResourcesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string TagResourcesRequest::getSecurityToken()const
{
	return securityToken_;
}

void TagResourcesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string TagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool TagResourcesRequest::getEnable()const
{
	return enable_;
}

void TagResourcesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string TagResourcesRequest::getRequestContent()const
{
	return requestContent_;
}

void TagResourcesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string TagResourcesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void TagResourcesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag()const
{
	return tag_;
}

void TagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Key", std::to_string(obj.key));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

std::string TagResourcesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void TagResourcesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long TagResourcesRequest::getCallerUid()const
{
	return callerUid_;
}

void TagResourcesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string TagResourcesRequest::getApp_ip()const
{
	return app_ip_;
}

void TagResourcesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::vector<std::string> TagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setCoreParameter("ResourceId."+ std::to_string(i), std::to_string(resourceId.at(i)));
}

std::string TagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string TagResourcesRequest::getCallerBid()const
{
	return callerBid_;
}

void TagResourcesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long TagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void TagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string TagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool TagResourcesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void TagResourcesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool TagResourcesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void TagResourcesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool TagResourcesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void TagResourcesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string TagResourcesRequest::getRequestId()const
{
	return requestId_;
}

void TagResourcesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string TagResourcesRequest::getAkProxy()const
{
	return akProxy_;
}

void TagResourcesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

