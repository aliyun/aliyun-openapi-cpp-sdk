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

#include <alibabacloud/cloudapi/model/DescribeAuthorizedApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeAuthorizedApisResult::DescribeAuthorizedApisResult() :
	ServiceResult()
{}

DescribeAuthorizedApisResult::DescribeAuthorizedApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuthorizedApisResult::~DescribeAuthorizedApisResult()
{}

void DescribeAuthorizedApisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthorizedApis = value["AuthorizedApis"]["AuthorizedApi"];
	for (auto value : allAuthorizedApis)
	{
		AuthorizedApi authorizedApisObject;
		if(!value["RegionId"].isNull())
			authorizedApisObject.regionId = value["RegionId"].asString();
		if(!value["GroupId"].isNull())
			authorizedApisObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			authorizedApisObject.groupName = value["GroupName"].asString();
		if(!value["StageName"].isNull())
			authorizedApisObject.stageName = value["StageName"].asString();
		if(!value["Operator"].isNull())
			authorizedApisObject._operator = value["Operator"].asString();
		if(!value["ApiId"].isNull())
			authorizedApisObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			authorizedApisObject.apiName = value["ApiName"].asString();
		if(!value["AuthorizationSource"].isNull())
			authorizedApisObject.authorizationSource = value["AuthorizationSource"].asString();
		if(!value["Description"].isNull())
			authorizedApisObject.description = value["Description"].asString();
		if(!value["AuthorizedTime"].isNull())
			authorizedApisObject.authorizedTime = value["AuthorizedTime"].asString();
		if(!value["AuthVaildTime"].isNull())
			authorizedApisObject.authVaildTime = value["AuthVaildTime"].asString();
		authorizedApis_.push_back(authorizedApisObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAuthorizedApisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAuthorizedApisResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAuthorizedApisResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAuthorizedApisResult::AuthorizedApi> DescribeAuthorizedApisResult::getAuthorizedApis()const
{
	return authorizedApis_;
}

