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

#include <alibabacloud/sas/model/DescribeImageRepoDetailListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageRepoDetailListResult::DescribeImageRepoDetailListResult() :
	ServiceResult()
{}

DescribeImageRepoDetailListResult::DescribeImageRepoDetailListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageRepoDetailListResult::~DescribeImageRepoDetailListResult()
{}

void DescribeImageRepoDetailListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageRepoResponsesNode = value["ImageRepoResponses"]["response"];
	for (auto valueImageRepoResponsesresponse : allImageRepoResponsesNode)
	{
		Response imageRepoResponsesObject;
		if(!valueImageRepoResponsesresponse["Endpoints"].isNull())
			imageRepoResponsesObject.endpoints = valueImageRepoResponsesresponse["Endpoints"].asString();
		if(!valueImageRepoResponsesresponse["RiskStatus"].isNull())
			imageRepoResponsesObject.riskStatus = valueImageRepoResponsesresponse["RiskStatus"].asString();
		if(!valueImageRepoResponsesresponse["VulStatus"].isNull())
			imageRepoResponsesObject.vulStatus = valueImageRepoResponsesresponse["VulStatus"].asString();
		if(!valueImageRepoResponsesresponse["AlarmStatus"].isNull())
			imageRepoResponsesObject.alarmStatus = valueImageRepoResponsesresponse["AlarmStatus"].asString();
		if(!valueImageRepoResponsesresponse["RegistryType"].isNull())
			imageRepoResponsesObject.registryType = valueImageRepoResponsesresponse["RegistryType"].asString();
		if(!valueImageRepoResponsesresponse["InstanceId"].isNull())
			imageRepoResponsesObject.instanceId = valueImageRepoResponsesresponse["InstanceId"].asString();
		if(!valueImageRepoResponsesresponse["RepoType"].isNull())
			imageRepoResponsesObject.repoType = valueImageRepoResponsesresponse["RepoType"].asString();
		if(!valueImageRepoResponsesresponse["RegionId"].isNull())
			imageRepoResponsesObject.regionId = valueImageRepoResponsesresponse["RegionId"].asString();
		if(!valueImageRepoResponsesresponse["RepoId"].isNull())
			imageRepoResponsesObject.repoId = valueImageRepoResponsesresponse["RepoId"].asString();
		if(!valueImageRepoResponsesresponse["HcCount"].isNull())
			imageRepoResponsesObject.hcCount = std::stoi(valueImageRepoResponsesresponse["HcCount"].asString());
		if(!valueImageRepoResponsesresponse["VulCount"].isNull())
			imageRepoResponsesObject.vulCount = std::stoi(valueImageRepoResponsesresponse["VulCount"].asString());
		if(!valueImageRepoResponsesresponse["HcStatus"].isNull())
			imageRepoResponsesObject.hcStatus = valueImageRepoResponsesresponse["HcStatus"].asString();
		if(!valueImageRepoResponsesresponse["AlarmCount"].isNull())
			imageRepoResponsesObject.alarmCount = std::stoi(valueImageRepoResponsesresponse["AlarmCount"].asString());
		if(!valueImageRepoResponsesresponse["RepoName"].isNull())
			imageRepoResponsesObject.repoName = valueImageRepoResponsesresponse["RepoName"].asString();
		if(!valueImageRepoResponsesresponse["RepoNamespace"].isNull())
			imageRepoResponsesObject.repoNamespace = valueImageRepoResponsesresponse["RepoNamespace"].asString();
		if(!valueImageRepoResponsesresponse["ImageCount"].isNull())
			imageRepoResponsesObject.imageCount = std::stoi(valueImageRepoResponsesresponse["ImageCount"].asString());
		imageRepoResponses_.push_back(imageRepoResponsesObject);
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

DescribeImageRepoDetailListResult::PageInfo DescribeImageRepoDetailListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeImageRepoDetailListResult::Response> DescribeImageRepoDetailListResult::getImageRepoResponses()const
{
	return imageRepoResponses_;
}

