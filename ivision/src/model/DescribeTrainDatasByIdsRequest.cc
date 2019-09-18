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

#include <alibabacloud/ivision/model/DescribeTrainDatasByIdsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTrainDatasByIdsRequest;

DescribeTrainDatasByIdsRequest::DescribeTrainDatasByIdsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTrainDatasByIds")
{}

DescribeTrainDatasByIdsRequest::~DescribeTrainDatasByIdsRequest()
{}

std::string DescribeTrainDatasByIdsRequest::getDataIds()const
{
	return dataIds_;
}

void DescribeTrainDatasByIdsRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string DescribeTrainDatasByIdsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTrainDatasByIdsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeTrainDatasByIdsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTrainDatasByIdsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribeTrainDatasByIdsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTrainDatasByIdsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTrainDatasByIdsRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTrainDatasByIdsRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

