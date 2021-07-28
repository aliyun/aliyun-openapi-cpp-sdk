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

#include <alibabacloud/retailcloud/model/DescribeAppMonitorMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeAppMonitorMetricResult::DescribeAppMonitorMetricResult() :
	ServiceResult()
{}

DescribeAppMonitorMetricResult::DescribeAppMonitorMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppMonitorMetricResult::~DescribeAppMonitorMetricResult()
{}

void DescribeAppMonitorMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["MetricItem"];
	for (auto valueResultMetricItem : allResultNode)
	{
		MetricItem resultObject;
		if(!valueResultMetricItem["Name"].isNull())
			resultObject.name = valueResultMetricItem["Name"].asString();
		auto allData = value["Data"]["Double"];
		for (auto value : allData)
			resultObject.data.push_back(value.asString());
		auto allCategories = value["Categories"]["String"];
		for (auto value : allCategories)
			resultObject.categories.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAppMonitorMetricResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeAppMonitorMetricResult::getCode()const
{
	return code_;
}

bool DescribeAppMonitorMetricResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeAppMonitorMetricResult::MetricItem> DescribeAppMonitorMetricResult::getResult()const
{
	return result_;
}

