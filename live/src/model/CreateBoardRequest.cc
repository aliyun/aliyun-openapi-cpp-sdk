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

#include <alibabacloud/live/model/CreateBoardRequest.h>

using AlibabaCloud::Live::Model::CreateBoardRequest;

CreateBoardRequest::CreateBoardRequest() :
	RpcServiceRequest("live", "2016-11-01", "CreateBoard")
{}

CreateBoardRequest::~CreateBoardRequest()
{}

std::string CreateBoardRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateBoardRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateBoardRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateBoardRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

long CreateBoardRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateBoardRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateBoardRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateBoardRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateBoardRequest::getAppUid()const
{
	return appUid_;
}

void CreateBoardRequest::setAppUid(const std::string& appUid)
{
	appUid_ = appUid;
	setCoreParameter("AppUid", std::to_string(appUid));
}

std::string CreateBoardRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateBoardRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateBoardRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBoardRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateBoardRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateBoardRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateBoardRequest::getVersion()const
{
	return version_;
}

void CreateBoardRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

std::string CreateBoardRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateBoardRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateBoardRequest::getCallerType()const
{
	return callerType_;
}

void CreateBoardRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool CreateBoardRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateBoardRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateBoardRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateBoardRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string CreateBoardRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBoardRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool CreateBoardRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateBoardRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateBoardRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBoardRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateBoardRequest::getRegionId()const
{
	return regionId_;
}

void CreateBoardRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateBoardRequest::getRequestId()const
{
	return requestId_;
}

void CreateBoardRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateBoardRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateBoardRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateBoardRequest::getAppId()const
{
	return appId_;
}

void CreateBoardRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string CreateBoardRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateBoardRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateBoardRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateBoardRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateBoardRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateBoardRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

