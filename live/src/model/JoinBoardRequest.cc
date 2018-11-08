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

#include <alibabacloud/live/model/JoinBoardRequest.h>

using AlibabaCloud::Live::Model::JoinBoardRequest;

JoinBoardRequest::JoinBoardRequest() :
	RpcServiceRequest("live", "2016-11-01", "JoinBoard")
{}

JoinBoardRequest::~JoinBoardRequest()
{}

long JoinBoardRequest::getCallerParentId()const
{
	return callerParentId_;
}

void JoinBoardRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool JoinBoardRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void JoinBoardRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string JoinBoardRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void JoinBoardRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string JoinBoardRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void JoinBoardRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string JoinBoardRequest::getCallerType()const
{
	return callerType_;
}

void JoinBoardRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string JoinBoardRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void JoinBoardRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string JoinBoardRequest::getSecurityToken()const
{
	return securityToken_;
}

void JoinBoardRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string JoinBoardRequest::getRegionId()const
{
	return regionId_;
}

void JoinBoardRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string JoinBoardRequest::getRequestContent()const
{
	return requestContent_;
}

void JoinBoardRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string JoinBoardRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void JoinBoardRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string JoinBoardRequest::getBoardId()const
{
	return boardId_;
}

void JoinBoardRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setParameter("BoardId", boardId);
}

std::string JoinBoardRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void JoinBoardRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long JoinBoardRequest::getCallerUid()const
{
	return callerUid_;
}

void JoinBoardRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string JoinBoardRequest::getApp_ip()const
{
	return app_ip_;
}

void JoinBoardRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string JoinBoardRequest::getPopProduct()const
{
	return popProduct_;
}

void JoinBoardRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string JoinBoardRequest::getAppUid()const
{
	return appUid_;
}

void JoinBoardRequest::setAppUid(const std::string& appUid)
{
	appUid_ = appUid;
	setParameter("AppUid", appUid);
}

std::string JoinBoardRequest::getCallerBid()const
{
	return callerBid_;
}

void JoinBoardRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long JoinBoardRequest::getOwnerId()const
{
	return ownerId_;
}

void JoinBoardRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string JoinBoardRequest::getVersion()const
{
	return version_;
}

void JoinBoardRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool JoinBoardRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void JoinBoardRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool JoinBoardRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void JoinBoardRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool JoinBoardRequest::getSecurity_transport()const
{
	return security_transport_;
}

void JoinBoardRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string JoinBoardRequest::getRequestId()const
{
	return requestId_;
}

void JoinBoardRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string JoinBoardRequest::getAppId()const
{
	return appId_;
}

void JoinBoardRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

