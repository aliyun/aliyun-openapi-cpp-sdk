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

#include <alibabacloud/ivision/model/DescribeTrainDatasRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTrainDatasRequest;

DescribeTrainDatasRequest::DescribeTrainDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTrainDatas")
{}

DescribeTrainDatasRequest::~DescribeTrainDatasRequest()
{}

long DescribeTrainDatasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTrainDatasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTrainDatasRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeTrainDatasRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

long DescribeTrainDatasRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeTrainDatasRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeTrainDatasRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeTrainDatasRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeTrainDatasRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeTrainDatasRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeTrainDatasRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeTrainDatasRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeTrainDatasRequest::getCallerType()const
{
	return callerType_;
}

void DescribeTrainDatasRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeTrainDatasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTrainDatasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTrainDatasRequest::getTagStatus()const
{
	return tagStatus_;
}

void DescribeTrainDatasRequest::setTagStatus(const std::string& tagStatus)
{
	tagStatus_ = tagStatus;
	setParameter("TagStatus", tagStatus);
}

std::string DescribeTrainDatasRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTrainDatasRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeTrainDatasRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTrainDatasRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeTrainDatasRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeTrainDatasRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeTrainDatasRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTrainDatasRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTrainDatasRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeTrainDatasRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeTrainDatasRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTrainDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string DescribeTrainDatasRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeTrainDatasRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeTrainDatasRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeTrainDatasRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeTrainDatasRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTrainDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeTrainDatasRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeTrainDatasRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeTrainDatasRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeTrainDatasRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeTrainDatasRequest::getTagId()const
{
	return tagId_;
}

void DescribeTrainDatasRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setParameter("TagId", tagId);
}

long DescribeTrainDatasRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTrainDatasRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeTrainDatasRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeTrainDatasRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeTrainDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTrainDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTrainDatasRequest::getVersion()const
{
	return version_;
}

void DescribeTrainDatasRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeTrainDatasRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeTrainDatasRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeTrainDatasRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeTrainDatasRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeTrainDatasRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeTrainDatasRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeTrainDatasRequest::getRequestId()const
{
	return requestId_;
}

void DescribeTrainDatasRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeTrainDatasRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTrainDatasRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setParameter("IterationId", iterationId);
}

