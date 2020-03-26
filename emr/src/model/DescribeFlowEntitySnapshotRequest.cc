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

#include <alibabacloud/emr/model/DescribeFlowEntitySnapshotRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowEntitySnapshotRequest;

DescribeFlowEntitySnapshotRequest::DescribeFlowEntitySnapshotRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowEntitySnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowEntitySnapshotRequest::~DescribeFlowEntitySnapshotRequest()
{}

long DescribeFlowEntitySnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFlowEntitySnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeFlowEntitySnapshotRequest::getPageCount()const
{
	return pageCount_;
}

void DescribeFlowEntitySnapshotRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string DescribeFlowEntitySnapshotRequest::getOrderMode()const
{
	return orderMode_;
}

void DescribeFlowEntitySnapshotRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string DescribeFlowEntitySnapshotRequest::getEntityId()const
{
	return entityId_;
}

void DescribeFlowEntitySnapshotRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

int DescribeFlowEntitySnapshotRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFlowEntitySnapshotRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFlowEntitySnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFlowEntitySnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFlowEntitySnapshotRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowEntitySnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeFlowEntitySnapshotRequest::getLimit()const
{
	return limit_;
}

void DescribeFlowEntitySnapshotRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int DescribeFlowEntitySnapshotRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFlowEntitySnapshotRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFlowEntitySnapshotRequest::getCommitterId()const
{
	return committerId_;
}

void DescribeFlowEntitySnapshotRequest::setCommitterId(const std::string& committerId)
{
	committerId_ = committerId;
	setParameter("CommitterId", committerId);
}

int DescribeFlowEntitySnapshotRequest::getCurrentSize()const
{
	return currentSize_;
}

void DescribeFlowEntitySnapshotRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string DescribeFlowEntitySnapshotRequest::getOrderField()const
{
	return orderField_;
}

void DescribeFlowEntitySnapshotRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string DescribeFlowEntitySnapshotRequest::getEntityGroupId()const
{
	return entityGroupId_;
}

void DescribeFlowEntitySnapshotRequest::setEntityGroupId(const std::string& entityGroupId)
{
	entityGroupId_ = entityGroupId;
	setParameter("EntityGroupId", entityGroupId);
}

std::string DescribeFlowEntitySnapshotRequest::getRevision()const
{
	return revision_;
}

void DescribeFlowEntitySnapshotRequest::setRevision(const std::string& revision)
{
	revision_ = revision;
	setParameter("Revision", revision);
}

std::string DescribeFlowEntitySnapshotRequest::getEntityType()const
{
	return entityType_;
}

void DescribeFlowEntitySnapshotRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

