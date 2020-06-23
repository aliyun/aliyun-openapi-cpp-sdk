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

#include <alibabacloud/cs/model/InstallClusterAddonsRequest.h>

using AlibabaCloud::CS::Model::InstallClusterAddonsRequest;

InstallClusterAddonsRequest::InstallClusterAddonsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/components/install");
	setMethod(HttpRequest::Method::Post);
}

InstallClusterAddonsRequest::~InstallClusterAddonsRequest()
{}

std::string InstallClusterAddonsRequest::getName()const
{
	return name_;
}

void InstallClusterAddonsRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

bool InstallClusterAddonsRequest::getDisabled()const
{
	return disabled_;
}

void InstallClusterAddonsRequest::setDisabled(bool disabled)
{
	disabled_ = disabled;
	setBodyParameter("Disabled", disabled ? "true" : "false");
}

std::string InstallClusterAddonsRequest::getClusterId()const
{
	return clusterId_;
}

void InstallClusterAddonsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string InstallClusterAddonsRequest::getVersion()const
{
	return version_;
}

void InstallClusterAddonsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setBodyParameter("Version", version);
}

std::string InstallClusterAddonsRequest::getConfig()const
{
	return config_;
}

void InstallClusterAddonsRequest::setConfig(const std::string& config)
{
	config_ = config;
	setBodyParameter("Config", config);
}

std::string InstallClusterAddonsRequest::getRequired()const
{
	return required_;
}

void InstallClusterAddonsRequest::setRequired(const std::string& required)
{
	required_ = required;
	setBodyParameter("Required", required);
}

