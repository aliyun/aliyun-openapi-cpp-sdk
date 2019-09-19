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
	auto allContactParametersNode = value["ContactParameters"]["ContactParameter"];
	for (auto valueContactParametersContactParameter : allContactParametersNode)
	{
		ContactParameter contactParametersObject;
		if(!valueContactParametersContactParameter["Id"].isNull())
			contactParametersObject.id = std::stoi(valueContactParametersContactParameter["Id"].asString());
		if(!valueContactParametersContactParameter["ContactGroupName"].isNull())
			contactParametersObject.contactGroupName = valueContactParametersContactParameter["ContactGroupName"].asString();
		if(!valueContactParametersContactParameter["Level"].isNull())
			contactParametersObject.level = valueContactParametersContactParameter["Level"].asString();
		contactParameters_.push_back(contactParametersObject);
	}
	auto allMnsParametersNode = value["MnsParameters"]["MnsParameter"];
	for (auto valueMnsParametersMnsParameter : allMnsParametersNode)
	{
		MnsParameter mnsParametersObject;
		if(!valueMnsParametersMnsParameter["Id"].isNull())
			mnsParametersObject.id = std::stoi(valueMnsParametersMnsParameter["Id"].asString());
		if(!valueMnsParametersMnsParameter["Region"].isNull())
			mnsParametersObject.region = valueMnsParametersMnsParameter["Region"].asString();
		if(!valueMnsParametersMnsParameter["Queue"].isNull())
			mnsParametersObject.queue = valueMnsParametersMnsParameter["Queue"].asString();
		mnsParameters_.push_back(mnsParametersObject);
	}
	auto allFcParametersNode = value["FcParameters"]["FcParameter"];
	for (auto valueFcParametersFcParameter : allFcParametersNode)
	{
		FcParameter fcParametersObject;
		if(!valueFcParametersFcParameter["Id"].isNull())
			fcParametersObject.id = std::stoi(valueFcParametersFcParameter["Id"].asString());
		if(!valueFcParametersFcParameter["Region"].isNull())
			fcParametersObject.region = valueFcParametersFcParameter["Region"].asString();
		if(!valueFcParametersFcParameter["ServiceName"].isNull())
			fcParametersObject.serviceName = valueFcParametersFcParameter["ServiceName"].asString();
		if(!valueFcParametersFcParameter["FunctionName"].isNull())
			fcParametersObject.functionName = valueFcParametersFcParameter["FunctionName"].asString();
		fcParameters_.push_back(fcParametersObject);
	}
	auto allFailedContactParametersNode = value["FailedContactParameters"]["ContactParameter"];
	for (auto valueFailedContactParametersContactParameter : allFailedContactParametersNode)
	{
		ContactParameter failedContactParametersObject;
		if(!valueFailedContactParametersContactParameter["Id"].isNull())
			failedContactParametersObject.id = std::stoi(valueFailedContactParametersContactParameter["Id"].asString());
		if(!valueFailedContactParametersContactParameter["ContactGroupName"].isNull())
			failedContactParametersObject.contactGroupName = valueFailedContactParametersContactParameter["ContactGroupName"].asString();
		if(!valueFailedContactParametersContactParameter["Level"].isNull())
			failedContactParametersObject.level = valueFailedContactParametersContactParameter["Level"].asString();
		failedContactParameters_.push_back(failedContactParametersObject);
	}
	auto allFailedMnsParametersNode = value["FailedMnsParameters"]["MnsParameter"];
	for (auto valueFailedMnsParametersMnsParameter : allFailedMnsParametersNode)
	{
		MnsParameter failedMnsParametersObject;
		if(!valueFailedMnsParametersMnsParameter["Id"].isNull())
			failedMnsParametersObject.id = std::stoi(valueFailedMnsParametersMnsParameter["Id"].asString());
		if(!valueFailedMnsParametersMnsParameter["Region"].isNull())
			failedMnsParametersObject.region = valueFailedMnsParametersMnsParameter["Region"].asString();
		if(!valueFailedMnsParametersMnsParameter["Queue"].isNull())
			failedMnsParametersObject.queue = valueFailedMnsParametersMnsParameter["Queue"].asString();
		failedMnsParameters_.push_back(failedMnsParametersObject);
	}
	auto allFailedFcParametersNode = value["FailedFcParameters"]["FcParameter"];
	for (auto valueFailedFcParametersFcParameter : allFailedFcParametersNode)
	{
		FcParameter failedFcParametersObject;
		if(!valueFailedFcParametersFcParameter["Id"].isNull())
			failedFcParametersObject.id = std::stoi(valueFailedFcParametersFcParameter["Id"].asString());
		if(!valueFailedFcParametersFcParameter["Region"].isNull())
			failedFcParametersObject.region = valueFailedFcParametersFcParameter["Region"].asString();
		if(!valueFailedFcParametersFcParameter["ServiceName"].isNull())
			failedFcParametersObject.serviceName = valueFailedFcParametersFcParameter["ServiceName"].asString();
		if(!valueFailedFcParametersFcParameter["FunctionName"].isNull())
			failedFcParametersObject.functionName = valueFailedFcParametersFcParameter["FunctionName"].asString();
		failedFcParameters_.push_back(failedFcParametersObject);
	}
	auto allFailedSlsParametersNode = value["FailedSlsParameters"]["FailedSlsParameter"];
	for (auto valueFailedSlsParametersFailedSlsParameter : allFailedSlsParametersNode)
	{
		FailedSlsParameter failedSlsParametersObject;
		if(!valueFailedSlsParametersFailedSlsParameter["Id"].isNull())
			failedSlsParametersObject.id = valueFailedSlsParametersFailedSlsParameter["Id"].asString();
		if(!valueFailedSlsParametersFailedSlsParameter["Region"].isNull())
			failedSlsParametersObject.region = valueFailedSlsParametersFailedSlsParameter["Region"].asString();
		if(!valueFailedSlsParametersFailedSlsParameter["Project"].isNull())
			failedSlsParametersObject.project = valueFailedSlsParametersFailedSlsParameter["Project"].asString();
		if(!valueFailedSlsParametersFailedSlsParameter["LogStore"].isNull())
			failedSlsParametersObject.logStore = valueFailedSlsParametersFailedSlsParameter["LogStore"].asString();
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

