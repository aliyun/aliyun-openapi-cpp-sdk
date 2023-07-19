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

#include <alibabacloud/dts/model/SkipPreCheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

SkipPreCheckResult::SkipPreCheckResult() :
	ServiceResult()
{}

SkipPreCheckResult::SkipPreCheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SkipPreCheckResult::~SkipPreCheckResult()
{}

void SkipPreCheckResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["SkipNames"].isNull())
		skipNames_ = value["SkipNames"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ScheduleJobId"].isNull())
		scheduleJobId_ = value["ScheduleJobId"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["MigrationJobId"].isNull())
		migrationJobId_ = value["MigrationJobId"].asString();
	if(!value["SkipItems"].isNull())
		skipItems_ = value["SkipItems"].asString();

}

std::string SkipPreCheckResult::getSkipItems()const
{
	return skipItems_;
}

std::string SkipPreCheckResult::getScheduleJobId()const
{
	return scheduleJobId_;
}

int SkipPreCheckResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string SkipPreCheckResult::getSkipNames()const
{
	return skipNames_;
}

std::string SkipPreCheckResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string SkipPreCheckResult::getErrMessage()const
{
	return errMessage_;
}

std::string SkipPreCheckResult::getCode()const
{
	return code_;
}

bool SkipPreCheckResult::getSuccess()const
{
	return success_;
}

std::string SkipPreCheckResult::getErrCode()const
{
	return errCode_;
}

std::string SkipPreCheckResult::getMigrationJobId()const
{
	return migrationJobId_;
}

