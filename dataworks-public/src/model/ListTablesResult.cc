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

#include <alibabacloud/dataworks-public/model/ListTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTablesResult::ListTablesResult() :
	ServiceResult()
{}

ListTablesResult::ListTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTablesResult::~ListTablesResult()
{}

void ListTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allTableEntityListNode = dataNode["TableEntityList"]["TableEntityListItem"];
	for (auto dataNodeTableEntityListTableEntityListItem : allTableEntityListNode)
	{
		Data::TableEntityListItem tableEntityListItemObject;
		if(!dataNodeTableEntityListTableEntityListItem["EntityQualifiedName"].isNull())
			tableEntityListItemObject.entityQualifiedName = dataNodeTableEntityListTableEntityListItem["EntityQualifiedName"].asString();
		auto entityContentNode = value["EntityContent"];
		if(!entityContentNode["TableName"].isNull())
			tableEntityListItemObject.entityContent.tableName = entityContentNode["TableName"].asString();
		if(!entityContentNode["DataSourceQualifiedName"].isNull())
			tableEntityListItemObject.entityContent.dataSourceQualifiedName = entityContentNode["DataSourceQualifiedName"].asString();
		if(!entityContentNode["DataSourceUniqueId"].isNull())
			tableEntityListItemObject.entityContent.dataSourceUniqueId = entityContentNode["DataSourceUniqueId"].asString();
		if(!entityContentNode["DatabaseName"].isNull())
			tableEntityListItemObject.entityContent.databaseName = entityContentNode["DatabaseName"].asString();
		if(!entityContentNode["ProjectName"].isNull())
			tableEntityListItemObject.entityContent.projectName = entityContentNode["ProjectName"].asString();
		if(!entityContentNode["InstanceId"].isNull())
			tableEntityListItemObject.entityContent.instanceId = entityContentNode["InstanceId"].asString();
		data_.tableEntityList.push_back(tableEntityListItemObject);
	}

}

ListTablesResult::Data ListTablesResult::getData()const
{
	return data_;
}

