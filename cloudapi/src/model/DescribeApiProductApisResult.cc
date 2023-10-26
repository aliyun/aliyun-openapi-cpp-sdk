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

#include <alibabacloud/cloudapi/model/DescribeApiProductApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiProductApisResult::DescribeApiProductApisResult() :
	ServiceResult()
{}

DescribeApiProductApisResult::DescribeApiProductApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiProductApisResult::~DescribeApiProductApisResult()
{}

void DescribeApiProductApisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiInfoListNode = value["ApiInfoList"]["ApiInfo"];
	for (auto valueApiInfoListApiInfo : allApiInfoListNode)
	{
		ApiInfo apiInfoListObject;
		if(!valueApiInfoListApiInfo["ApiId"].isNull())
			apiInfoListObject.apiId = valueApiInfoListApiInfo["ApiId"].asString();
		if(!valueApiInfoListApiInfo["Description"].isNull())
			apiInfoListObject.description = valueApiInfoListApiInfo["Description"].asString();
		if(!valueApiInfoListApiInfo["GroupName"].isNull())
			apiInfoListObject.groupName = valueApiInfoListApiInfo["GroupName"].asString();
		if(!valueApiInfoListApiInfo["GroupId"].isNull())
			apiInfoListObject.groupId = valueApiInfoListApiInfo["GroupId"].asString();
		if(!valueApiInfoListApiInfo["Path"].isNull())
			apiInfoListObject.path = valueApiInfoListApiInfo["Path"].asString();
		if(!valueApiInfoListApiInfo["Method"].isNull())
			apiInfoListObject.method = valueApiInfoListApiInfo["Method"].asString();
		if(!valueApiInfoListApiInfo["StageName"].isNull())
			apiInfoListObject.stageName = valueApiInfoListApiInfo["StageName"].asString();
		if(!valueApiInfoListApiInfo["ApiName"].isNull())
			apiInfoListObject.apiName = valueApiInfoListApiInfo["ApiName"].asString();
		if(!valueApiInfoListApiInfo["RegionId"].isNull())
			apiInfoListObject.regionId = valueApiInfoListApiInfo["RegionId"].asString();
		apiInfoList_.push_back(apiInfoListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeApiProductApisResult::ApiInfo> DescribeApiProductApisResult::getApiInfoList()const
{
	return apiInfoList_;
}

int DescribeApiProductApisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApiProductApisResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApiProductApisResult::getPageNumber()const
{
	return pageNumber_;
}

