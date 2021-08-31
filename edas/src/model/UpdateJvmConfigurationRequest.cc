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

#include <alibabacloud/edas/model/UpdateJvmConfigurationRequest.h>

using AlibabaCloud::Edas::Model::UpdateJvmConfigurationRequest;

UpdateJvmConfigurationRequest::UpdateJvmConfigurationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/app_jvm_config");
	setMethod(HttpRequest::Method::Post);
}

UpdateJvmConfigurationRequest::~UpdateJvmConfigurationRequest()
{}

int UpdateJvmConfigurationRequest::getMinHeapSize()const
{
	return minHeapSize_;
}

void UpdateJvmConfigurationRequest::setMinHeapSize(int minHeapSize)
{
	minHeapSize_ = minHeapSize;
	setParameter("MinHeapSize", std::to_string(minHeapSize));
}

std::string UpdateJvmConfigurationRequest::getAppId()const
{
	return appId_;
}

void UpdateJvmConfigurationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateJvmConfigurationRequest::getGroupId()const
{
	return groupId_;
}

void UpdateJvmConfigurationRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string UpdateJvmConfigurationRequest::getOptions()const
{
	return options_;
}

void UpdateJvmConfigurationRequest::setOptions(const std::string& options)
{
	options_ = options;
	setParameter("Options", options);
}

int UpdateJvmConfigurationRequest::getMaxPermSize()const
{
	return maxPermSize_;
}

void UpdateJvmConfigurationRequest::setMaxPermSize(int maxPermSize)
{
	maxPermSize_ = maxPermSize;
	setParameter("MaxPermSize", std::to_string(maxPermSize));
}

int UpdateJvmConfigurationRequest::getMaxHeapSize()const
{
	return maxHeapSize_;
}

void UpdateJvmConfigurationRequest::setMaxHeapSize(int maxHeapSize)
{
	maxHeapSize_ = maxHeapSize;
	setParameter("MaxHeapSize", std::to_string(maxHeapSize));
}

