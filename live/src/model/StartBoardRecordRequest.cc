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

#include <alibabacloud/live/model/StartBoardRecordRequest.h>

using AlibabaCloud::Live::Model::StartBoardRecordRequest;

StartBoardRecordRequest::StartBoardRecordRequest() :
	RpcServiceRequest("live", "2016-11-01", "StartBoardRecord")
{}

StartBoardRecordRequest::~StartBoardRecordRequest()
{}

long StartBoardRecordRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StartBoardRecordRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool StartBoardRecordRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StartBoardRecordRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string StartBoardRecordRequest::getStartTime()const
{
	return startTime_;
}

void StartBoardRecordRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string StartBoardRecordRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StartBoardRecordRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StartBoardRecordRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StartBoardRecordRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StartBoardRecordRequest::getCallerType()const
{
	return callerType_;
}

void StartBoardRecordRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string StartBoardRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartBoardRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string StartBoardRecordRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartBoardRecordRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StartBoardRecordRequest::getRegionId()const
{
	return regionId_;
}

void StartBoardRecordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StartBoardRecordRequest::getRequestContent()const
{
	return requestContent_;
}

void StartBoardRecordRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string StartBoardRecordRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StartBoardRecordRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string StartBoardRecordRequest::getBoardId()const
{
	return boardId_;
}

void StartBoardRecordRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setCoreParameter("BoardId", boardId);
}

std::string StartBoardRecordRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StartBoardRecordRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long StartBoardRecordRequest::getCallerUid()const
{
	return callerUid_;
}

void StartBoardRecordRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string StartBoardRecordRequest::getApp_ip()const
{
	return app_ip_;
}

void StartBoardRecordRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string StartBoardRecordRequest::getPopProduct()const
{
	return popProduct_;
}

void StartBoardRecordRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string StartBoardRecordRequest::getCallerBid()const
{
	return callerBid_;
}

void StartBoardRecordRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long StartBoardRecordRequest::getOwnerId()const
{
	return ownerId_;
}

void StartBoardRecordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string StartBoardRecordRequest::getVersion()const
{
	return version_;
}

void StartBoardRecordRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool StartBoardRecordRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StartBoardRecordRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool StartBoardRecordRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StartBoardRecordRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool StartBoardRecordRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StartBoardRecordRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string StartBoardRecordRequest::getRequestId()const
{
	return requestId_;
}

void StartBoardRecordRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string StartBoardRecordRequest::getAppId()const
{
	return appId_;
}

void StartBoardRecordRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

