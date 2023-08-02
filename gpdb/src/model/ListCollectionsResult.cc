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

#include <alibabacloud/gpdb/model/ListCollectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

ListCollectionsResult::ListCollectionsResult() :
	ServiceResult()
{}

ListCollectionsResult::ListCollectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCollectionsResult::~ListCollectionsResult()
{}

void ListCollectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCollections = value["Collections"]["Collection"];
	for (const auto &item : allCollections)
		collections_.push_back(item.asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string ListCollectionsResult::getStatus()const
{
	return status_;
}

std::string ListCollectionsResult::getMessage()const
{
	return message_;
}

std::string ListCollectionsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string ListCollectionsResult::get_Namespace()const
{
	return _namespace_;
}

int ListCollectionsResult::getCount()const
{
	return count_;
}

std::string ListCollectionsResult::getRegionId()const
{
	return regionId_;
}

std::vector<std::string> ListCollectionsResult::getCollections()const
{
	return collections_;
}

