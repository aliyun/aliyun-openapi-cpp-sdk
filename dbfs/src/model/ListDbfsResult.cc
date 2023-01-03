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

#include <alibabacloud/dbfs/model/ListDbfsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListDbfsResult::ListDbfsResult() :
	ServiceResult()
{}

ListDbfsResult::ListDbfsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDbfsResult::~ListDbfsResult()
{}

void ListDbfsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBFSInfoNode = value["DBFSInfo"]["Info"];
	for (auto valueDBFSInfoInfo : allDBFSInfoNode)
	{
		Info dBFSInfoObject;
		if(!valueDBFSInfoInfo["Status"].isNull())
			dBFSInfoObject.status = valueDBFSInfoInfo["Status"].asString();
		if(!valueDBFSInfoInfo["Encryption"].isNull())
			dBFSInfoObject.encryption = valueDBFSInfoInfo["Encryption"].asString() == "true";
		if(!valueDBFSInfoInfo["PayType"].isNull())
			dBFSInfoObject.payType = valueDBFSInfoInfo["PayType"].asString();
		if(!valueDBFSInfoInfo["FsId"].isNull())
			dBFSInfoObject.fsId = valueDBFSInfoInfo["FsId"].asString();
		if(!valueDBFSInfoInfo["SizeG"].isNull())
			dBFSInfoObject.sizeG = std::stoi(valueDBFSInfoInfo["SizeG"].asString());
		if(!valueDBFSInfoInfo["RegionId"].isNull())
			dBFSInfoObject.regionId = valueDBFSInfoInfo["RegionId"].asString();
		if(!valueDBFSInfoInfo["DBFSClusterId"].isNull())
			dBFSInfoObject.dBFSClusterId = valueDBFSInfoInfo["DBFSClusterId"].asString();
		if(!valueDBFSInfoInfo["ZoneId"].isNull())
			dBFSInfoObject.zoneId = valueDBFSInfoInfo["ZoneId"].asString();
		if(!valueDBFSInfoInfo["FsName"].isNull())
			dBFSInfoObject.fsName = valueDBFSInfoInfo["FsName"].asString();
		if(!valueDBFSInfoInfo["Category"].isNull())
			dBFSInfoObject.category = valueDBFSInfoInfo["Category"].asString();
		if(!valueDBFSInfoInfo["CreatedTime"].isNull())
			dBFSInfoObject.createdTime = valueDBFSInfoInfo["CreatedTime"].asString();
		if(!valueDBFSInfoInfo["AttachNodeNumber"].isNull())
			dBFSInfoObject.attachNodeNumber = std::stoi(valueDBFSInfoInfo["AttachNodeNumber"].asString());
		if(!valueDBFSInfoInfo["KMSKeyId"].isNull())
			dBFSInfoObject.kMSKeyId = valueDBFSInfoInfo["KMSKeyId"].asString();
		if(!valueDBFSInfoInfo["PerformanceLevel"].isNull())
			dBFSInfoObject.performanceLevel = valueDBFSInfoInfo["PerformanceLevel"].asString();
		if(!valueDBFSInfoInfo["UsedScene"].isNull())
			dBFSInfoObject.usedScene = valueDBFSInfoInfo["UsedScene"].asString();
		if(!valueDBFSInfoInfo["LastMountTime"].isNull())
			dBFSInfoObject.lastMountTime = valueDBFSInfoInfo["LastMountTime"].asString();
		if(!valueDBFSInfoInfo["LastUmountTime"].isNull())
			dBFSInfoObject.lastUmountTime = valueDBFSInfoInfo["LastUmountTime"].asString();
		if(!valueDBFSInfoInfo["EnableRaid"].isNull())
			dBFSInfoObject.enableRaid = valueDBFSInfoInfo["EnableRaid"].asString() == "true";
		if(!valueDBFSInfoInfo["RaidStrip"].isNull())
			dBFSInfoObject.raidStrip = std::stoi(valueDBFSInfoInfo["RaidStrip"].asString());
		if(!valueDBFSInfoInfo["InstanceType"].isNull())
			dBFSInfoObject.instanceType = valueDBFSInfoInfo["InstanceType"].asString();
		if(!valueDBFSInfoInfo["LastFailed"].isNull())
			dBFSInfoObject.lastFailed = valueDBFSInfoInfo["LastFailed"].asString();
		auto allTagsNode = valueDBFSInfoInfo["Tags"]["TagList"];
		for (auto valueDBFSInfoInfoTagsTagList : allTagsNode)
		{
			Info::TagList tagsObject;
			if(!valueDBFSInfoInfoTagsTagList["TagValue"].isNull())
				tagsObject.tagValue = valueDBFSInfoInfoTagsTagList["TagValue"].asString();
			if(!valueDBFSInfoInfoTagsTagList["Id"].isNull())
				tagsObject.id = std::stol(valueDBFSInfoInfoTagsTagList["Id"].asString());
			if(!valueDBFSInfoInfoTagsTagList["TagKey"].isNull())
				tagsObject.tagKey = valueDBFSInfoInfoTagsTagList["TagKey"].asString();
			dBFSInfoObject.tags.push_back(tagsObject);
		}
		auto allEcsListNode = valueDBFSInfoInfo["EcsList"]["EcsListItem"];
		for (auto valueDBFSInfoInfoEcsListEcsListItem : allEcsListNode)
		{
			Info::EcsListItem ecsListObject;
			if(!valueDBFSInfoInfoEcsListEcsListItem["EcsId"].isNull())
				ecsListObject.ecsId = valueDBFSInfoInfoEcsListEcsListItem["EcsId"].asString();
			dBFSInfoObject.ecsList.push_back(ecsListObject);
		}
		auto allEbsListNode = valueDBFSInfoInfo["EbsList"]["EbsListItem"];
		for (auto valueDBFSInfoInfoEbsListEbsListItem : allEbsListNode)
		{
			Info::EbsListItem ebsListObject;
			if(!valueDBFSInfoInfoEbsListEbsListItem["EbsId"].isNull())
				ebsListObject.ebsId = valueDBFSInfoInfoEbsListEbsListItem["EbsId"].asString();
			if(!valueDBFSInfoInfoEbsListEbsListItem["SizeG"].isNull())
				ebsListObject.sizeG = std::stoi(valueDBFSInfoInfoEbsListEbsListItem["SizeG"].asString());
			dBFSInfoObject.ebsList.push_back(ebsListObject);
		}
		auto snapshotInfoNode = value["SnapshotInfo"];
		if(!snapshotInfoNode["SnapshotCount"].isNull())
			dBFSInfoObject.snapshotInfo.snapshotCount = std::stoi(snapshotInfoNode["SnapshotCount"].asString());
		if(!snapshotInfoNode["TotalSize"].isNull())
			dBFSInfoObject.snapshotInfo.totalSize = std::stol(snapshotInfoNode["TotalSize"].asString());
		if(!snapshotInfoNode["LinkId"].isNull())
			dBFSInfoObject.snapshotInfo.linkId = snapshotInfoNode["LinkId"].asString();
		if(!snapshotInfoNode["PolicyId"].isNull())
			dBFSInfoObject.snapshotInfo.policyId = snapshotInfoNode["PolicyId"].asString();
		dBFSInfo_.push_back(dBFSInfoObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListDbfsResult::getTotalCount()const
{
	return totalCount_;
}

int ListDbfsResult::getPageSize()const
{
	return pageSize_;
}

int ListDbfsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDbfsResult::Info> ListDbfsResult::getDBFSInfo()const
{
	return dBFSInfo_;
}

