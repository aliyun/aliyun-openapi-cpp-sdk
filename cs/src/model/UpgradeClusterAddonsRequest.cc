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

#include <alibabacloud/cs/model/UpgradeClusterAddonsRequest.h>

using AlibabaCloud::CS::Model::UpgradeClusterAddonsRequest;

UpgradeClusterAddonsRequest::UpgradeClusterAddonsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/components/upgrade");
	setMethod(HttpRequest::Method::Post);
}

UpgradeClusterAddonsRequest::~UpgradeClusterAddonsRequest()
{}

std::string UpgradeClusterAddonsRequest::getComponent_name()const
{
	return component_name_;
}

void UpgradeClusterAddonsRequest::setComponent_name(const std::string& component_name)
{
	component_name_ = component_name;
	setBodyParameter("Component_name", component_name);
}

std::string UpgradeClusterAddonsRequest::getClusterId()const
{
	return clusterId_;
}

void UpgradeClusterAddonsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpgradeClusterAddonsRequest::getVersion()const
{
	return version_;
}

void UpgradeClusterAddonsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setBodyParameter("Version", version);
}

