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

#include <alibabacloud/dms-enterprise/model/DeleteAbacAuthorizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

DeleteAbacAuthorizationResult::DeleteAbacAuthorizationResult() :
	ServiceResult()
{}

DeleteAbacAuthorizationResult::DeleteAbacAuthorizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAbacAuthorizationResult::~DeleteAbacAuthorizationResult()
{}

void DeleteAbacAuthorizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Result"].isNull())
		result_ = value["Result"].asString();

}

std::string DeleteAbacAuthorizationResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteAbacAuthorizationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteAbacAuthorizationResult::getSuccess()const
{
	return success_;
}

std::string DeleteAbacAuthorizationResult::getResult()const
{
	return result_;
}

