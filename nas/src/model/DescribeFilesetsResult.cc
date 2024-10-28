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

#include <alibabacloud/nas/model/DescribeFilesetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeFilesetsResult::DescribeFilesetsResult() :
	ServiceResult()
{}

DescribeFilesetsResult::DescribeFilesetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFilesetsResult::~DescribeFilesetsResult()
{}

void DescribeFilesetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntriesNode = value["Entries"]["Entrie"];
	for (auto valueEntriesEntrie : allEntriesNode)
	{
		Entrie entriesObject;
		if(!valueEntriesEntrie["Description"].isNull())
			entriesObject.description = valueEntriesEntrie["Description"].asString();
		if(!valueEntriesEntrie["FileSystemPath"].isNull())
			entriesObject.fileSystemPath = valueEntriesEntrie["FileSystemPath"].asString();
		if(!valueEntriesEntrie["FsetId"].isNull())
			entriesObject.fsetId = valueEntriesEntrie["FsetId"].asString();
		if(!valueEntriesEntrie["Status"].isNull())
			entriesObject.status = valueEntriesEntrie["Status"].asString();
		if(!valueEntriesEntrie["CreateTime"].isNull())
			entriesObject.createTime = valueEntriesEntrie["CreateTime"].asString();
		if(!valueEntriesEntrie["UpdateTime"].isNull())
			entriesObject.updateTime = valueEntriesEntrie["UpdateTime"].asString();
		if(!valueEntriesEntrie["DeletionProtection"].isNull())
			entriesObject.deletionProtection = valueEntriesEntrie["DeletionProtection"].asString() == "true";
		if(!valueEntriesEntrie["FileCountUsage"].isNull())
			entriesObject.fileCountUsage = std::stol(valueEntriesEntrie["FileCountUsage"].asString());
		if(!valueEntriesEntrie["SpaceUsage"].isNull())
			entriesObject.spaceUsage = std::stol(valueEntriesEntrie["SpaceUsage"].asString());
		if(!valueEntriesEntrie["FileSystemId"].isNull())
			entriesObject.fileSystemId = valueEntriesEntrie["FileSystemId"].asString();
		auto quotaNode = value["Quota"];
		if(!quotaNode["SizeLimit"].isNull())
			entriesObject.quota.sizeLimit = std::stol(quotaNode["SizeLimit"].asString());
		if(!quotaNode["FileCountLimit"].isNull())
			entriesObject.quota.fileCountLimit = std::stol(quotaNode["FileCountLimit"].asString());
		entries_.push_back(entriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["FileSystemId"].isNull())
		fileSystemId_ = value["FileSystemId"].asString();

}

std::string DescribeFilesetsResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeFilesetsResult::getFileSystemId()const
{
	return fileSystemId_;
}

std::vector<DescribeFilesetsResult::Entrie> DescribeFilesetsResult::getEntries()const
{
	return entries_;
}

