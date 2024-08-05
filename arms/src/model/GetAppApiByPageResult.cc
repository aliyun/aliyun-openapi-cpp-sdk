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

#include <alibabacloud/arms/model/GetAppApiByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetAppApiByPageResult::GetAppApiByPageResult() :
	ServiceResult()
{}

GetAppApiByPageResult::GetAppApiByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppApiByPageResult::~GetAppApiByPageResult()
{}

void GetAppApiByPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = dataNode["Total"].asString();
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	if(!dataNode["Completed"].isNull())
		data_.completed = dataNode["Completed"].asString() == "true";
		auto allItems = dataNode["Items"]["Items"];
		for (auto value : allItems)
			data_.items.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAppApiByPageResult::getMessage()const
{
	return message_;
}

GetAppApiByPageResult::Data GetAppApiByPageResult::getData()const
{
	return data_;
}

int GetAppApiByPageResult::getCode()const
{
	return code_;
}

bool GetAppApiByPageResult::getSuccess()const
{
	return success_;
}

