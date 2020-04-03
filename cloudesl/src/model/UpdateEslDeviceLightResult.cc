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

#include <alibabacloud/cloudesl/model/UpdateEslDeviceLightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

UpdateEslDeviceLightResult::UpdateEslDeviceLightResult() :
	ServiceResult()
{}

UpdateEslDeviceLightResult::UpdateEslDeviceLightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateEslDeviceLightResult::~UpdateEslDeviceLightResult()
{}

void UpdateEslDeviceLightResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLightFailEslInfosNode = value["LightFailEslInfos"]["LightFailEslInfo"];
	for (auto valueLightFailEslInfosLightFailEslInfo : allLightFailEslInfosNode)
	{
		LightFailEslInfo lightFailEslInfosObject;
		if(!valueLightFailEslInfosLightFailEslInfo["ErrorMessage"].isNull())
			lightFailEslInfosObject.errorMessage = valueLightFailEslInfosLightFailEslInfo["ErrorMessage"].asString();
		if(!valueLightFailEslInfosLightFailEslInfo["EslBarCode"].isNull())
			lightFailEslInfosObject.eslBarCode = valueLightFailEslInfosLightFailEslInfo["EslBarCode"].asString();
		lightFailEslInfos_.push_back(lightFailEslInfosObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["FailCount"].isNull())
		failCount_ = std::stoi(value["FailCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateEslDeviceLightResult::getMessage()const
{
	return message_;
}

std::vector<UpdateEslDeviceLightResult::LightFailEslInfo> UpdateEslDeviceLightResult::getLightFailEslInfos()const
{
	return lightFailEslInfos_;
}

int UpdateEslDeviceLightResult::getFailCount()const
{
	return failCount_;
}

std::string UpdateEslDeviceLightResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string UpdateEslDeviceLightResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateEslDeviceLightResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string UpdateEslDeviceLightResult::getErrorMessage()const
{
	return errorMessage_;
}

int UpdateEslDeviceLightResult::getSuccessCount()const
{
	return successCount_;
}

std::string UpdateEslDeviceLightResult::getCode()const
{
	return code_;
}

bool UpdateEslDeviceLightResult::getSuccess()const
{
	return success_;
}

