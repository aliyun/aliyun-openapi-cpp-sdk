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

#include <alibabacloud/ecd/model/DescribeFlowStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeFlowStatisticResult::DescribeFlowStatisticResult() :
	ServiceResult()
{}

DescribeFlowStatisticResult::DescribeFlowStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowStatisticResult::~DescribeFlowStatisticResult()
{}

void DescribeFlowStatisticResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDesktopFlowStatisticNode = value["DesktopFlowStatistic"]["FlowStatistic"];
	for (auto valueDesktopFlowStatisticFlowStatistic : allDesktopFlowStatisticNode)
	{
		FlowStatistic desktopFlowStatisticObject;
		if(!valueDesktopFlowStatisticFlowStatistic["DesktopName"].isNull())
			desktopFlowStatisticObject.desktopName = valueDesktopFlowStatisticFlowStatistic["DesktopName"].asString();
		if(!valueDesktopFlowStatisticFlowStatistic["DesktopId"].isNull())
			desktopFlowStatisticObject.desktopId = valueDesktopFlowStatisticFlowStatistic["DesktopId"].asString();
		if(!valueDesktopFlowStatisticFlowStatistic["FlowRank"].isNull())
			desktopFlowStatisticObject.flowRank = std::stoi(valueDesktopFlowStatisticFlowStatistic["FlowRank"].asString());
		if(!valueDesktopFlowStatisticFlowStatistic["FlowIn"].isNull())
			desktopFlowStatisticObject.flowIn = valueDesktopFlowStatisticFlowStatistic["FlowIn"].asString();
		desktopFlowStatistic_.push_back(desktopFlowStatisticObject);
	}
	if(!value["DesktopCount"].isNull())
		desktopCount_ = std::stoi(value["DesktopCount"].asString());

}

int DescribeFlowStatisticResult::getDesktopCount()const
{
	return desktopCount_;
}

std::vector<DescribeFlowStatisticResult::FlowStatistic> DescribeFlowStatisticResult::getDesktopFlowStatistic()const
{
	return desktopFlowStatistic_;
}

