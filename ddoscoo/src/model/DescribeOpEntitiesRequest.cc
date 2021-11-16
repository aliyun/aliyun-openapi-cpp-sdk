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

#include <alibabacloud/ddoscoo/model/DescribeOpEntitiesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeOpEntitiesRequest;

DescribeOpEntitiesRequest::DescribeOpEntitiesRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeOpEntities")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOpEntitiesRequest::~DescribeOpEntitiesRequest()
{}

long DescribeOpEntitiesRequest::getStartTime()const
{
	return startTime_;
}

void DescribeOpEntitiesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeOpEntitiesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeOpEntitiesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeOpEntitiesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOpEntitiesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeOpEntitiesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOpEntitiesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeOpEntitiesRequest::getEndTime()const
{
	return endTime_;
}

void DescribeOpEntitiesRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string DescribeOpEntitiesRequest::getEntityObject()const
{
	return entityObject_;
}

void DescribeOpEntitiesRequest::setEntityObject(const std::string& entityObject)
{
	entityObject_ = entityObject;
	setParameter("EntityObject", entityObject);
}

int DescribeOpEntitiesRequest::getEntityType()const
{
	return entityType_;
}

void DescribeOpEntitiesRequest::setEntityType(int entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", std::to_string(entityType));
}

int DescribeOpEntitiesRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeOpEntitiesRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

