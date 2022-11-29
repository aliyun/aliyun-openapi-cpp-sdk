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

#include <alibabacloud/cloudapi/model/DescribePluginApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribePluginApisResult::DescribePluginApisResult() :
	ServiceResult()
{}

DescribePluginApisResult::DescribePluginApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePluginApisResult::~DescribePluginApisResult()
{}

void DescribePluginApisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiSummarysNode = value["ApiSummarys"]["ApiPluginSummary"];
	for (auto valueApiSummarysApiPluginSummary : allApiSummarysNode)
	{
		ApiPluginSummary apiSummarysObject;
		if(!valueApiSummarysApiPluginSummary["ApiId"].isNull())
			apiSummarysObject.apiId = valueApiSummarysApiPluginSummary["ApiId"].asString();
		if(!valueApiSummarysApiPluginSummary["Description"].isNull())
			apiSummarysObject.description = valueApiSummarysApiPluginSummary["Description"].asString();
		if(!valueApiSummarysApiPluginSummary["GroupName"].isNull())
			apiSummarysObject.groupName = valueApiSummarysApiPluginSummary["GroupName"].asString();
		if(!valueApiSummarysApiPluginSummary["GroupId"].isNull())
			apiSummarysObject.groupId = valueApiSummarysApiPluginSummary["GroupId"].asString();
		if(!valueApiSummarysApiPluginSummary["Path"].isNull())
			apiSummarysObject.path = valueApiSummarysApiPluginSummary["Path"].asString();
		if(!valueApiSummarysApiPluginSummary["Method"].isNull())
			apiSummarysObject.method = valueApiSummarysApiPluginSummary["Method"].asString();
		if(!valueApiSummarysApiPluginSummary["StageName"].isNull())
			apiSummarysObject.stageName = valueApiSummarysApiPluginSummary["StageName"].asString();
		if(!valueApiSummarysApiPluginSummary["ApiName"].isNull())
			apiSummarysObject.apiName = valueApiSummarysApiPluginSummary["ApiName"].asString();
		if(!valueApiSummarysApiPluginSummary["RegionId"].isNull())
			apiSummarysObject.regionId = valueApiSummarysApiPluginSummary["RegionId"].asString();
		apiSummarys_.push_back(apiSummarysObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribePluginApisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePluginApisResult::getPageSize()const
{
	return pageSize_;
}

int DescribePluginApisResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePluginApisResult::ApiPluginSummary> DescribePluginApisResult::getApiSummarys()const
{
	return apiSummarys_;
}

