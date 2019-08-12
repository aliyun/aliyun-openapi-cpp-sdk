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

#include <alibabacloud/emr/model/DescribeClusterStatisticsRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterStatisticsRequest;

DescribeClusterStatisticsRequest::DescribeClusterStatisticsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterStatistics")
{}

DescribeClusterStatisticsRequest::~DescribeClusterStatisticsRequest()
{}

long DescribeClusterStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeClusterStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeClusterStatisticsRequest::getStrategy()const
{
	return strategy_;
}

void DescribeClusterStatisticsRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setCoreParameter("Strategy", strategy);
}

std::string DescribeClusterStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

