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

#include <alibabacloud/mse/model/CloneNacosConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CloneNacosConfigResult::CloneNacosConfigResult() :
	ServiceResult()
{}

CloneNacosConfigResult::CloneNacosConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CloneNacosConfigResult::~CloneNacosConfigResult()
{}

void CloneNacosConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SuccCount"].isNull())
		data_.succCount = std::stoi(dataNode["SuccCount"].asString());
	if(!dataNode["SkipCount"].isNull())
		data_.skipCount = std::stoi(dataNode["SkipCount"].asString());
	auto allSkipDataNode = dataNode["SkipData"]["SkipDataItem"];
	for (auto dataNodeSkipDataSkipDataItem : allSkipDataNode)
	{
		Data::SkipDataItem skipDataItemObject;
		if(!dataNodeSkipDataSkipDataItem["DataId"].isNull())
			skipDataItemObject.dataId = dataNodeSkipDataSkipDataItem["DataId"].asString();
		if(!dataNodeSkipDataSkipDataItem["Group"].isNull())
			skipDataItemObject.group = dataNodeSkipDataSkipDataItem["Group"].asString();
		data_.skipData.push_back(skipDataItemObject);
	}
	auto allFailDataNode = dataNode["FailData"]["FailDataItem"];
	for (auto dataNodeFailDataFailDataItem : allFailDataNode)
	{
		Data::FailDataItem failDataItemObject;
		if(!dataNodeFailDataFailDataItem["DataId"].isNull())
			failDataItemObject.dataId = dataNodeFailDataFailDataItem["DataId"].asString();
		if(!dataNodeFailDataFailDataItem["Group"].isNull())
			failDataItemObject.group = dataNodeFailDataFailDataItem["Group"].asString();
		data_.failData.push_back(failDataItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string CloneNacosConfigResult::getMessage()const
{
	return message_;
}

int CloneNacosConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CloneNacosConfigResult::Data CloneNacosConfigResult::getData()const
{
	return data_;
}

std::string CloneNacosConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string CloneNacosConfigResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int CloneNacosConfigResult::getCode()const
{
	return code_;
}

bool CloneNacosConfigResult::getSuccess()const
{
	return success_;
}

