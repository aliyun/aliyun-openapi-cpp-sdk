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

#include <alibabacloud/foas/model/CreateProjectRequest.h>

using AlibabaCloud::Foas::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects");
	setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest()
{}

std::string CreateProjectRequest::getManagerIds()const
{
	return managerIds_;
}

void CreateProjectRequest::setManagerIds(const std::string& managerIds)
{
	managerIds_ = managerIds;
	setBodyParameter("ManagerIds", managerIds);
}

std::string CreateProjectRequest::getOrderId()const
{
	return orderId_;
}

void CreateProjectRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setBodyParameter("OrderId", orderId);
}

std::string CreateProjectRequest::getRegionId()const
{
	return regionId_;
}

void CreateProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string CreateProjectRequest::getName()const
{
	return name_;
}

void CreateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateProjectRequest::getDescription()const
{
	return description_;
}

void CreateProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateProjectRequest::getClusterId()const
{
	return clusterId_;
}

void CreateProjectRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

std::string CreateProjectRequest::getDeployType()const
{
	return deployType_;
}

void CreateProjectRequest::setDeployType(const std::string& deployType)
{
	deployType_ = deployType;
	setBodyParameter("DeployType", deployType);
}

