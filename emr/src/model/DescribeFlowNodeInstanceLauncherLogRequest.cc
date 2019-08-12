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

#include <alibabacloud/emr/model/DescribeFlowNodeInstanceLauncherLogRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowNodeInstanceLauncherLogRequest;

DescribeFlowNodeInstanceLauncherLogRequest::DescribeFlowNodeInstanceLauncherLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowNodeInstanceLauncherLog")
{}

DescribeFlowNodeInstanceLauncherLogRequest::~DescribeFlowNodeInstanceLauncherLogRequest()
{}

int DescribeFlowNodeInstanceLauncherLogRequest::getOffset()const
{
	return offset_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setOffset(int offset)
{
	offset_ = offset;
	setCoreParameter("Offset", std::to_string(offset));
}

std::string DescribeFlowNodeInstanceLauncherLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeFlowNodeInstanceLauncherLogRequest::getStart()const
{
	return start_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setStart(int start)
{
	start_ = start;
	setCoreParameter("Start", std::to_string(start));
}

int DescribeFlowNodeInstanceLauncherLogRequest::getLength()const
{
	return length_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

long DescribeFlowNodeInstanceLauncherLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long DescribeFlowNodeInstanceLauncherLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int DescribeFlowNodeInstanceLauncherLogRequest::getLines()const
{
	return lines_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setLines(int lines)
{
	lines_ = lines;
	setCoreParameter("Lines", std::to_string(lines));
}

bool DescribeFlowNodeInstanceLauncherLogRequest::getReverse()const
{
	return reverse_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setCoreParameter("Reverse", reverse ? "true" : "false");
}

std::string DescribeFlowNodeInstanceLauncherLogRequest::getNodeInstanceId()const
{
	return nodeInstanceId_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setNodeInstanceId(const std::string& nodeInstanceId)
{
	nodeInstanceId_ = nodeInstanceId;
	setCoreParameter("NodeInstanceId", nodeInstanceId);
}

std::string DescribeFlowNodeInstanceLauncherLogRequest::getProjectId()const
{
	return projectId_;
}

void DescribeFlowNodeInstanceLauncherLogRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

