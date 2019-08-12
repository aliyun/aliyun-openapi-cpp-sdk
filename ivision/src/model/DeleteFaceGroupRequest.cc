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

#include <alibabacloud/ivision/model/DeleteFaceGroupRequest.h>

using AlibabaCloud::Ivision::Model::DeleteFaceGroupRequest;

DeleteFaceGroupRequest::DeleteFaceGroupRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteFaceGroup")
{}

DeleteFaceGroupRequest::~DeleteFaceGroupRequest()
{}

long DeleteFaceGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteFaceGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DeleteFaceGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteFaceGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteFaceGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteFaceGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteFaceGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteFaceGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeleteFaceGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteFaceGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeleteFaceGroupRequest::getCallerType()const
{
	return callerType_;
}

void DeleteFaceGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeleteFaceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFaceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DeleteFaceGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteFaceGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteFaceGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFaceGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteFaceGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteFaceGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeleteFaceGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteFaceGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeleteFaceGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteFaceGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeleteFaceGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteFaceGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteFaceGroupRequest::getShowLog()const
{
	return showLog_;
}

void DeleteFaceGroupRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string DeleteFaceGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteFaceGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeleteFaceGroupRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteFaceGroupRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DeleteFaceGroupRequest::getGroupId()const
{
	return groupId_;
}

void DeleteFaceGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DeleteFaceGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteFaceGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeleteFaceGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFaceGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteFaceGroupRequest::getVersion()const
{
	return version_;
}

void DeleteFaceGroupRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DeleteFaceGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteFaceGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteFaceGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteFaceGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteFaceGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteFaceGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteFaceGroupRequest::getServiceCode()const
{
	return serviceCode_;
}

void DeleteFaceGroupRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DeleteFaceGroupRequest::getRequestId()const
{
	return requestId_;
}

void DeleteFaceGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

