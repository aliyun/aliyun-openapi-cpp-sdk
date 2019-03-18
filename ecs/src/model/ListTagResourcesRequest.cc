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

#include <alibabacloud/ecs/model/ListTagResourcesRequest.h>

using AlibabaCloud::Ecs::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ListTagResources")
{}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

long ListTagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListTagResourcesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListTagResourcesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ListTagResourcesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListTagResourcesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ListTagResourcesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListTagResourcesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ListTagResourcesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ListTagResourcesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ListTagResourcesRequest::getCallerType()const
{
	return callerType_;
}

void ListTagResourcesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ListTagResourcesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagResourcesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListTagResourcesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListTagResourcesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ListTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagResourcesRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

bool ListTagResourcesRequest::getEnable()const
{
	return enable_;
}

void ListTagResourcesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string ListTagResourcesRequest::getRequestContent()const
{
	return requestContent_;
}

void ListTagResourcesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ListTagResourcesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ListTagResourcesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::vector<ListTagResourcesRequest::Tag> ListTagResourcesRequest::getTag()const
{
	return tag_;
}

void ListTagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

std::string ListTagResourcesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ListTagResourcesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ListTagResourcesRequest::getCallerUid()const
{
	return callerUid_;
}

void ListTagResourcesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ListTagResourcesRequest::getApp_ip()const
{
	return app_ip_;
}

void ListTagResourcesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::vector<std::string> ListTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setParameter("ResourceId."+ std::to_string(i), resourceId.at(i));
}

std::string ListTagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListTagResourcesRequest::getCallerBid()const
{
	return callerBid_;
}

void ListTagResourcesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ListTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

bool ListTagResourcesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListTagResourcesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ListTagResourcesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListTagResourcesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ListTagResourcesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListTagResourcesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ListTagResourcesRequest::getRequestId()const
{
	return requestId_;
}

void ListTagResourcesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

