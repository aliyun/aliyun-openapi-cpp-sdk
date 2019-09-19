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

#include <alibabacloud/emr/model/ListDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListDataSourceResult::ListDataSourceResult() :
	ServiceResult()
{}

ListDataSourceResult::ListDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceResult::~ListDataSourceResult()
{}

void ListDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataSourceListNode = value["DataSourceList"]["DataSource"];
	for (auto valueDataSourceListDataSource : allDataSourceListNode)
	{
		DataSource dataSourceListObject;
		if(!valueDataSourceListDataSource["Id"].isNull())
			dataSourceListObject.id = valueDataSourceListDataSource["Id"].asString();
		if(!valueDataSourceListDataSource["Name"].isNull())
			dataSourceListObject.name = valueDataSourceListDataSource["Name"].asString();
		if(!valueDataSourceListDataSource["Description"].isNull())
			dataSourceListObject.description = valueDataSourceListDataSource["Description"].asString();
		if(!valueDataSourceListDataSource["Status"].isNull())
			dataSourceListObject.status = valueDataSourceListDataSource["Status"].asString();
		if(!valueDataSourceListDataSource["SourceType"].isNull())
			dataSourceListObject.sourceType = valueDataSourceListDataSource["SourceType"].asString();
		if(!valueDataSourceListDataSource["CreateFrom"].isNull())
			dataSourceListObject.createFrom = valueDataSourceListDataSource["CreateFrom"].asString();
		if(!valueDataSourceListDataSource["Conf"].isNull())
			dataSourceListObject.conf = valueDataSourceListDataSource["Conf"].asString();
		if(!valueDataSourceListDataSource["ClusterId"].isNull())
			dataSourceListObject.clusterId = valueDataSourceListDataSource["ClusterId"].asString();
		if(!valueDataSourceListDataSource["Creator"].isNull())
			dataSourceListObject.creator = valueDataSourceListDataSource["Creator"].asString();
		if(!valueDataSourceListDataSource["Modifier"].isNull())
			dataSourceListObject.modifier = valueDataSourceListDataSource["Modifier"].asString();
		if(!valueDataSourceListDataSource["GmtCreate"].isNull())
			dataSourceListObject.gmtCreate = std::stol(valueDataSourceListDataSource["GmtCreate"].asString());
		if(!valueDataSourceListDataSource["GmtModified"].isNull())
			dataSourceListObject.gmtModified = std::stol(valueDataSourceListDataSource["GmtModified"].asString());
		dataSourceList_.push_back(dataSourceListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListDataSourceResult::getPageSize()const
{
	return pageSize_;
}

int ListDataSourceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDataSourceResult::DataSource> ListDataSourceResult::getDataSourceList()const
{
	return dataSourceList_;
}

int ListDataSourceResult::getTotal()const
{
	return total_;
}

