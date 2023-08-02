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

#include <alibabacloud/gpdb/model/DescribeDiagnosisSQLInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDiagnosisSQLInfoResult::DescribeDiagnosisSQLInfoResult() :
	ServiceResult()
{}

DescribeDiagnosisSQLInfoResult::DescribeDiagnosisSQLInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisSQLInfoResult::~DescribeDiagnosisSQLInfoResult()
{}

void DescribeDiagnosisSQLInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["QueryID"].isNull())
		queryID_ = value["QueryID"].asString();
	if(!value["SessionID"].isNull())
		sessionID_ = value["SessionID"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["Duration"].isNull())
		duration_ = std::stoi(value["Duration"].asString());
	if(!value["SQLStmt"].isNull())
		sQLStmt_ = value["SQLStmt"].asString();
	if(!value["User"].isNull())
		user_ = value["User"].asString();
	if(!value["Database"].isNull())
		database_ = value["Database"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["QueryPlan"].isNull())
		queryPlan_ = value["QueryPlan"].asString();
	if(!value["TextPlan"].isNull())
		textPlan_ = value["TextPlan"].asString();
	if(!value["SortedMetrics"].isNull())
		sortedMetrics_ = value["SortedMetrics"].asString();
	if(!value["MaxOutputRows"].isNull())
		maxOutputRows_ = value["MaxOutputRows"].asString();

}

std::string DescribeDiagnosisSQLInfoResult::getStatus()const
{
	return status_;
}

std::string DescribeDiagnosisSQLInfoResult::getTextPlan()const
{
	return textPlan_;
}

std::string DescribeDiagnosisSQLInfoResult::getSortedMetrics()const
{
	return sortedMetrics_;
}

std::string DescribeDiagnosisSQLInfoResult::getMaxOutputRows()const
{
	return maxOutputRows_;
}

std::string DescribeDiagnosisSQLInfoResult::getSQLStmt()const
{
	return sQLStmt_;
}

std::string DescribeDiagnosisSQLInfoResult::getUser()const
{
	return user_;
}

std::string DescribeDiagnosisSQLInfoResult::getQueryID()const
{
	return queryID_;
}

long DescribeDiagnosisSQLInfoResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDiagnosisSQLInfoResult::getDatabase()const
{
	return database_;
}

int DescribeDiagnosisSQLInfoResult::getDuration()const
{
	return duration_;
}

std::string DescribeDiagnosisSQLInfoResult::getQueryPlan()const
{
	return queryPlan_;
}

std::string DescribeDiagnosisSQLInfoResult::getSessionID()const
{
	return sessionID_;
}

