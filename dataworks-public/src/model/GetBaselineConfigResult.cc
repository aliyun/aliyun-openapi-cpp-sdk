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

#include <alibabacloud/dataworks-public/model/GetBaselineConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetBaselineConfigResult::GetBaselineConfigResult() :
	ServiceResult()
{}

GetBaselineConfigResult::GetBaselineConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBaselineConfigResult::~GetBaselineConfigResult()
{}

void GetBaselineConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HourSlaDetail"].isNull())
		data_.hourSlaDetail = dataNode["HourSlaDetail"].asString();
	if(!dataNode["IsDefault"].isNull())
		data_.isDefault = dataNode["IsDefault"].asString() == "true";
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["SlaMinu"].isNull())
		data_.slaMinu = std::stoi(dataNode["SlaMinu"].asString());
	if(!dataNode["SlaHour"].isNull())
		data_.slaHour = std::stoi(dataNode["SlaHour"].asString());
	if(!dataNode["BaselineId"].isNull())
		data_.baselineId = std::stol(dataNode["BaselineId"].asString());
	if(!dataNode["BaselineName"].isNull())
		data_.baselineName = dataNode["BaselineName"].asString();
	if(!dataNode["HourExpDetail"].isNull())
		data_.hourExpDetail = dataNode["HourExpDetail"].asString();
	if(!dataNode["UseFlag"].isNull())
		data_.useFlag = dataNode["UseFlag"].asString() == "true";
	if(!dataNode["ExpHour"].isNull())
		data_.expHour = std::stoi(dataNode["ExpHour"].asString());
	if(!dataNode["BaselineType"].isNull())
		data_.baselineType = dataNode["BaselineType"].asString();
	if(!dataNode["ExpMinu"].isNull())
		data_.expMinu = std::stoi(dataNode["ExpMinu"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetBaselineConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetBaselineConfigResult::Data GetBaselineConfigResult::getData()const
{
	return data_;
}

std::string GetBaselineConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetBaselineConfigResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetBaselineConfigResult::getSuccess()const
{
	return success_;
}

