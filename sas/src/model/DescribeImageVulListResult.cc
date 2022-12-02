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
		if(!valueVulRecordsVulRecord["CanUpdate"].isNull())
			vulRecordsObject.canUpdate = valueVulRecordsVulRecord["CanUpdate"].asString() == "true";
		if(!valueVulRecordsVulRecord["Type"].isNull())
			vulRecordsObject.type = valueVulRecordsVulRecord["Type"].asString();
		if(!valueVulRecordsVulRecord["Status"].isNull())
			vulRecordsObject.status = std::stoi(valueVulRecordsVulRecord["Status"].asString());
		if(!valueVulRecordsVulRecord["ModifyTs"].isNull())
			vulRecordsObject.modifyTs = std::stol(valueVulRecordsVulRecord["ModifyTs"].asString());
		if(!valueVulRecordsVulRecord["Progress"].isNull())
			vulRecordsObject.progress = std::stoi(valueVulRecordsVulRecord["Progress"].asString());
		if(!valueVulRecordsVulRecord["ImageDigest"].isNull())
			vulRecordsObject.imageDigest = valueVulRecordsVulRecord["ImageDigest"].asString();
		if(!valueVulRecordsVulRecord["PrimaryId"].isNull())
			vulRecordsObject.primaryId = std::stol(valueVulRecordsVulRecord["PrimaryId"].asString());
		if(!valueVulRecordsVulRecord["Tag"].isNull())
			vulRecordsObject.tag = valueVulRecordsVulRecord["Tag"].asString();
		if(!valueVulRecordsVulRecord["RepoNamespace"].isNull())
			vulRecordsObject.repoNamespace = valueVulRecordsVulRecord["RepoNamespace"].asString();
		if(!valueVulRecordsVulRecord["RepoName"].isNull())
			vulRecordsObject.repoName = valueVulRecordsVulRecord["RepoName"].asString();
		if(!valueVulRecordsVulRecord["Related"].isNull())
			vulRecordsObject.related = valueVulRecordsVulRecord["Related"].asString();
		if(!valueVulRecordsVulRecord["FirstTs"].isNull())
			vulRecordsObject.firstTs = std::stol(valueVulRecordsVulRecord["FirstTs"].asString());
		if(!valueVulRecordsVulRecord["LastTs"].isNull())
			vulRecordsObject.lastTs = std::stol(valueVulRecordsVulRecord["LastTs"].asString());
		if(!valueVulRecordsVulRecord["Necessity"].isNull())
			vulRecordsObject.necessity = valueVulRecordsVulRecord["Necessity"].asString();
		if(!valueVulRecordsVulRecord["Uuid"].isNull())
			vulRecordsObject.uuid = valueVulRecordsVulRecord["Uuid"].asString();
		if(!valueVulRecordsVulRecord["AliasName"].isNull())
			vulRecordsObject.aliasName = valueVulRecordsVulRecord["AliasName"].asString();
		if(!valueVulRecordsVulRecord["Name"].isNull())
			vulRecordsObject.name = valueVulRecordsVulRecord["Name"].asString();
		if(!valueVulRecordsVulRecord["Level"].isNull())
			vulRecordsObject.level = valueVulRecordsVulRecord["Level"].asString();
		if(!valueVulRecordsVulRecord["CanFix"].isNull())
			vulRecordsObject.canFix = valueVulRecordsVulRecord["CanFix"].asString();
		if(!valueVulRecordsVulRecord["ClusterId"].isNull())
			vulRecordsObject.clusterId = valueVulRecordsVulRecord["ClusterId"].asString();
		if(!valueVulRecordsVulRecord["ClusterName"].isNull())
			vulRecordsObject.clusterName = valueVulRecordsVulRecord["ClusterName"].asString();
		if(!valueVulRecordsVulRecord["Pod"].isNull())
			vulRecordsObject.pod = valueVulRecordsVulRecord["Pod"].asString();
		if(!valueVulRecordsVulRecord["Namespace"].isNull())
			vulRecordsObject._namespace = valueVulRecordsVulRecord["Namespace"].asString();
		if(!valueVulRecordsVulRecord["Image"].isNull())
			vulRecordsObject.image = valueVulRecordsVulRecord["Image"].asString();
		if(!valueVulRecordsVulRecord["ContainerId"].isNull())
			vulRecordsObject.containerId = valueVulRecordsVulRecord["ContainerId"].asString();
		if(!valueVulRecordsVulRecord["InternetIp"].isNull())
			vulRecordsObject.internetIp = valueVulRecordsVulRecord["InternetIp"].asString();
		if(!valueVulRecordsVulRecord["IntranetIp"].isNull())
			vulRecordsObject.intranetIp = valueVulRecordsVulRecord["IntranetIp"].asString();
		if(!valueVulRecordsVulRecord["InstanceName"].isNull())
			vulRecordsObject.instanceName = valueVulRecordsVulRecord["InstanceName"].asString();
		if(!valueVulRecordsVulRecord["TargetId"].isNull())
			vulRecordsObject.targetId = valueVulRecordsVulRecord["TargetId"].asString();
		if(!valueVulRecordsVulRecord["TargetName"].isNull())
			vulRecordsObject.targetName = valueVulRecordsVulRecord["TargetName"].asString();
		if(!valueVulRecordsVulRecord["MaliciousSource"].isNull())
			vulRecordsObject.maliciousSource = valueVulRecordsVulRecord["MaliciousSource"].asString();
		if(!valueVulRecordsVulRecord["TargetType"].isNull())
			vulRecordsObject.targetType = valueVulRecordsVulRecord["TargetType"].asString();
		if(!valueVulRecordsVulRecord["ScanTime"].isNull())
			vulRecordsObject.scanTime = std::stol(valueVulRecordsVulRecord["ScanTime"].asString());
		auto extendContentJsonNode = value["ExtendContentJson"];
		if(!extendContentJsonNode["OsRelease"].isNull())
			vulRecordsObject.extendContentJson.osRelease = extendContentJsonNode["OsRelease"].asString();
		if(!extendContentJsonNode["Os"].isNull())
			vulRecordsObject.extendContentJson.os = extendContentJsonNode["Os"].asString();
		auto allRpmEntityListNode = extendContentJsonNode["RpmEntityList"]["RpmEntity"];
		for (auto extendContentJsonNodeRpmEntityListRpmEntity : allRpmEntityListNode)
		{
			VulRecord::ExtendContentJson::RpmEntity rpmEntityObject;
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Layer"].isNull())
				rpmEntityObject.layer = extendContentJsonNodeRpmEntityListRpmEntity["Layer"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].isNull())
				rpmEntityObject.fullVersion = extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Version"].isNull())
				rpmEntityObject.version = extendContentJsonNodeRpmEntityListRpmEntity["Version"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].isNull())
				rpmEntityObject.matchDetail = extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Path"].isNull())
				rpmEntityObject.path = extendContentJsonNodeRpmEntityListRpmEntity["Path"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Name"].isNull())
				rpmEntityObject.name = extendContentJsonNodeRpmEntityListRpmEntity["Name"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].isNull())
				rpmEntityObject.updateCmd = extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].asString();
			auto allMatchList = value["MatchList"]["Match"];
			for (auto value : allMatchList)
				rpmEntityObject.matchList.push_back(value.asString());
			vulRecordsObject.extendContentJson.rpmEntityList.push_back(rpmEntityObject);
		}
		auto allLayers = value["Layers"]["name"];
		for (auto value : allLayers)
			vulRecordsObject.layers.push_back(value.asString());
		vulRecords_.push_back(vulRecordsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
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

