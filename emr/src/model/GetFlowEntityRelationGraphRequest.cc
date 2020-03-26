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

#include <alibabacloud/emr/model/GetFlowEntityRelationGraphRequest.h>

using AlibabaCloud::Emr::Model::GetFlowEntityRelationGraphRequest;

GetFlowEntityRelationGraphRequest::GetFlowEntityRelationGraphRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetFlowEntityRelationGraph")
{
	setMethod(HttpRequest::Method::Post);
}

GetFlowEntityRelationGraphRequest::~GetFlowEntityRelationGraphRequest()
{}

long GetFlowEntityRelationGraphRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetFlowEntityRelationGraphRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int GetFlowEntityRelationGraphRequest::getPageCount()const
{
	return pageCount_;
}

void GetFlowEntityRelationGraphRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string GetFlowEntityRelationGraphRequest::getOrderMode()const
{
	return orderMode_;
}

void GetFlowEntityRelationGraphRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string GetFlowEntityRelationGraphRequest::getEntityId()const
{
	return entityId_;
}

void GetFlowEntityRelationGraphRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

int GetFlowEntityRelationGraphRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetFlowEntityRelationGraphRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetFlowEntityRelationGraphRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetFlowEntityRelationGraphRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetFlowEntityRelationGraphRequest::getRegionId()const
{
	return regionId_;
}

void GetFlowEntityRelationGraphRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int GetFlowEntityRelationGraphRequest::getLimit()const
{
	return limit_;
}

void GetFlowEntityRelationGraphRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int GetFlowEntityRelationGraphRequest::getPageSize()const
{
	return pageSize_;
}

void GetFlowEntityRelationGraphRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetFlowEntityRelationGraphRequest::getRelationship()const
{
	return relationship_;
}

void GetFlowEntityRelationGraphRequest::setRelationship(const std::string& relationship)
{
	relationship_ = relationship;
	setParameter("Relationship", relationship);
}

int GetFlowEntityRelationGraphRequest::getCurrentSize()const
{
	return currentSize_;
}

void GetFlowEntityRelationGraphRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string GetFlowEntityRelationGraphRequest::getOrderField()const
{
	return orderField_;
}

void GetFlowEntityRelationGraphRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string GetFlowEntityRelationGraphRequest::getDirection()const
{
	return direction_;
}

void GetFlowEntityRelationGraphRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string GetFlowEntityRelationGraphRequest::getEntityGroupId()const
{
	return entityGroupId_;
}

void GetFlowEntityRelationGraphRequest::setEntityGroupId(const std::string& entityGroupId)
{
	entityGroupId_ = entityGroupId;
	setParameter("EntityGroupId", entityGroupId);
}

std::string GetFlowEntityRelationGraphRequest::getEntityType()const
{
	return entityType_;
}

void GetFlowEntityRelationGraphRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

