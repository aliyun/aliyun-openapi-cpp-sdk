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

#include <alibabacloud/dts/model/StopDtsJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

StopDtsJobsResult::StopDtsJobsResult() :
	ServiceResult()
{}

StopDtsJobsResult::StopDtsJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopDtsJobsResult::~StopDtsJobsResult()
{}

void StopDtsJobsResult::parse(const std::string &payload)
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
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

int StopDtsJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string StopDtsJobsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string StopDtsJobsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string StopDtsJobsResult::getErrMessage()const
{
	return errMessage_;
}

bool StopDtsJobsResult::getSuccess()const
{
	return success_;
}

std::string StopDtsJobsResult::getErrCode()const
{
	return errCode_;
}

