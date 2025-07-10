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
	auto allFlowLogsNode = value["FlowLogs"]["FlowLog"];
	for (auto valueFlowLogsFlowLog : allFlowLogsNode)
	{
		FlowLog flowLogsObject;
		if(!valueFlowLogsFlowLog["Status"].isNull())
			flowLogsObject.status = valueFlowLogsFlowLog["Status"].asString();
		if(!valueFlowLogsFlowLog["CreationTime"].isNull())
			flowLogsObject.creationTime = valueFlowLogsFlowLog["CreationTime"].asString();
		if(!valueFlowLogsFlowLog["FlowLogName"].isNull())
			flowLogsObject.flowLogName = valueFlowLogsFlowLog["FlowLogName"].asString();
		if(!valueFlowLogsFlowLog["TrafficType"].isNull())
			flowLogsObject.trafficType = valueFlowLogsFlowLog["TrafficType"].asString();
		if(!valueFlowLogsFlowLog["ResourceType"].isNull())
			flowLogsObject.resourceType = valueFlowLogsFlowLog["ResourceType"].asString();
		if(!valueFlowLogsFlowLog["Description"].isNull())
			flowLogsObject.description = valueFlowLogsFlowLog["Description"].asString();
		if(!valueFlowLogsFlowLog["ProjectName"].isNull())
			flowLogsObject.projectName = valueFlowLogsFlowLog["ProjectName"].asString();
		if(!valueFlowLogsFlowLog["LogStoreName"].isNull())
			flowLogsObject.logStoreName = valueFlowLogsFlowLog["LogStoreName"].asString();
		if(!valueFlowLogsFlowLog["ResourceId"].isNull())
			flowLogsObject.resourceId = valueFlowLogsFlowLog["ResourceId"].asString();
		if(!valueFlowLogsFlowLog["RegionId"].isNull())
			flowLogsObject.regionId = valueFlowLogsFlowLog["RegionId"].asString();
		if(!valueFlowLogsFlowLog["FlowLogId"].isNull())
			flowLogsObject.flowLogId = valueFlowLogsFlowLog["FlowLogId"].asString();
		if(!valueFlowLogsFlowLog["BusinessStatus"].isNull())
			flowLogsObject.businessStatus = valueFlowLogsFlowLog["BusinessStatus"].asString();
		if(!valueFlowLogsFlowLog["AggregationInterval"].isNull())
			flowLogsObject.aggregationInterval = std::stoi(valueFlowLogsFlowLog["AggregationInterval"].asString());
		if(!valueFlowLogsFlowLog["ServiceType"].isNull())
			flowLogsObject.serviceType = valueFlowLogsFlowLog["ServiceType"].asString();
		if(!valueFlowLogsFlowLog["ResourceGroupId"].isNull())
			flowLogsObject.resourceGroupId = valueFlowLogsFlowLog["ResourceGroupId"].asString();
		if(!valueFlowLogsFlowLog["FlowLogDeliverStatus"].isNull())
			flowLogsObject.flowLogDeliverStatus = valueFlowLogsFlowLog["FlowLogDeliverStatus"].asString();
		if(!valueFlowLogsFlowLog["FlowLogDeliverErrorMessage"].isNull())
			flowLogsObject.flowLogDeliverErrorMessage = valueFlowLogsFlowLog["FlowLogDeliverErrorMessage"].asString();
		if(!valueFlowLogsFlowLog["IpVersion"].isNull())
			flowLogsObject.ipVersion = valueFlowLogsFlowLog["IpVersion"].asString();
		if(!valueFlowLogsFlowLog["TrafficAnalyzerId"].isNull())
			flowLogsObject.trafficAnalyzerId = valueFlowLogsFlowLog["TrafficAnalyzerId"].asString();
		if(!valueFlowLogsFlowLog["EnableTrafficAnalyze"].isNull())
			flowLogsObject.enableTrafficAnalyze = valueFlowLogsFlowLog["EnableTrafficAnalyze"].asString() == "true";
		if(!valueFlowLogsFlowLog["EnableLogDelivery"].isNull())
			flowLogsObject.enableLogDelivery = valueFlowLogsFlowLog["EnableLogDelivery"].asString() == "true";
		auto allTagsNode = valueFlowLogsFlowLog["Tags"]["Tag"];
		for (auto valueFlowLogsFlowLogTagsTag : allTagsNode)
		{
			FlowLog::Tag tagsObject;
			if(!valueFlowLogsFlowLogTagsTag["Key"].isNull())
				tagsObject.key = valueFlowLogsFlowLogTagsTag["Key"].asString();
			if(!valueFlowLogsFlowLogTagsTag["Value"].isNull())
				tagsObject.value = valueFlowLogsFlowLogTagsTag["Value"].asString();
			flowLogsObject.tags.push_back(tagsObject);
		}
		auto allTrafficPath = value["TrafficPath"]["TrafficPathList"];
		for (auto value : allTrafficPath)
			flowLogsObject.trafficPath.push_back(value.asString());
		flowLogs_.push_back(flowLogsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

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

