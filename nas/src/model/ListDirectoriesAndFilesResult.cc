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

#include <alibabacloud/nas/model/ListDirectoriesAndFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

ListDirectoriesAndFilesResult::ListDirectoriesAndFilesResult() :
	ServiceResult()
{}

ListDirectoriesAndFilesResult::ListDirectoriesAndFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDirectoriesAndFilesResult::~ListDirectoriesAndFilesResult()
{}

void ListDirectoriesAndFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntriesNode = value["Entries"]["Entry"];
	for (auto valueEntriesEntry : allEntriesNode)
	{
		Entry entriesObject;
		if(!valueEntriesEntry["Type"].isNull())
			entriesObject.type = valueEntriesEntry["Type"].asString();
		if(!valueEntriesEntry["HasInfrequentAccessFile"].isNull())
			entriesObject.hasInfrequentAccessFile = valueEntriesEntry["HasInfrequentAccessFile"].asString() == "true";
		if(!valueEntriesEntry["Ctime"].isNull())
			entriesObject.ctime = valueEntriesEntry["Ctime"].asString();
		if(!valueEntriesEntry["Mtime"].isNull())
			entriesObject.mtime = valueEntriesEntry["Mtime"].asString();
		if(!valueEntriesEntry["Size"].isNull())
			entriesObject.size = std::stol(valueEntriesEntry["Size"].asString());
		if(!valueEntriesEntry["StorageType"].isNull())
			entriesObject.storageType = valueEntriesEntry["StorageType"].asString();
		if(!valueEntriesEntry["Atime"].isNull())
			entriesObject.atime = valueEntriesEntry["Atime"].asString();
		if(!valueEntriesEntry["Name"].isNull())
			entriesObject.name = valueEntriesEntry["Name"].asString();
		if(!valueEntriesEntry["RetrieveTime"].isNull())
			entriesObject.retrieveTime = valueEntriesEntry["RetrieveTime"].asString();
		if(!valueEntriesEntry["Inode"].isNull())
			entriesObject.inode = valueEntriesEntry["Inode"].asString();
		if(!valueEntriesEntry["FileId"].isNull())
			entriesObject.fileId = valueEntriesEntry["FileId"].asString();
		if(!valueEntriesEntry["Owner"].isNull())
			entriesObject.owner = valueEntriesEntry["Owner"].asString();
		if(!valueEntriesEntry["HasArchiveFile"].isNull())
			entriesObject.hasArchiveFile = valueEntriesEntry["HasArchiveFile"].asString();
		entries_.push_back(entriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListDirectoriesAndFilesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListDirectoriesAndFilesResult::Entry> ListDirectoriesAndFilesResult::getEntries()const
{
	return entries_;
}

