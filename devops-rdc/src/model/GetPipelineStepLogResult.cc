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

#include <alibabacloud/devops-rdc/model/GetPipelineStepLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetPipelineStepLogResult::GetPipelineStepLogResult() :
	ServiceResult()
{}

GetPipelineStepLogResult::GetPipelineStepLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineStepLogResult::~GetPipelineStepLogResult()
{}

void GetPipelineStepLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["Last"].isNull())
		object_.last = std::stoi(objectNode["Last"].asString());
	if(!objectNode["More"].isNull())
		object_.more = objectNode["More"].asString() == "true";
	if(!objectNode["Logs"].isNull())
		object_.logs = objectNode["Logs"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetPipelineStepLogResult::Object GetPipelineStepLogResult::getObject()const
{
	return object_;
}

std::string GetPipelineStepLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPipelineStepLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPipelineStepLogResult::getSuccess()const
{
	return success_;
}

