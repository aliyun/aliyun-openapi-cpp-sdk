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

#include <alibabacloud/dbs/model/GetDBListFromAgentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

GetDBListFromAgentResult::GetDBListFromAgentResult() :
	ServiceResult()
{}

GetDBListFromAgentResult::GetDBListFromAgentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDBListFromAgentResult::~GetDBListFromAgentResult()
{}

void GetDBListFromAgentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbList = value["DbList"]["dbName"];
	for (const auto &item : allDbList)
		dbList_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

int GetDBListFromAgentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetDBListFromAgentResult::getErrMessage()const
{
	return errMessage_;
}

std::vector<std::string> GetDBListFromAgentResult::getDbList()const
{
	return dbList_;
}

bool GetDBListFromAgentResult::getSuccess()const
{
	return success_;
}

std::string GetDBListFromAgentResult::getErrCode()const
{
	return errCode_;
}

