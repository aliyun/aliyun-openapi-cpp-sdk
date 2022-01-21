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

#include <alibabacloud/dms-enterprise/model/ListDataCorrectPreCheckDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDataCorrectPreCheckDBResult::ListDataCorrectPreCheckDBResult() :
	ServiceResult()
{}

ListDataCorrectPreCheckDBResult::ListDataCorrectPreCheckDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataCorrectPreCheckDBResult::~ListDataCorrectPreCheckDBResult()
{}

void ListDataCorrectPreCheckDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreCheckDBListNode = value["PreCheckDBList"]["PreCheckDB"];
	for (auto valuePreCheckDBListPreCheckDB : allPreCheckDBListNode)
	{
		PreCheckDB preCheckDBListObject;
		if(!valuePreCheckDBListPreCheckDB["DbId"].isNull())
			preCheckDBListObject.dbId = std::stol(valuePreCheckDBListPreCheckDB["DbId"].asString());
		if(!valuePreCheckDBListPreCheckDB["SearchName"].isNull())
			preCheckDBListObject.searchName = valuePreCheckDBListPreCheckDB["SearchName"].asString();
		if(!valuePreCheckDBListPreCheckDB["SqlNum"].isNull())
			preCheckDBListObject.sqlNum = std::stol(valuePreCheckDBListPreCheckDB["SqlNum"].asString());
		preCheckDBList_.push_back(preCheckDBListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListDataCorrectPreCheckDBResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListDataCorrectPreCheckDBResult::PreCheckDB> ListDataCorrectPreCheckDBResult::getPreCheckDBList()const
{
	return preCheckDBList_;
}

std::string ListDataCorrectPreCheckDBResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataCorrectPreCheckDBResult::getSuccess()const
{
	return success_;
}

