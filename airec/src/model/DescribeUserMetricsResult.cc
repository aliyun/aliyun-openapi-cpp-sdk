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

#include <alibabacloud/airec/model/DescribeUserMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeUserMetricsResult::DescribeUserMetricsResult() :
	ServiceResult()
{}

DescribeUserMetricsResult::DescribeUserMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserMetricsResult::~DescribeUserMetricsResult()
{}

void DescribeUserMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["SceneId"].isNull())
			resultObject.sceneId = valueResultResultItem["SceneId"].asString();
		auto allDataPointsNode = allResultNode["DataPoints"]["DataPointsItem"];
		for (auto allResultNodeDataPointsDataPointsItem : allDataPointsNode)
		{
			ResultItem::DataPointsItem dataPointsObject;
			if(!allResultNodeDataPointsDataPointsItem["Val"].isNull())
				dataPointsObject.val = std::stof(allResultNodeDataPointsDataPointsItem["Val"].asString());
			if(!allResultNodeDataPointsDataPointsItem["StartTime"].isNull())
				dataPointsObject.startTime = std::stol(allResultNodeDataPointsDataPointsItem["StartTime"].asString());
			if(!allResultNodeDataPointsDataPointsItem["EndTime"].isNull())
				dataPointsObject.endTime = std::stol(allResultNodeDataPointsDataPointsItem["EndTime"].asString());
			resultObject.dataPoints.push_back(dataPointsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeUserMetricsResult::getMessage()const
{
	return message_;
}

std::string DescribeUserMetricsResult::getCode()const
{
	return code_;
}

std::vector<DescribeUserMetricsResult::ResultItem> DescribeUserMetricsResult::getResult()const
{
	return result_;
}

