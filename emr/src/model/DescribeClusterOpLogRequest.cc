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

#include <alibabacloud/emr/model/DescribeClusterOpLogRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterOpLogRequest;

DescribeClusterOpLogRequest::DescribeClusterOpLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterOpLog")
{}

DescribeClusterOpLogRequest::~DescribeClusterOpLogRequest()
{}

long DescribeClusterOpLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterOpLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterOpLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterOpLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeClusterOpLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeClusterOpLogRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string DescribeClusterOpLogRequest::getId()const
{
	return id_;
}

void DescribeClusterOpLogRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

long DescribeClusterOpLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeClusterOpLogRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeClusterOpLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterOpLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

