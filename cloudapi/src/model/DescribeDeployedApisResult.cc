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

#include <alibabacloud/cloudapi/model/DescribeDeployedApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeDeployedApisResult::DescribeDeployedApisResult() :
	ServiceResult()
{}

DescribeDeployedApisResult::DescribeDeployedApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeployedApisResult::~DescribeDeployedApisResult()
{}

void DescribeDeployedApisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDeployedApis = value["DeployedApis"]["DeployedApiItem"];
	for (auto value : allDeployedApis)
	{
		DeployedApiItem deployedApisObject;
		if(!value["RegionId"].isNull())
			deployedApisObject.regionId = value["RegionId"].asString();
		if(!value["ApiId"].isNull())
			deployedApisObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			deployedApisObject.apiName = value["ApiName"].asString();
		if(!value["GroupId"].isNull())
			deployedApisObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			deployedApisObject.groupName = value["GroupName"].asString();
		if(!value["StageName"].isNull())
			deployedApisObject.stageName = value["StageName"].asString();
		if(!value["Visibility"].isNull())
			deployedApisObject.visibility = value["Visibility"].asString();
		if(!value["Description"].isNull())
			deployedApisObject.description = value["Description"].asString();
		if(!value["DeployedTime"].isNull())
			deployedApisObject.deployedTime = value["DeployedTime"].asString();
		deployedApis_.push_back(deployedApisObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDeployedApisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDeployedApisResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDeployedApisResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDeployedApisResult::DeployedApiItem> DescribeDeployedApisResult::getDeployedApis()const
{
	return deployedApis_;
}

