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

#include <alibabacloud/dms-enterprise/model/ListDBTaskSQLJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDBTaskSQLJobDetailResult::ListDBTaskSQLJobDetailResult() :
	ServiceResult()
{}

ListDBTaskSQLJobDetailResult::ListDBTaskSQLJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDBTaskSQLJobDetailResult::~ListDBTaskSQLJobDetailResult()
{}

void ListDBTaskSQLJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBTaskSQLJobDetailListNode = value["DBTaskSQLJobDetailList"]["DBTaskSQLJobDetail"];
	for (auto valueDBTaskSQLJobDetailListDBTaskSQLJobDetail : allDBTaskSQLJobDetailListNode)
	{
		DBTaskSQLJobDetail dBTaskSQLJobDetailListObject;
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["JobDetailId"].isNull())
			dBTaskSQLJobDetailListObject.jobDetailId = std::stol(valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["JobDetailId"].asString());
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["CurrentSql"].isNull())
			dBTaskSQLJobDetailListObject.currentSql = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["CurrentSql"].asString();
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["ExecuteCount"].isNull())
			dBTaskSQLJobDetailListObject.executeCount = std::stol(valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["ExecuteCount"].asString());
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["JobId"].isNull())
			dBTaskSQLJobDetailListObject.jobId = std::stol(valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["JobId"].asString());
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["DbId"].isNull())
			dBTaskSQLJobDetailListObject.dbId = std::stol(valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["DbId"].asString());
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Logic"].isNull())
			dBTaskSQLJobDetailListObject.logic = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Logic"].asString() == "true";
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Skip"].isNull())
			dBTaskSQLJobDetailListObject.skip = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Skip"].asString() == "true";
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["SqlType"].isNull())
			dBTaskSQLJobDetailListObject.sqlType = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["SqlType"].asString();
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Status"].isNull())
			dBTaskSQLJobDetailListObject.status = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Status"].asString();
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Log"].isNull())
			dBTaskSQLJobDetailListObject.log = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["Log"].asString();
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["StartTime"].isNull())
			dBTaskSQLJobDetailListObject.startTime = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["StartTime"].asString();
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["EndTime"].isNull())
			dBTaskSQLJobDetailListObject.endTime = valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["EndTime"].asString();
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["TimeDelay"].isNull())
			dBTaskSQLJobDetailListObject.timeDelay = std::stol(valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["TimeDelay"].asString());
		if(!valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["AffectRows"].isNull())
			dBTaskSQLJobDetailListObject.affectRows = std::stol(valueDBTaskSQLJobDetailListDBTaskSQLJobDetail["AffectRows"].asString());
		dBTaskSQLJobDetailList_.push_back(dBTaskSQLJobDetailListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListDBTaskSQLJobDetailResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDBTaskSQLJobDetailResult::DBTaskSQLJobDetail> ListDBTaskSQLJobDetailResult::getDBTaskSQLJobDetailList()const
{
	return dBTaskSQLJobDetailList_;
}

std::string ListDBTaskSQLJobDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDBTaskSQLJobDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDBTaskSQLJobDetailResult::getSuccess()const
{
	return success_;
}

