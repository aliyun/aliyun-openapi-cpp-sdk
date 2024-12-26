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

#include <alibabacloud/schedulerx3/model/ListAppNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListAppNamesResult::ListAppNamesResult() :
	ServiceResult()
{}

ListAppNamesResult::ListAppNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppNamesResult::~ListAppNamesResult()
{}

void ListAppNamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Id"].isNull())
			dataObject.id = std::stol(valueDatadataItem["Id"].asString());
		if(!valueDatadataItem["AppName"].isNull())
			dataObject.appName = valueDatadataItem["AppName"].asString();
		if(!valueDatadataItem["Title"].isNull())
			dataObject.title = valueDatadataItem["Title"].asString();
		if(!valueDatadataItem["AppGroupId"].isNull())
			dataObject.appGroupId = valueDatadataItem["AppGroupId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAppNamesResult::getMessage()const
{
	return message_;
}

std::vector<ListAppNamesResult::DataItem> ListAppNamesResult::getData()const
{
	return data_;
}

int ListAppNamesResult::getCode()const
{
	return code_;
}

bool ListAppNamesResult::getSuccess()const
{
	return success_;
}

