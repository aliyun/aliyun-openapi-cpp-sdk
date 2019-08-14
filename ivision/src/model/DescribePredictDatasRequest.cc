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

#include <alibabacloud/ivision/model/DescribePredictDatasRequest.h>

using AlibabaCloud::Ivision::Model::DescribePredictDatasRequest;

DescribePredictDatasRequest::DescribePredictDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribePredictDatas")
{}

DescribePredictDatasRequest::~DescribePredictDatasRequest()
{}

long DescribePredictDatasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePredictDatasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePredictDatasRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribePredictDatasRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribePredictDatasRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribePredictDatasRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribePredictDatasRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribePredictDatasRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribePredictDatasRequest::getDataIds()const
{
	return dataIds_;
}

void DescribePredictDatasRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string DescribePredictDatasRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribePredictDatasRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribePredictDatasRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribePredictDatasRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribePredictDatasRequest::getCallerType()const
{
	return callerType_;
}

void DescribePredictDatasRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribePredictDatasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePredictDatasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribePredictDatasRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePredictDatasRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribePredictDatasRequest::getRegionId()const
{
	return regionId_;
}

void DescribePredictDatasRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribePredictDatasRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribePredictDatasRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribePredictDatasRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePredictDatasRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePredictDatasRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribePredictDatasRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribePredictDatasRequest::getProbabilityThreshold()const
{
	return probabilityThreshold_;
}

void DescribePredictDatasRequest::setProbabilityThreshold(const std::string& probabilityThreshold)
{
	probabilityThreshold_ = probabilityThreshold;
	setCoreParameter("ProbabilityThreshold", probabilityThreshold);
}

std::string DescribePredictDatasRequest::getOverlapThreshold()const
{
	return overlapThreshold_;
}

void DescribePredictDatasRequest::setOverlapThreshold(const std::string& overlapThreshold)
{
	overlapThreshold_ = overlapThreshold;
	setCoreParameter("OverlapThreshold", overlapThreshold);
}

std::string DescribePredictDatasRequest::getProjectId()const
{
	return projectId_;
}

void DescribePredictDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribePredictDatasRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribePredictDatasRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribePredictDatasRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribePredictDatasRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribePredictDatasRequest::getShowLog()const
{
	return showLog_;
}

void DescribePredictDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribePredictDatasRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribePredictDatasRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribePredictDatasRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribePredictDatasRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribePredictDatasRequest::getModelId()const
{
	return modelId_;
}

void DescribePredictDatasRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

std::string DescribePredictDatasRequest::getTagId()const
{
	return tagId_;
}

void DescribePredictDatasRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

long DescribePredictDatasRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePredictDatasRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribePredictDatasRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribePredictDatasRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribePredictDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePredictDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePredictDatasRequest::getVersion()const
{
	return version_;
}

void DescribePredictDatasRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribePredictDatasRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribePredictDatasRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribePredictDatasRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribePredictDatasRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribePredictDatasRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribePredictDatasRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribePredictDatasRequest::getRequestId()const
{
	return requestId_;
}

void DescribePredictDatasRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribePredictDatasRequest::getIterationId()const
{
	return iterationId_;
}

void DescribePredictDatasRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

