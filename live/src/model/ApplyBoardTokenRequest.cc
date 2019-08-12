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

#include <alibabacloud/live/model/ApplyBoardTokenRequest.h>

using AlibabaCloud::Live::Model::ApplyBoardTokenRequest;

ApplyBoardTokenRequest::ApplyBoardTokenRequest() :
	RpcServiceRequest("live", "2016-11-01", "ApplyBoardToken")
{}

ApplyBoardTokenRequest::~ApplyBoardTokenRequest()
{}

long ApplyBoardTokenRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ApplyBoardTokenRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ApplyBoardTokenRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ApplyBoardTokenRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ApplyBoardTokenRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ApplyBoardTokenRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ApplyBoardTokenRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ApplyBoardTokenRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ApplyBoardTokenRequest::getCallerType()const
{
	return callerType_;
}

void ApplyBoardTokenRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ApplyBoardTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ApplyBoardTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ApplyBoardTokenRequest::getSecurityToken()const
{
	return securityToken_;
}

void ApplyBoardTokenRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ApplyBoardTokenRequest::getRegionId()const
{
	return regionId_;
}

void ApplyBoardTokenRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ApplyBoardTokenRequest::getRequestContent()const
{
	return requestContent_;
}

void ApplyBoardTokenRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ApplyBoardTokenRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ApplyBoardTokenRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ApplyBoardTokenRequest::getBoardId()const
{
	return boardId_;
}

void ApplyBoardTokenRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setCoreParameter("BoardId", boardId);
}

std::string ApplyBoardTokenRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ApplyBoardTokenRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ApplyBoardTokenRequest::getCallerUid()const
{
	return callerUid_;
}

void ApplyBoardTokenRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ApplyBoardTokenRequest::getApp_ip()const
{
	return app_ip_;
}

void ApplyBoardTokenRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ApplyBoardTokenRequest::getPopProduct()const
{
	return popProduct_;
}

void ApplyBoardTokenRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ApplyBoardTokenRequest::getAppUid()const
{
	return appUid_;
}

void ApplyBoardTokenRequest::setAppUid(const std::string& appUid)
{
	appUid_ = appUid;
	setCoreParameter("AppUid", appUid);
}

std::string ApplyBoardTokenRequest::getCallerBid()const
{
	return callerBid_;
}

void ApplyBoardTokenRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ApplyBoardTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void ApplyBoardTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ApplyBoardTokenRequest::getVersion()const
{
	return version_;
}

void ApplyBoardTokenRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ApplyBoardTokenRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ApplyBoardTokenRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ApplyBoardTokenRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ApplyBoardTokenRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ApplyBoardTokenRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ApplyBoardTokenRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ApplyBoardTokenRequest::getRequestId()const
{
	return requestId_;
}

void ApplyBoardTokenRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ApplyBoardTokenRequest::getAppId()const
{
	return appId_;
}

void ApplyBoardTokenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

