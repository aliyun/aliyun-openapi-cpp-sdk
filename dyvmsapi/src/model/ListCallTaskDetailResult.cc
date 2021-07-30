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

#include <alibabacloud/dyvmsapi/model/ListCallTaskDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

ListCallTaskDetailResult::ListCallTaskDetailResult() :
	ServiceResult()
{}

ListCallTaskDetailResult::ListCallTaskDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCallTaskDetailResult::~ListCallTaskDetailResult()
{}

void ListCallTaskDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Caller"].isNull())
			dataObject.caller = valueDataDataItem["Caller"].asString();
		if(!valueDataDataItem["CalledNum"].isNull())
			dataObject.calledNum = valueDataDataItem["CalledNum"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["Duration"].isNull())
			dataObject.duration = std::stol(valueDataDataItem["Duration"].asString());
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stol(value["TotalPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long ListCallTaskDetailResult::getTotalPage()const
{
	return totalPage_;
}

long ListCallTaskDetailResult::getPageSize()const
{
	return pageSize_;
}

long ListCallTaskDetailResult::getPageNumber()const
{
	return pageNumber_;
}

long ListCallTaskDetailResult::getTotal()const
{
	return total_;
}

std::vector<ListCallTaskDetailResult::DataItem> ListCallTaskDetailResult::getData()const
{
	return data_;
}

std::string ListCallTaskDetailResult::getCode()const
{
	return code_;
}

