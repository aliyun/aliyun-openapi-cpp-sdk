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

#include <alibabacloud/hbase/model/DescribeServerlessClusterRequest.h>

using AlibabaCloud::HBase::Model::DescribeServerlessClusterRequest;

DescribeServerlessClusterRequest::DescribeServerlessClusterRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DescribeServerlessCluster")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeServerlessClusterRequest::~DescribeServerlessClusterRequest()
{}

std::string DescribeServerlessClusterRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeServerlessClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeServerlessClusterRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeServerlessClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

