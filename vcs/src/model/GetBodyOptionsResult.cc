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

#include <alibabacloud/vcs/model/GetBodyOptionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetBodyOptionsResult::GetBodyOptionsResult() :
	ServiceResult()
{}

GetBodyOptionsResult::GetBodyOptionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBodyOptionsResult::~GetBodyOptionsResult()
{}

void GetBodyOptionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Key"].isNull())
			dataObject.key = valueDataDataItem["Key"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		auto allOptionListNode = allDataNode["OptionList"]["OptionListItem"];
		for (auto allDataNodeOptionListOptionListItem : allOptionListNode)
		{
			DataItem::OptionListItem optionListObject;
			if(!allDataNodeOptionListOptionListItem["Key"].isNull())
				optionListObject.key = allDataNodeOptionListOptionListItem["Key"].asString();
			if(!allDataNodeOptionListOptionListItem["Name"].isNull())
				optionListObject.name = allDataNodeOptionListOptionListItem["Name"].asString();
			dataObject.optionList.push_back(optionListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetBodyOptionsResult::getMessage()const
{
	return message_;
}

std::vector<GetBodyOptionsResult::DataItem> GetBodyOptionsResult::getData()const
{
	return data_;
}

std::string GetBodyOptionsResult::getCode()const
{
	return code_;
}

