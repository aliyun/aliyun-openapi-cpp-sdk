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

#include <alibabacloud/dataworks-public/model/CreateTableLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

CreateTableLevelResult::CreateTableLevelResult() :
	ServiceResult()
{}

CreateTableLevelResult::CreateTableLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTableLevelResult::~CreateTableLevelResult()
{}

void CreateTableLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["LevelId"].isNull())
		levelId_ = std::stol(value["LevelId"].asString());

}

int CreateTableLevelResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateTableLevelResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateTableLevelResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateTableLevelResult::getSuccess()const
{
	return success_;
}

long CreateTableLevelResult::getLevelId()const
{
	return levelId_;
}

