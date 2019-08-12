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

#include <alibabacloud/ivision/model/UnregisterFaceRequest.h>

using AlibabaCloud::Ivision::Model::UnregisterFaceRequest;

UnregisterFaceRequest::UnregisterFaceRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "UnregisterFace")
{}

UnregisterFaceRequest::~UnregisterFaceRequest()
{}

long UnregisterFaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnregisterFaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long UnregisterFaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnregisterFaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool UnregisterFaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnregisterFaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string UnregisterFaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnregisterFaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnregisterFaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnregisterFaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnregisterFaceRequest::getCallerType()const
{
	return callerType_;
}

void UnregisterFaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UnregisterFaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnregisterFaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UnregisterFaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnregisterFaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UnregisterFaceRequest::getRegionId()const
{
	return regionId_;
}

void UnregisterFaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnregisterFaceRequest::getRequestContent()const
{
	return requestContent_;
}

void UnregisterFaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UnregisterFaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnregisterFaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UnregisterFaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnregisterFaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long UnregisterFaceRequest::getCallerUid()const
{
	return callerUid_;
}

void UnregisterFaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string UnregisterFaceRequest::getShowLog()const
{
	return showLog_;
}

void UnregisterFaceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string UnregisterFaceRequest::getApp_ip()const
{
	return app_ip_;
}

void UnregisterFaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UnregisterFaceRequest::getPopProduct()const
{
	return popProduct_;
}

void UnregisterFaceRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string UnregisterFaceRequest::getGroupId()const
{
	return groupId_;
}

void UnregisterFaceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string UnregisterFaceRequest::getCallerBid()const
{
	return callerBid_;
}

void UnregisterFaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UnregisterFaceRequest::getOwnerId()const
{
	return ownerId_;
}

void UnregisterFaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UnregisterFaceRequest::getVersion()const
{
	return version_;
}

void UnregisterFaceRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool UnregisterFaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnregisterFaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool UnregisterFaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnregisterFaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool UnregisterFaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnregisterFaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string UnregisterFaceRequest::getFaceToken()const
{
	return faceToken_;
}

void UnregisterFaceRequest::setFaceToken(const std::string& faceToken)
{
	faceToken_ = faceToken;
	setCoreParameter("FaceToken", faceToken);
}

std::string UnregisterFaceRequest::getServiceCode()const
{
	return serviceCode_;
}

void UnregisterFaceRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string UnregisterFaceRequest::getRequestId()const
{
	return requestId_;
}

void UnregisterFaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

