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

#include <alibabacloud/edas/model/ListApplicationRequest.h>

using AlibabaCloud::Edas::Model::ListApplicationRequest;

ListApplicationRequest::ListApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/app_list");
	setMethod(HttpRequest::Method::Post);
}

ListApplicationRequest::~ListApplicationRequest()
{}

std::string ListApplicationRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListApplicationRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListApplicationRequest::getAppName()const
{
	return appName_;
}

void ListApplicationRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string ListApplicationRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void ListApplicationRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string ListApplicationRequest::getClusterId()const
{
	return clusterId_;
}

void ListApplicationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListApplicationRequest::getLogicalRegionIdFilter()const
{
	return logicalRegionIdFilter_;
}

void ListApplicationRequest::setLogicalRegionIdFilter(const std::string& logicalRegionIdFilter)
{
	logicalRegionIdFilter_ = logicalRegionIdFilter;
	setParameter("LogicalRegionIdFilter", logicalRegionIdFilter);
}

