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

#include <alibabacloud/dataworks-public/model/GetMetaDBTableListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaDBTableListResult::GetMetaDBTableListResult() :
	ServiceResult()
{}

GetMetaDBTableListResult::GetMetaDBTableListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaDBTableListResult::~GetMetaDBTableListResult()
{}

void GetMetaDBTableListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allTableEntityListNode = dataNode["TableEntityList"]["TableEntityListItem"];
	for (auto dataNodeTableEntityListTableEntityListItem : allTableEntityListNode)
	{
		Data::TableEntityListItem tableEntityListItemObject;
		if(!dataNodeTableEntityListTableEntityListItem["TableName"].isNull())
			tableEntityListItemObject.tableName = dataNodeTableEntityListTableEntityListItem["TableName"].asString();
		if(!dataNodeTableEntityListTableEntityListItem["TableGuid"].isNull())
			tableEntityListItemObject.tableGuid = dataNodeTableEntityListTableEntityListItem["TableGuid"].asString();
		if(!dataNodeTableEntityListTableEntityListItem["DatabaseName"].isNull())
			tableEntityListItemObject.databaseName = dataNodeTableEntityListTableEntityListItem["DatabaseName"].asString();
		data_.tableEntityList.push_back(tableEntityListItemObject);
	}

}

GetMetaDBTableListResult::Data GetMetaDBTableListResult::getData()const
{
	return data_;
}

