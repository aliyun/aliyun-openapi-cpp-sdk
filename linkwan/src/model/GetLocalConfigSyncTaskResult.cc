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

#include <alibabacloud/linkwan/model/GetLocalConfigSyncTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetLocalConfigSyncTaskResult::GetLocalConfigSyncTaskResult() :
	ServiceResult()
{}

GetLocalConfigSyncTaskResult::GetLocalConfigSyncTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLocalConfigSyncTaskResult::~GetLocalConfigSyncTaskResult()
{}

void GetLocalConfigSyncTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["CreateMillis"].isNull())
		data_.createMillis = std::stol(dataNode["CreateMillis"].asString());
	if(!dataNode["ModifiedMillis"].isNull())
		data_.modifiedMillis = std::stol(dataNode["ModifiedMillis"].asString());
	if(!dataNode["DevType"].isNull())
		data_.devType = dataNode["DevType"].asString();
	if(!dataNode["TaskTYpe"].isNull())
		data_.taskTYpe = dataNode["TaskTYpe"].asString();
	if(!dataNode["Eui"].isNull())
		data_.eui = dataNode["Eui"].asString();
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
	if(!dataNode["D2dAddr"].isNull())
		data_.d2dAddr = dataNode["D2dAddr"].asString();
	if(!dataNode["D2dKey"].isNull())
		data_.d2dKey = dataNode["D2dKey"].asString();
	if(!dataNode["Freq"].isNull())
		data_.freq = std::stoi(dataNode["Freq"].asString());
	if(!dataNode["Datr"].isNull())
		data_.datr = std::stoi(dataNode["Datr"].asString());
	if(!dataNode["ProcessingMillis"].isNull())
		data_.processingMillis = std::stol(dataNode["ProcessingMillis"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetLocalConfigSyncTaskResult::Data GetLocalConfigSyncTaskResult::getData()const
{
	return data_;
}

std::string GetLocalConfigSyncTaskResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetLocalConfigSyncTaskResult::getCode()const
{
	return code_;
}

bool GetLocalConfigSyncTaskResult::getSuccess()const
{
	return success_;
}

