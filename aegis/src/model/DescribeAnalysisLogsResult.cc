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

#include <alibabacloud/aegis/model/DescribeAnalysisLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAnalysisLogsResult::DescribeAnalysisLogsResult() :
	ServiceResult()
{}

DescribeAnalysisLogsResult::DescribeAnalysisLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAnalysisLogsResult::~DescribeAnalysisLogsResult()
{}

void DescribeAnalysisLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto logsNode = value["Logs"];
	if(!logsNode["ProcessedRow"].isNull())
		logs_.processedRow = std::stoi(logsNode["ProcessedRow"].asString());
	if(!logsNode["WhereQuery"].isNull())
		logs_.whereQuery = logsNode["WhereQuery"].asString();
	if(!logsNode["AggQuery"].isNull())
		logs_.aggQuery = logsNode["AggQuery"].asString();
	if(!logsNode["MLimited"].isNull())
		logs_.mLimited = std::stoi(logsNode["MLimited"].asString());
	if(!logsNode["Terms"].isNull())
		logs_.terms = logsNode["Terms"].asString();
	if(!logsNode["Keys"].isNull())
		logs_.keys = logsNode["Keys"].asString();
	if(!logsNode["Count"].isNull())
		logs_.count = std::stoi(logsNode["Count"].asString());
	if(!logsNode["ElapsedMilliSecond"].isNull())
		logs_.elapsedMilliSecond = std::stoi(logsNode["ElapsedMilliSecond"].asString());
	if(!logsNode["Logs"].isNull())
		logs_.logs = logsNode["Logs"].asString();
	if(!logsNode["MMarker"].isNull())
		logs_.mMarker = logsNode["MMarker"].asString();

}

DescribeAnalysisLogsResult::Logs DescribeAnalysisLogsResult::getLogs()const
{
	return logs_;
}

