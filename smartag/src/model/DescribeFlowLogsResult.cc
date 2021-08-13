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
	auto allFlowLogsNode = value["FlowLogs"]["FlowLogSetType"];
	for (auto valueFlowLogsFlowLogSetType : allFlowLogsNode)
	{
		FlowLogSetType flowLogsObject;
		if(!valueFlowLogsFlowLogSetType["Status"].isNull())
			flowLogsObject.status = valueFlowLogsFlowLogSetType["Status"].asString();
		if(!valueFlowLogsFlowLogSetType["TotalSagNum"].isNull())
			flowLogsObject.totalSagNum = std::stoi(valueFlowLogsFlowLogSetType["TotalSagNum"].asString());
		if(!valueFlowLogsFlowLogSetType["NetflowServerIp"].isNull())
			flowLogsObject.netflowServerIp = valueFlowLogsFlowLogSetType["NetflowServerIp"].asString();
		if(!valueFlowLogsFlowLogSetType["ProjectName"].isNull())
			flowLogsObject.projectName = valueFlowLogsFlowLogSetType["ProjectName"].asString();
		if(!valueFlowLogsFlowLogSetType["SlsRegionId"].isNull())
			flowLogsObject.slsRegionId = valueFlowLogsFlowLogSetType["SlsRegionId"].asString();
		if(!valueFlowLogsFlowLogSetType["ActiveAging"].isNull())
			flowLogsObject.activeAging = std::stoi(valueFlowLogsFlowLogSetType["ActiveAging"].asString());
		if(!valueFlowLogsFlowLogSetType["OutputType"].isNull())
			flowLogsObject.outputType = valueFlowLogsFlowLogSetType["OutputType"].asString();
		if(!valueFlowLogsFlowLogSetType["Description"].isNull())
			flowLogsObject.description = valueFlowLogsFlowLogSetType["Description"].asString();
		if(!valueFlowLogsFlowLogSetType["NetflowVersion"].isNull())
			flowLogsObject.netflowVersion = valueFlowLogsFlowLogSetType["NetflowVersion"].asString();
		if(!valueFlowLogsFlowLogSetType["InactiveAging"].isNull())
			flowLogsObject.inactiveAging = std::stoi(valueFlowLogsFlowLogSetType["InactiveAging"].asString());
		if(!valueFlowLogsFlowLogSetType["NetflowServerPort"].isNull())
			flowLogsObject.netflowServerPort = valueFlowLogsFlowLogSetType["NetflowServerPort"].asString();
		if(!valueFlowLogsFlowLogSetType["Name"].isNull())
			flowLogsObject.name = valueFlowLogsFlowLogSetType["Name"].asString();
		if(!valueFlowLogsFlowLogSetType["FlowLogId"].isNull())
			flowLogsObject.flowLogId = valueFlowLogsFlowLogSetType["FlowLogId"].asString();
		if(!valueFlowLogsFlowLogSetType["LogstoreName"].isNull())
			flowLogsObject.logstoreName = valueFlowLogsFlowLogSetType["LogstoreName"].asString();
		if(!valueFlowLogsFlowLogSetType["ResourceGroupId"].isNull())
			flowLogsObject.resourceGroupId = valueFlowLogsFlowLogSetType["ResourceGroupId"].asString();
		flowLogs_.push_back(flowLogsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

