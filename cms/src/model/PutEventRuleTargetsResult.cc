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

#include <alibabacloud/cms/model/PutEventRuleTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

PutEventRuleTargetsResult::PutEventRuleTargetsResult() :
	ServiceResult()
{}

PutEventRuleTargetsResult::PutEventRuleTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PutEventRuleTargetsResult::~PutEventRuleTargetsResult()
{}

void PutEventRuleTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailedContactParametersNode = value["FailedContactParameters"]["ContactParameter"];
	for (auto valueFailedContactParametersContactParameter : allFailedContactParametersNode)
	{
		ContactParameter failedContactParametersObject;
		if(!valueFailedContactParametersContactParameter["ContactGroupName"].isNull())
			failedContactParametersObject.contactGroupName = valueFailedContactParametersContactParameter["ContactGroupName"].asString();
		if(!valueFailedContactParametersContactParameter["Id"].isNull())
			failedContactParametersObject.id = std::stoi(valueFailedContactParametersContactParameter["Id"].asString());
		if(!valueFailedContactParametersContactParameter["Level"].isNull())
			failedContactParametersObject.level = valueFailedContactParametersContactParameter["Level"].asString();
		failedContactParameters_.push_back(failedContactParametersObject);
	}
	auto allFailedMnsParametersNode = value["FailedMnsParameters"]["MnsParameter"];
	for (auto valueFailedMnsParametersMnsParameter : allFailedMnsParametersNode)
	{
		MnsParameter failedMnsParametersObject;
		if(!valueFailedMnsParametersMnsParameter["Queue"].isNull())
			failedMnsParametersObject.queue = valueFailedMnsParametersMnsParameter["Queue"].asString();
		if(!valueFailedMnsParametersMnsParameter["Id"].isNull())
			failedMnsParametersObject.id = std::stoi(valueFailedMnsParametersMnsParameter["Id"].asString());
		if(!valueFailedMnsParametersMnsParameter["Region"].isNull())
			failedMnsParametersObject.region = valueFailedMnsParametersMnsParameter["Region"].asString();
		failedMnsParameters_.push_back(failedMnsParametersObject);
	}
	auto allFailedFcParametersNode = value["FailedFcParameters"]["FcParameter"];
	for (auto valueFailedFcParametersFcParameter : allFailedFcParametersNode)
	{
		FcParameter failedFcParametersObject;
		if(!valueFailedFcParametersFcParameter["ServiceName"].isNull())
			failedFcParametersObject.serviceName = valueFailedFcParametersFcParameter["ServiceName"].asString();
		if(!valueFailedFcParametersFcParameter["FunctionName"].isNull())
			failedFcParametersObject.functionName = valueFailedFcParametersFcParameter["FunctionName"].asString();
		if(!valueFailedFcParametersFcParameter["Id"].isNull())
			failedFcParametersObject.id = std::stoi(valueFailedFcParametersFcParameter["Id"].asString());
		if(!valueFailedFcParametersFcParameter["Region"].isNull())
			failedFcParametersObject.region = valueFailedFcParametersFcParameter["Region"].asString();
		failedFcParameters_.push_back(failedFcParametersObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["FailedParameterCount"].isNull())
		failedParameterCount_ = value["FailedParameterCount"].asString();

}

std::string PutEventRuleTargetsResult::getMessage()const
{
	return message_;
}

std::vector<PutEventRuleTargetsResult::MnsParameter> PutEventRuleTargetsResult::getFailedMnsParameters()const
{
	return failedMnsParameters_;
}

std::vector<PutEventRuleTargetsResult::FcParameter> PutEventRuleTargetsResult::getFailedFcParameters()const
{
	return failedFcParameters_;
}

std::string PutEventRuleTargetsResult::getFailedParameterCount()const
{
	return failedParameterCount_;
}

std::vector<PutEventRuleTargetsResult::ContactParameter> PutEventRuleTargetsResult::getFailedContactParameters()const
{
	return failedContactParameters_;
}

std::string PutEventRuleTargetsResult::getCode()const
{
	return code_;
}

bool PutEventRuleTargetsResult::getSuccess()const
{
	return success_;
}

