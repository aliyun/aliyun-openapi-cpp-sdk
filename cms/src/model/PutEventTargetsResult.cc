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

#include <alibabacloud/cms/model/PutEventTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

PutEventTargetsResult::PutEventTargetsResult() :
	ServiceResult()
{}

PutEventTargetsResult::PutEventTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PutEventTargetsResult::~PutEventTargetsResult()
{}

void PutEventTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactParameters = value["ContactParameters"]["ContactParameter"];
	for (auto value : allContactParameters)
	{
		ContactParameter contactParametersObject;
		if(!value["Id"].isNull())
			contactParametersObject.id = std::stoi(value["Id"].asString());
		if(!value["ContactGroupName"].isNull())
			contactParametersObject.contactGroupName = value["ContactGroupName"].asString();
		if(!value["Level"].isNull())
			contactParametersObject.level = value["Level"].asString();
		contactParameters_.push_back(contactParametersObject);
	}
	auto allMnsParameters = value["MnsParameters"]["MnsParameter"];
	for (auto value : allMnsParameters)
	{
		MnsParameter mnsParametersObject;
		if(!value["Id"].isNull())
			mnsParametersObject.id = std::stoi(value["Id"].asString());
		if(!value["Region"].isNull())
			mnsParametersObject.region = value["Region"].asString();
		if(!value["Queue"].isNull())
			mnsParametersObject.queue = value["Queue"].asString();
		mnsParameters_.push_back(mnsParametersObject);
	}
	auto allFcParameters = value["FcParameters"]["FcParameter"];
	for (auto value : allFcParameters)
	{
		FcParameter fcParametersObject;
		if(!value["Id"].isNull())
			fcParametersObject.id = std::stoi(value["Id"].asString());
		if(!value["Region"].isNull())
			fcParametersObject.region = value["Region"].asString();
		if(!value["ServiceName"].isNull())
			fcParametersObject.serviceName = value["ServiceName"].asString();
		if(!value["FunctionName"].isNull())
			fcParametersObject.functionName = value["FunctionName"].asString();
		fcParameters_.push_back(fcParametersObject);
	}
	auto allFailedContactParameters = value["FailedContactParameters"]["ContactParameter"];
	for (auto value : allFailedContactParameters)
	{
		ContactParameter failedContactParametersObject;
		if(!value["Id"].isNull())
			failedContactParametersObject.id = std::stoi(value["Id"].asString());
		if(!value["ContactGroupName"].isNull())
			failedContactParametersObject.contactGroupName = value["ContactGroupName"].asString();
		if(!value["Level"].isNull())
			failedContactParametersObject.level = value["Level"].asString();
		failedContactParameters_.push_back(failedContactParametersObject);
	}
	auto allFailedMnsParameters = value["FailedMnsParameters"]["MnsParameter"];
	for (auto value : allFailedMnsParameters)
	{
		MnsParameter failedMnsParametersObject;
		if(!value["Id"].isNull())
			failedMnsParametersObject.id = std::stoi(value["Id"].asString());
		if(!value["Region"].isNull())
			failedMnsParametersObject.region = value["Region"].asString();
		if(!value["Queue"].isNull())
			failedMnsParametersObject.queue = value["Queue"].asString();
		failedMnsParameters_.push_back(failedMnsParametersObject);
	}
	auto allFailedFcParameters = value["FailedFcParameters"]["FcParameter"];
	for (auto value : allFailedFcParameters)
	{
		FcParameter failedFcParametersObject;
		if(!value["Id"].isNull())
			failedFcParametersObject.id = std::stoi(value["Id"].asString());
		if(!value["Region"].isNull())
			failedFcParametersObject.region = value["Region"].asString();
		if(!value["ServiceName"].isNull())
			failedFcParametersObject.serviceName = value["ServiceName"].asString();
		if(!value["FunctionName"].isNull())
			failedFcParametersObject.functionName = value["FunctionName"].asString();
		failedFcParameters_.push_back(failedFcParametersObject);
	}
	auto allFailedSlsParameters = value["FailedSlsParameters"]["FailedSlsParameter"];
	for (auto value : allFailedSlsParameters)
	{
		FailedSlsParameter failedSlsParametersObject;
		if(!value["Id"].isNull())
			failedSlsParametersObject.id = value["Id"].asString();
		if(!value["Region"].isNull())
			failedSlsParametersObject.region = value["Region"].asString();
		if(!value["Project"].isNull())
			failedSlsParametersObject.project = value["Project"].asString();
		if(!value["LogStore"].isNull())
			failedSlsParametersObject.logStore = value["LogStore"].asString();
		failedSlsParameters_.push_back(failedSlsParametersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ParameterCount"].isNull())
		parameterCount_ = value["ParameterCount"].asString();
	if(!value["FailedParameterCount"].isNull())
		failedParameterCount_ = value["FailedParameterCount"].asString();

}

std::string PutEventTargetsResult::getParameterCount()const
{
	return parameterCount_;
}

std::vector<PutEventTargetsResult::ContactParameter> PutEventTargetsResult::getContactParameters()const
{
	return contactParameters_;
}

std::string PutEventTargetsResult::getMessage()const
{
	return message_;
}

std::vector<PutEventTargetsResult::MnsParameter> PutEventTargetsResult::getFailedMnsParameters()const
{
	return failedMnsParameters_;
}

std::vector<PutEventTargetsResult::FcParameter> PutEventTargetsResult::getFailedFcParameters()const
{
	return failedFcParameters_;
}

std::vector<PutEventTargetsResult::FcParameter> PutEventTargetsResult::getFcParameters()const
{
	return fcParameters_;
}

std::string PutEventTargetsResult::getFailedParameterCount()const
{
	return failedParameterCount_;
}

std::vector<PutEventTargetsResult::ContactParameter> PutEventTargetsResult::getFailedContactParameters()const
{
	return failedContactParameters_;
}

std::string PutEventTargetsResult::getCode()const
{
	return code_;
}

std::vector<PutEventTargetsResult::FailedSlsParameter> PutEventTargetsResult::getFailedSlsParameters()const
{
	return failedSlsParameters_;
}

bool PutEventTargetsResult::getSuccess()const
{
	return success_;
}

std::vector<PutEventTargetsResult::MnsParameter> PutEventTargetsResult::getMnsParameters()const
{
	return mnsParameters_;
}

