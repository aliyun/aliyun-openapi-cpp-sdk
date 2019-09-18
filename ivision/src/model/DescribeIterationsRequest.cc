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

#include <alibabacloud/ivision/model/DescribeIterationsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeIterationsRequest;

DescribeIterationsRequest::DescribeIterationsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeIterations")
{}

DescribeIterationsRequest::~DescribeIterationsRequest()
{}

std::string DescribeIterationsRequest::getThreshold()const
{
	return threshold_;
}

void DescribeIterationsRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

std::string DescribeIterationsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeIterationsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeIterationsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeIterationsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeIterationsRequest::getIterationIds()const
{
	return iterationIds_;
}

void DescribeIterationsRequest::setIterationIds(const std::string& iterationIds)
{
	iterationIds_ = iterationIds;
	setCoreParameter("IterationIds", iterationIds);
}

long DescribeIterationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIterationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeIterationsRequest::getStatus()const
{
	return status_;
}

void DescribeIterationsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

