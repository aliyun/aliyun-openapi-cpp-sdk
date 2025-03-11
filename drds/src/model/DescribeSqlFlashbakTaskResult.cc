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

#include <alibabacloud/drds/model/DescribeSqlFlashbakTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeSqlFlashbakTaskResult::DescribeSqlFlashbakTaskResult() :
	ServiceResult()
{}

DescribeSqlFlashbakTaskResult::DescribeSqlFlashbakTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlFlashbakTaskResult::~DescribeSqlFlashbakTaskResult()
{}

void DescribeSqlFlashbakTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSqlFlashbackTasksNode = value["SqlFlashbackTasks"]["SqlFlashbackTask"];
	for (auto valueSqlFlashbackTasksSqlFlashbackTask : allSqlFlashbackTasksNode)
	{
		SqlFlashbackTask sqlFlashbackTasksObject;
		if(!valueSqlFlashbackTasksSqlFlashbackTask["TableName"].isNull())
			sqlFlashbackTasksObject.tableName = valueSqlFlashbackTasksSqlFlashbackTask["TableName"].asString();
		if(!valueSqlFlashbackTasksSqlFlashbackTask["SearchEndTime"].isNull())
			sqlFlashbackTasksObject.searchEndTime = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["SearchEndTime"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["ExpireTime"].isNull())
			sqlFlashbackTasksObject.expireTime = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["ExpireTime"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["DownloadUrl"].isNull())
			sqlFlashbackTasksObject.downloadUrl = valueSqlFlashbackTasksSqlFlashbackTask["DownloadUrl"].asString();
		if(!valueSqlFlashbackTasksSqlFlashbackTask["RecallProgress"].isNull())
			sqlFlashbackTasksObject.recallProgress = std::stoi(valueSqlFlashbackTasksSqlFlashbackTask["RecallProgress"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["SqlPk"].isNull())
			sqlFlashbackTasksObject.sqlPk = valueSqlFlashbackTasksSqlFlashbackTask["SqlPk"].asString();
		if(!valueSqlFlashbackTasksSqlFlashbackTask["InstId"].isNull())
			sqlFlashbackTasksObject.instId = valueSqlFlashbackTasksSqlFlashbackTask["InstId"].asString();
		if(!valueSqlFlashbackTasksSqlFlashbackTask["RecallType"].isNull())
			sqlFlashbackTasksObject.recallType = std::stoi(valueSqlFlashbackTasksSqlFlashbackTask["RecallType"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["SearchStartTime"].isNull())
			sqlFlashbackTasksObject.searchStartTime = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["SearchStartTime"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["GmtModified"].isNull())
			sqlFlashbackTasksObject.gmtModified = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["GmtModified"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["SqlCounter"].isNull())
			sqlFlashbackTasksObject.sqlCounter = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["SqlCounter"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["DbName"].isNull())
			sqlFlashbackTasksObject.dbName = valueSqlFlashbackTasksSqlFlashbackTask["DbName"].asString();
		if(!valueSqlFlashbackTasksSqlFlashbackTask["RecallRestoreType"].isNull())
			sqlFlashbackTasksObject.recallRestoreType = std::stoi(valueSqlFlashbackTasksSqlFlashbackTask["RecallRestoreType"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["GmtCreate"].isNull())
			sqlFlashbackTasksObject.gmtCreate = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["GmtCreate"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["TraceId"].isNull())
			sqlFlashbackTasksObject.traceId = valueSqlFlashbackTasksSqlFlashbackTask["TraceId"].asString();
		if(!valueSqlFlashbackTasksSqlFlashbackTask["Id"].isNull())
			sqlFlashbackTasksObject.id = std::stol(valueSqlFlashbackTasksSqlFlashbackTask["Id"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["RecallStatus"].isNull())
			sqlFlashbackTasksObject.recallStatus = std::stoi(valueSqlFlashbackTasksSqlFlashbackTask["RecallStatus"].asString());
		if(!valueSqlFlashbackTasksSqlFlashbackTask["SqlType"].isNull())
			sqlFlashbackTasksObject.sqlType = valueSqlFlashbackTasksSqlFlashbackTask["SqlType"].asString();
		sqlFlashbackTasks_.push_back(sqlFlashbackTasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSqlFlashbakTaskResult::SqlFlashbackTask> DescribeSqlFlashbakTaskResult::getSqlFlashbackTasks()const
{
	return sqlFlashbackTasks_;
}

bool DescribeSqlFlashbakTaskResult::getSuccess()const
{
	return success_;
}

