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

#include <alibabacloud/ecs/model/DescribeCommandsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCommandsRequest;

DescribeCommandsRequest::DescribeCommandsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeCommands")
{}

DescribeCommandsRequest::~DescribeCommandsRequest()
{}

long DescribeCommandsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCommandsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeCommandsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCommandsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeCommandsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCommandsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeCommandsRequest::getDescription()const
{
	return description_;
}

void DescribeCommandsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string DescribeCommandsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCommandsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeCommandsRequest::getType()const
{
	return type_;
}

void DescribeCommandsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string DescribeCommandsRequest::getCommandId()const
{
	return commandId_;
}

void DescribeCommandsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setCoreParameter("CommandId", std::to_string(commandId));
}

std::string DescribeCommandsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCommandsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeCommandsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCommandsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

long DescribeCommandsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCommandsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeCommandsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCommandsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeCommandsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeCommandsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribeCommandsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCommandsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeCommandsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCommandsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeCommandsRequest::getEnable()const
{
	return enable_;
}

void DescribeCommandsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeCommandsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCommandsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

long DescribeCommandsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCommandsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeCommandsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCommandsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeCommandsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCommandsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeCommandsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCommandsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeCommandsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCommandsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeCommandsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCommandsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeCommandsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCommandsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeCommandsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCommandsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeCommandsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCommandsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeCommandsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCommandsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeCommandsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCommandsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeCommandsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCommandsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeCommandsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCommandsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeCommandsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeCommandsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string DescribeCommandsRequest::getName()const
{
	return name_;
}

void DescribeCommandsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

