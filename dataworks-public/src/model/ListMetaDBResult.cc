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

#include <alibabacloud/dataworks-public/model/ListMetaDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListMetaDBResult::ListMetaDBResult() :
	ServiceResult()
{}

ListMetaDBResult::ListMetaDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMetaDBResult::~ListMetaDBResult()
{}

void ListMetaDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseInfoNode = value["DatabaseInfo"];
	if(!databaseInfoNode["TotalCount"].isNull())
		databaseInfo_.totalCount = std::stol(databaseInfoNode["TotalCount"].asString());
	auto allDbListNode = databaseInfoNode["DbList"]["DbListItem"];
	for (auto databaseInfoNodeDbListDbListItem : allDbListNode)
	{
		DatabaseInfo::DbListItem dbListItemObject;
		if(!databaseInfoNodeDbListDbListItem["Type"].isNull())
			dbListItemObject.type = databaseInfoNodeDbListDbListItem["Type"].asString();
		if(!databaseInfoNodeDbListDbListItem["CreateTimeStamp"].isNull())
			dbListItemObject.createTimeStamp = std::stol(databaseInfoNodeDbListDbListItem["CreateTimeStamp"].asString());
		if(!databaseInfoNodeDbListDbListItem["UUID"].isNull())
			dbListItemObject.uUID = databaseInfoNodeDbListDbListItem["UUID"].asString();
		if(!databaseInfoNodeDbListDbListItem["ModifiedTimeStamp"].isNull())
			dbListItemObject.modifiedTimeStamp = std::stol(databaseInfoNodeDbListDbListItem["ModifiedTimeStamp"].asString());
		if(!databaseInfoNodeDbListDbListItem["Name"].isNull())
			dbListItemObject.name = databaseInfoNodeDbListDbListItem["Name"].asString();
		if(!databaseInfoNodeDbListDbListItem["OwnerId"].isNull())
			dbListItemObject.ownerId = databaseInfoNodeDbListDbListItem["OwnerId"].asString();
		if(!databaseInfoNodeDbListDbListItem["Location"].isNull())
			dbListItemObject.location = databaseInfoNodeDbListDbListItem["Location"].asString();
		databaseInfo_.dbList.push_back(dbListItemObject);
	}

}

ListMetaDBResult::DatabaseInfo ListMetaDBResult::getDatabaseInfo()const
{
	return databaseInfo_;
}

