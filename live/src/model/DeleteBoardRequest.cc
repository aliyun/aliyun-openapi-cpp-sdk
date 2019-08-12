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

#include <alibabacloud/live/model/DeleteBoardRequest.h>

using AlibabaCloud::Live::Model::DeleteBoardRequest;

DeleteBoardRequest::DeleteBoardRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteBoard")
{}

DeleteBoardRequest::~DeleteBoardRequest()
{}

std::string DeleteBoardRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteBoardRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteBoardRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteBoardRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DeleteBoardRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteBoardRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteBoardRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteBoardRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DeleteBoardRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteBoardRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteBoardRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteBoardRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteBoardRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteBoardRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteBoardRequest::getVersion()const
{
	return version_;
}

void DeleteBoardRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DeleteBoardRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteBoardRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteBoardRequest::getCallerType()const
{
	return callerType_;
}

void DeleteBoardRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DeleteBoardRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteBoardRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DeleteBoardRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteBoardRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

std::string DeleteBoardRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteBoardRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteBoardRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteBoardRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DeleteBoardRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteBoardRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteBoardRequest::getRegionId()const
{
	return regionId_;
}

void DeleteBoardRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteBoardRequest::getRequestId()const
{
	return requestId_;
}

void DeleteBoardRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteBoardRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteBoardRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteBoardRequest::getAppId()const
{
	return appId_;
}

void DeleteBoardRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DeleteBoardRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteBoardRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteBoardRequest::getBoardId()const
{
	return boardId_;
}

void DeleteBoardRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setCoreParameter("BoardId", boardId);
}

std::string DeleteBoardRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteBoardRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteBoardRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteBoardRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

