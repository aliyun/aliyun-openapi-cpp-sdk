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

#include <alibabacloud/schedulerx3/model/ListExecutorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListExecutorsResult::ListExecutorsResult() :
	ServiceResult()
{}

ListExecutorsResult::ListExecutorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutorsResult::~ListExecutorsResult()
{}

void ListExecutorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Address"].isNull())
			dataObject.address = valueDatadataItem["Address"].asString();
		if(!valueDatadataItem["Ip"].isNull())
			dataObject.ip = valueDatadataItem["Ip"].asString();
		if(!valueDatadataItem["Port"].isNull())
			dataObject.port = std::stoi(valueDatadataItem["Port"].asString());
		if(!valueDatadataItem["Label"].isNull())
			dataObject.label = valueDatadataItem["Label"].asString();
		if(!valueDatadataItem["Version"].isNull())
			dataObject.version = valueDatadataItem["Version"].asString();
		if(!valueDatadataItem["Online"].isNull())
			dataObject.online = valueDatadataItem["Online"].asString() == "true";
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

std::string ListExecutorsResult::getMessage()const
{
	return message_;
}

std::vector<ListExecutorsResult::DataItem> ListExecutorsResult::getData()const
{
	return data_;
}

int ListExecutorsResult::getCode()const
{
	return code_;
}

bool ListExecutorsResult::getSuccess()const
{
	return success_;
}

