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

#include <alibabacloud/eds-user/model/SyncAllEduInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

SyncAllEduInfoResult::SyncAllEduInfoResult() :
	ServiceResult()
{}

SyncAllEduInfoResult::SyncAllEduInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SyncAllEduInfoResult::~SyncAllEduInfoResult()
{}

void SyncAllEduInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string SyncAllEduInfoResult::getMessage()const
{
	return message_;
}

int SyncAllEduInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string SyncAllEduInfoResult::getCode()const
{
	return code_;
}

bool SyncAllEduInfoResult::getSuccess()const
{
	return success_;
}

