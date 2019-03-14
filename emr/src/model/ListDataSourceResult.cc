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
	auto allDataSourceList = value["DataSourceList"]["DataSource"];
	for (auto value : allDataSourceList)
	{
		DataSource dataSourceListObject;
		if(!value["Id"].isNull())
			dataSourceListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			dataSourceListObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			dataSourceListObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			dataSourceListObject.status = value["Status"].asString();
		if(!value["SourceType"].isNull())
			dataSourceListObject.sourceType = value["SourceType"].asString();
		if(!value["CreateFrom"].isNull())
			dataSourceListObject.createFrom = value["CreateFrom"].asString();
		if(!value["Conf"].isNull())
			dataSourceListObject.conf = value["Conf"].asString();
		if(!value["ClusterId"].isNull())
			dataSourceListObject.clusterId = value["ClusterId"].asString();
		if(!value["Creator"].isNull())
			dataSourceListObject.creator = value["Creator"].asString();
		if(!value["Modifier"].isNull())
			dataSourceListObject.modifier = value["Modifier"].asString();
		if(!value["GmtCreate"].isNull())
			dataSourceListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			dataSourceListObject.gmtModified = std::stol(value["GmtModified"].asString());
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

