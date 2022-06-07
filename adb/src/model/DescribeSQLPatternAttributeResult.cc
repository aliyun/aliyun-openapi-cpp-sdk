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

#include <alibabacloud/adb/model/DescribeSQLPatternAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSQLPatternAttributeResult::DescribeSQLPatternAttributeResult() :
	ServiceResult()
{}

DescribeSQLPatternAttributeResult::DescribeSQLPatternAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLPatternAttributeResult::~DescribeSQLPatternAttributeResult()
{}

void DescribeSQLPatternAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto patternDetailNode = value["PatternDetail"];
	if(!patternDetailNode["SQLPattern"].isNull())
		patternDetail_.sQLPattern = patternDetailNode["SQLPattern"].asString();
	if(!patternDetailNode["QueryCount"].isNull())
		patternDetail_.queryCount = std::stol(patternDetailNode["QueryCount"].asString());
	if(!patternDetailNode["TotalQueryTime"].isNull())
		patternDetail_.totalQueryTime = patternDetailNode["TotalQueryTime"].asString();
	if(!patternDetailNode["AverageQueryTime"].isNull())
		patternDetail_.averageQueryTime = patternDetailNode["AverageQueryTime"].asString();
	if(!patternDetailNode["AverageMemory"].isNull())
		patternDetail_.averageMemory = patternDetailNode["AverageMemory"].asString();

}

DescribeSQLPatternAttributeResult::PatternDetail DescribeSQLPatternAttributeResult::getPatternDetail()const
{
	return patternDetail_;
}

