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

#include <alibabacloud/ivision/model/CreateTrainDataRegionTagRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDataRegionTagRequest;

CreateTrainDataRegionTagRequest::CreateTrainDataRegionTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDataRegionTag")
{}

CreateTrainDataRegionTagRequest::~CreateTrainDataRegionTagRequest()
{}

long CreateTrainDataRegionTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrainDataRegionTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateTrainDataRegionTagRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTrainDataRegionTagRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateTrainDataRegionTagRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTrainDataRegionTagRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateTrainDataRegionTagRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTrainDataRegionTagRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateTrainDataRegionTagRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTrainDataRegionTagRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateTrainDataRegionTagRequest::getCallerType()const
{
	return callerType_;
}

void CreateTrainDataRegionTagRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateTrainDataRegionTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTrainDataRegionTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateTrainDataRegionTagRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTrainDataRegionTagRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateTrainDataRegionTagRequest::getRegionId()const
{
	return regionId_;
}

void CreateTrainDataRegionTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateTrainDataRegionTagRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTrainDataRegionTagRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateTrainDataRegionTagRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTrainDataRegionTagRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateTrainDataRegionTagRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDataRegionTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string CreateTrainDataRegionTagRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTrainDataRegionTagRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateTrainDataRegionTagRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTrainDataRegionTagRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateTrainDataRegionTagRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDataRegionTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateTrainDataRegionTagRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTrainDataRegionTagRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateTrainDataRegionTagRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTrainDataRegionTagRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string CreateTrainDataRegionTagRequest::getTagItems()const
{
	return tagItems_;
}

void CreateTrainDataRegionTagRequest::setTagItems(const std::string& tagItems)
{
	tagItems_ = tagItems;
	setParameter("TagItems", tagItems);
}

std::string CreateTrainDataRegionTagRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTrainDataRegionTagRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateTrainDataRegionTagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDataRegionTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrainDataRegionTagRequest::getVersion()const
{
	return version_;
}

void CreateTrainDataRegionTagRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool CreateTrainDataRegionTagRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTrainDataRegionTagRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTrainDataRegionTagRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTrainDataRegionTagRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTrainDataRegionTagRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTrainDataRegionTagRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateTrainDataRegionTagRequest::getDataId()const
{
	return dataId_;
}

void CreateTrainDataRegionTagRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setParameter("DataId", dataId);
}

std::string CreateTrainDataRegionTagRequest::getRequestId()const
{
	return requestId_;
}

void CreateTrainDataRegionTagRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

