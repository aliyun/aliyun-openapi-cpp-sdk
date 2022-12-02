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

#include <alibabacloud/sas/model/DescribeAffectedMaliciousFileImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAffectedMaliciousFileImagesResult::DescribeAffectedMaliciousFileImagesResult() :
	ServiceResult()
{}

DescribeAffectedMaliciousFileImagesResult::DescribeAffectedMaliciousFileImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAffectedMaliciousFileImagesResult::~DescribeAffectedMaliciousFileImagesResult()
{}

void DescribeAffectedMaliciousFileImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAffectedMaliciousFileImagesResponseNode = value["AffectedMaliciousFileImagesResponse"]["AffectedMaliciousFileImage"];
	for (auto valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage : allAffectedMaliciousFileImagesResponseNode)
	{
		AffectedMaliciousFileImage affectedMaliciousFileImagesResponseObject;
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Status"].isNull())
			affectedMaliciousFileImagesResponseObject.status = std::stoi(valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Status"].asString());
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Digest"].isNull())
			affectedMaliciousFileImagesResponseObject.digest = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Digest"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["LatestVerifyTimestamp"].isNull())
			affectedMaliciousFileImagesResponseObject.latestVerifyTimestamp = std::stol(valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["LatestVerifyTimestamp"].asString());
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoInstanceId"].isNull())
			affectedMaliciousFileImagesResponseObject.repoInstanceId = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoInstanceId"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Namespace"].isNull())
			affectedMaliciousFileImagesResponseObject._namespace = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Namespace"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Tag"].isNull())
			affectedMaliciousFileImagesResponseObject.tag = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Tag"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoRegionId"].isNull())
			affectedMaliciousFileImagesResponseObject.repoRegionId = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoRegionId"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ImageUuid"].isNull())
			affectedMaliciousFileImagesResponseObject.imageUuid = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ImageUuid"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["FirstScanTimestamp"].isNull())
			affectedMaliciousFileImagesResponseObject.firstScanTimestamp = std::stol(valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["FirstScanTimestamp"].asString());
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["MaliciousMd5"].isNull())
			affectedMaliciousFileImagesResponseObject.maliciousMd5 = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["MaliciousMd5"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["FilePath"].isNull())
			affectedMaliciousFileImagesResponseObject.filePath = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["FilePath"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoId"].isNull())
			affectedMaliciousFileImagesResponseObject.repoId = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoId"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Layer"].isNull())
			affectedMaliciousFileImagesResponseObject.layer = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Layer"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["LatestScanTimestamp"].isNull())
			affectedMaliciousFileImagesResponseObject.latestScanTimestamp = std::stol(valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["LatestScanTimestamp"].asString());
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoName"].isNull())
			affectedMaliciousFileImagesResponseObject.repoName = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["RepoName"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Level"].isNull())
			affectedMaliciousFileImagesResponseObject.level = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Level"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["DownloadUrl"].isNull())
			affectedMaliciousFileImagesResponseObject.downloadUrl = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["DownloadUrl"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["HighLight"].isNull())
			affectedMaliciousFileImagesResponseObject.highLight = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["HighLight"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ContainerId"].isNull())
			affectedMaliciousFileImagesResponseObject.containerId = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ContainerId"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Image"].isNull())
			affectedMaliciousFileImagesResponseObject.image = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Image"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Pod"].isNull())
			affectedMaliciousFileImagesResponseObject.pod = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Pod"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ClusterId"].isNull())
			affectedMaliciousFileImagesResponseObject.clusterId = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ClusterId"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ClusterName"].isNull())
			affectedMaliciousFileImagesResponseObject.clusterName = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["ClusterName"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["MaliciousSource"].isNull())
			affectedMaliciousFileImagesResponseObject.maliciousSource = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["MaliciousSource"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["InstanceName"].isNull())
			affectedMaliciousFileImagesResponseObject.instanceName = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["InstanceName"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["InternetIp"].isNull())
			affectedMaliciousFileImagesResponseObject.internetIp = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["InternetIp"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["IntranetIp"].isNull())
			affectedMaliciousFileImagesResponseObject.intranetIp = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["IntranetIp"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["TargetId"].isNull())
			affectedMaliciousFileImagesResponseObject.targetId = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["TargetId"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["TargetName"].isNull())
			affectedMaliciousFileImagesResponseObject.targetName = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["TargetName"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["TargetType"].isNull())
			affectedMaliciousFileImagesResponseObject.targetType = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["TargetType"].asString();
		if(!valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Uuid"].isNull())
			affectedMaliciousFileImagesResponseObject.uuid = valueAffectedMaliciousFileImagesResponseAffectedMaliciousFileImage["Uuid"].asString();
		affectedMaliciousFileImagesResponse_.push_back(affectedMaliciousFileImagesResponseObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribeAffectedMaliciousFileImagesResult::AffectedMaliciousFileImage> DescribeAffectedMaliciousFileImagesResult::getAffectedMaliciousFileImagesResponse()const
{
	return affectedMaliciousFileImagesResponse_;
}

DescribeAffectedMaliciousFileImagesResult::PageInfo DescribeAffectedMaliciousFileImagesResult::getPageInfo()const
{
	return pageInfo_;
}

