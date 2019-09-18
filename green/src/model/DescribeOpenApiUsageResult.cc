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
	auto allOpenApiUsageList = value["OpenApiUsageList"]["OpenApiUsage"];
	for (auto value : allOpenApiUsageList)
	{
		OpenApiUsage openApiUsageListObject;
		if(!value["Date"].isNull())
			openApiUsageListObject.date = value["Date"].asString();
		if(!value["ResourceType"].isNull())
			openApiUsageListObject.resourceType = value["ResourceType"].asString();
		if(!value["Scene"].isNull())
			openApiUsageListObject.scene = value["Scene"].asString();
		if(!value["TotalCount"].isNull())
			openApiUsageListObject.totalCount = std::stoi(value["TotalCount"].asString());
		if(!value["PassCount"].isNull())
			openApiUsageListObject.passCount = std::stoi(value["PassCount"].asString());
		if(!value["ReviewCount"].isNull())
			openApiUsageListObject.reviewCount = std::stoi(value["ReviewCount"].asString());
		if(!value["BlockCount"].isNull())
			openApiUsageListObject.blockCount = std::stoi(value["BlockCount"].asString());
		if(!value["InnerTotalCount"].isNull())
			openApiUsageListObject.innerTotalCount = std::stoi(value["InnerTotalCount"].asString());
		if(!value["OuterTotalCount"].isNull())
			openApiUsageListObject.outerTotalCount = std::stoi(value["OuterTotalCount"].asString());
		if(!value["TotalDuration"].isNull())
			openApiUsageListObject.totalDuration = std::stoi(value["TotalDuration"].asString());
		if(!value["PassDuration"].isNull())
			openApiUsageListObject.passDuration = std::stoi(value["PassDuration"].asString());
		if(!value["ReviewDuration"].isNull())
			openApiUsageListObject.reviewDuration = std::stoi(value["ReviewDuration"].asString());
		if(!value["BlockDuration"].isNull())
			openApiUsageListObject.blockDuration = std::stoi(value["BlockDuration"].asString());
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

