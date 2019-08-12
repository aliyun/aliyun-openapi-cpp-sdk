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

#include <alibabacloud/live/model/CompleteBoardRequest.h>

using AlibabaCloud::Live::Model::CompleteBoardRequest;

CompleteBoardRequest::CompleteBoardRequest() :
	RpcServiceRequest("live", "2016-11-01", "CompleteBoard")
{}

CompleteBoardRequest::~CompleteBoardRequest()
{}

std::string CompleteBoardRequest::getApp_ip()const
{
	return app_ip_;
}

void CompleteBoardRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CompleteBoardRequest::getPopProduct()const
{
	return popProduct_;
}

void CompleteBoardRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long CompleteBoardRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CompleteBoardRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CompleteBoardRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CompleteBoardRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string CompleteBoardRequest::getCallerBid()const
{
	return callerBid_;
}

void CompleteBoardRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CompleteBoardRequest::getOwnerId()const
{
	return ownerId_;
}

void CompleteBoardRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CompleteBoardRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CompleteBoardRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CompleteBoardRequest::getVersion()const
{
	return version_;
}

void CompleteBoardRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string CompleteBoardRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CompleteBoardRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CompleteBoardRequest::getCallerType()const
{
	return callerType_;
}

void CompleteBoardRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool CompleteBoardRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CompleteBoardRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool CompleteBoardRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CompleteBoardRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

std::string CompleteBoardRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CompleteBoardRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool CompleteBoardRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CompleteBoardRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string CompleteBoardRequest::getSecurityToken()const
{
	return securityToken_;
}

void CompleteBoardRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CompleteBoardRequest::getRegionId()const
{
	return regionId_;
}

void CompleteBoardRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CompleteBoardRequest::getRequestId()const
{
	return requestId_;
}

void CompleteBoardRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CompleteBoardRequest::getRequestContent()const
{
	return requestContent_;
}

void CompleteBoardRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CompleteBoardRequest::getAppId()const
{
	return appId_;
}

void CompleteBoardRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string CompleteBoardRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CompleteBoardRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CompleteBoardRequest::getBoardId()const
{
	return boardId_;
}

void CompleteBoardRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setCoreParameter("BoardId", boardId);
}

std::string CompleteBoardRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CompleteBoardRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CompleteBoardRequest::getCallerUid()const
{
	return callerUid_;
}

void CompleteBoardRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

