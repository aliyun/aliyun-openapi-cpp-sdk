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

#include <alibabacloud/rds/model/DescribeRCMetricListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCMetricListResult::DescribeRCMetricListResult() :
	ServiceResult()
{}

DescribeRCMetricListResult::DescribeRCMetricListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCMetricListResult::~DescribeRCMetricListResult()
{}

void DescribeRCMetricListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Datapoints"].isNull())
		datapoints_ = value["Datapoints"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Period"].isNull())
		period_ = value["Period"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeRCMetricListResult::getMessage()const
{
	return message_;
}

std::string DescribeRCMetricListResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeRCMetricListResult::getPeriod()const
{
	return period_;
}

std::string DescribeRCMetricListResult::getDatapoints()const
{
	return datapoints_;
}

std::string DescribeRCMetricListResult::getCode()const
{
	return code_;
}

bool DescribeRCMetricListResult::getSuccess()const
{
	return success_;
}

