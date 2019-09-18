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

#include <alibabacloud/cas/model/DescribeSignatureStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeSignatureStatisticsResult::DescribeSignatureStatisticsResult() :
	ServiceResult()
{}

DescribeSignatureStatisticsResult::DescribeSignatureStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignatureStatisticsResult::~DescribeSignatureStatisticsResult()
{}

void DescribeSignatureStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDayDataList = value["DayDataList"]["dayData"];
	for (auto value : allDayDataList)
	{
		DayData dayDataListObject;
		if(!value["Date"].isNull())
			dayDataListObject.date = value["Date"].asString();
		if(!value["UnSignCount"].isNull())
			dayDataListObject.unSignCount = std::stoi(value["UnSignCount"].asString());
		if(!value["SignCount"].isNull())
			dayDataListObject.signCount = std::stoi(value["SignCount"].asString());
		if(!value["FailCount"].isNull())
			dayDataListObject.failCount = std::stoi(value["FailCount"].asString());
		dayDataList_.push_back(dayDataListObject);
	}
	if(!value["UnSignCount"].isNull())
		unSignCount_ = std::stoi(value["UnSignCount"].asString());
	if(!value["SignCount"].isNull())
		signCount_ = std::stoi(value["SignCount"].asString());
	if(!value["FailCount"].isNull())
		failCount_ = std::stoi(value["FailCount"].asString());

}

std::vector<DescribeSignatureStatisticsResult::DayData> DescribeSignatureStatisticsResult::getDayDataList()const
{
	return dayDataList_;
}

int DescribeSignatureStatisticsResult::getSignCount()const
{
	return signCount_;
}

int DescribeSignatureStatisticsResult::getFailCount()const
{
	return failCount_;
}

int DescribeSignatureStatisticsResult::getUnSignCount()const
{
	return unSignCount_;
}

