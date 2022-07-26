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

#include <alibabacloud/oos/model/ListInventoryEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListInventoryEntriesResult::ListInventoryEntriesResult() :
	ServiceResult()
{}

ListInventoryEntriesResult::ListInventoryEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInventoryEntriesResult::~ListInventoryEntriesResult()
{}

void ListInventoryEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntries = value["Entries"]["Entries"];
	for (const auto &item : allEntries)
		entries_.push_back(item.asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["SchemaVersion"].isNull())
		schemaVersion_ = value["SchemaVersion"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["CaptureTime"].isNull())
		captureTime_ = value["CaptureTime"].asString();
	if(!value["TypeName"].isNull())
		typeName_ = value["TypeName"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string ListInventoryEntriesResult::getTypeName()const
{
	return typeName_;
}

std::string ListInventoryEntriesResult::getCaptureTime()const
{
	return captureTime_;
}

std::string ListInventoryEntriesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListInventoryEntriesResult::getSchemaVersion()const
{
	return schemaVersion_;
}

std::string ListInventoryEntriesResult::getInstanceId()const
{
	return instanceId_;
}

int ListInventoryEntriesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<std::string> ListInventoryEntriesResult::getEntries()const
{
	return entries_;
}

