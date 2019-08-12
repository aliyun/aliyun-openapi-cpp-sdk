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

#include <alibabacloud/emr/model/MetastoreDescribeDataSourceRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDescribeDataSourceRequest;

MetastoreDescribeDataSourceRequest::MetastoreDescribeDataSourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDescribeDataSource")
{}

MetastoreDescribeDataSourceRequest::~MetastoreDescribeDataSourceRequest()
{}

long MetastoreDescribeDataSourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDescribeDataSourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MetastoreDescribeDataSourceRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDescribeDataSourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetastoreDescribeDataSourceRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void MetastoreDescribeDataSourceRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string MetastoreDescribeDataSourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDescribeDataSourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

