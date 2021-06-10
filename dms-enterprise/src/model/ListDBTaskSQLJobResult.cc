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

#include <alibabacloud/dms-enterprise/model/ListDBTaskSQLJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDBTaskSQLJobResult::ListDBTaskSQLJobResult() :
	ServiceResult()
{}

ListDBTaskSQLJobResult::ListDBTaskSQLJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDBTaskSQLJobResult::~ListDBTaskSQLJobResult()
{}

void ListDBTaskSQLJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBTaskSQLJobListNode = value["DBTaskSQLJobList"]["DBTaskSQLJob"];
	for (auto valueDBTaskSQLJobListDBTaskSQLJob : allDBTaskSQLJobListNode)
	{
		DBTaskSQLJob dBTaskSQLJobListObject;
		if(!valueDBTaskSQLJobListDBTaskSQLJob["JobId"].isNull())
			dBTaskSQLJobListObject.jobId = std::stol(valueDBTaskSQLJobListDBTaskSQLJob["JobId"].asString());
		if(!valueDBTaskSQLJobListDBTaskSQLJob["JobType"].isNull())
			dBTaskSQLJobListObject.jobType = valueDBTaskSQLJobListDBTaskSQLJob["JobType"].asString();
		if(!valueDBTaskSQLJobListDBTaskSQLJob["Comment"].isNull())
			dBTaskSQLJobListObject.comment = valueDBTaskSQLJobListDBTaskSQLJob["Comment"].asString();
		if(!valueDBTaskSQLJobListDBTaskSQLJob["DbSearchName"].isNull())
			dBTaskSQLJobListObject.dbSearchName = valueDBTaskSQLJobListDBTaskSQLJob["DbSearchName"].asString();
		if(!valueDBTaskSQLJobListDBTaskSQLJob["DbId"].isNull())
			dBTaskSQLJobListObject.dbId = std::stol(valueDBTaskSQLJobListDBTaskSQLJob["DbId"].asString());
		if(!valueDBTaskSQLJobListDBTaskSQLJob["Logic"].isNull())
			dBTaskSQLJobListObject.logic = valueDBTaskSQLJobListDBTaskSQLJob["Logic"].asString() == "true";
		if(!valueDBTaskSQLJobListDBTaskSQLJob["CreateTime"].isNull())
			dBTaskSQLJobListObject.createTime = valueDBTaskSQLJobListDBTaskSQLJob["CreateTime"].asString();
		if(!valueDBTaskSQLJobListDBTaskSQLJob["LastExecTime"].isNull())
			dBTaskSQLJobListObject.lastExecTime = valueDBTaskSQLJobListDBTaskSQLJob["LastExecTime"].asString();
		if(!valueDBTaskSQLJobListDBTaskSQLJob["DbTaskGroupId"].isNull())
			dBTaskSQLJobListObject.dbTaskGroupId = std::stol(valueDBTaskSQLJobListDBTaskSQLJob["DbTaskGroupId"].asString());
		if(!valueDBTaskSQLJobListDBTaskSQLJob["Status"].isNull())
			dBTaskSQLJobListObject.status = valueDBTaskSQLJobListDBTaskSQLJob["Status"].asString();
		if(!valueDBTaskSQLJobListDBTaskSQLJob["Transactional"].isNull())
			dBTaskSQLJobListObject.transactional = valueDBTaskSQLJobListDBTaskSQLJob["Transactional"].asString() == "true";
		dBTaskSQLJobList_.push_back(dBTaskSQLJobListObject);
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

std::vector<ListDBTaskSQLJobResult::DBTaskSQLJob> ListDBTaskSQLJobResult::getDBTaskSQLJobList()const
{
	return dBTaskSQLJobList_;
}

long ListDBTaskSQLJobResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDBTaskSQLJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDBTaskSQLJobResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDBTaskSQLJobResult::getSuccess()const
{
	return success_;
}

