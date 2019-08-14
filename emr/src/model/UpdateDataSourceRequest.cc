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

#include <alibabacloud/emr/model/UpdateDataSourceRequest.h>

using AlibabaCloud::Emr::Model::UpdateDataSourceRequest;

UpdateDataSourceRequest::UpdateDataSourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateDataSource")
{}

UpdateDataSourceRequest::~UpdateDataSourceRequest()
{}

long UpdateDataSourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateDataSourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateDataSourceRequest::getRegionId()const
{
	return regionId_;
}

void UpdateDataSourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateDataSourceRequest::getName()const
{
	return name_;
}

void UpdateDataSourceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdateDataSourceRequest::getDescription()const
{
	return description_;
}

void UpdateDataSourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateDataSourceRequest::getConf()const
{
	return conf_;
}

void UpdateDataSourceRequest::setConf(const std::string& conf)
{
	conf_ = conf;
	setCoreParameter("Conf", conf);
}

std::string UpdateDataSourceRequest::getId()const
{
	return id_;
}

void UpdateDataSourceRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string UpdateDataSourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateDataSourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

