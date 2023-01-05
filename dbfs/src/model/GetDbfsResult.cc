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

#include <alibabacloud/dbfs/model/GetDbfsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

GetDbfsResult::GetDbfsResult() :
	ServiceResult()
{}

GetDbfsResult::GetDbfsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDbfsResult::~GetDbfsResult()
{}

void GetDbfsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBFSInfoNode = value["DBFSInfo"];
	if(!dBFSInfoNode["Status"].isNull())
		dBFSInfo_.status = dBFSInfoNode["Status"].asString();
	if(!dBFSInfoNode["PayType"].isNull())
		dBFSInfo_.payType = dBFSInfoNode["PayType"].asString();
	if(!dBFSInfoNode["FsId"].isNull())
		dBFSInfo_.fsId = dBFSInfoNode["FsId"].asString();
	if(!dBFSInfoNode["SizeG"].isNull())
		dBFSInfo_.sizeG = std::stoi(dBFSInfoNode["SizeG"].asString());
	if(!dBFSInfoNode["RegionId"].isNull())
		dBFSInfo_.regionId = dBFSInfoNode["RegionId"].asString();
	if(!dBFSInfoNode["DBFSClusterId"].isNull())
		dBFSInfo_.dBFSClusterId = dBFSInfoNode["DBFSClusterId"].asString();
	if(!dBFSInfoNode["Description"].isNull())
		dBFSInfo_.description = dBFSInfoNode["Description"].asString();
	if(!dBFSInfoNode["ZoneId"].isNull())
		dBFSInfo_.zoneId = dBFSInfoNode["ZoneId"].asString();
	if(!dBFSInfoNode["FsName"].isNull())
		dBFSInfo_.fsName = dBFSInfoNode["FsName"].asString();
	if(!dBFSInfoNode["Category"].isNull())
		dBFSInfo_.category = dBFSInfoNode["Category"].asString();
	if(!dBFSInfoNode["CreatedTime"].isNull())
		dBFSInfo_.createdTime = dBFSInfoNode["CreatedTime"].asString();
	if(!dBFSInfoNode["AttachNodeNumber"].isNull())
		dBFSInfo_.attachNodeNumber = std::stoi(dBFSInfoNode["AttachNodeNumber"].asString());
	if(!dBFSInfoNode["KMSKeyId"].isNull())
		dBFSInfo_.kMSKeyId = dBFSInfoNode["KMSKeyId"].asString();
	if(!dBFSInfoNode["Encryption"].isNull())
		dBFSInfo_.encryption = dBFSInfoNode["Encryption"].asString() == "true";
	if(!dBFSInfoNode["PerformanceLevel"].isNull())
		dBFSInfo_.performanceLevel = dBFSInfoNode["PerformanceLevel"].asString();
	if(!dBFSInfoNode["UsedScene"].isNull())
		dBFSInfo_.usedScene = dBFSInfoNode["UsedScene"].asString();
	if(!dBFSInfoNode["LastMountTime"].isNull())
		dBFSInfo_.lastMountTime = dBFSInfoNode["LastMountTime"].asString();
	if(!dBFSInfoNode["LastUmountTime"].isNull())
		dBFSInfo_.lastUmountTime = dBFSInfoNode["LastUmountTime"].asString();
	if(!dBFSInfoNode["EnableRaid"].isNull())
		dBFSInfo_.enableRaid = dBFSInfoNode["EnableRaid"].asString() == "true";
	if(!dBFSInfoNode["InstanceType"].isNull())
		dBFSInfo_.instanceType = dBFSInfoNode["InstanceType"].asString();
	if(!dBFSInfoNode["RaidStrip"].isNull())
		dBFSInfo_.raidStrip = std::stoi(dBFSInfoNode["RaidStrip"].asString());
	if(!dBFSInfoNode["LastFailed"].isNull())
		dBFSInfo_.lastFailed = dBFSInfoNode["LastFailed"].asString();
	auto allTagsNode = dBFSInfoNode["Tags"]["TagList"];
	for (auto dBFSInfoNodeTagsTagList : allTagsNode)
	{
		DBFSInfo::TagList tagListObject;
		if(!dBFSInfoNodeTagsTagList["TagValue"].isNull())
			tagListObject.tagValue = dBFSInfoNodeTagsTagList["TagValue"].asString();
		if(!dBFSInfoNodeTagsTagList["Id"].isNull())
			tagListObject.id = std::stoi(dBFSInfoNodeTagsTagList["Id"].asString());
		if(!dBFSInfoNodeTagsTagList["TagKey"].isNull())
			tagListObject.tagKey = dBFSInfoNodeTagsTagList["TagKey"].asString();
		dBFSInfo_.tags.push_back(tagListObject);
	}
	auto allEcsListNode = dBFSInfoNode["EcsList"]["EcsListItem"];
	for (auto dBFSInfoNodeEcsListEcsListItem : allEcsListNode)
	{
		DBFSInfo::EcsListItem ecsListItemObject;
		if(!dBFSInfoNodeEcsListEcsListItem["EcsId"].isNull())
			ecsListItemObject.ecsId = dBFSInfoNodeEcsListEcsListItem["EcsId"].asString();
		dBFSInfo_.ecsList.push_back(ecsListItemObject);
	}
	auto allEbsListNode = dBFSInfoNode["EbsList"]["EbsListItem"];
	for (auto dBFSInfoNodeEbsListEbsListItem : allEbsListNode)
	{
		DBFSInfo::EbsListItem ebsListItemObject;
		if(!dBFSInfoNodeEbsListEbsListItem["EbsId"].isNull())
			ebsListItemObject.ebsId = dBFSInfoNodeEbsListEbsListItem["EbsId"].asString();
		if(!dBFSInfoNodeEbsListEbsListItem["SizeG"].isNull())
			ebsListItemObject.sizeG = std::stoi(dBFSInfoNodeEbsListEbsListItem["SizeG"].asString());
		dBFSInfo_.ebsList.push_back(ebsListItemObject);
	}
	auto snapshotInfoNode = dBFSInfoNode["SnapshotInfo"];
	if(!snapshotInfoNode["SnapshotCount"].isNull())
		dBFSInfo_.snapshotInfo.snapshotCount = std::stoi(snapshotInfoNode["SnapshotCount"].asString());
	if(!snapshotInfoNode["LinkId"].isNull())
		dBFSInfo_.snapshotInfo.linkId = snapshotInfoNode["LinkId"].asString();
	if(!snapshotInfoNode["TotalSize"].isNull())
		dBFSInfo_.snapshotInfo.totalSize = std::stol(snapshotInfoNode["TotalSize"].asString());
	if(!snapshotInfoNode["PolicyId"].isNull())
		dBFSInfo_.snapshotInfo.policyId = snapshotInfoNode["PolicyId"].asString();

}

GetDbfsResult::DBFSInfo GetDbfsResult::getDBFSInfo()const
{
	return dBFSInfo_;
}

