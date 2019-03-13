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

#include <alibabacloud/vpc/model/DescribeFlowLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeFlowLogsResult::DescribeFlowLogsResult() :
	ServiceResult()
{}

DescribeFlowLogsResult::DescribeFlowLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowLogsResult::~DescribeFlowLogsResult()
{}

void DescribeFlowLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFlowLogs = value["FlowLogs"]["FlowLog"];
	for (auto value : allFlowLogs)
	{
		FlowLog flowLogsObject;
		if(!value["FlowLogId"].isNull())
			flowLogsObject.flowLogId = value["FlowLogId"].asString();
		if(!value["FlowLogName"].isNull())
			flowLogsObject.flowLogName = value["FlowLogName"].asString();
		if(!value["Description"].isNull())
			flowLogsObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			flowLogsObject.creationTime = value["CreationTime"].asString();
		if(!value["ResourceType"].isNull())
			flowLogsObject.resourceType = value["ResourceType"].asString();
		if(!value["ResourceId"].isNull())
			flowLogsObject.resourceId = value["ResourceId"].asString();
		if(!value["ProjectName"].isNull())
			flowLogsObject.projectName = value["ProjectName"].asString();
		if(!value["LogStoreName"].isNull())
			flowLogsObject.logStoreName = value["LogStoreName"].asString();
		if(!value["Status"].isNull())
			flowLogsObject.status = value["Status"].asString();
		if(!value["TrafficType"].isNull())
			flowLogsObject.trafficType = value["TrafficType"].asString();
		if(!value["RegionId"].isNull())
			flowLogsObject.regionId = value["RegionId"].asString();
		flowLogs_.push_back(flowLogsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();

}

std::string DescribeFlowLogsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeFlowLogsResult::FlowLog> DescribeFlowLogsResult::getFlowLogs()const
{
	return flowLogs_;
}

std::string DescribeFlowLogsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeFlowLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeFlowLogsResult::getSuccess()const
{
	return success_;
}

