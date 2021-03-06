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
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["sceneId"].isNull())
			resultObject.sceneId = valueresultResultItem["sceneId"].asString();
		auto alldataPointsNode = valueresultResultItem["dataPoints"]["DataPointsItem"];
		for (auto valueresultResultItemdataPointsDataPointsItem : alldataPointsNode)
		{
			ResultItem::DataPointsItem dataPointsObject;
			if(!valueresultResultItemdataPointsDataPointsItem["endTime"].isNull())
				dataPointsObject.endTime = std::stol(valueresultResultItemdataPointsDataPointsItem["endTime"].asString());
			if(!valueresultResultItemdataPointsDataPointsItem["startTime"].isNull())
				dataPointsObject.startTime = std::stol(valueresultResultItemdataPointsDataPointsItem["startTime"].asString());
			if(!valueresultResultItemdataPointsDataPointsItem["val"].isNull())
				dataPointsObject.val = std::stof(valueresultResultItemdataPointsDataPointsItem["val"].asString());
			resultObject.dataPoints.push_back(dataPointsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<DescribeUserMetricsResult::ResultItem> DescribeUserMetricsResult::getresult()const
{
	return result_;
}

std::string DescribeUserMetricsResult::getMessage()const
{
	return message_;
}

std::string DescribeUserMetricsResult::getRequestId()const
{
	return requestId_;
}

std::string DescribeUserMetricsResult::getCode()const
{
	return code_;
}

