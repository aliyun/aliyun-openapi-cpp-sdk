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

#include <alibabacloud/dbfs/model/ListSnapshotLinksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListSnapshotLinksResult::ListSnapshotLinksResult() :
	ServiceResult()
{}

ListSnapshotLinksResult::ListSnapshotLinksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSnapshotLinksResult::~ListSnapshotLinksResult()
{}

void ListSnapshotLinksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotLinksNode = value["SnapshotLinks"]["Info"];
	for (auto valueSnapshotLinksInfo : allSnapshotLinksNode)
	{
		Info snapshotLinksObject;
		if(!valueSnapshotLinksInfo["Status"].isNull())
			snapshotLinksObject.status = valueSnapshotLinksInfo["Status"].asString();
		if(!valueSnapshotLinksInfo["TotalSize"].isNull())
			snapshotLinksObject.totalSize = std::stol(valueSnapshotLinksInfo["TotalSize"].asString());
		if(!valueSnapshotLinksInfo["SourceSize"].isNull())
			snapshotLinksObject.sourceSize = std::stoi(valueSnapshotLinksInfo["SourceSize"].asString());
		if(!valueSnapshotLinksInfo["FsId"].isNull())
			snapshotLinksObject.fsId = valueSnapshotLinksInfo["FsId"].asString();
		if(!valueSnapshotLinksInfo["SnapshotCount"].isNull())
			snapshotLinksObject.snapshotCount = std::stoi(valueSnapshotLinksInfo["SnapshotCount"].asString());
		if(!valueSnapshotLinksInfo["FsName"].isNull())
			snapshotLinksObject.fsName = valueSnapshotLinksInfo["FsName"].asString();
		if(!valueSnapshotLinksInfo["LinkId"].isNull())
			snapshotLinksObject.linkId = valueSnapshotLinksInfo["LinkId"].asString();
		auto allEcsListNode = valueSnapshotLinksInfo["EcsList"]["EcsListItem"];
		for (auto valueSnapshotLinksInfoEcsListEcsListItem : allEcsListNode)
		{
			Info::EcsListItem ecsListObject;
			if(!valueSnapshotLinksInfoEcsListEcsListItem["EcsId"].isNull())
				ecsListObject.ecsId = valueSnapshotLinksInfoEcsListEcsListItem["EcsId"].asString();
			snapshotLinksObject.ecsList.push_back(ecsListObject);
		}
		snapshotLinks_.push_back(snapshotLinksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListSnapshotLinksResult::Info> ListSnapshotLinksResult::getSnapshotLinks()const
{
	return snapshotLinks_;
}

int ListSnapshotLinksResult::getTotalCount()const
{
	return totalCount_;
}

int ListSnapshotLinksResult::getPageSize()const
{
	return pageSize_;
}

int ListSnapshotLinksResult::getPageNumber()const
{
	return pageNumber_;
}

