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

#include <alibabacloud/datalake/model/GetQueryResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetQueryResultResult::GetQueryResultResult() :
	ServiceResult()
{}

GetQueryResultResult::GetQueryResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQueryResultResult::~GetQueryResultResult()
{}

void GetQueryResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ResultTmpTable"].isNull())
		resultTmpTable_ = value["ResultTmpTable"].asString();
	if(!value["Owner"].isNull())
		owner_ = std::stol(value["Owner"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Schema"].isNull())
		schema_ = value["Schema"].asString();
	if(!value["ResultTmpDb"].isNull())
		resultTmpDb_ = value["ResultTmpDb"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["JobCompleted"].isNull())
		jobCompleted_ = value["JobCompleted"].asString() == "true";
	if(!value["RowCount"].isNull())
		rowCount_ = std::stoi(value["RowCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Rows"].isNull())
		rows_ = value["Rows"].asString();
	if(!value["Logs"].isNull())
		logs_ = value["Logs"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();
	if(!value["Duration"].isNull())
		duration_ = std::stol(value["Duration"].asString());
	if(!value["Sql"].isNull())
		sql_ = value["Sql"].asString();
	if(!value["RowCountOverLimit"].isNull())
		rowCountOverLimit_ = value["RowCountOverLimit"].asString() == "true";
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["TotalBytesProcessed"].isNull())
		totalBytesProcessed_ = std::stol(value["TotalBytesProcessed"].asString());

}

std::string GetQueryResultResult::getStatus()const
{
	return status_;
}

long GetQueryResultResult::getOwner()const
{
	return owner_;
}

int GetQueryResultResult::getProgress()const
{
	return progress_;
}

std::string GetQueryResultResult::getEndTime()const
{
	return endTime_;
}

std::string GetQueryResultResult::getSchema()const
{
	return schema_;
}

std::string GetQueryResultResult::getGmtModified()const
{
	return gmtModified_;
}

std::string GetQueryResultResult::getStartTime()const
{
	return startTime_;
}

long GetQueryResultResult::getDuration()const
{
	return duration_;
}

std::string GetQueryResultResult::getLogs()const
{
	return logs_;
}

bool GetQueryResultResult::getSuccess()const
{
	return success_;
}

std::string GetQueryResultResult::getSql()const
{
	return sql_;
}

std::string GetQueryResultResult::getResultTmpDb()const
{
	return resultTmpDb_;
}

std::string GetQueryResultResult::getGmtCreate()const
{
	return gmtCreate_;
}

bool GetQueryResultResult::getRowCountOverLimit()const
{
	return rowCountOverLimit_;
}

std::string GetQueryResultResult::getResultTmpTable()const
{
	return resultTmpTable_;
}

std::string GetQueryResultResult::getRegionId()const
{
	return regionId_;
}

std::string GetQueryResultResult::getId()const
{
	return id_;
}

long GetQueryResultResult::getTotalBytesProcessed()const
{
	return totalBytesProcessed_;
}

std::string GetQueryResultResult::getErrorMessage()const
{
	return errorMessage_;
}

int GetQueryResultResult::getRowCount()const
{
	return rowCount_;
}

bool GetQueryResultResult::getJobCompleted()const
{
	return jobCompleted_;
}

std::string GetQueryResultResult::getRows()const
{
	return rows_;
}

