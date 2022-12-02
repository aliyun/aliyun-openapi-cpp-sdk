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

#include <alibabacloud/sas/model/DescribeImageListWithBaselineNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageListWithBaselineNameResult::DescribeImageListWithBaselineNameResult() :
	ServiceResult()
{}

DescribeImageListWithBaselineNameResult::DescribeImageListWithBaselineNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageListWithBaselineNameResult::~DescribeImageListWithBaselineNameResult()
{}

void DescribeImageListWithBaselineNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageInfosNode = value["ImageInfos"]["ImageInfosItem"];
	for (auto valueImageInfosImageInfosItem : allImageInfosNode)
	{
		ImageInfosItem imageInfosObject;
		if(!valueImageInfosImageInfosItem["MiddleRiskImage"].isNull())
			imageInfosObject.middleRiskImage = std::stoi(valueImageInfosImageInfosItem["MiddleRiskImage"].asString());
		if(!valueImageInfosImageInfosItem["Endpoints"].isNull())
			imageInfosObject.endpoints = valueImageInfosImageInfosItem["Endpoints"].asString();
		if(!valueImageInfosImageInfosItem["RiskStatus"].isNull())
			imageInfosObject.riskStatus = valueImageInfosImageInfosItem["RiskStatus"].asString();
		if(!valueImageInfosImageInfosItem["ImageCreate"].isNull())
			imageInfosObject.imageCreate = std::stol(valueImageInfosImageInfosItem["ImageCreate"].asString());
		if(!valueImageInfosImageInfosItem["Digest"].isNull())
			imageInfosObject.digest = valueImageInfosImageInfosItem["Digest"].asString();
		if(!valueImageInfosImageInfosItem["Tag"].isNull())
			imageInfosObject.tag = valueImageInfosImageInfosItem["Tag"].asString();
		if(!valueImageInfosImageInfosItem["ImageUpdate"].isNull())
			imageInfosObject.imageUpdate = std::stol(valueImageInfosImageInfosItem["ImageUpdate"].asString());
		if(!valueImageInfosImageInfosItem["InstanceId"].isNull())
			imageInfosObject.instanceId = valueImageInfosImageInfosItem["InstanceId"].asString();
		if(!valueImageInfosImageInfosItem["LowRiskImage"].isNull())
			imageInfosObject.lowRiskImage = std::stoi(valueImageInfosImageInfosItem["LowRiskImage"].asString());
		if(!valueImageInfosImageInfosItem["RepoType"].isNull())
			imageInfosObject.repoType = valueImageInfosImageInfosItem["RepoType"].asString();
		if(!valueImageInfosImageInfosItem["RegionId"].isNull())
			imageInfosObject.regionId = valueImageInfosImageInfosItem["RegionId"].asString();
		if(!valueImageInfosImageInfosItem["Uuid"].isNull())
			imageInfosObject.uuid = valueImageInfosImageInfosItem["Uuid"].asString();
		if(!valueImageInfosImageInfosItem["ImageSize"].isNull())
			imageInfosObject.imageSize = std::stoi(valueImageInfosImageInfosItem["ImageSize"].asString());
		if(!valueImageInfosImageInfosItem["RepoId"].isNull())
			imageInfosObject.repoId = valueImageInfosImageInfosItem["RepoId"].asString();
		if(!valueImageInfosImageInfosItem["TotalItemCount"].isNull())
			imageInfosObject.totalItemCount = std::stoi(valueImageInfosImageInfosItem["TotalItemCount"].asString());
		if(!valueImageInfosImageInfosItem["HighRiskImage"].isNull())
			imageInfosObject.highRiskImage = std::stoi(valueImageInfosImageInfosItem["HighRiskImage"].asString());
		if(!valueImageInfosImageInfosItem["NoRiskImage"].isNull())
			imageInfosObject.noRiskImage = std::stoi(valueImageInfosImageInfosItem["NoRiskImage"].asString());
		if(!valueImageInfosImageInfosItem["ImageId"].isNull())
			imageInfosObject.imageId = valueImageInfosImageInfosItem["ImageId"].asString();
		if(!valueImageInfosImageInfosItem["RepoName"].isNull())
			imageInfosObject.repoName = valueImageInfosImageInfosItem["RepoName"].asString();
		if(!valueImageInfosImageInfosItem["ClusterId"].isNull())
			imageInfosObject.clusterId = valueImageInfosImageInfosItem["ClusterId"].asString();
		if(!valueImageInfosImageInfosItem["ClusterName"].isNull())
			imageInfosObject.clusterName = valueImageInfosImageInfosItem["ClusterName"].asString();
		if(!valueImageInfosImageInfosItem["RepoNamespace"].isNull())
			imageInfosObject.repoNamespace = valueImageInfosImageInfosItem["RepoNamespace"].asString();
		if(!valueImageInfosImageInfosItem["Pod"].isNull())
			imageInfosObject.pod = valueImageInfosImageInfosItem["Pod"].asString();
		if(!valueImageInfosImageInfosItem["Namespace"].isNull())
			imageInfosObject._namespace = valueImageInfosImageInfosItem["Namespace"].asString();
		if(!valueImageInfosImageInfosItem["ContainerId"].isNull())
			imageInfosObject.containerId = valueImageInfosImageInfosItem["ContainerId"].asString();
		if(!valueImageInfosImageInfosItem["Image"].isNull())
			imageInfosObject.image = valueImageInfosImageInfosItem["Image"].asString();
		if(!valueImageInfosImageInfosItem["BaselineType"].isNull())
			imageInfosObject.baselineType = valueImageInfosImageInfosItem["BaselineType"].asString();
		if(!valueImageInfosImageInfosItem["InstanceName"].isNull())
			imageInfosObject.instanceName = valueImageInfosImageInfosItem["InstanceName"].asString();
		if(!valueImageInfosImageInfosItem["InternetIp"].isNull())
			imageInfosObject.internetIp = valueImageInfosImageInfosItem["InternetIp"].asString();
		if(!valueImageInfosImageInfosItem["IntranetIp"].isNull())
			imageInfosObject.intranetIp = valueImageInfosImageInfosItem["IntranetIp"].asString();
		if(!valueImageInfosImageInfosItem["TargetName"].isNull())
			imageInfosObject.targetName = valueImageInfosImageInfosItem["TargetName"].asString();
		if(!valueImageInfosImageInfosItem["TargetId"].isNull())
			imageInfosObject.targetId = valueImageInfosImageInfosItem["TargetId"].asString();
		if(!valueImageInfosImageInfosItem["TargetType"].isNull())
			imageInfosObject.targetType = valueImageInfosImageInfosItem["TargetType"].asString();
		if(!valueImageInfosImageInfosItem["LastScanTime"].isNull())
			imageInfosObject.lastScanTime = std::stol(valueImageInfosImageInfosItem["LastScanTime"].asString());
		imageInfos_.push_back(imageInfosObject);
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

std::vector<DescribeImageListWithBaselineNameResult::ImageInfosItem> DescribeImageListWithBaselineNameResult::getImageInfos()const
{
	return imageInfos_;
}

DescribeImageListWithBaselineNameResult::PageInfo DescribeImageListWithBaselineNameResult::getPageInfo()const
{
	return pageInfo_;
}

