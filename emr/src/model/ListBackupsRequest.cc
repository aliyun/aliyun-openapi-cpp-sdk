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
{
	setMethod(HttpRequest::Method::Post);
}

ListBackupsRequest::~ListBackupsRequest()
{}

long ListBackupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListBackupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListBackupsRequest::getPageCount()const
{
	return pageCount_;
}

void ListBackupsRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", std::to_string(pageCount));
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

std::string ListBackupsRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ListBackupsRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

int ListBackupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBackupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
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
	setCoreParameter("Limit", std::to_string(limit));
}

int ListBackupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListBackupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
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
	setCoreParameter("Id", std::to_string(id));
}

int ListBackupsRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListBackupsRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", std::to_string(currentSize));
}

std::vector<std::string> ListBackupsRequest::getBackupId()const
{
	return backupId_;
}

void ListBackupsRequest::setBackupId(const std::vector<std::string>& backupId)
{
	backupId_ = backupId;
	for(int dep1 = 0; dep1!= backupId.size(); dep1++) {
		setCoreParameter("BackupId."+ std::to_string(dep1), backupId.at(dep1));
	}
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

