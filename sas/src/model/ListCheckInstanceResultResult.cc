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

#include <alibabacloud/sas/model/ListCheckInstanceResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCheckInstanceResultResult::ListCheckInstanceResultResult() :
	ServiceResult()
{}

ListCheckInstanceResultResult::ListCheckInstanceResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckInstanceResultResult::~ListCheckInstanceResultResult()
{}

void ListCheckInstanceResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBasicDataNode = value["BasicData"]["BasicDataItem"];
	for (auto valueBasicDataBasicDataItem : allBasicDataNode)
	{
		BasicDataItem basicDataObject;
		if(!valueBasicDataBasicDataItem["Id"].isNull())
			basicDataObject.id = std::stol(valueBasicDataBasicDataItem["Id"].asString());
		if(!valueBasicDataBasicDataItem["Status"].isNull())
			basicDataObject.status = valueBasicDataBasicDataItem["Status"].asString();
		if(!valueBasicDataBasicDataItem["RegionId"].isNull())
			basicDataObject.regionId = valueBasicDataBasicDataItem["RegionId"].asString();
		if(!valueBasicDataBasicDataItem["InstanceId"].isNull())
			basicDataObject.instanceId = valueBasicDataBasicDataItem["InstanceId"].asString();
		if(!valueBasicDataBasicDataItem["InstanceName"].isNull())
			basicDataObject.instanceName = valueBasicDataBasicDataItem["InstanceName"].asString();
		if(!valueBasicDataBasicDataItem["StatusMessage"].isNull())
			basicDataObject.statusMessage = valueBasicDataBasicDataItem["StatusMessage"].asString();
		basicData_.push_back(basicDataObject);
	}
	auto allColumnsNode = value["Columns"]["ColumnsItem"];
	for (auto valueColumnsColumnsItem : allColumnsNode)
	{
		ColumnsItem columnsObject;
		if(!valueColumnsColumnsItem["Type"].isNull())
			columnsObject.type = valueColumnsColumnsItem["Type"].asString();
		if(!valueColumnsColumnsItem["Key"].isNull())
			columnsObject.key = valueColumnsColumnsItem["Key"].asString();
		if(!valueColumnsColumnsItem["ShowName"].isNull())
			columnsObject.showName = valueColumnsColumnsItem["ShowName"].asString();
		if(!valueColumnsColumnsItem["Search"].isNull())
			columnsObject.search = valueColumnsColumnsItem["Search"].asString() == "true";
		if(!valueColumnsColumnsItem["SearchKey"].isNull())
			columnsObject.searchKey = valueColumnsColumnsItem["SearchKey"].asString();
		auto allGridsNode = valueColumnsColumnsItem["Grids"]["GridsItem"];
		for (auto valueColumnsColumnsItemGridsGridsItem : allGridsNode)
		{
			ColumnsItem::GridsItem gridsObject;
			if(!valueColumnsColumnsItemGridsGridsItem["Type"].isNull())
				gridsObject.type = valueColumnsColumnsItemGridsGridsItem["Type"].asString();
			if(!valueColumnsColumnsItemGridsGridsItem["Key"].isNull())
				gridsObject.key = valueColumnsColumnsItemGridsGridsItem["Key"].asString();
			if(!valueColumnsColumnsItemGridsGridsItem["ShowName"].isNull())
				gridsObject.showName = valueColumnsColumnsItemGridsGridsItem["ShowName"].asString();
			columnsObject.grids.push_back(gridsObject);
		}
		columns_.push_back(columnsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["NextToken"].isNull())
		pageInfo_.nextToken = pageInfoNode["NextToken"].asString();
	if(!pageInfoNode["MaxResults"].isNull())
		pageInfo_.maxResults = std::stoi(pageInfoNode["MaxResults"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = pageInfoNode["Count"].asString();
	auto allChecks = value["Checks"]["Checks"];
	for (const auto &item : allChecks)
		checks_.push_back(item.asString());

}

ListCheckInstanceResultResult::PageInfo ListCheckInstanceResultResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<std::string> ListCheckInstanceResultResult::getChecks()const
{
	return checks_;
}

std::vector<ListCheckInstanceResultResult::ColumnsItem> ListCheckInstanceResultResult::getColumns()const
{
	return columns_;
}

std::vector<ListCheckInstanceResultResult::BasicDataItem> ListCheckInstanceResultResult::getBasicData()const
{
	return basicData_;
}

