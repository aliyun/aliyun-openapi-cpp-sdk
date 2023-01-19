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

#include <alibabacloud/sas/model/DescribeImageInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageInstancesResult::DescribeImageInstancesResult() :
	ServiceResult()
{}

DescribeImageInstancesResult::DescribeImageInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageInstancesResult::~DescribeImageInstancesResult()
{}

void DescribeImageInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageInstanceListNode = value["ImageInstanceList"]["responses"];
	for (auto valueImageInstanceListresponses : allImageInstanceListNode)
	{
		Responses imageInstanceListObject;
		if(!valueImageInstanceListresponses["Status"].isNull())
			imageInstanceListObject.status = valueImageInstanceListresponses["Status"].asString();
		if(!valueImageInstanceListresponses["Digest"].isNull())
			imageInstanceListObject.digest = valueImageInstanceListresponses["Digest"].asString();
		if(!valueImageInstanceListresponses["RegistryType"].isNull())
			imageInstanceListObject.registryType = valueImageInstanceListresponses["RegistryType"].asString();
		if(!valueImageInstanceListresponses["Tag"].isNull())
			imageInstanceListObject.tag = valueImageInstanceListresponses["Tag"].asString();
		if(!valueImageInstanceListresponses["ImageUpdate"].isNull())
			imageInstanceListObject.imageUpdate = valueImageInstanceListresponses["ImageUpdate"].asString();
		if(!valueImageInstanceListresponses["RepoType"].isNull())
			imageInstanceListObject.repoType = valueImageInstanceListresponses["RepoType"].asString();
		if(!valueImageInstanceListresponses["ImageSize"].isNull())
			imageInstanceListObject.imageSize = valueImageInstanceListresponses["ImageSize"].asString();
		if(!valueImageInstanceListresponses["HcStatus"].isNull())
			imageInstanceListObject.hcStatus = valueImageInstanceListresponses["HcStatus"].asString();
		if(!valueImageInstanceListresponses["VulCount"].isNull())
			imageInstanceListObject.vulCount = std::stoi(valueImageInstanceListresponses["VulCount"].asString());
		if(!valueImageInstanceListresponses["ImageId"].isNull())
			imageInstanceListObject.imageId = valueImageInstanceListresponses["ImageId"].asString();
		if(!valueImageInstanceListresponses["Endpoints"].isNull())
			imageInstanceListObject.endpoints = valueImageInstanceListresponses["Endpoints"].asString();
		if(!valueImageInstanceListresponses["RiskStatus"].isNull())
			imageInstanceListObject.riskStatus = valueImageInstanceListresponses["RiskStatus"].asString();
		if(!valueImageInstanceListresponses["ImageCreate"].isNull())
			imageInstanceListObject.imageCreate = valueImageInstanceListresponses["ImageCreate"].asString();
		if(!valueImageInstanceListresponses["VulStatus"].isNull())
			imageInstanceListObject.vulStatus = valueImageInstanceListresponses["VulStatus"].asString();
		if(!valueImageInstanceListresponses["AlarmStatus"].isNull())
			imageInstanceListObject.alarmStatus = valueImageInstanceListresponses["AlarmStatus"].asString();
		if(!valueImageInstanceListresponses["ScaProgress"].isNull())
			imageInstanceListObject.scaProgress = std::stoi(valueImageInstanceListresponses["ScaProgress"].asString());
		if(!valueImageInstanceListresponses["InstanceId"].isNull())
			imageInstanceListObject.instanceId = valueImageInstanceListresponses["InstanceId"].asString();
		if(!valueImageInstanceListresponses["RegionId"].isNull())
			imageInstanceListObject.regionId = valueImageInstanceListresponses["RegionId"].asString();
		if(!valueImageInstanceListresponses["ScaStatus"].isNull())
			imageInstanceListObject.scaStatus = valueImageInstanceListresponses["ScaStatus"].asString();
		if(!valueImageInstanceListresponses["Uuid"].isNull())
			imageInstanceListObject.uuid = valueImageInstanceListresponses["Uuid"].asString();
		if(!valueImageInstanceListresponses["RepoId"].isNull())
			imageInstanceListObject.repoId = valueImageInstanceListresponses["RepoId"].asString();
		if(!valueImageInstanceListresponses["HcCount"].isNull())
			imageInstanceListObject.hcCount = std::stoi(valueImageInstanceListresponses["HcCount"].asString());
		if(!valueImageInstanceListresponses["ScaResult"].isNull())
			imageInstanceListObject.scaResult = valueImageInstanceListresponses["ScaResult"].asString();
		if(!valueImageInstanceListresponses["RepoName"].isNull())
			imageInstanceListObject.repoName = valueImageInstanceListresponses["RepoName"].asString();
		if(!valueImageInstanceListresponses["AlarmCount"].isNull())
			imageInstanceListObject.alarmCount = std::stoi(valueImageInstanceListresponses["AlarmCount"].asString());
		if(!valueImageInstanceListresponses["RepoNamespace"].isNull())
			imageInstanceListObject.repoNamespace = valueImageInstanceListresponses["RepoNamespace"].asString();
		if(!valueImageInstanceListresponses["Deployed"].isNull())
			imageInstanceListObject.deployed = std::stoi(valueImageInstanceListresponses["Deployed"].asString());
		if(!valueImageInstanceListresponses["SysProduct"].isNull())
			imageInstanceListObject.sysProduct = valueImageInstanceListresponses["SysProduct"].asString();
		if(!valueImageInstanceListresponses["SysVendor"].isNull())
			imageInstanceListObject.sysVendor = valueImageInstanceListresponses["SysVendor"].asString();
		if(!valueImageInstanceListresponses["SysVersion"].isNull())
			imageInstanceListObject.sysVersion = valueImageInstanceListresponses["SysVersion"].asString();
		if(!valueImageInstanceListresponses["OsRelease"].isNull())
			imageInstanceListObject.osRelease = valueImageInstanceListresponses["OsRelease"].asString();
		imageInstanceList_.push_back(imageInstanceListObject);
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

std::vector<DescribeImageInstancesResult::Responses> DescribeImageInstancesResult::getImageInstanceList()const
{
	return imageInstanceList_;
}

DescribeImageInstancesResult::PageInfo DescribeImageInstancesResult::getPageInfo()const
{
	return pageInfo_;
}

