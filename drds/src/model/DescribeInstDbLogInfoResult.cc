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

#include <alibabacloud/drds/model/DescribeInstDbLogInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeInstDbLogInfoResult::DescribeInstDbLogInfoResult() :
	ServiceResult()
{}

DescribeInstDbLogInfoResult::DescribeInstDbLogInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstDbLogInfoResult::~DescribeInstDbLogInfoResult()
{}

void DescribeInstDbLogInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto logTimeRangeNode = value["LogTimeRange"];
	if(!logTimeRangeNode["SupportOldestTime"].isNull())
		logTimeRange_.supportOldestTime = std::stol(logTimeRangeNode["SupportOldestTime"].asString());
	if(!logTimeRangeNode["SupportLatestTime"].isNull())
		logTimeRange_.supportLatestTime = std::stol(logTimeRangeNode["SupportLatestTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeInstDbLogInfoResult::LogTimeRange DescribeInstDbLogInfoResult::getLogTimeRange()const
{
	return logTimeRange_;
}

bool DescribeInstDbLogInfoResult::getSuccess()const
{
	return success_;
}

