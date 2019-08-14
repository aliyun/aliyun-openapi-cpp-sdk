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

#include <alibabacloud/emr/model/MetastoreListDataSourceRequest.h>

using AlibabaCloud::Emr::Model::MetastoreListDataSourceRequest;

MetastoreListDataSourceRequest::MetastoreListDataSourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreListDataSource")
{}

MetastoreListDataSourceRequest::~MetastoreListDataSourceRequest()
{}

long MetastoreListDataSourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreListDataSourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreListDataSourceRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListDataSourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool MetastoreListDataSourceRequest::getClusterReleased()const
{
	return clusterReleased_;
}

void MetastoreListDataSourceRequest::setClusterReleased(bool clusterReleased)
{
	clusterReleased_ = clusterReleased;
	setCoreParameter("ClusterReleased", clusterReleased ? "true" : "false");
}

int MetastoreListDataSourceRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListDataSourceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string MetastoreListDataSourceRequest::getSourceType()const
{
	return sourceType_;
}

void MetastoreListDataSourceRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setCoreParameter("SourceType", sourceType);
}

std::string MetastoreListDataSourceRequest::getDataSourceName()const
{
	return dataSourceName_;
}

void MetastoreListDataSourceRequest::setDataSourceName(const std::string& dataSourceName)
{
	dataSourceName_ = dataSourceName;
	setCoreParameter("DataSourceName", dataSourceName);
}

int MetastoreListDataSourceRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListDataSourceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string MetastoreListDataSourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListDataSourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

