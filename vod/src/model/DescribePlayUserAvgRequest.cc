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

#include <alibabacloud/vod/model/DescribePlayUserAvgRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayUserAvgRequest;

DescribePlayUserAvgRequest::DescribePlayUserAvgRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribePlayUserAvg")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePlayUserAvgRequest::~DescribePlayUserAvgRequest()
{}

std::string DescribePlayUserAvgRequest::getStartTime()const
{
	return startTime_;
}

void DescribePlayUserAvgRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribePlayUserAvgRequest::getEndTime()const
{
	return endTime_;
}

void DescribePlayUserAvgRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribePlayUserAvgRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePlayUserAvgRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

