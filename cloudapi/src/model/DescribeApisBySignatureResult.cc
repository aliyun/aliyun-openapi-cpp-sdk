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

#include <alibabacloud/cloudapi/model/DescribeApisBySignatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApisBySignatureResult::DescribeApisBySignatureResult() :
	ServiceResult()
{}

DescribeApisBySignatureResult::DescribeApisBySignatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApisBySignatureResult::~DescribeApisBySignatureResult()
{}

void DescribeApisBySignatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiInfosNode = value["ApiInfos"]["ApiInfo"];
	for (auto valueApiInfosApiInfo : allApiInfosNode)
	{
		ApiInfo apiInfosObject;
		if(!valueApiInfosApiInfo["BoundTime"].isNull())
			apiInfosObject.boundTime = valueApiInfosApiInfo["BoundTime"].asString();
		if(!valueApiInfosApiInfo["Visibility"].isNull())
			apiInfosObject.visibility = valueApiInfosApiInfo["Visibility"].asString();
		if(!valueApiInfosApiInfo["ApiId"].isNull())
			apiInfosObject.apiId = valueApiInfosApiInfo["ApiId"].asString();
		if(!valueApiInfosApiInfo["Description"].isNull())
			apiInfosObject.description = valueApiInfosApiInfo["Description"].asString();
		if(!valueApiInfosApiInfo["GroupName"].isNull())
			apiInfosObject.groupName = valueApiInfosApiInfo["GroupName"].asString();
		if(!valueApiInfosApiInfo["GroupId"].isNull())
			apiInfosObject.groupId = valueApiInfosApiInfo["GroupId"].asString();
		if(!valueApiInfosApiInfo["StageName"].isNull())
			apiInfosObject.stageName = valueApiInfosApiInfo["StageName"].asString();
		if(!valueApiInfosApiInfo["ApiName"].isNull())
			apiInfosObject.apiName = valueApiInfosApiInfo["ApiName"].asString();
		if(!valueApiInfosApiInfo["RegionId"].isNull())
			apiInfosObject.regionId = valueApiInfosApiInfo["RegionId"].asString();
		apiInfos_.push_back(apiInfosObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeApisBySignatureResult::ApiInfo> DescribeApisBySignatureResult::getApiInfos()const
{
	return apiInfos_;
}

int DescribeApisBySignatureResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApisBySignatureResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApisBySignatureResult::getPageNumber()const
{
	return pageNumber_;
}

