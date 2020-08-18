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

#include <alibabacloud/hbase/model/UpgradeMultiZoneClusterRequest.h>

using AlibabaCloud::HBase::Model::UpgradeMultiZoneClusterRequest;

UpgradeMultiZoneClusterRequest::UpgradeMultiZoneClusterRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "UpgradeMultiZoneCluster")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeMultiZoneClusterRequest::~UpgradeMultiZoneClusterRequest()
{}

std::string UpgradeMultiZoneClusterRequest::getRunMode()const
{
	return runMode_;
}

void UpgradeMultiZoneClusterRequest::setRunMode(const std::string& runMode)
{
	runMode_ = runMode;
	setParameter("RunMode", runMode);
}

std::string UpgradeMultiZoneClusterRequest::getComponents()const
{
	return components_;
}

void UpgradeMultiZoneClusterRequest::setComponents(const std::string& components)
{
	components_ = components;
	setParameter("Components", components);
}

std::string UpgradeMultiZoneClusterRequest::getUpgradeInsName()const
{
	return upgradeInsName_;
}

void UpgradeMultiZoneClusterRequest::setUpgradeInsName(const std::string& upgradeInsName)
{
	upgradeInsName_ = upgradeInsName;
	setParameter("UpgradeInsName", upgradeInsName);
}

std::string UpgradeMultiZoneClusterRequest::getRestartComponents()const
{
	return restartComponents_;
}

void UpgradeMultiZoneClusterRequest::setRestartComponents(const std::string& restartComponents)
{
	restartComponents_ = restartComponents;
	setParameter("RestartComponents", restartComponents);
}

std::string UpgradeMultiZoneClusterRequest::getClusterId()const
{
	return clusterId_;
}

void UpgradeMultiZoneClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpgradeMultiZoneClusterRequest::getVersions()const
{
	return versions_;
}

void UpgradeMultiZoneClusterRequest::setVersions(const std::string& versions)
{
	versions_ = versions;
	setParameter("Versions", versions);
}

