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

#include <alibabacloud/openanalytics-open/model/ModifyVirtualClusterRequest.h>

using AlibabaCloud::Openanalytics_open::Model::ModifyVirtualClusterRequest;

ModifyVirtualClusterRequest::ModifyVirtualClusterRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "ModifyVirtualCluster")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyVirtualClusterRequest::~ModifyVirtualClusterRequest()
{}

std::string ModifyVirtualClusterRequest::getDefaultExecutorSpecName()const
{
	return defaultExecutorSpecName_;
}

void ModifyVirtualClusterRequest::setDefaultExecutorSpecName(const std::string& defaultExecutorSpecName)
{
	defaultExecutorSpecName_ = defaultExecutorSpecName;
	setBodyParameter("DefaultExecutorSpecName", defaultExecutorSpecName);
}

std::string ModifyVirtualClusterRequest::getSparkModuleReleaseName()const
{
	return sparkModuleReleaseName_;
}

void ModifyVirtualClusterRequest::setSparkModuleReleaseName(const std::string& sparkModuleReleaseName)
{
	sparkModuleReleaseName_ = sparkModuleReleaseName;
	setBodyParameter("SparkModuleReleaseName", sparkModuleReleaseName);
}

std::string ModifyVirtualClusterRequest::getDescription()const
{
	return description_;
}

void ModifyVirtualClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

long ModifyVirtualClusterRequest::getDefaultExecutorNumbers()const
{
	return defaultExecutorNumbers_;
}

void ModifyVirtualClusterRequest::setDefaultExecutorNumbers(long defaultExecutorNumbers)
{
	defaultExecutorNumbers_ = defaultExecutorNumbers;
	setBodyParameter("DefaultExecutorNumbers", std::to_string(defaultExecutorNumbers));
}

std::string ModifyVirtualClusterRequest::getName()const
{
	return name_;
}

void ModifyVirtualClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string ModifyVirtualClusterRequest::getDefaultDriverSpecName()const
{
	return defaultDriverSpecName_;
}

void ModifyVirtualClusterRequest::setDefaultDriverSpecName(const std::string& defaultDriverSpecName)
{
	defaultDriverSpecName_ = defaultDriverSpecName;
	setBodyParameter("DefaultDriverSpecName", defaultDriverSpecName);
}

