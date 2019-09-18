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

#include <alibabacloud/emr/model/CreateDataSourceRequest.h>

using AlibabaCloud::Emr::Model::CreateDataSourceRequest;

CreateDataSourceRequest::CreateDataSourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateDataSource")
{}

CreateDataSourceRequest::~CreateDataSourceRequest()
{}

long CreateDataSourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDataSourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDataSourceRequest::getNavParentId()const
{
	return navParentId_;
}

void CreateDataSourceRequest::setNavParentId(const std::string& navParentId)
{
	navParentId_ = navParentId;
	setCoreParameter("NavParentId", navParentId);
}

std::string CreateDataSourceRequest::getDescription()const
{
	return description_;
}

void CreateDataSourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateDataSourceRequest::getConf()const
{
	return conf_;
}

void CreateDataSourceRequest::setConf(const std::string& conf)
{
	conf_ = conf;
	setCoreParameter("Conf", conf);
}

std::string CreateDataSourceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateDataSourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateDataSourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDataSourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDataSourceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDataSourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDataSourceRequest::getName()const
{
	return name_;
}

void CreateDataSourceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateDataSourceRequest::getSourceType()const
{
	return sourceType_;
}

void CreateDataSourceRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setCoreParameter("SourceType", sourceType);
}

