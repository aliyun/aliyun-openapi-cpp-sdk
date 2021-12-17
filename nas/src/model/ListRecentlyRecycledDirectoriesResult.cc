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

#include <alibabacloud/nas/model/ListRecentlyRecycledDirectoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

ListRecentlyRecycledDirectoriesResult::ListRecentlyRecycledDirectoriesResult() :
	ServiceResult()
{}

ListRecentlyRecycledDirectoriesResult::ListRecentlyRecycledDirectoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecentlyRecycledDirectoriesResult::~ListRecentlyRecycledDirectoriesResult()
{}

void ListRecentlyRecycledDirectoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntriesNode = value["Entries"]["Entry"];
	for (auto valueEntriesEntry : allEntriesNode)
	{
		Entry entriesObject;
		if(!valueEntriesEntry["FileId"].isNull())
			entriesObject.fileId = valueEntriesEntry["FileId"].asString();
		if(!valueEntriesEntry["Path"].isNull())
			entriesObject.path = valueEntriesEntry["Path"].asString();
		if(!valueEntriesEntry["Name"].isNull())
			entriesObject.name = valueEntriesEntry["Name"].asString();
		if(!valueEntriesEntry["LastDeleteTime"].isNull())
			entriesObject.lastDeleteTime = valueEntriesEntry["LastDeleteTime"].asString();
		entries_.push_back(entriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListRecentlyRecycledDirectoriesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListRecentlyRecycledDirectoriesResult::Entry> ListRecentlyRecycledDirectoriesResult::getEntries()const
{
	return entries_;
}

