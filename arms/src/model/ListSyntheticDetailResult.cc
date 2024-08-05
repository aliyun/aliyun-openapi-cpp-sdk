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

#include <alibabacloud/arms/model/ListSyntheticDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListSyntheticDetailResult::ListSyntheticDetailResult() :
	ServiceResult()
{}

ListSyntheticDetailResult::ListSyntheticDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSyntheticDetailResult::~ListSyntheticDetailResult()
{}

void ListSyntheticDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TaskCreateTime"].isNull())
		data_.taskCreateTime = std::stol(dataNode["TaskCreateTime"].asString());
		auto allItems = dataNode["Items"]["Item"];
		for (auto value : allItems)
			data_.items.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSyntheticDetailResult::getMessage()const
{
	return message_;
}

ListSyntheticDetailResult::Data ListSyntheticDetailResult::getData()const
{
	return data_;
}

long ListSyntheticDetailResult::getCode()const
{
	return code_;
}

