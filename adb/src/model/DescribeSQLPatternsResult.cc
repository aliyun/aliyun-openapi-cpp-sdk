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

#include <alibabacloud/adb/model/DescribeSQLPatternsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSQLPatternsResult::DescribeSQLPatternsResult() :
	ServiceResult()
{}

DescribeSQLPatternsResult::DescribeSQLPatternsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLPatternsResult::~DescribeSQLPatternsResult()
{}

void DescribeSQLPatternsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPatternDetailsNode = value["PatternDetails"]["patternDetailsItem"];
	for (auto valuePatternDetailspatternDetailsItem : allPatternDetailsNode)
	{
		PatternDetailsItem patternDetailsObject;
		if(!valuePatternDetailspatternDetailsItem["SQLPattern"].isNull())
			patternDetailsObject.sQLPattern = valuePatternDetailspatternDetailsItem["SQLPattern"].asString();
		if(!valuePatternDetailspatternDetailsItem["PatternId"].isNull())
			patternDetailsObject.patternId = valuePatternDetailspatternDetailsItem["PatternId"].asString();
		if(!valuePatternDetailspatternDetailsItem["User"].isNull())
			patternDetailsObject.user = valuePatternDetailspatternDetailsItem["User"].asString();
		if(!valuePatternDetailspatternDetailsItem["AccessIp"].isNull())
			patternDetailsObject.accessIp = valuePatternDetailspatternDetailsItem["AccessIp"].asString();
		if(!valuePatternDetailspatternDetailsItem["Tables"].isNull())
			patternDetailsObject.tables = valuePatternDetailspatternDetailsItem["Tables"].asString();
		if(!valuePatternDetailspatternDetailsItem["PatternCreationTime"].isNull())
			patternDetailsObject.patternCreationTime = valuePatternDetailspatternDetailsItem["PatternCreationTime"].asString();
		if(!valuePatternDetailspatternDetailsItem["AverageQueryTime"].isNull())
			patternDetailsObject.averageQueryTime = valuePatternDetailspatternDetailsItem["AverageQueryTime"].asString();
		if(!valuePatternDetailspatternDetailsItem["MaxQueryTime"].isNull())
			patternDetailsObject.maxQueryTime = std::stol(valuePatternDetailspatternDetailsItem["MaxQueryTime"].asString());
		if(!valuePatternDetailspatternDetailsItem["AverageExecutionTime"].isNull())
			patternDetailsObject.averageExecutionTime = valuePatternDetailspatternDetailsItem["AverageExecutionTime"].asString();
		if(!valuePatternDetailspatternDetailsItem["MaxExecutionTime"].isNull())
			patternDetailsObject.maxExecutionTime = std::stol(valuePatternDetailspatternDetailsItem["MaxExecutionTime"].asString());
		if(!valuePatternDetailspatternDetailsItem["AveragePeakMemory"].isNull())
			patternDetailsObject.averagePeakMemory = valuePatternDetailspatternDetailsItem["AveragePeakMemory"].asString();
		if(!valuePatternDetailspatternDetailsItem["MaxPeakMemory"].isNull())
			patternDetailsObject.maxPeakMemory = std::stol(valuePatternDetailspatternDetailsItem["MaxPeakMemory"].asString());
		if(!valuePatternDetailspatternDetailsItem["AverageScanSize"].isNull())
			patternDetailsObject.averageScanSize = valuePatternDetailspatternDetailsItem["AverageScanSize"].asString();
		if(!valuePatternDetailspatternDetailsItem["MaxScanSize"].isNull())
			patternDetailsObject.maxScanSize = std::stol(valuePatternDetailspatternDetailsItem["MaxScanSize"].asString());
		if(!valuePatternDetailspatternDetailsItem["QueryCount"].isNull())
			patternDetailsObject.queryCount = std::stol(valuePatternDetailspatternDetailsItem["QueryCount"].asString());
		if(!valuePatternDetailspatternDetailsItem["FailedCount"].isNull())
			patternDetailsObject.failedCount = std::stol(valuePatternDetailspatternDetailsItem["FailedCount"].asString());
		if(!valuePatternDetailspatternDetailsItem["Blockable"].isNull())
			patternDetailsObject.blockable = valuePatternDetailspatternDetailsItem["Blockable"].asString() == "true";
		patternDetails_.push_back(patternDetailsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSQLPatternsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSQLPatternsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSQLPatternsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLPatternsResult::PatternDetailsItem> DescribeSQLPatternsResult::getPatternDetails()const
{
	return patternDetails_;
}

