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

#include <alibabacloud/ivision/model/CreateFaceGroupRequest.h>

using AlibabaCloud::Ivision::Model::CreateFaceGroupRequest;

CreateFaceGroupRequest::CreateFaceGroupRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateFaceGroup")
{}

CreateFaceGroupRequest::~CreateFaceGroupRequest()
{}

long CreateFaceGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateFaceGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateFaceGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateFaceGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateFaceGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateFaceGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateFaceGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateFaceGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateFaceGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateFaceGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateFaceGroupRequest::getCallerType()const
{
	return callerType_;
}

void CreateFaceGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateFaceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateFaceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateFaceGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateFaceGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateFaceGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateFaceGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateFaceGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateFaceGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateFaceGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateFaceGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateFaceGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateFaceGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateFaceGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateFaceGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateFaceGroupRequest::getShowLog()const
{
	return showLog_;
}

void CreateFaceGroupRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string CreateFaceGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateFaceGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateFaceGroupRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateFaceGroupRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string CreateFaceGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateFaceGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateFaceGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateFaceGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateFaceGroupRequest::getVersion()const
{
	return version_;
}

void CreateFaceGroupRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool CreateFaceGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateFaceGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateFaceGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateFaceGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateFaceGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateFaceGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateFaceGroupRequest::getServiceCode()const
{
	return serviceCode_;
}

void CreateFaceGroupRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string CreateFaceGroupRequest::getRequestId()const
{
	return requestId_;
}

void CreateFaceGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateFaceGroupRequest::getName()const
{
	return name_;
}

void CreateFaceGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

