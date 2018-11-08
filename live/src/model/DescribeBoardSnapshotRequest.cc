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

#include <alibabacloud/live/model/DescribeBoardSnapshotRequest.h>

using AlibabaCloud::Live::Model::DescribeBoardSnapshotRequest;

DescribeBoardSnapshotRequest::DescribeBoardSnapshotRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeBoardSnapshot")
{}

DescribeBoardSnapshotRequest::~DescribeBoardSnapshotRequest()
{}

std::string DescribeBoardSnapshotRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeBoardSnapshotRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeBoardSnapshotRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeBoardSnapshotRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long DescribeBoardSnapshotRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeBoardSnapshotRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeBoardSnapshotRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeBoardSnapshotRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeBoardSnapshotRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeBoardSnapshotRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeBoardSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBoardSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBoardSnapshotRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeBoardSnapshotRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeBoardSnapshotRequest::getVersion()const
{
	return version_;
}

void DescribeBoardSnapshotRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeBoardSnapshotRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeBoardSnapshotRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeBoardSnapshotRequest::getCallerType()const
{
	return callerType_;
}

void DescribeBoardSnapshotRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeBoardSnapshotRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeBoardSnapshotRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeBoardSnapshotRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeBoardSnapshotRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeBoardSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBoardSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeBoardSnapshotRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeBoardSnapshotRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeBoardSnapshotRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBoardSnapshotRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeBoardSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBoardSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeBoardSnapshotRequest::getRequestId()const
{
	return requestId_;
}

void DescribeBoardSnapshotRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeBoardSnapshotRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeBoardSnapshotRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeBoardSnapshotRequest::getAppId()const
{
	return appId_;
}

void DescribeBoardSnapshotRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeBoardSnapshotRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeBoardSnapshotRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeBoardSnapshotRequest::getBoardId()const
{
	return boardId_;
}

void DescribeBoardSnapshotRequest::setBoardId(const std::string& boardId)
{
	boardId_ = boardId;
	setParameter("BoardId", boardId);
}

std::string DescribeBoardSnapshotRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeBoardSnapshotRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeBoardSnapshotRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeBoardSnapshotRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

