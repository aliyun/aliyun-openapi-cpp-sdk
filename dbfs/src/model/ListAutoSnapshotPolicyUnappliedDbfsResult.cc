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

#include <alibabacloud/dbfs/model/ListAutoSnapshotPolicyUnappliedDbfsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListAutoSnapshotPolicyUnappliedDbfsResult::ListAutoSnapshotPolicyUnappliedDbfsResult() :
	ServiceResult()
{}

ListAutoSnapshotPolicyUnappliedDbfsResult::ListAutoSnapshotPolicyUnappliedDbfsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutoSnapshotPolicyUnappliedDbfsResult::~ListAutoSnapshotPolicyUnappliedDbfsResult()
{}

void ListAutoSnapshotPolicyUnappliedDbfsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbfsListNode = value["DbfsList"]["DbfsListItem"];
	for (auto valueDbfsListDbfsListItem : allDbfsListNode)
	{
		DbfsListItem dbfsListObject;
		if(!valueDbfsListDbfsListItem["FsId"].isNull())
			dbfsListObject.fsId = valueDbfsListDbfsListItem["FsId"].asString();
		if(!valueDbfsListDbfsListItem["FsName"].isNull())
			dbfsListObject.fsName = valueDbfsListDbfsListItem["FsName"].asString();
		if(!valueDbfsListDbfsListItem["Status"].isNull())
			dbfsListObject.status = valueDbfsListDbfsListItem["Status"].asString();
		if(!valueDbfsListDbfsListItem["SizeG"].isNull())
			dbfsListObject.sizeG = std::stol(valueDbfsListDbfsListItem["SizeG"].asString());
		if(!valueDbfsListDbfsListItem["RegionId"].isNull())
			dbfsListObject.regionId = valueDbfsListDbfsListItem["RegionId"].asString();
		if(!valueDbfsListDbfsListItem["SnapshotCount"].isNull())
			dbfsListObject.snapshotCount = std::stoi(valueDbfsListDbfsListItem["SnapshotCount"].asString());
		if(!valueDbfsListDbfsListItem["TotalSize"].isNull())
			dbfsListObject.totalSize = std::stol(valueDbfsListDbfsListItem["TotalSize"].asString());
		dbfsList_.push_back(dbfsListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListAutoSnapshotPolicyUnappliedDbfsResult::DbfsListItem> ListAutoSnapshotPolicyUnappliedDbfsResult::getDbfsList()const
{
	return dbfsList_;
}

int ListAutoSnapshotPolicyUnappliedDbfsResult::getTotalCount()const
{
	return totalCount_;
}

int ListAutoSnapshotPolicyUnappliedDbfsResult::getPageSize()const
{
	return pageSize_;
}

int ListAutoSnapshotPolicyUnappliedDbfsResult::getPageNumber()const
{
	return pageNumber_;
}

