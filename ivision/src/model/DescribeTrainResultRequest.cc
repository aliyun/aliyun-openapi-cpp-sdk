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

#include <alibabacloud/ivision/model/DescribeTrainResultRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTrainResultRequest;

DescribeTrainResultRequest::DescribeTrainResultRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTrainResult")
{}

DescribeTrainResultRequest::~DescribeTrainResultRequest()
{}

std::string DescribeTrainResultRequest::getThreshold()const
{
	return threshold_;
}

void DescribeTrainResultRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

std::string DescribeTrainResultRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTrainResultRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeTrainResultRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTrainResultRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribeTrainResultRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTrainResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTrainResultRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTrainResultRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

