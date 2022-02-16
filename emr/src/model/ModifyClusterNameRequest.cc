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

#include <alibabacloud/emr/model/ModifyClusterNameRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterNameRequest;

ModifyClusterNameRequest::ModifyClusterNameRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterName")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterNameRequest::~ModifyClusterNameRequest()
{}

long ModifyClusterNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterNameRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClusterNameRequest::getName()const
{
	return name_;
}

void ModifyClusterNameRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyClusterNameRequest::getId()const
{
	return id_;
}

void ModifyClusterNameRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

