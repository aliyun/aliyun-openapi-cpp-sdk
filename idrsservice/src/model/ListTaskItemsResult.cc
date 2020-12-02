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

#include <alibabacloud/idrsservice/model/ListTaskItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

ListTaskItemsResult::ListTaskItemsResult() :
	ServiceResult()
{}

ListTaskItemsResult::ListTaskItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskItemsResult::~ListTaskItemsResult()
{}

void ListTaskItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CreatedAt"].isNull())
			dataObject.createdAt = valueDataDataItem["CreatedAt"].asString();
		if(!valueDataDataItem["Message"].isNull())
			dataObject.message = valueDataDataItem["Message"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Output"].isNull())
			dataObject.output = valueDataDataItem["Output"].asString();
		if(!valueDataDataItem["SegmentSeq"].isNull())
			dataObject.segmentSeq = std::stol(valueDataDataItem["SegmentSeq"].asString());
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListTaskItemsResult::getMessage()const
{
	return message_;
}

std::vector<ListTaskItemsResult::DataItem> ListTaskItemsResult::getData()const
{
	return data_;
}

std::string ListTaskItemsResult::getCode()const
{
	return code_;
}

