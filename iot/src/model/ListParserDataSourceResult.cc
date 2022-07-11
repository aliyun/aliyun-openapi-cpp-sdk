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

#include <alibabacloud/iot/model/ListParserDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListParserDataSourceResult::ListParserDataSourceResult() :
	ServiceResult()
{}

ListParserDataSourceResult::ListParserDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListParserDataSourceResult::~ListParserDataSourceResult()
{}

void ListParserDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataSource"];
	for (auto valueDataDataSource : allDataNode)
	{
		DataSource dataObject;
		if(!valueDataDataSource["Name"].isNull())
			dataObject.name = valueDataDataSource["Name"].asString();
		if(!valueDataDataSource["Description"].isNull())
			dataObject.description = valueDataDataSource["Description"].asString();
		if(!valueDataDataSource["DataSourceId"].isNull())
			dataObject.dataSourceId = std::stol(valueDataDataSource["DataSourceId"].asString());
		if(!valueDataDataSource["UtcCreated"].isNull())
			dataObject.utcCreated = valueDataDataSource["UtcCreated"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListParserDataSourceResult::getPageSize()const
{
	return pageSize_;
}

int ListParserDataSourceResult::getTotal()const
{
	return total_;
}

std::vector<ListParserDataSourceResult::DataSource> ListParserDataSourceResult::getData()const
{
	return data_;
}

int ListParserDataSourceResult::getPage()const
{
	return page_;
}

std::string ListParserDataSourceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListParserDataSourceResult::getCode()const
{
	return code_;
}

bool ListParserDataSourceResult::getSuccess()const
{
	return success_;
}

