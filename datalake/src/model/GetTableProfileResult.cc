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

#include <alibabacloud/datalake/model/GetTableProfileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetTableProfileResult::GetTableProfileResult() :
	ServiceResult()
{}

GetTableProfileResult::GetTableProfileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableProfileResult::~GetTableProfileResult()
{}

void GetTableProfileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tableProfileNode = value["TableProfile"];
	if(!tableProfileNode["PartitionCnt"].isNull())
		tableProfile_.partitionCnt = std::stol(tableProfileNode["PartitionCnt"].asString());
	if(!tableProfileNode["FileCnt"].isNull())
		tableProfile_.fileCnt = std::stol(tableProfileNode["FileCnt"].asString());
	if(!tableProfileNode["ObjectCnt"].isNull())
		tableProfile_.objectCnt = std::stol(tableProfileNode["ObjectCnt"].asString());
	if(!tableProfileNode["FileSize"].isNull())
		tableProfile_.fileSize = std::stol(tableProfileNode["FileSize"].asString());
	if(!tableProfileNode["ObjectSize"].isNull())
		tableProfile_.objectSize = std::stol(tableProfileNode["ObjectSize"].asString());
	if(!tableProfileNode["RecordCnt"].isNull())
		tableProfile_.recordCnt = std::stol(tableProfileNode["RecordCnt"].asString());
	if(!tableProfileNode["IsPartitioned"].isNull())
		tableProfile_.isPartitioned = tableProfileNode["IsPartitioned"].asString() == "true";
	if(!tableProfileNode["LastModifyTime"].isNull())
		tableProfile_.lastModifyTime = tableProfileNode["LastModifyTime"].asString();
	if(!tableProfileNode["LastAccessTime"].isNull())
		tableProfile_.lastAccessTime = tableProfileNode["LastAccessTime"].asString();
	if(!tableProfileNode["DatabaseName"].isNull())
		tableProfile_.databaseName = tableProfileNode["DatabaseName"].asString();
	if(!tableProfileNode["TableName"].isNull())
		tableProfile_.tableName = tableProfileNode["TableName"].asString();
	if(!tableProfileNode["CreateTime"].isNull())
		tableProfile_.createTime = tableProfileNode["CreateTime"].asString();
	if(!tableProfileNode["Location"].isNull())
		tableProfile_.location = tableProfileNode["Location"].asString();
	if(!tableProfileNode["AccessNum"].isNull())
		tableProfile_.accessNum = std::stol(tableProfileNode["AccessNum"].asString());
	if(!tableProfileNode["AccessNumWeekly"].isNull())
		tableProfile_.accessNumWeekly = std::stol(tableProfileNode["AccessNumWeekly"].asString());
	if(!tableProfileNode["AccessNumMonthly"].isNull())
		tableProfile_.accessNumMonthly = std::stol(tableProfileNode["AccessNumMonthly"].asString());
	if(!tableProfileNode["LastAccessNumTime"].isNull())
		tableProfile_.lastAccessNumTime = tableProfileNode["LastAccessNumTime"].asString();
	if(!tableProfileNode["LatestDate"].isNull())
		tableProfile_.latestDate = tableProfileNode["LatestDate"].asString();
	if(!tableProfileNode["LatestAccessNumDate"].isNull())
		tableProfile_.latestAccessNumDate = tableProfileNode["LatestAccessNumDate"].asString();
	if(!tableProfileNode["LastDdlTime"].isNull())
		tableProfile_.lastDdlTime = tableProfileNode["LastDdlTime"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetTableProfileResult::TableProfile GetTableProfileResult::getTableProfile()const
{
	return tableProfile_;
}

std::string GetTableProfileResult::getMessage()const
{
	return message_;
}

std::string GetTableProfileResult::getCode()const
{
	return code_;
}

bool GetTableProfileResult::getSuccess()const
{
	return success_;
}

