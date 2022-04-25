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

#include <alibabacloud/dataworks-public/model/UpdateTableThemeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

UpdateTableThemeResult::UpdateTableThemeResult() :
	ServiceResult()
{}

UpdateTableThemeResult::UpdateTableThemeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateTableThemeResult::~UpdateTableThemeResult()
{}

void UpdateTableThemeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["UpdateResult"].isNull())
		updateResult_ = value["UpdateResult"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int UpdateTableThemeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string UpdateTableThemeResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateTableThemeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateTableThemeResult::getUpdateResult()const
{
	return updateResult_;
}

bool UpdateTableThemeResult::getSuccess()const
{
	return success_;
}

