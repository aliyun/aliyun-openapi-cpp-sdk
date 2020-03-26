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

#include <alibabacloud/emr/model/CreateTagRequest.h>

using AlibabaCloud::Emr::Model::CreateTagRequest;

CreateTagRequest::CreateTagRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateTag")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTagRequest::~CreateTagRequest()
{}

long CreateTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTagRequest::getDescription()const
{
	return description_;
}

void CreateTagRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateTagRequest::getRegionId()const
{
	return regionId_;
}

void CreateTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateTagRequest::getName()const
{
	return name_;
}

void CreateTagRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long CreateTagRequest::getId()const
{
	return id_;
}

void CreateTagRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string CreateTagRequest::getCategory()const
{
	return category_;
}

void CreateTagRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

