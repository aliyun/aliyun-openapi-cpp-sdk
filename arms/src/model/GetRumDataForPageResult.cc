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

#include <alibabacloud/arms/model/GetRumDataForPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetRumDataForPageResult::GetRumDataForPageResult() :
	ServiceResult()
{}

GetRumDataForPageResult::GetRumDataForPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRumDataForPageResult::~GetRumDataForPageResult()
{}

void GetRumDataForPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = dataNode["Total"].asString();
	if(!dataNode["Page"].isNull())
		data_.page = dataNode["Page"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	if(!dataNode["Authentication"].isNull())
		data_.authentication = dataNode["Authentication"].asString();
	if(!dataNode["Completion"].isNull())
		data_.completion = dataNode["Completion"].asString();
	if(!dataNode["Preference"].isNull())
		data_.preference = dataNode["Preference"].asString();
		auto allItems = dataNode["Items"]["items"];
		for (auto value : allItems)
			data_.items.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();

}

std::string GetRumDataForPageResult::getMessage()const
{
	return message_;
}

std::string GetRumDataForPageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetRumDataForPageResult::Data GetRumDataForPageResult::getData()const
{
	return data_;
}

std::string GetRumDataForPageResult::getCode()const
{
	return code_;
}

std::string GetRumDataForPageResult::getSuccess()const
{
	return success_;
}

