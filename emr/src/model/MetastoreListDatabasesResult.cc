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

#include <alibabacloud/emr/model/MetastoreListDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListDatabasesResult::MetastoreListDatabasesResult() :
	ServiceResult()
{}

MetastoreListDatabasesResult::MetastoreListDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListDatabasesResult::~MetastoreListDatabasesResult()
{}

void MetastoreListDatabasesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDatabaseList = value["DatabaseList"]["Database"];
	for (auto value : allDatabaseList)
	{
		Database databaseListObject;
		if(!value["Id"].isNull())
			databaseListObject.id = value["Id"].asString();
		if(!value["ClusterBizId"].isNull())
			databaseListObject.clusterBizId = value["ClusterBizId"].asString();
		if(!value["ClusterName"].isNull())
			databaseListObject.clusterName = value["ClusterName"].asString();
		if(!value["DatabaseName"].isNull())
			databaseListObject.databaseName = value["DatabaseName"].asString();
		if(!value["DatabaseType"].isNull())
			databaseListObject.databaseType = value["DatabaseType"].asString();
		if(!value["Owner"].isNull())
			databaseListObject.owner = value["Owner"].asString();
		if(!value["OwnerType"].isNull())
			databaseListObject.ownerType = value["OwnerType"].asString();
		if(!value["Location"].isNull())
			databaseListObject.location = value["Location"].asString();
		if(!value["Status"].isNull())
			databaseListObject.status = value["Status"].asString();
		if(!value["DatabaseParameters"].isNull())
			databaseListObject.databaseParameters = value["DatabaseParameters"].asString();
		if(!value["GmtCreate"].isNull())
			databaseListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			databaseListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["LocationType"].isNull())
			databaseListObject.locationType = value["LocationType"].asString();
		if(!value["DatabaseComment"].isNull())
			databaseListObject.databaseComment = value["DatabaseComment"].asString();
		databaseList_.push_back(databaseListObject);
	}
	auto allDbNames = value["DbNames"]["DbName"];
	for (const auto &item : allDbNames)
		dbNames_.push_back(item.asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<std::string> MetastoreListDatabasesResult::getDbNames()const
{
	return dbNames_;
}

int MetastoreListDatabasesResult::getTotalCount()const
{
	return totalCount_;
}

std::string MetastoreListDatabasesResult::getDescription()const
{
	return description_;
}

std::vector<MetastoreListDatabasesResult::Database> MetastoreListDatabasesResult::getDatabaseList()const
{
	return databaseList_;
}

int MetastoreListDatabasesResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListDatabasesResult::getPageNumber()const
{
	return pageNumber_;
}

