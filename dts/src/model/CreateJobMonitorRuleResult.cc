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

#include <alibabacloud/dts/model/CreateJobMonitorRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

CreateJobMonitorRuleResult::CreateJobMonitorRuleResult() :
	ServiceResult()
{}

CreateJobMonitorRuleResult::CreateJobMonitorRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateJobMonitorRuleResult::~CreateJobMonitorRuleResult()
{}

void CreateJobMonitorRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DtsJobId"].isNull())
		dtsJobId_ = value["DtsJobId"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string CreateJobMonitorRuleResult::getDtsJobId()const
{
	return dtsJobId_;
}

int CreateJobMonitorRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateJobMonitorRuleResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string CreateJobMonitorRuleResult::getErrMessage()const
{
	return errMessage_;
}

std::string CreateJobMonitorRuleResult::getCode()const
{
	return code_;
}

bool CreateJobMonitorRuleResult::getSuccess()const
{
	return success_;
}

std::string CreateJobMonitorRuleResult::getErrCode()const
{
	return errCode_;
}

