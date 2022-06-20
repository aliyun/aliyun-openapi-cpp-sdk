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

#include <alibabacloud/sas/model/GetSuspiciousStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetSuspiciousStatisticsResult::GetSuspiciousStatisticsResult() :
	ServiceResult()
{}

GetSuspiciousStatisticsResult::GetSuspiciousStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSuspiciousStatisticsResult::~GetSuspiciousStatisticsResult()
{}

void GetSuspiciousStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SuspiciousCount"].isNull())
		suspiciousCount_ = std::stoi(value["SuspiciousCount"].asString());
	if(!value["RemindCount"].isNull())
		remindCount_ = std::stoi(value["RemindCount"].asString());
	if(!value["TemindCount"].isNull())
		temindCount_ = std::stoi(value["TemindCount"].asString());
	if(!value["SeriousCount"].isNull())
		seriousCount_ = std::stoi(value["SeriousCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int GetSuspiciousStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int GetSuspiciousStatisticsResult::getSuspiciousCount()const
{
	return suspiciousCount_;
}

int GetSuspiciousStatisticsResult::getTemindCount()const
{
	return temindCount_;
}

int GetSuspiciousStatisticsResult::getRemindCount()const
{
	return remindCount_;
}

int GetSuspiciousStatisticsResult::getSeriousCount()const
{
	return seriousCount_;
}

