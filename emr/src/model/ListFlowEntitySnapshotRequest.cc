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

#include <alibabacloud/emr/model/ListFlowEntitySnapshotRequest.h>

using AlibabaCloud::Emr::Model::ListFlowEntitySnapshotRequest;

ListFlowEntitySnapshotRequest::ListFlowEntitySnapshotRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowEntitySnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowEntitySnapshotRequest::~ListFlowEntitySnapshotRequest()
{}

long ListFlowEntitySnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListFlowEntitySnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListFlowEntitySnapshotRequest::getPageCount()const
{
	return pageCount_;
}

void ListFlowEntitySnapshotRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListFlowEntitySnapshotRequest::getOrderMode()const
{
	return orderMode_;
}

void ListFlowEntitySnapshotRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string ListFlowEntitySnapshotRequest::getEntityId()const
{
	return entityId_;
}

void ListFlowEntitySnapshotRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

int ListFlowEntitySnapshotRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowEntitySnapshotRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowEntitySnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFlowEntitySnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListFlowEntitySnapshotRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowEntitySnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowEntitySnapshotRequest::getLimit()const
{
	return limit_;
}

void ListFlowEntitySnapshotRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int ListFlowEntitySnapshotRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowEntitySnapshotRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowEntitySnapshotRequest::getCommitterId()const
{
	return committerId_;
}

void ListFlowEntitySnapshotRequest::setCommitterId(const std::string& committerId)
{
	committerId_ = committerId;
	setParameter("CommitterId", committerId);
}

int ListFlowEntitySnapshotRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListFlowEntitySnapshotRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListFlowEntitySnapshotRequest::getOrderField()const
{
	return orderField_;
}

void ListFlowEntitySnapshotRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string ListFlowEntitySnapshotRequest::getEntityGroupId()const
{
	return entityGroupId_;
}

void ListFlowEntitySnapshotRequest::setEntityGroupId(const std::string& entityGroupId)
{
	entityGroupId_ = entityGroupId;
	setParameter("EntityGroupId", entityGroupId);
}

std::string ListFlowEntitySnapshotRequest::getRevision()const
{
	return revision_;
}

void ListFlowEntitySnapshotRequest::setRevision(const std::string& revision)
{
	revision_ = revision;
	setParameter("Revision", revision);
}

std::string ListFlowEntitySnapshotRequest::getEntityType()const
{
	return entityType_;
}

void ListFlowEntitySnapshotRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

