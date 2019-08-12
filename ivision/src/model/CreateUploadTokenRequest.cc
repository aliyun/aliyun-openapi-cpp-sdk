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

#include <alibabacloud/ivision/model/CreateUploadTokenRequest.h>

using AlibabaCloud::Ivision::Model::CreateUploadTokenRequest;

CreateUploadTokenRequest::CreateUploadTokenRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateUploadToken")
{}

CreateUploadTokenRequest::~CreateUploadTokenRequest()
{}

long CreateUploadTokenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUploadTokenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateUploadTokenRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateUploadTokenRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateUploadTokenRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateUploadTokenRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string CreateUploadTokenRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateUploadTokenRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateUploadTokenRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateUploadTokenRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateUploadTokenRequest::getCallerType()const
{
	return callerType_;
}

void CreateUploadTokenRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateUploadTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUploadTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateUploadTokenRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUploadTokenRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateUploadTokenRequest::getRegionId()const
{
	return regionId_;
}

void CreateUploadTokenRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateUploadTokenRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateUploadTokenRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateUploadTokenRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateUploadTokenRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateUploadTokenRequest::getProjectId()const
{
	return projectId_;
}

void CreateUploadTokenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateUploadTokenRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateUploadTokenRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateUploadTokenRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateUploadTokenRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateUploadTokenRequest::getShowLog()const
{
	return showLog_;
}

void CreateUploadTokenRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateUploadTokenRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateUploadTokenRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateUploadTokenRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateUploadTokenRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateUploadTokenRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateUploadTokenRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateUploadTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUploadTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateUploadTokenRequest::getVersion()const
{
	return version_;
}

void CreateUploadTokenRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateUploadTokenRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateUploadTokenRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool CreateUploadTokenRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateUploadTokenRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool CreateUploadTokenRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateUploadTokenRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string CreateUploadTokenRequest::getFileName()const
{
	return fileName_;
}

void CreateUploadTokenRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

std::string CreateUploadTokenRequest::getRequestId()const
{
	return requestId_;
}

void CreateUploadTokenRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

