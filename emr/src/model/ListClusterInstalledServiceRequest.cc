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

#include <alibabacloud/emr/model/ListClusterInstalledServiceRequest.h>

using AlibabaCloud::Emr::Model::ListClusterInstalledServiceRequest;

ListClusterInstalledServiceRequest::ListClusterInstalledServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterInstalledService")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterInstalledServiceRequest::~ListClusterInstalledServiceRequest()
{}

long ListClusterInstalledServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterInstalledServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterInstalledServiceRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterInstalledServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListClusterInstalledServiceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterInstalledServiceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterInstalledServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterInstalledServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterInstalledServiceRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterInstalledServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterInstalledServiceRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterInstalledServiceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

