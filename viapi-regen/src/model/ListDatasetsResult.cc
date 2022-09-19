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

#include <alibabacloud/viapi-regen/model/ListDatasetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

ListDatasetsResult::ListDatasetsResult() :
	ServiceResult()
{}

ListDatasetsResult::ListDatasetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatasetsResult::~ListDatasetsResult()
{}

void ListDatasetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stol(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stol(dataNode["TotalPage"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
		auto allElements = dataNode["Elements"]["element"];
		for (auto value : allElements)
			data_.elements.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListDatasetsResult::getMessage()const
{
	return message_;
}

ListDatasetsResult::Data ListDatasetsResult::getData()const
{
	return data_;
}

std::string ListDatasetsResult::getCode()const
{
	return code_;
}

