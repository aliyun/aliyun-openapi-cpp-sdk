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

#include <alibabacloud/edas/model/InsertApplicationRequest.h>

using AlibabaCloud::Edas::Model::InsertApplicationRequest;

InsertApplicationRequest::InsertApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/co_create_app");
	setMethod(HttpRequest::Method::Post);
}

InsertApplicationRequest::~InsertApplicationRequest()
{}

std::string InsertApplicationRequest::getWebContainer()const
{
	return webContainer_;
}

void InsertApplicationRequest::setWebContainer(const std::string& webContainer)
{
	webContainer_ = webContainer;
	setParameter("WebContainer", webContainer);
}

std::string InsertApplicationRequest::getEcuInfo()const
{
	return ecuInfo_;
}

void InsertApplicationRequest::setEcuInfo(const std::string& ecuInfo)
{
	ecuInfo_ = ecuInfo;
	setParameter("EcuInfo", ecuInfo);
}

int InsertApplicationRequest::getMinHeapSize()const
{
	return minHeapSize_;
}

void InsertApplicationRequest::setMinHeapSize(int minHeapSize)
{
	minHeapSize_ = minHeapSize;
	setParameter("MinHeapSize", std::to_string(minHeapSize));
}

int InsertApplicationRequest::getBuildPackId()const
{
	return buildPackId_;
}

void InsertApplicationRequest::setBuildPackId(int buildPackId)
{
	buildPackId_ = buildPackId;
	setParameter("BuildPackId", std::to_string(buildPackId));
}

std::string InsertApplicationRequest::getComponentIds()const
{
	return componentIds_;
}

void InsertApplicationRequest::setComponentIds(const std::string& componentIds)
{
	componentIds_ = componentIds;
	setParameter("ComponentIds", componentIds);
}

std::string InsertApplicationRequest::getHealthCheckUrl()const
{
	return healthCheckUrl_;
}

void InsertApplicationRequest::setHealthCheckUrl(const std::string& healthCheckUrl)
{
	healthCheckUrl_ = healthCheckUrl;
	setParameter("HealthCheckUrl", healthCheckUrl);
}

std::string InsertApplicationRequest::getReservedPortStr()const
{
	return reservedPortStr_;
}

void InsertApplicationRequest::setReservedPortStr(const std::string& reservedPortStr)
{
	reservedPortStr_ = reservedPortStr;
	setParameter("ReservedPortStr", reservedPortStr);
}

std::string InsertApplicationRequest::getJvmOptions()const
{
	return jvmOptions_;
}

void InsertApplicationRequest::setJvmOptions(const std::string& jvmOptions)
{
	jvmOptions_ = jvmOptions;
	setParameter("JvmOptions", jvmOptions);
}

std::string InsertApplicationRequest::getDescription()const
{
	return description_;
}

void InsertApplicationRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int InsertApplicationRequest::getCpu()const
{
	return cpu_;
}

void InsertApplicationRequest::setCpu(int cpu)
{
	cpu_ = cpu;
	setParameter("Cpu", std::to_string(cpu));
}

int InsertApplicationRequest::getMaxPermSize()const
{
	return maxPermSize_;
}

void InsertApplicationRequest::setMaxPermSize(int maxPermSize)
{
	maxPermSize_ = maxPermSize;
	setParameter("MaxPermSize", std::to_string(maxPermSize));
}

std::string InsertApplicationRequest::getClusterId()const
{
	return clusterId_;
}

void InsertApplicationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int InsertApplicationRequest::getMaxHeapSize()const
{
	return maxHeapSize_;
}

void InsertApplicationRequest::setMaxHeapSize(int maxHeapSize)
{
	maxHeapSize_ = maxHeapSize;
	setParameter("MaxHeapSize", std::to_string(maxHeapSize));
}

bool InsertApplicationRequest::getEnablePortCheck()const
{
	return enablePortCheck_;
}

void InsertApplicationRequest::setEnablePortCheck(bool enablePortCheck)
{
	enablePortCheck_ = enablePortCheck;
	setParameter("EnablePortCheck", enablePortCheck ? "true" : "false");
}

std::string InsertApplicationRequest::getApplicationName()const
{
	return applicationName_;
}

void InsertApplicationRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

std::string InsertApplicationRequest::getJdk()const
{
	return jdk_;
}

void InsertApplicationRequest::setJdk(const std::string& jdk)
{
	jdk_ = jdk;
	setParameter("Jdk", jdk);
}

int InsertApplicationRequest::getMem()const
{
	return mem_;
}

void InsertApplicationRequest::setMem(int mem)
{
	mem_ = mem;
	setParameter("Mem", std::to_string(mem));
}

std::string InsertApplicationRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void InsertApplicationRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

bool InsertApplicationRequest::getEnableUrlCheck()const
{
	return enableUrlCheck_;
}

void InsertApplicationRequest::setEnableUrlCheck(bool enableUrlCheck)
{
	enableUrlCheck_ = enableUrlCheck;
	setParameter("EnableUrlCheck", enableUrlCheck ? "true" : "false");
}

std::string InsertApplicationRequest::getPackageType()const
{
	return packageType_;
}

void InsertApplicationRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setParameter("PackageType", packageType);
}

std::string InsertApplicationRequest::getHooks()const
{
	return hooks_;
}

void InsertApplicationRequest::setHooks(const std::string& hooks)
{
	hooks_ = hooks;
	setParameter("Hooks", hooks);
}

