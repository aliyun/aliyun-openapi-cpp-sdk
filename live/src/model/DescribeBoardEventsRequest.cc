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

#include <alibabacloud/live/model/DescribeBoardEventsRequest.h>

using AlibabaCloud::Live::Model::DescribeBoardEventsRequest;

DescribeBoardEventsRequest::DescribeBoardEventsRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeBoardEvents")
{}

DescribeBoardEventsRequest::~DescribeBoardEventsRequest()
{}

long DescribeBoardEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeBoardEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeBoardEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeBoardEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeBoardEventsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBoardEventsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeBoardEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeBoardEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeBoardEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeBoardEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeBoardEventsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeBoardEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeBoardEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBoardEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBoardEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBoardEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeBoardEventsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBoardEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeBoardEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeBoardEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeBoardEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeBoardEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeBoardEventsRequest::getBoardId()const
{
	return boardId_;
}

void DescribeBoardEventsRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setParameter("BoardId", boardId);
}

std::string DescribeBoardEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeBoardEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeBoardEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeBoardEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeBoardEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeBoardEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeBoardEventsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeBoardEventsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeBoardEventsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBoardEventsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeBoardEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeBoardEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeBoardEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBoardEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBoardEventsRequest::getVersion()const
{
	return version_;
}

void DescribeBoardEventsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeBoardEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeBoardEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeBoardEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeBoardEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeBoardEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeBoardEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeBoardEventsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeBoardEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeBoardEventsRequest::getAppId()const
{
	return appId_;
}

void DescribeBoardEventsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

