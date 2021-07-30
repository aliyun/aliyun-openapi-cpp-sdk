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

#include <alibabacloud/dyvmsapi/model/ListCallTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

ListCallTaskResult::ListCallTaskResult() :
	ServiceResult()
{}

ListCallTaskResult::ListCallTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCallTaskResult::~ListCallTaskResult()
{}

void ListCallTaskResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["TaskName"].isNull())
			dataObject.taskName = valueDataDataItem["TaskName"].asString();
		if(!valueDataDataItem["TemplateName"].isNull())
			dataObject.templateName = valueDataDataItem["TemplateName"].asString();
		if(!valueDataDataItem["BizType"].isNull())
			dataObject.bizType = valueDataDataItem["BizType"].asString();
		if(!valueDataDataItem["Resource"].isNull())
			dataObject.resource = valueDataDataItem["Resource"].asString();
		if(!valueDataDataItem["FireTime"].isNull())
			dataObject.fireTime = valueDataDataItem["FireTime"].asString();
		if(!valueDataDataItem["CompleteTime"].isNull())
			dataObject.completeTime = valueDataDataItem["CompleteTime"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["StopTime"].isNull())
			dataObject.stopTime = valueDataDataItem["StopTime"].asString();
		if(!valueDataDataItem["TemplateCode"].isNull())
			dataObject.templateCode = valueDataDataItem["TemplateCode"].asString();
		if(!valueDataDataItem["Data"].isNull())
			dataObject.data = valueDataDataItem["Data"].asString();
		if(!valueDataDataItem["DataType"].isNull())
			dataObject.dataType = valueDataDataItem["DataType"].asString();
		if(!valueDataDataItem["TotalCount"].isNull())
			dataObject.totalCount = std::stol(valueDataDataItem["TotalCount"].asString());
		if(!valueDataDataItem["CompletedCount"].isNull())
			dataObject.completedCount = std::stol(valueDataDataItem["CompletedCount"].asString());
		if(!valueDataDataItem["CompletedRate"].isNull())
			dataObject.completedRate = std::stoi(valueDataDataItem["CompletedRate"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListCallTaskResult::getPageSize()const
{
	return pageSize_;
}

long ListCallTaskResult::getPageNumber()const
{
	return pageNumber_;
}

long ListCallTaskResult::getTotal()const
{
	return total_;
}

std::vector<ListCallTaskResult::DataItem> ListCallTaskResult::getData()const
{
	return data_;
}

std::string ListCallTaskResult::getCode()const
{
	return code_;
}

