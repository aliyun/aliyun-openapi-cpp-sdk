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

#include <alibabacloud/outboundbot/model/CreateBatchRepeatJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateBatchRepeatJobResult::CreateBatchRepeatJobResult() :
	ServiceResult()
{}

CreateBatchRepeatJobResult::CreateBatchRepeatJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBatchRepeatJobResult::~CreateBatchRepeatJobResult()
{}

void CreateBatchRepeatJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobGroupNode = value["JobGroup"];
	if(!jobGroupNode["Id"].isNull())
		jobGroup_.id = jobGroupNode["Id"].asString();
	if(!jobGroupNode["RingingDuration"].isNull())
		jobGroup_.ringingDuration = std::stol(jobGroupNode["RingingDuration"].asString());
	if(!jobGroupNode["Priority"].isNull())
		jobGroup_.priority = jobGroupNode["Priority"].asString();
	if(!jobGroupNode["MinConcurrency"].isNull())
		jobGroup_.minConcurrency = std::stol(jobGroupNode["MinConcurrency"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

CreateBatchRepeatJobResult::JobGroup CreateBatchRepeatJobResult::getJobGroup()const
{
	return jobGroup_;
}

std::string CreateBatchRepeatJobResult::getMessage()const
{
	return message_;
}

int CreateBatchRepeatJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateBatchRepeatJobResult::getCode()const
{
	return code_;
}

bool CreateBatchRepeatJobResult::getSuccess()const
{
	return success_;
}

