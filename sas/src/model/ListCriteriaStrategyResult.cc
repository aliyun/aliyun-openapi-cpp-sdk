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

#include <alibabacloud/sas/model/ListCriteriaStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCriteriaStrategyResult::ListCriteriaStrategyResult() :
	ServiceResult()
{}

ListCriteriaStrategyResult::ListCriteriaStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCriteriaStrategyResult::~ListCriteriaStrategyResult()
{}

void ListCriteriaStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["Value"].isNull())
			dataObject.value = valueDataDataItem["Value"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListCriteriaStrategyResult::getMessage()const
{
	return message_;
}

std::vector<ListCriteriaStrategyResult::DataItem> ListCriteriaStrategyResult::getData()const
{
	return data_;
}

std::string ListCriteriaStrategyResult::getCode()const
{
	return code_;
}

bool ListCriteriaStrategyResult::getSuccess()const
{
	return success_;
}

