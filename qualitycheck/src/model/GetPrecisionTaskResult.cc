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

#include <alibabacloud/qualitycheck/model/GetPrecisionTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetPrecisionTaskResult::GetPrecisionTaskResult() :
	ServiceResult()
{}

GetPrecisionTaskResult::GetPrecisionTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPrecisionTaskResult::~GetPrecisionTaskResult()
{}

void GetPrecisionTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	if(!dataNode["IncorrectWords"].isNull())
		data_.incorrectWords = std::stoi(dataNode["IncorrectWords"].asString());
	if(!dataNode["DataSetId"].isNull())
		data_.dataSetId = std::stol(dataNode["DataSetId"].asString());
	if(!dataNode["VerifiedCount"].isNull())
		data_.verifiedCount = std::stoi(dataNode["VerifiedCount"].asString());
	if(!dataNode["Duration"].isNull())
		data_.duration = std::stoi(dataNode["Duration"].asString());
	if(!dataNode["DataSetName"].isNull())
		data_.dataSetName = dataNode["DataSetName"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["Source"].isNull())
		data_.source = std::stoi(dataNode["Source"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	auto allPrecisionsNode = dataNode["Precisions"]["Precision"];
	for (auto dataNodePrecisionsPrecision : allPrecisionsNode)
	{
		Data::Precision precisionObject;
		if(!dataNodePrecisionsPrecision["Status"].isNull())
			precisionObject.status = std::stoi(dataNodePrecisionsPrecision["Status"].asString());
		if(!dataNodePrecisionsPrecision["ModelName"].isNull())
			precisionObject.modelName = dataNodePrecisionsPrecision["ModelName"].asString();
		if(!dataNodePrecisionsPrecision["TaskId"].isNull())
			precisionObject.taskId = dataNodePrecisionsPrecision["TaskId"].asString();
		if(!dataNodePrecisionsPrecision["Precision"].isNull())
			precisionObject.precision = std::stof(dataNodePrecisionsPrecision["Precision"].asString());
		if(!dataNodePrecisionsPrecision["ModelId"].isNull())
			precisionObject.modelId = std::stol(dataNodePrecisionsPrecision["ModelId"].asString());
		data_.precisions.push_back(precisionObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetPrecisionTaskResult::getMessage()const
{
	return message_;
}

GetPrecisionTaskResult::Data GetPrecisionTaskResult::getData()const
{
	return data_;
}

std::string GetPrecisionTaskResult::getCode()const
{
	return code_;
}

bool GetPrecisionTaskResult::getSuccess()const
{
	return success_;
}

