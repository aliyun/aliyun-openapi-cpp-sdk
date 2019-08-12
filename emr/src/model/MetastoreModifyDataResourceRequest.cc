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

#include <alibabacloud/emr/model/MetastoreModifyDataResourceRequest.h>

using AlibabaCloud::Emr::Model::MetastoreModifyDataResourceRequest;

MetastoreModifyDataResourceRequest::MetastoreModifyDataResourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreModifyDataResource")
{}

MetastoreModifyDataResourceRequest::~MetastoreModifyDataResourceRequest()
{}

long MetastoreModifyDataResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreModifyDataResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

bool MetastoreModifyDataResourceRequest::getDefault()const
{
	return default_;
}

void MetastoreModifyDataResourceRequest::setDefault(bool default)
{
	default_ = default;
	setCoreParameter("Default", default ? "true" : "false");
}

std::string MetastoreModifyDataResourceRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreModifyDataResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string MetastoreModifyDataResourceRequest::getName()const
{
	return name_;
}

void MetastoreModifyDataResourceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string MetastoreModifyDataResourceRequest::getDescription()const
{
	return description_;
}

void MetastoreModifyDataResourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string MetastoreModifyDataResourceRequest::getId()const
{
	return id_;
}

void MetastoreModifyDataResourceRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string MetastoreModifyDataResourceRequest::getClusterId()const
{
	return clusterId_;
}

void MetastoreModifyDataResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string MetastoreModifyDataResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreModifyDataResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

