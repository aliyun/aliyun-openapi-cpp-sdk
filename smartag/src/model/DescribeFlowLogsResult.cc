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

#include <alibabacloud/smartag/model/DescribeFlowLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

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
	auto allFlowLogs = value["FlowLogs"]["FlowLogSetType"];
	for (auto value : allFlowLogs)
	{
		FlowLogSetType flowLogsObject;
		if(!value["FlowLogId"].isNull())
			flowLogsObject.flowLogId = value["FlowLogId"].asString();
		if(!value["Description"].isNull())
			flowLogsObject.description = value["Description"].asString();
		if(!value["ActiveAging"].isNull())
			flowLogsObject.activeAging = std::stoi(value["ActiveAging"].asString());
		if(!value["InactiveAging"].isNull())
			flowLogsObject.inactiveAging = std::stoi(value["InactiveAging"].asString());
		if(!value["OutputType"].isNull())
			flowLogsObject.outputType = value["OutputType"].asString();
		if(!value["SlsRegionId"].isNull())
			flowLogsObject.slsRegionId = value["SlsRegionId"].asString();
		if(!value["ProjectName"].isNull())
			flowLogsObject.projectName = value["ProjectName"].asString();
		if(!value["LogstoreName"].isNull())
			flowLogsObject.logstoreName = value["LogstoreName"].asString();
		if(!value["NetflowServerIp"].isNull())
			flowLogsObject.netflowServerIp = value["NetflowServerIp"].asString();
		if(!value["NetflowServerPort"].isNull())
			flowLogsObject.netflowServerPort = value["NetflowServerPort"].asString();
		if(!value["NetflowVersion"].isNull())
			flowLogsObject.netflowVersion = value["NetflowVersion"].asString();
		if(!value["Status"].isNull())
			flowLogsObject.status = value["Status"].asString();
		if(!value["Name"].isNull())
			flowLogsObject.name = value["Name"].asString();
		flowLogs_.push_back(flowLogsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeFlowLogsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeFlowLogsResult::FlowLogSetType> DescribeFlowLogsResult::getFlowLogs()const
{
	return flowLogs_;
}

int DescribeFlowLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFlowLogsResult::getPageNumber()const
{
	return pageNumber_;
}

