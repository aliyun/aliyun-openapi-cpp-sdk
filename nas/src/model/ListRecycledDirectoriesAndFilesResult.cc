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

#include <alibabacloud/nas/model/ListRecycledDirectoriesAndFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

ListRecycledDirectoriesAndFilesResult::ListRecycledDirectoriesAndFilesResult() :
	ServiceResult()
{}

ListRecycledDirectoriesAndFilesResult::ListRecycledDirectoriesAndFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecycledDirectoriesAndFilesResult::~ListRecycledDirectoriesAndFilesResult()
{}

void ListRecycledDirectoriesAndFilesResult::parse(const std::string &payload)
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
		if(!valueEntriesEntry["Type"].isNull())
			entriesObject.type = valueEntriesEntry["Type"].asString();
		if(!valueEntriesEntry["Name"].isNull())
			entriesObject.name = valueEntriesEntry["Name"].asString();
		if(!valueEntriesEntry["DeleteTime"].isNull())
			entriesObject.deleteTime = valueEntriesEntry["DeleteTime"].asString();
		if(!valueEntriesEntry["Inode"].isNull())
			entriesObject.inode = valueEntriesEntry["Inode"].asString();
		if(!valueEntriesEntry["ATime"].isNull())
			entriesObject.aTime = valueEntriesEntry["ATime"].asString();
		if(!valueEntriesEntry["MTime"].isNull())
			entriesObject.mTime = valueEntriesEntry["MTime"].asString();
		if(!valueEntriesEntry["CTime"].isNull())
			entriesObject.cTime = valueEntriesEntry["CTime"].asString();
		if(!valueEntriesEntry["Size"].isNull())
			entriesObject.size = std::stol(valueEntriesEntry["Size"].asString());
		entries_.push_back(entriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListRecycledDirectoriesAndFilesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListRecycledDirectoriesAndFilesResult::Entry> ListRecycledDirectoriesAndFilesResult::getEntries()const
{
	return entries_;
}

