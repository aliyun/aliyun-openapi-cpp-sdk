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

#include <alibabacloud/dms-enterprise/model/ListDataCorrectPreCheckSQLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDataCorrectPreCheckSQLResult::ListDataCorrectPreCheckSQLResult() :
	ServiceResult()
{}

ListDataCorrectPreCheckSQLResult::ListDataCorrectPreCheckSQLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataCorrectPreCheckSQLResult::~ListDataCorrectPreCheckSQLResult()
{}

void ListDataCorrectPreCheckSQLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreCheckSQLListNode = value["PreCheckSQLList"]["PreCheckSQL"];
	for (auto valuePreCheckSQLListPreCheckSQL : allPreCheckSQLListNode)
	{
		PreCheckSQL preCheckSQLListObject;
		if(!valuePreCheckSQLListPreCheckSQL["CheckSQL"].isNull())
			preCheckSQLListObject.checkSQL = valuePreCheckSQLListPreCheckSQL["CheckSQL"].asString();
		if(!valuePreCheckSQLListPreCheckSQL["AffectRows"].isNull())
			preCheckSQLListObject.affectRows = std::stol(valuePreCheckSQLListPreCheckSQL["AffectRows"].asString());
		if(!valuePreCheckSQLListPreCheckSQL["DbId"].isNull())
			preCheckSQLListObject.dbId = std::stol(valuePreCheckSQLListPreCheckSQL["DbId"].asString());
		if(!valuePreCheckSQLListPreCheckSQL["SQLReviewQueryKey"].isNull())
			preCheckSQLListObject.sQLReviewQueryKey = valuePreCheckSQLListPreCheckSQL["SQLReviewQueryKey"].asString();
		if(!valuePreCheckSQLListPreCheckSQL["SqlReviewStatus"].isNull())
			preCheckSQLListObject.sqlReviewStatus = valuePreCheckSQLListPreCheckSQL["SqlReviewStatus"].asString();
		if(!valuePreCheckSQLListPreCheckSQL["SqlType"].isNull())
			preCheckSQLListObject.sqlType = valuePreCheckSQLListPreCheckSQL["SqlType"].asString();
		if(!valuePreCheckSQLListPreCheckSQL["TableNames"].isNull())
			preCheckSQLListObject.tableNames = valuePreCheckSQLListPreCheckSQL["TableNames"].asString();
		preCheckSQLList_.push_back(preCheckSQLListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListDataCorrectPreCheckSQLResult::PreCheckSQL> ListDataCorrectPreCheckSQLResult::getPreCheckSQLList()const
{
	return preCheckSQLList_;
}

std::string ListDataCorrectPreCheckSQLResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataCorrectPreCheckSQLResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataCorrectPreCheckSQLResult::getSuccess()const
{
	return success_;
}

