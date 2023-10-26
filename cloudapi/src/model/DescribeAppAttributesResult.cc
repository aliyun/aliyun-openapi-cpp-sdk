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

#include <alibabacloud/cloudapi/model/DescribeAppAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeAppAttributesResult::DescribeAppAttributesResult() :
	ServiceResult()
{}

DescribeAppAttributesResult::DescribeAppAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppAttributesResult::~DescribeAppAttributesResult()
{}

void DescribeAppAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppsNode = value["Apps"]["AppAttribute"];
	for (auto valueAppsAppAttribute : allAppsNode)
	{
		AppAttribute appsObject;
		if(!valueAppsAppAttribute["AppName"].isNull())
			appsObject.appName = valueAppsAppAttribute["AppName"].asString();
		if(!valueAppsAppAttribute["ModifiedTime"].isNull())
			appsObject.modifiedTime = valueAppsAppAttribute["ModifiedTime"].asString();
		if(!valueAppsAppAttribute["Description"].isNull())
			appsObject.description = valueAppsAppAttribute["Description"].asString();
		if(!valueAppsAppAttribute["CreatedTime"].isNull())
			appsObject.createdTime = valueAppsAppAttribute["CreatedTime"].asString();
		if(!valueAppsAppAttribute["AppId"].isNull())
			appsObject.appId = std::stol(valueAppsAppAttribute["AppId"].asString());
		if(!valueAppsAppAttribute["Extend"].isNull())
			appsObject.extend = valueAppsAppAttribute["Extend"].asString();
		auto allTagsNode = valueAppsAppAttribute["Tags"]["TagInfo"];
		for (auto valueAppsAppAttributeTagsTagInfo : allTagsNode)
		{
			AppAttribute::TagInfo tagsObject;
			if(!valueAppsAppAttributeTagsTagInfo["Key"].isNull())
				tagsObject.key = valueAppsAppAttributeTagsTagInfo["Key"].asString();
			if(!valueAppsAppAttributeTagsTagInfo["Value"].isNull())
				tagsObject.value = valueAppsAppAttributeTagsTagInfo["Value"].asString();
			appsObject.tags.push_back(tagsObject);
		}
		apps_.push_back(appsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAppAttributesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAppAttributesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAppAttributesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAppAttributesResult::AppAttribute> DescribeAppAttributesResult::getApps()const
{
	return apps_;
}

