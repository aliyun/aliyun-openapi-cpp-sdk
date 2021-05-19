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

#include <alibabacloud/scsp/model/GetTagListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetTagListResult::GetTagListResult() :
	ServiceResult()
{}

GetTagListResult::GetTagListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTagListResult::~GetTagListResult()
{}

void GetTagListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ScenarioCode"].isNull())
			dataObject.scenarioCode = valueDataDataItem["ScenarioCode"].asString();
		if(!valueDataDataItem["TagGroupCode"].isNull())
			dataObject.tagGroupCode = valueDataDataItem["TagGroupCode"].asString();
		if(!valueDataDataItem["TagGroupName"].isNull())
			dataObject.tagGroupName = valueDataDataItem["TagGroupName"].asString();
		auto allTagValuesNode = valueDataDataItem["TagValues"]["TagValuesItem"];
		for (auto valueDataDataItemTagValuesTagValuesItem : allTagValuesNode)
		{
			DataItem::TagValuesItem tagValuesObject;
			if(!valueDataDataItemTagValuesTagValuesItem["Status"].isNull())
				tagValuesObject.status = valueDataDataItemTagValuesTagValuesItem["Status"].asString();
			if(!valueDataDataItemTagValuesTagValuesItem["Description"].isNull())
				tagValuesObject.description = valueDataDataItemTagValuesTagValuesItem["Description"].asString();
			if(!valueDataDataItemTagValuesTagValuesItem["TagName"].isNull())
				tagValuesObject.tagName = valueDataDataItemTagValuesTagValuesItem["TagName"].asString();
			if(!valueDataDataItemTagValuesTagValuesItem["TagGroupCode"].isNull())
				tagValuesObject.tagGroupCode = valueDataDataItemTagValuesTagValuesItem["TagGroupCode"].asString();
			if(!valueDataDataItemTagValuesTagValuesItem["TagCode"].isNull())
				tagValuesObject.tagCode = valueDataDataItemTagValuesTagValuesItem["TagCode"].asString();
			if(!valueDataDataItemTagValuesTagValuesItem["TagGroupName"].isNull())
				tagValuesObject.tagGroupName = valueDataDataItemTagValuesTagValuesItem["TagGroupName"].asString();
			if(!valueDataDataItemTagValuesTagValuesItem["EntityRelationNumber"].isNull())
				tagValuesObject.entityRelationNumber = valueDataDataItemTagValuesTagValuesItem["EntityRelationNumber"].asString();
			dataObject.tagValues.push_back(tagValuesObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetTagListResult::getMessage()const
{
	return message_;
}

std::vector<GetTagListResult::DataItem> GetTagListResult::getData()const
{
	return data_;
}

std::string GetTagListResult::getCode()const
{
	return code_;
}

bool GetTagListResult::getSuccess()const
{
	return success_;
}

