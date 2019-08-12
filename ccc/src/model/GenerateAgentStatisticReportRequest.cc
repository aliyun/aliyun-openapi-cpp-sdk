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

#include <alibabacloud/ccc/model/GenerateAgentStatisticReportRequest.h>

using AlibabaCloud::CCC::Model::GenerateAgentStatisticReportRequest;

GenerateAgentStatisticReportRequest::GenerateAgentStatisticReportRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GenerateAgentStatisticReport")
{}

GenerateAgentStatisticReportRequest::~GenerateAgentStatisticReportRequest()
{}

std::string GenerateAgentStatisticReportRequest::getAgentId()const
{
	return agentId_;
}

void GenerateAgentStatisticReportRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

std::string GenerateAgentStatisticReportRequest::getInstanceId()const
{
	return instanceId_;
}

void GenerateAgentStatisticReportRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GenerateAgentStatisticReportRequest::getEndDate()const
{
	return endDate_;
}

void GenerateAgentStatisticReportRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

int GenerateAgentStatisticReportRequest::getPageSize()const
{
	return pageSize_;
}

void GenerateAgentStatisticReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string GenerateAgentStatisticReportRequest::getStartDate()const
{
	return startDate_;
}

void GenerateAgentStatisticReportRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

int GenerateAgentStatisticReportRequest::getPageNumber()const
{
	return pageNumber_;
}

void GenerateAgentStatisticReportRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string GenerateAgentStatisticReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GenerateAgentStatisticReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

