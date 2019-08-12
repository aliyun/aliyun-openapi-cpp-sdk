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

#include <alibabacloud/emr/model/ListBackupsRequest.h>

using AlibabaCloud::Emr::Model::ListBackupsRequest;

ListBackupsRequest::ListBackupsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListBackups")
{}

ListBackupsRequest::~ListBackupsRequest()
{}

long ListBackupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListBackupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int ListBackupsRequest::getPageCount()const
{
	return pageCount_;
}

void ListBackupsRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", pageCount);
}

std::string ListBackupsRequest::getOrderMode()const
{
	return orderMode_;
}

void ListBackupsRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", orderMode);
}

long ListBackupsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListBackupsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ListBackupsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListBackupsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ListBackupsRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ListBackupsRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string ListBackupsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListBackupsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ListBackupsRequest::getCallerType()const
{
	return callerType_;
}

void ListBackupsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int ListBackupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBackupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListBackupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBackupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListBackupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListBackupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListBackupsRequest::getRegionId()const
{
	return regionId_;
}

void ListBackupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListBackupsRequest::getLimit()const
{
	return limit_;
}

void ListBackupsRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

int ListBackupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListBackupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListBackupsRequest::getServiceName()const
{
	return serviceName_;
}

void ListBackupsRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

long ListBackupsRequest::getId()const
{
	return id_;
}

void ListBackupsRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int ListBackupsRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListBackupsRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", currentSize);
}

long ListBackupsRequest::getCallerUid()const
{
	return callerUid_;
}

void ListBackupsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ListBackupsRequest::getOrderField()const
{
	return orderField_;
}

void ListBackupsRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", orderField);
}

std::string ListBackupsRequest::getApp_ip()const
{
	return app_ip_;
}

void ListBackupsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::vector<std::string> ListBackupsRequest::getBackupId()const
{
	return backupId_;
}

void ListBackupsRequest::setBackupId(const std::vector<std::string>& backupId)
{
	backupId_ = backupId;
	for(int i = 0; i!= backupId.size(); i++)
		setCoreParameter("BackupId."+ std::to_string(i), std::to_string(backupId.at(i)));
}

std::string ListBackupsRequest::getCallerBid()const
{
	return callerBid_;
}

void ListBackupsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string ListBackupsRequest::getClusterId()const
{
	return clusterId_;
}

void ListBackupsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListBackupsRequest::getMetadataType()const
{
	return metadataType_;
}

void ListBackupsRequest::setMetadataType(const std::string& metadataType)
{
	metadataType_ = metadataType;
	setCoreParameter("MetadataType", metadataType);
}

bool ListBackupsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListBackupsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ListBackupsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListBackupsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ListBackupsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListBackupsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ListBackupsRequest::getRequestId()const
{
	return requestId_;
}

void ListBackupsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ListBackupsRequest::getBizId()const
{
	return bizId_;
}

void ListBackupsRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string ListBackupsRequest::getStatus()const
{
	return status_;
}

void ListBackupsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

