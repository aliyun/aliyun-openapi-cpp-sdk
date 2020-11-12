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

#include <alibabacloud/openanalytics-open/model/CreateVirtualClusterForSparkRequest.h>

using AlibabaCloud::Openanalytics_open::Model::CreateVirtualClusterForSparkRequest;

CreateVirtualClusterForSparkRequest::CreateVirtualClusterForSparkRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "CreateVirtualClusterForSpark")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVirtualClusterForSparkRequest::~CreateVirtualClusterForSparkRequest()
{}

std::string CreateVirtualClusterForSparkRequest::getDefaultExecutorSpecName()const
{
	return defaultExecutorSpecName_;
}

void CreateVirtualClusterForSparkRequest::setDefaultExecutorSpecName(const std::string& defaultExecutorSpecName)
{
	defaultExecutorSpecName_ = defaultExecutorSpecName;
	setBodyParameter("DefaultExecutorSpecName", defaultExecutorSpecName);
}

float CreateVirtualClusterForSparkRequest::getMaxMemory()const
{
	return maxMemory_;
}

void CreateVirtualClusterForSparkRequest::setMaxMemory(float maxMemory)
{
	maxMemory_ = maxMemory;
	setBodyParameter("MaxMemory", std::to_string(maxMemory));
}

std::string CreateVirtualClusterForSparkRequest::getSparkModuleReleaseName()const
{
	return sparkModuleReleaseName_;
}

void CreateVirtualClusterForSparkRequest::setSparkModuleReleaseName(const std::string& sparkModuleReleaseName)
{
	sparkModuleReleaseName_ = sparkModuleReleaseName;
	setBodyParameter("SparkModuleReleaseName", sparkModuleReleaseName);
}

std::string CreateVirtualClusterForSparkRequest::getDescription()const
{
	return description_;
}

void CreateVirtualClusterForSparkRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

long CreateVirtualClusterForSparkRequest::getDefaultExecutorNumbers()const
{
	return defaultExecutorNumbers_;
}

void CreateVirtualClusterForSparkRequest::setDefaultExecutorNumbers(long defaultExecutorNumbers)
{
	defaultExecutorNumbers_ = defaultExecutorNumbers;
	setBodyParameter("DefaultExecutorNumbers", std::to_string(defaultExecutorNumbers));
}

float CreateVirtualClusterForSparkRequest::getMaxCpu()const
{
	return maxCpu_;
}

void CreateVirtualClusterForSparkRequest::setMaxCpu(float maxCpu)
{
	maxCpu_ = maxCpu;
	setBodyParameter("MaxCpu", std::to_string(maxCpu));
}

std::string CreateVirtualClusterForSparkRequest::getName()const
{
	return name_;
}

void CreateVirtualClusterForSparkRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateVirtualClusterForSparkRequest::getDefaultDriverSpecName()const
{
	return defaultDriverSpecName_;
}

void CreateVirtualClusterForSparkRequest::setDefaultDriverSpecName(const std::string& defaultDriverSpecName)
{
	defaultDriverSpecName_ = defaultDriverSpecName;
	setBodyParameter("DefaultDriverSpecName", defaultDriverSpecName);
}

