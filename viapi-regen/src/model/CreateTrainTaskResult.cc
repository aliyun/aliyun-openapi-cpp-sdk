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

#include <alibabacloud/viapi-regen/model/CreateTrainTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

CreateTrainTaskResult::CreateTrainTaskResult() :
	ServiceResult()
{}

CreateTrainTaskResult::CreateTrainTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTrainTaskResult::~CreateTrainTaskResult()
{}

void CreateTrainTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["TaskName"].isNull())
		data_.taskName = dataNode["TaskName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["DatasetId"].isNull())
		data_.datasetId = std::stol(dataNode["DatasetId"].asString());
	if(!dataNode["DatasetName"].isNull())
		data_.datasetName = dataNode["DatasetName"].asString();
	if(!dataNode["LabelId"].isNull())
		data_.labelId = std::stol(dataNode["LabelId"].asString());
	if(!dataNode["LabelName"].isNull())
		data_.labelName = dataNode["LabelName"].asString();
	if(!dataNode["TrainMode"].isNull())
		data_.trainMode = dataNode["TrainMode"].asString();
	if(!dataNode["RelyOnTaskId"].isNull())
		data_.relyOnTaskId = std::stol(dataNode["RelyOnTaskId"].asString());
	if(!dataNode["RelyOnTaskName"].isNull())
		data_.relyOnTaskName = dataNode["RelyOnTaskName"].asString();
	if(!dataNode["AdvancedParameters"].isNull())
		data_.advancedParameters = dataNode["AdvancedParameters"].asString();
	if(!dataNode["TrainStatus"].isNull())
		data_.trainStatus = dataNode["TrainStatus"].asString();
	if(!dataNode["ModelId"].isNull())
		data_.modelId = std::stol(dataNode["ModelId"].asString());
	if(!dataNode["ModelEffect"].isNull())
		data_.modelEffect = dataNode["ModelEffect"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string CreateTrainTaskResult::getMessage()const
{
	return message_;
}

CreateTrainTaskResult::Data CreateTrainTaskResult::getData()const
{
	return data_;
}

std::string CreateTrainTaskResult::getCode()const
{
	return code_;
}

