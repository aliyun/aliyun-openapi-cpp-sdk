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

#include <alibabacloud/cloudapi/model/DescribeApisByAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApisByAppResult::DescribeApisByAppResult() :
	ServiceResult()
{}

DescribeApisByAppResult::DescribeApisByAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApisByAppResult::~DescribeApisByAppResult()
{}

void DescribeApisByAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppApiRelationInfos = value["AppApiRelationInfos"]["AppApiRelationInfo"];
	for (auto value : allAppApiRelationInfos)
	{
		AppApiRelationInfo appApiRelationInfosObject;
		if(!value["RegionId"].isNull())
			appApiRelationInfosObject.regionId = value["RegionId"].asString();
		if(!value["GroupId"].isNull())
			appApiRelationInfosObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			appApiRelationInfosObject.groupName = value["GroupName"].asString();
		if(!value["StageName"].isNull())
			appApiRelationInfosObject.stageName = value["StageName"].asString();
		if(!value["Operator"].isNull())
			appApiRelationInfosObject._operator = value["Operator"].asString();
		if(!value["ApiId"].isNull())
			appApiRelationInfosObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			appApiRelationInfosObject.apiName = value["ApiName"].asString();
		if(!value["AuthorizationSource"].isNull())
			appApiRelationInfosObject.authorizationSource = value["AuthorizationSource"].asString();
		if(!value["Description"].isNull())
			appApiRelationInfosObject.description = value["Description"].asString();
		if(!value["CreatedTime"].isNull())
			appApiRelationInfosObject.createdTime = value["CreatedTime"].asString();
		appApiRelationInfos_.push_back(appApiRelationInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeApisByAppResult::AppApiRelationInfo> DescribeApisByAppResult::getAppApiRelationInfos()const
{
	return appApiRelationInfos_;
}

int DescribeApisByAppResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApisByAppResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApisByAppResult::getPageNumber()const
{
	return pageNumber_;
}

