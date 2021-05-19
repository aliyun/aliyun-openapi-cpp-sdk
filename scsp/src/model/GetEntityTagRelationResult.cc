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

#include <alibabacloud/scsp/model/GetEntityTagRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetEntityTagRelationResult::GetEntityTagRelationResult() :
	ServiceResult()
{}

GetEntityTagRelationResult::GetEntityTagRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEntityTagRelationResult::~GetEntityTagRelationResult()
{}

void GetEntityTagRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["TagName"].isNull())
			dataObject.tagName = valueDataDataItem["TagName"].asString();
		if(!valueDataDataItem["TagGroupCode"].isNull())
			dataObject.tagGroupCode = valueDataDataItem["TagGroupCode"].asString();
		if(!valueDataDataItem["EntityId"].isNull())
			dataObject.entityId = valueDataDataItem["EntityId"].asString();
		if(!valueDataDataItem["TagCode"].isNull())
			dataObject.tagCode = valueDataDataItem["TagCode"].asString();
		if(!valueDataDataItem["EntityType"].isNull())
			dataObject.entityType = valueDataDataItem["EntityType"].asString();
		if(!valueDataDataItem["TagGroupName"].isNull())
			dataObject.tagGroupName = valueDataDataItem["TagGroupName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetEntityTagRelationResult::getMessage()const
{
	return message_;
}

std::vector<GetEntityTagRelationResult::DataItem> GetEntityTagRelationResult::getData()const
{
	return data_;
}

std::string GetEntityTagRelationResult::getCode()const
{
	return code_;
}

bool GetEntityTagRelationResult::getSuccess()const
{
	return success_;
}

