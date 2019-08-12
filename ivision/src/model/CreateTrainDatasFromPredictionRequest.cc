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

#include <alibabacloud/ivision/model/CreateTrainDatasFromPredictionRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDatasFromPredictionRequest;

CreateTrainDatasFromPredictionRequest::CreateTrainDatasFromPredictionRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDatasFromPrediction")
{}

CreateTrainDatasFromPredictionRequest::~CreateTrainDatasFromPredictionRequest()
{}

long CreateTrainDatasFromPredictionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrainDatasFromPredictionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateTrainDatasFromPredictionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTrainDatasFromPredictionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateTrainDatasFromPredictionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTrainDatasFromPredictionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateTrainDatasFromPredictionRequest::getDataIds()const
{
	return dataIds_;
}

void CreateTrainDatasFromPredictionRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string CreateTrainDatasFromPredictionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTrainDatasFromPredictionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateTrainDatasFromPredictionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTrainDatasFromPredictionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateTrainDatasFromPredictionRequest::getCallerType()const
{
	return callerType_;
}

void CreateTrainDatasFromPredictionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateTrainDatasFromPredictionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTrainDatasFromPredictionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateTrainDatasFromPredictionRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTrainDatasFromPredictionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateTrainDatasFromPredictionRequest::getRegionId()const
{
	return regionId_;
}

void CreateTrainDatasFromPredictionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateTrainDatasFromPredictionRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTrainDatasFromPredictionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateTrainDatasFromPredictionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTrainDatasFromPredictionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateTrainDatasFromPredictionRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDatasFromPredictionRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTrainDatasFromPredictionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTrainDatasFromPredictionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateTrainDatasFromPredictionRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTrainDatasFromPredictionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateTrainDatasFromPredictionRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDatasFromPredictionRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateTrainDatasFromPredictionRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTrainDatasFromPredictionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateTrainDatasFromPredictionRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTrainDatasFromPredictionRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateTrainDatasFromPredictionRequest::getTagId()const
{
	return tagId_;
}

void CreateTrainDatasFromPredictionRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

std::string CreateTrainDatasFromPredictionRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTrainDatasFromPredictionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateTrainDatasFromPredictionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDatasFromPredictionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrainDatasFromPredictionRequest::getVersion()const
{
	return version_;
}

void CreateTrainDatasFromPredictionRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateTrainDatasFromPredictionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTrainDatasFromPredictionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTrainDatasFromPredictionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTrainDatasFromPredictionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTrainDatasFromPredictionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTrainDatasFromPredictionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateTrainDatasFromPredictionRequest::getRequestId()const
{
	return requestId_;
}

void CreateTrainDatasFromPredictionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateTrainDatasFromPredictionRequest::getIterationId()const
{
	return iterationId_;
}

void CreateTrainDatasFromPredictionRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

