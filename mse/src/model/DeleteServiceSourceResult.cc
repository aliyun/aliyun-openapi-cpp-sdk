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

#include <alibabacloud/mse/model/DeleteServiceSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

DeleteServiceSourceResult::DeleteServiceSourceResult() :
	ServiceResult()
{}

DeleteServiceSourceResult::DeleteServiceSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteServiceSourceResult::~DeleteServiceSourceResult()
{}

void DeleteServiceSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DeleteServiceSourceResult::getMessage()const
{
	return message_;
}

int DeleteServiceSourceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DeleteServiceSourceResult::getCode()const
{
	return code_;
}

bool DeleteServiceSourceResult::getSuccess()const
{
	return success_;
}

