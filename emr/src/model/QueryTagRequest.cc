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

#include <alibabacloud/emr/model/QueryTagRequest.h>

using AlibabaCloud::Emr::Model::QueryTagRequest;

QueryTagRequest::QueryTagRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QueryTag")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTagRequest::~QueryTagRequest()
{}

long QueryTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long QueryTagRequest::getTagId()const
{
	return tagId_;
}

void QueryTagRequest::setTagId(long tagId)
{
	tagId_ = tagId;
	setParameter("TagId", std::to_string(tagId));
}

std::string QueryTagRequest::getEntityId()const
{
	return entityId_;
}

void QueryTagRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

std::string QueryTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryTagRequest::getEntityType()const
{
	return entityType_;
}

void QueryTagRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

std::string QueryTagRequest::getRegionId()const
{
	return regionId_;
}

void QueryTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

