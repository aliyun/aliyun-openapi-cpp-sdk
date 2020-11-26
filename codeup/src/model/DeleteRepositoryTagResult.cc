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

#include <alibabacloud/codeup/model/DeleteRepositoryTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

DeleteRepositoryTagResult::DeleteRepositoryTagResult() :
	ServiceResult()
{}

DeleteRepositoryTagResult::DeleteRepositoryTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteRepositoryTagResult::~DeleteRepositoryTagResult()
{}

void DeleteRepositoryTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TagName"].isNull())
		result_.tagName = resultNode["TagName"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string DeleteRepositoryTagResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteRepositoryTagResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteRepositoryTagResult::getSuccess()const
{
	return success_;
}

DeleteRepositoryTagResult::Result DeleteRepositoryTagResult::getResult()const
{
	return result_;
}

