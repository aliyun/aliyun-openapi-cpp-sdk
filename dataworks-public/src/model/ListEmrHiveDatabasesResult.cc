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

#include <alibabacloud/dataworks-public/model/ListEmrHiveDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListEmrHiveDatabasesResult::ListEmrHiveDatabasesResult() :
	ServiceResult()
{}

ListEmrHiveDatabasesResult::ListEmrHiveDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmrHiveDatabasesResult::~ListEmrHiveDatabasesResult()
{}

void ListEmrHiveDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["HiveDatabase"];
	for (auto valueDataHiveDatabase : allDataNode)
	{
		HiveDatabase dataObject;
		if(!valueDataHiveDatabase["Name"].isNull())
			dataObject.name = valueDataHiveDatabase["Name"].asString();
		if(!valueDataHiveDatabase["Type"].isNull())
			dataObject.type = valueDataHiveDatabase["Type"].asString();
		if(!valueDataHiveDatabase["Owner"].isNull())
			dataObject.owner = valueDataHiveDatabase["Owner"].asString();
		if(!valueDataHiveDatabase["OwnerId"].isNull())
			dataObject.ownerId = valueDataHiveDatabase["OwnerId"].asString();
		if(!valueDataHiveDatabase["Comment"].isNull())
			dataObject.comment = valueDataHiveDatabase["Comment"].asString();
		if(!valueDataHiveDatabase["Location"].isNull())
			dataObject.location = valueDataHiveDatabase["Location"].asString();
		if(!valueDataHiveDatabase["Status"].isNull())
			dataObject.status = valueDataHiveDatabase["Status"].asString();
		if(!valueDataHiveDatabase["Parameters"].isNull())
			dataObject.parameters = valueDataHiveDatabase["Parameters"].asString();
		if(!valueDataHiveDatabase["GmtCreate"].isNull())
			dataObject.gmtCreate = std::stol(valueDataHiveDatabase["GmtCreate"].asString());
		if(!valueDataHiveDatabase["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataHiveDatabase["GmtModified"].asString());
		if(!valueDataHiveDatabase["OwnerType"].isNull())
			dataObject.ownerType = valueDataHiveDatabase["OwnerType"].asString();
		if(!valueDataHiveDatabase["Region"].isNull())
			dataObject.region = valueDataHiveDatabase["Region"].asString();
		data_.push_back(dataObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<ListEmrHiveDatabasesResult::HiveDatabase> ListEmrHiveDatabasesResult::getData()const
{
	return data_;
}

std::string ListEmrHiveDatabasesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListEmrHiveDatabasesResult::getErrorMessage()const
{
	return errorMessage_;
}

