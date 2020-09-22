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

#include <alibabacloud/vs/model/DescribeStreamVodListRequest.h>

using AlibabaCloud::Vs::Model::DescribeStreamVodListRequest;

DescribeStreamVodListRequest::DescribeStreamVodListRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeStreamVodList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStreamVodListRequest::~DescribeStreamVodListRequest()
{}

long DescribeStreamVodListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeStreamVodListRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeStreamVodListRequest::getId()const
{
	return id_;
}

void DescribeStreamVodListRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeStreamVodListRequest::getShowLog()const
{
	return showLog_;
}

void DescribeStreamVodListRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeStreamVodListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeStreamVodListRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeStreamVodListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStreamVodListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

