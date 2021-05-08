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

#include <alibabacloud/iot/model/ListJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListJobResult::ListJobResult() :
	ServiceResult()
{}

ListJobResult::ListJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobResult::~ListJobResult()
{}

void ListJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["JobId"].isNull())
			dataObject.jobId = valueDatadataItem["JobId"].asString();
		if(!valueDatadataItem["JobName"].isNull())
			dataObject.jobName = valueDatadataItem["JobName"].asString();
		if(!valueDatadataItem["UtcCreate"].isNull())
			dataObject.utcCreate = valueDatadataItem["UtcCreate"].asString();
		if(!valueDatadataItem["UtcModified"].isNull())
			dataObject.utcModified = valueDatadataItem["UtcModified"].asString();
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = valueDatadataItem["Status"].asString();
		if(!valueDatadataItem["Description"].isNull())
			dataObject.description = valueDatadataItem["Description"].asString();
		if(!valueDatadataItem["Type"].isNull())
			dataObject.type = valueDatadataItem["Type"].asString();
		if(!valueDatadataItem["ScheduledTime"].isNull())
			dataObject.scheduledTime = std::stol(valueDatadataItem["ScheduledTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());

}

int ListJobResult::getPageSize()const
{
	return pageSize_;
}

int ListJobResult::getTotal()const
{
	return total_;
}

std::vector<ListJobResult::DataItem> ListJobResult::getData()const
{
	return data_;
}

int ListJobResult::getPage()const
{
	return page_;
}

std::string ListJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListJobResult::getCode()const
{
	return code_;
}

bool ListJobResult::getSuccess()const
{
	return success_;
}

