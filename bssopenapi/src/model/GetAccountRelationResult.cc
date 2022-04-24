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

#include <alibabacloud/bssopenapi/model/GetAccountRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

GetAccountRelationResult::GetAccountRelationResult() :
	ServiceResult()
{}

GetAccountRelationResult::GetAccountRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountRelationResult::~GetAccountRelationResult()
{}

void GetAccountRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["ParentUserId"].isNull())
		data_.parentUserId = std::stol(dataNode["ParentUserId"].asString());
	if(!dataNode["ChildUserId"].isNull())
		data_.childUserId = std::stol(dataNode["ChildUserId"].asString());
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = std::stol(dataNode["GmtModified"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAccountRelationResult::getMessage()const
{
	return message_;
}

GetAccountRelationResult::Data GetAccountRelationResult::getData()const
{
	return data_;
}

std::string GetAccountRelationResult::getCode()const
{
	return code_;
}

bool GetAccountRelationResult::getSuccess()const
{
	return success_;
}

