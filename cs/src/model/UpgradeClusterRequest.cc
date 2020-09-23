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

#include <alibabacloud/cs/model/UpgradeClusterRequest.h>

using AlibabaCloud::CS::Model::UpgradeClusterRequest;

UpgradeClusterRequest::UpgradeClusterRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/api/v2/clusters/[ClusterId]/upgrade");
	setMethod(HttpRequest::Method::Post);
}

UpgradeClusterRequest::~UpgradeClusterRequest()
{}

std::string UpgradeClusterRequest::getComponent_name()const
{
	return component_name_;
}

void UpgradeClusterRequest::setComponent_name(const std::string& component_name)
{
	component_name_ = component_name;
	setBodyParameter("Component_name", component_name);
}

std::string UpgradeClusterRequest::getClusterId()const
{
	return clusterId_;
}

void UpgradeClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpgradeClusterRequest::getVersion()const
{
	return version_;
}

void UpgradeClusterRequest::setVersion(const std::string& version)
{
	version_ = version;
	setBodyParameter("Version", version);
}

std::string UpgradeClusterRequest::getNext_version()const
{
	return next_version_;
}

void UpgradeClusterRequest::setNext_version(const std::string& next_version)
{
	next_version_ = next_version;
	setBodyParameter("Next_version", next_version);
}

