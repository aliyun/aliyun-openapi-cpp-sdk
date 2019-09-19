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

#include <alibabacloud/green/model/DescribeOpenApiUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOpenApiUsageResult::DescribeOpenApiUsageResult() :
	ServiceResult()
{}

DescribeOpenApiUsageResult::DescribeOpenApiUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOpenApiUsageResult::~DescribeOpenApiUsageResult()
{}

void DescribeOpenApiUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOpenApiUsageListNode = value["OpenApiUsageList"]["OpenApiUsage"];
	for (auto valueOpenApiUsageListOpenApiUsage : allOpenApiUsageListNode)
	{
		OpenApiUsage openApiUsageListObject;
		if(!valueOpenApiUsageListOpenApiUsage["Date"].isNull())
			openApiUsageListObject.date = valueOpenApiUsageListOpenApiUsage["Date"].asString();
		if(!valueOpenApiUsageListOpenApiUsage["ResourceType"].isNull())
			openApiUsageListObject.resourceType = valueOpenApiUsageListOpenApiUsage["ResourceType"].asString();
		if(!valueOpenApiUsageListOpenApiUsage["Scene"].isNull())
			openApiUsageListObject.scene = valueOpenApiUsageListOpenApiUsage["Scene"].asString();
		if(!valueOpenApiUsageListOpenApiUsage["TotalCount"].isNull())
			openApiUsageListObject.totalCount = std::stoi(valueOpenApiUsageListOpenApiUsage["TotalCount"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["PassCount"].isNull())
			openApiUsageListObject.passCount = std::stoi(valueOpenApiUsageListOpenApiUsage["PassCount"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["ReviewCount"].isNull())
			openApiUsageListObject.reviewCount = std::stoi(valueOpenApiUsageListOpenApiUsage["ReviewCount"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["BlockCount"].isNull())
			openApiUsageListObject.blockCount = std::stoi(valueOpenApiUsageListOpenApiUsage["BlockCount"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["InnerTotalCount"].isNull())
			openApiUsageListObject.innerTotalCount = std::stoi(valueOpenApiUsageListOpenApiUsage["InnerTotalCount"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["OuterTotalCount"].isNull())
			openApiUsageListObject.outerTotalCount = std::stoi(valueOpenApiUsageListOpenApiUsage["OuterTotalCount"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["TotalDuration"].isNull())
			openApiUsageListObject.totalDuration = std::stoi(valueOpenApiUsageListOpenApiUsage["TotalDuration"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["PassDuration"].isNull())
			openApiUsageListObject.passDuration = std::stoi(valueOpenApiUsageListOpenApiUsage["PassDuration"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["ReviewDuration"].isNull())
			openApiUsageListObject.reviewDuration = std::stoi(valueOpenApiUsageListOpenApiUsage["ReviewDuration"].asString());
		if(!valueOpenApiUsageListOpenApiUsage["BlockDuration"].isNull())
			openApiUsageListObject.blockDuration = std::stoi(valueOpenApiUsageListOpenApiUsage["BlockDuration"].asString());
		openApiUsageList_.push_back(openApiUsageListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeOpenApiUsageResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeOpenApiUsageResult::OpenApiUsage> DescribeOpenApiUsageResult::getOpenApiUsageList()const
{
	return openApiUsageList_;
}

