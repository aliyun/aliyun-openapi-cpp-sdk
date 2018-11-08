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

#include <alibabacloud/live/model/UpdateBoardRequest.h>

using AlibabaCloud::Live::Model::UpdateBoardRequest;

UpdateBoardRequest::UpdateBoardRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateBoard")
{}

UpdateBoardRequest::~UpdateBoardRequest()
{}

std::string UpdateBoardRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateBoardRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string UpdateBoardRequest::getPopProduct()const
{
	return popProduct_;
}

void UpdateBoardRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long UpdateBoardRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateBoardRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool UpdateBoardRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateBoardRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string UpdateBoardRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateBoardRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long UpdateBoardRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateBoardRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateBoardRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateBoardRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UpdateBoardRequest::getVersion()const
{
	return version_;
}

void UpdateBoardRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string UpdateBoardRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UpdateBoardRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UpdateBoardRequest::getCallerType()const
{
	return callerType_;
}

void UpdateBoardRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool UpdateBoardRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateBoardRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool UpdateBoardRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateBoardRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string UpdateBoardRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateBoardRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool UpdateBoardRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateBoardRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string UpdateBoardRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateBoardRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateBoardRequest::getRegionId()const
{
	return regionId_;
}

void UpdateBoardRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateBoardRequest::getRequestId()const
{
	return requestId_;
}

void UpdateBoardRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string UpdateBoardRequest::getRequestContent()const
{
	return requestContent_;
}

void UpdateBoardRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string UpdateBoardRequest::getAppId()const
{
	return appId_;
}

void UpdateBoardRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateBoardRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UpdateBoardRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string UpdateBoardRequest::getBoardData()const
{
	return boardData_;
}

void UpdateBoardRequest::setBoardData(const std::string& boardData)
{
	boardData_ = boardData;
	setParameter("BoardData", boardData);
}

std::string UpdateBoardRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UpdateBoardRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long UpdateBoardRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateBoardRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

