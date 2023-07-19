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

#include <alibabacloud/dts/model/ModifyDtsJobDuLimitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

ModifyDtsJobDuLimitResult::ModifyDtsJobDuLimitResult() :
	ServiceResult()
{}

ModifyDtsJobDuLimitResult::ModifyDtsJobDuLimitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDtsJobDuLimitResult::~ModifyDtsJobDuLimitResult()
{}

void ModifyDtsJobDuLimitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();

}

long ModifyDtsJobDuLimitResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ModifyDtsJobDuLimitResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ModifyDtsJobDuLimitResult::getErrMessage()const
{
	return errMessage_;
}

std::string ModifyDtsJobDuLimitResult::getCode()const
{
	return code_;
}

bool ModifyDtsJobDuLimitResult::getSuccess()const
{
	return success_;
}

std::string ModifyDtsJobDuLimitResult::getErrCode()const
{
	return errCode_;
}

