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

#include <alibabacloud/schedulerx3/model/ListLablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListLablesResult::ListLablesResult() :
	ServiceResult()
{}

ListLablesResult::ListLablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLablesResult::~ListLablesResult()
{}

void ListLablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Label"].isNull())
			dataObject.label = valueDatadataItem["Label"].asString();
		if(!valueDatadataItem["Online"].isNull())
			dataObject.online = valueDatadataItem["Online"].asString() == "true";
		if(!valueDatadataItem["Size"].isNull())
			dataObject.size = std::stoi(valueDatadataItem["Size"].asString());
		if(!valueDatadataItem["IsDesignated"].isNull())
			dataObject.isDesignated = valueDatadataItem["IsDesignated"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListLablesResult::getMessage()const
{
	return message_;
}

std::vector<ListLablesResult::DataItem> ListLablesResult::getData()const
{
	return data_;
}

int ListLablesResult::getCode()const
{
	return code_;
}

bool ListLablesResult::getSuccess()const
{
	return success_;
}

