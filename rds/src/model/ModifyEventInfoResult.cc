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

#include <alibabacloud/rds/model/ModifyEventInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyEventInfoResult::ModifyEventInfoResult() :
	ServiceResult()
{}

ModifyEventInfoResult::ModifyEventInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyEventInfoResult::~ModifyEventInfoResult()
{}

void ModifyEventInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorEventId"].isNull())
		errorEventId_ = value["ErrorEventId"].asString();
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["SuccessEventId"].isNull())
		successEventId_ = value["SuccessEventId"].asString();

}

std::string ModifyEventInfoResult::getErrorEventId()const
{
	return errorEventId_;
}

std::string ModifyEventInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string ModifyEventInfoResult::getSuccessEventId()const
{
	return successEventId_;
}

int ModifyEventInfoResult::getSuccessCount()const
{
	return successCount_;
}

