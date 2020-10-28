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

#include <alibabacloud/drds/model/ListUserReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

ListUserReportsResult::ListUserReportsResult() :
	ServiceResult()
{}

ListUserReportsResult::ListUserReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserReportsResult::~ListUserReportsResult()
{}

void ListUserReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sqlComparisonReportNode = value["sqlComparisonReport"];
	if(!sqlComparisonReportNode["SqlPassFailNum"].isNull())
		sqlComparisonReport_.sqlPassFailNum = std::stol(sqlComparisonReportNode["SqlPassFailNum"].asString());
	if(!sqlComparisonReportNode["SqlPassRate"].isNull())
		sqlComparisonReport_.sqlPassRate = sqlComparisonReportNode["SqlPassRate"].asString();
	if(!sqlComparisonReportNode["SqlPassSuccNum"].isNull())
		sqlComparisonReport_.sqlPassSuccNum = std::stol(sqlComparisonReportNode["SqlPassSuccNum"].asString());
	if(!sqlComparisonReportNode["Version"].isNull())
		sqlComparisonReport_.version = sqlComparisonReportNode["Version"].asString();
	auto allexecuteDetailListNode = sqlComparisonReportNode["executeDetailList"]["executeDetail"];
	for (auto sqlComparisonReportNodeexecuteDetailListexecuteDetail : allexecuteDetailListNode)
	{
		SqlComparisonReport::ExecuteDetail executeDetailObject;
		if(!sqlComparisonReportNodeexecuteDetailListexecuteDetail["ExecDetailMsg"].isNull())
			executeDetailObject.execDetailMsg = sqlComparisonReportNodeexecuteDetailListexecuteDetail["ExecDetailMsg"].asString();
		if(!sqlComparisonReportNodeexecuteDetailListexecuteDetail["Execute"].isNull())
			executeDetailObject.execute = sqlComparisonReportNodeexecuteDetailListexecuteDetail["Execute"].asString();
		if(!sqlComparisonReportNodeexecuteDetailListexecuteDetail["SqlContent"].isNull())
			executeDetailObject.sqlContent = sqlComparisonReportNodeexecuteDetailListexecuteDetail["SqlContent"].asString();
		if(!sqlComparisonReportNodeexecuteDetailListexecuteDetail["DbName"].isNull())
			executeDetailObject.dbName = sqlComparisonReportNodeexecuteDetailListexecuteDetail["DbName"].asString();
		sqlComparisonReport_.executeDetailList.push_back(executeDetailObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListUserReportsResult::SqlComparisonReport ListUserReportsResult::getSqlComparisonReport()const
{
	return sqlComparisonReport_;
}

bool ListUserReportsResult::getSuccess()const
{
	return success_;
}

