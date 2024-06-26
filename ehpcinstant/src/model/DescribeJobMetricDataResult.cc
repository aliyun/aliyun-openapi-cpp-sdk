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

#include <alibabacloud/ehpcinstant/model/DescribeJobMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EhpcInstant;
using namespace AlibabaCloud::EhpcInstant::Model;

DescribeJobMetricDataResult::DescribeJobMetricDataResult() :
	ServiceResult()
{}

DescribeJobMetricDataResult::DescribeJobMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobMetricDataResult::~DescribeJobMetricDataResult()
{}

void DescribeJobMetricDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Period"].isNull())
		period_ = std::stoi(value["Period"].asString());
	if(!value["DataPoints"].isNull())
		dataPoints_ = value["DataPoints"].asString();

}

int DescribeJobMetricDataResult::getPeriod()const
{
	return period_;
}

std::string DescribeJobMetricDataResult::getDataPoints()const
{
	return dataPoints_;
}

