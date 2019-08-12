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

#include <alibabacloud/emr/model/MetastoreCreateDataResourceRequest.h>

using AlibabaCloud::Emr::Model::MetastoreCreateDataResourceRequest;

MetastoreCreateDataResourceRequest::MetastoreCreateDataResourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreCreateDataResource")
{}

MetastoreCreateDataResourceRequest::~MetastoreCreateDataResourceRequest()
{}

long MetastoreCreateDataResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreCreateDataResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool MetastoreCreateDataResourceRequest::getDefault()const
{
	return default_;
}

void MetastoreCreateDataResourceRequest::setDefault(bool default)
{
	default_ = default;
	setCoreParameter("Default", default ? "true" : "false");
}

std::string MetastoreCreateDataResourceRequest::getAccessType()const
{
	return accessType_;
}

void MetastoreCreateDataResourceRequest::setAccessType(const std::string& accessType)
{
	accessType_ = accessType;
	setCoreParameter("AccessType", accessType);
}

std::string MetastoreCreateDataResourceRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreCreateDataResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetastoreCreateDataResourceRequest::getName()const
{
	return name_;
}

void MetastoreCreateDataResourceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string MetastoreCreateDataResourceRequest::getDescription()const
{
	return description_;
}

void MetastoreCreateDataResourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string MetastoreCreateDataResourceRequest::getMetaType()const
{
	return metaType_;
}

void MetastoreCreateDataResourceRequest::setMetaType(const std::string& metaType)
{
	metaType_ = metaType;
	setCoreParameter("MetaType", metaType);
}

std::string MetastoreCreateDataResourceRequest::getClusterId()const
{
	return clusterId_;
}

void MetastoreCreateDataResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string MetastoreCreateDataResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreCreateDataResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

