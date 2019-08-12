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

#include <alibabacloud/ivision/model/RegisterFaceRequest.h>

using AlibabaCloud::Ivision::Model::RegisterFaceRequest;

RegisterFaceRequest::RegisterFaceRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "RegisterFace")
{}

RegisterFaceRequest::~RegisterFaceRequest()
{}

long RegisterFaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RegisterFaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RegisterFaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RegisterFaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool RegisterFaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RegisterFaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RegisterFaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RegisterFaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string RegisterFaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RegisterFaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string RegisterFaceRequest::getCallerType()const
{
	return callerType_;
}

void RegisterFaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string RegisterFaceRequest::getContent()const
{
	return content_;
}

void RegisterFaceRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", std::to_string(content));
}

std::string RegisterFaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegisterFaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string RegisterFaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RegisterFaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RegisterFaceRequest::getRegionId()const
{
	return regionId_;
}

void RegisterFaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RegisterFaceRequest::getDataType()const
{
	return dataType_;
}

void RegisterFaceRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setCoreParameter("DataType", std::to_string(dataType));
}

std::string RegisterFaceRequest::getRequestContent()const
{
	return requestContent_;
}

void RegisterFaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string RegisterFaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RegisterFaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string RegisterFaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RegisterFaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long RegisterFaceRequest::getCallerUid()const
{
	return callerUid_;
}

void RegisterFaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string RegisterFaceRequest::getShowLog()const
{
	return showLog_;
}

void RegisterFaceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string RegisterFaceRequest::getApp_ip()const
{
	return app_ip_;
}

void RegisterFaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string RegisterFaceRequest::getPopProduct()const
{
	return popProduct_;
}

void RegisterFaceRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string RegisterFaceRequest::getGroupId()const
{
	return groupId_;
}

void RegisterFaceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string RegisterFaceRequest::getCallerBid()const
{
	return callerBid_;
}

void RegisterFaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long RegisterFaceRequest::getOwnerId()const
{
	return ownerId_;
}

void RegisterFaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RegisterFaceRequest::getVersion()const
{
	return version_;
}

void RegisterFaceRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool RegisterFaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RegisterFaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool RegisterFaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RegisterFaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RegisterFaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RegisterFaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RegisterFaceRequest::getServiceCode()const
{
	return serviceCode_;
}

void RegisterFaceRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string RegisterFaceRequest::getRequestId()const
{
	return requestId_;
}

void RegisterFaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

