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

#include <alibabacloud/dataworks-public/model/GetMetaTableIntroWikiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableIntroWikiResult::GetMetaTableIntroWikiResult() :
	ServiceResult()
{}

GetMetaTableIntroWikiResult::GetMetaTableIntroWikiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableIntroWikiResult::~GetMetaTableIntroWikiResult()
{}

void GetMetaTableIntroWikiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = std::stol(dataNode["ModifiedTime"].asString());
	if(!dataNode["Version"].isNull())
		data_.version = std::stol(dataNode["Version"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["CreatorName"].isNull())
		data_.creatorName = dataNode["CreatorName"].asString();
	if(!dataNode["Content"].isNull())
		data_.content = dataNode["Content"].asString();
	if(!dataNode["Creator"].isNull())
		data_.creator = dataNode["Creator"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetMetaTableIntroWikiResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableIntroWikiResult::Data GetMetaTableIntroWikiResult::getData()const
{
	return data_;
}

std::string GetMetaTableIntroWikiResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableIntroWikiResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableIntroWikiResult::getSuccess()const
{
	return success_;
}

