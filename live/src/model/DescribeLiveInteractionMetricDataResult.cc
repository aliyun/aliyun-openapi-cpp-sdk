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

#include <alibabacloud/live/model/DescribeLiveInteractionMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveInteractionMetricDataResult::DescribeLiveInteractionMetricDataResult() :
	ServiceResult()
{}

DescribeLiveInteractionMetricDataResult::DescribeLiveInteractionMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveInteractionMetricDataResult::~DescribeLiveInteractionMetricDataResult()
{}

void DescribeLiveInteractionMetricDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["Data"];
	for (auto valueNodesData : allNodesNode)
	{
		Data nodesObject;
		if(!valueNodesData["Timestamp"].isNull())
			nodesObject.timestamp = valueNodesData["Timestamp"].asString();
		if(!valueNodesData["Value"].isNull())
			nodesObject.value = valueNodesData["Value"].asString();
		nodes_.push_back(nodesObject);
	}
	if(!value["SummaryData"].isNull())
		summaryData_ = value["SummaryData"].asString();

}

std::string DescribeLiveInteractionMetricDataResult::getSummaryData()const
{
	return summaryData_;
}

std::vector<DescribeLiveInteractionMetricDataResult::Data> DescribeLiveInteractionMetricDataResult::getNodes()const
{
	return nodes_;
}

