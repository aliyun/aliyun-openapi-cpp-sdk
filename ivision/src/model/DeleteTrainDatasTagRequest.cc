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

#include <alibabacloud/ivision/model/DeleteTrainDatasTagRequest.h>

using AlibabaCloud::Ivision::Model::DeleteTrainDatasTagRequest;

DeleteTrainDatasTagRequest::DeleteTrainDatasTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteTrainDatasTag")
{}

DeleteTrainDatasTagRequest::~DeleteTrainDatasTagRequest()
{}

long DeleteTrainDatasTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTrainDatasTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteTrainDatasTagRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteTrainDatasTagRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteTrainDatasTagRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteTrainDatasTagRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteTrainDatasTagRequest::getDataIds()const
{
	return dataIds_;
}

void DeleteTrainDatasTagRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setParameter("DataIds", dataIds);
}

std::string DeleteTrainDatasTagRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteTrainDatasTagRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteTrainDatasTagRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteTrainDatasTagRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteTrainDatasTagRequest::getCallerType()const
{
	return callerType_;
}

void DeleteTrainDatasTagRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DeleteTrainDatasTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTrainDatasTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteTrainDatasTagRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteTrainDatasTagRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteTrainDatasTagRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTrainDatasTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteTrainDatasTagRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteTrainDatasTagRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteTrainDatasTagRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteTrainDatasTagRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteTrainDatasTagRequest::getProjectId()const
{
	return projectId_;
}

void DeleteTrainDatasTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string DeleteTrainDatasTagRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteTrainDatasTagRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteTrainDatasTagRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteTrainDatasTagRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteTrainDatasTagRequest::getShowLog()const
{
	return showLog_;
}

void DeleteTrainDatasTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DeleteTrainDatasTagRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteTrainDatasTagRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteTrainDatasTagRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteTrainDatasTagRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DeleteTrainDatasTagRequest::getTagId()const
{
	return tagId_;
}

void DeleteTrainDatasTagRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setParameter("TagId", tagId);
}

std::string DeleteTrainDatasTagRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteTrainDatasTagRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteTrainDatasTagRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTrainDatasTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteTrainDatasTagRequest::getVersion()const
{
	return version_;
}

void DeleteTrainDatasTagRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DeleteTrainDatasTagRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteTrainDatasTagRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteTrainDatasTagRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteTrainDatasTagRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteTrainDatasTagRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteTrainDatasTagRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteTrainDatasTagRequest::getRequestId()const
{
	return requestId_;
}

void DeleteTrainDatasTagRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

