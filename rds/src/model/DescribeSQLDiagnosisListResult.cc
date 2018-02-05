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

#include <alibabacloud/rds/model/DescribeSQLDiagnosisListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLDiagnosisListResult::DescribeSQLDiagnosisListResult() :
	ServiceResult()
{}

DescribeSQLDiagnosisListResult::DescribeSQLDiagnosisListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLDiagnosisListResult::~DescribeSQLDiagnosisListResult()
{}

void DescribeSQLDiagnosisListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSQLDiagList = value["SQLDiagList"]["SQLDiag"];
	for (auto value : allSQLDiagList)
	{
		SQLDiag sQLDiagListObject;
		if(!value["SQLDiagId"].isNull())
			sQLDiagListObject.sQLDiagId = value["SQLDiagId"].asString();
		if(!value["StartTime"].isNull())
			sQLDiagListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			sQLDiagListObject.endTime = value["EndTime"].asString();
		if(!value["Status"].isNull())
			sQLDiagListObject.status = std::stoi(value["Status"].asString());
		if(!value["Progress"].isNull())
			sQLDiagListObject.progress = std::stoi(value["Progress"].asString());
		sQLDiagList_.push_back(sQLDiagListObject);
	}

}

std::vector<DescribeSQLDiagnosisListResult::SQLDiag> DescribeSQLDiagnosisListResult::getSQLDiagList()const
{
	return sQLDiagList_;
}

