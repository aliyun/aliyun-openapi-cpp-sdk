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

#include <alibabacloud/sas/model/DescribeImageVulListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageVulListResult::DescribeImageVulListResult() :
	ServiceResult()
{}

DescribeImageVulListResult::DescribeImageVulListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageVulListResult::~DescribeImageVulListResult()
{}

void DescribeImageVulListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVulRecordsNode = value["VulRecords"]["VulRecord"];
	for (auto valueVulRecordsVulRecord : allVulRecordsNode)
	{
		VulRecord vulRecordsObject;
		if(!valueVulRecordsVulRecord["PrimaryId"].isNull())
			vulRecordsObject.primaryId = std::stol(valueVulRecordsVulRecord["PrimaryId"].asString());
		if(!valueVulRecordsVulRecord["Uuid"].isNull())
			vulRecordsObject.uuid = valueVulRecordsVulRecord["Uuid"].asString();
		if(!valueVulRecordsVulRecord["Name"].isNull())
			vulRecordsObject.name = valueVulRecordsVulRecord["Name"].asString();
		if(!valueVulRecordsVulRecord["Tag"].isNull())
			vulRecordsObject.tag = valueVulRecordsVulRecord["Tag"].asString();
		if(!valueVulRecordsVulRecord["AliasName"].isNull())
			vulRecordsObject.aliasName = valueVulRecordsVulRecord["AliasName"].asString();
		if(!valueVulRecordsVulRecord["Type"].isNull())
			vulRecordsObject.type = valueVulRecordsVulRecord["Type"].asString();
		if(!valueVulRecordsVulRecord["Level"].isNull())
			vulRecordsObject.level = valueVulRecordsVulRecord["Level"].asString();
		if(!valueVulRecordsVulRecord["FirstTs"].isNull())
			vulRecordsObject.firstTs = std::stol(valueVulRecordsVulRecord["FirstTs"].asString());
		if(!valueVulRecordsVulRecord["LastTs"].isNull())
			vulRecordsObject.lastTs = std::stol(valueVulRecordsVulRecord["LastTs"].asString());
		if(!valueVulRecordsVulRecord["Status"].isNull())
			vulRecordsObject.status = std::stoi(valueVulRecordsVulRecord["Status"].asString());
		if(!valueVulRecordsVulRecord["Progress"].isNull())
			vulRecordsObject.progress = std::stoi(valueVulRecordsVulRecord["Progress"].asString());
		if(!valueVulRecordsVulRecord["Necessity"].isNull())
			vulRecordsObject.necessity = valueVulRecordsVulRecord["Necessity"].asString();
		if(!valueVulRecordsVulRecord["Related"].isNull())
			vulRecordsObject.related = valueVulRecordsVulRecord["Related"].asString();
		if(!valueVulRecordsVulRecord["ModifyTs"].isNull())
			vulRecordsObject.modifyTs = std::stol(valueVulRecordsVulRecord["ModifyTs"].asString());
		if(!valueVulRecordsVulRecord["ImageDigest"].isNull())
			vulRecordsObject.imageDigest = valueVulRecordsVulRecord["ImageDigest"].asString();
		if(!valueVulRecordsVulRecord["CanUpdate"].isNull())
			vulRecordsObject.canUpdate = valueVulRecordsVulRecord["CanUpdate"].asString() == "true";
		auto extendContentJsonNode = value["ExtendContentJson"];
		if(!extendContentJsonNode["Os"].isNull())
			vulRecordsObject.extendContentJson.os = extendContentJsonNode["Os"].asString();
		if(!extendContentJsonNode["OsRelease"].isNull())
			vulRecordsObject.extendContentJson.osRelease = extendContentJsonNode["OsRelease"].asString();
		auto allRpmEntityListNode = extendContentJsonNode["RpmEntityList"]["RpmEntity"];
		for (auto extendContentJsonNodeRpmEntityListRpmEntity : allRpmEntityListNode)
		{
			VulRecord::ExtendContentJson::RpmEntity rpmEntityObject;
			if(!extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].isNull())
				rpmEntityObject.fullVersion = extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].isNull())
				rpmEntityObject.matchDetail = extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Name"].isNull())
				rpmEntityObject.name = extendContentJsonNodeRpmEntityListRpmEntity["Name"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Path"].isNull())
				rpmEntityObject.path = extendContentJsonNodeRpmEntityListRpmEntity["Path"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].isNull())
				rpmEntityObject.updateCmd = extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Version"].isNull())
				rpmEntityObject.version = extendContentJsonNodeRpmEntityListRpmEntity["Version"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Layer"].isNull())
				rpmEntityObject.layer = extendContentJsonNodeRpmEntityListRpmEntity["Layer"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["MatchList"].isNull())
				rpmEntityObject.matchList = extendContentJsonNodeRpmEntityListRpmEntity["MatchList"].asString();
			vulRecordsObject.extendContentJson.rpmEntityList.push_back(rpmEntityObject);
		}
		auto allLayers = value["Layers"]["name"];
		for (auto value : allLayers)
			vulRecordsObject.layers.push_back(value.asString());
		vulRecords_.push_back(vulRecordsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeImageVulListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeImageVulListResult::VulRecord> DescribeImageVulListResult::getVulRecords()const
{
	return vulRecords_;
}

int DescribeImageVulListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeImageVulListResult::getCurrentPage()const
{
	return currentPage_;
}

