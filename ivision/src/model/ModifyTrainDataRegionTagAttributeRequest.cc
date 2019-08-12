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

#include <alibabacloud/ivision/model/ModifyTrainDataRegionTagAttributeRequest.h>

using AlibabaCloud::Ivision::Model::ModifyTrainDataRegionTagAttributeRequest;

ModifyTrainDataRegionTagAttributeRequest::ModifyTrainDataRegionTagAttributeRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ModifyTrainDataRegionTagAttribute")
{}

ModifyTrainDataRegionTagAttributeRequest::~ModifyTrainDataRegionTagAttributeRequest()
{}

long ModifyTrainDataRegionTagAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyTrainDataRegionTagAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyTrainDataRegionTagAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyTrainDataRegionTagAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyTrainDataRegionTagAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyTrainDataRegionTagAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyTrainDataRegionTagAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyTrainDataRegionTagAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyTrainDataRegionTagAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyTrainDataRegionTagAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getProjectId()const
{
	return projectId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyTrainDataRegionTagAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyTrainDataRegionTagAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyTrainDataRegionTagAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getShowLog()const
{
	return showLog_;
}

void ModifyTrainDataRegionTagAttributeRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyTrainDataRegionTagAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyTrainDataRegionTagAttributeRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getTagItems()const
{
	return tagItems_;
}

void ModifyTrainDataRegionTagAttributeRequest::setTagItems(const std::string& tagItems)
{
	tagItems_ = tagItems;
	setCoreParameter("TagItems", tagItems);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyTrainDataRegionTagAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyTrainDataRegionTagAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getVersion()const
{
	return version_;
}

void ModifyTrainDataRegionTagAttributeRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ModifyTrainDataRegionTagAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyTrainDataRegionTagAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyTrainDataRegionTagAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyTrainDataRegionTagAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ModifyTrainDataRegionTagAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyTrainDataRegionTagAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getDataId()const
{
	return dataId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setCoreParameter("DataId", dataId);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

