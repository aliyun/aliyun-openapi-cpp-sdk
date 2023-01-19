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

#include <alibabacloud/sas/model/DescribeImageBaselineItemListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageBaselineItemListResult::DescribeImageBaselineItemListResult() :
	ServiceResult()
{}

DescribeImageBaselineItemListResult::DescribeImageBaselineItemListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageBaselineItemListResult::~DescribeImageBaselineItemListResult()
{}

void DescribeImageBaselineItemListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselineItemInfosNode = value["BaselineItemInfos"]["BaselineItemInfosItem"];
	for (auto valueBaselineItemInfosBaselineItemInfosItem : allBaselineItemInfosNode)
	{
		BaselineItemInfosItem baselineItemInfosObject;
		if(!valueBaselineItemInfosBaselineItemInfosItem["Status"].isNull())
			baselineItemInfosObject.status = std::stoi(valueBaselineItemInfosBaselineItemInfosItem["Status"].asString());
		if(!valueBaselineItemInfosBaselineItemInfosItem["WhiteList"].isNull())
			baselineItemInfosObject.whiteList = std::stoi(valueBaselineItemInfosBaselineItemInfosItem["WhiteList"].asString());
		if(!valueBaselineItemInfosBaselineItemInfosItem["BaselineNameKey"].isNull())
			baselineItemInfosObject.baselineNameKey = valueBaselineItemInfosBaselineItemInfosItem["BaselineNameKey"].asString();
		if(!valueBaselineItemInfosBaselineItemInfosItem["BaselineItemAlias"].isNull())
			baselineItemInfosObject.baselineItemAlias = valueBaselineItemInfosBaselineItemInfosItem["BaselineItemAlias"].asString();
		if(!valueBaselineItemInfosBaselineItemInfosItem["BaselineClassKey"].isNull())
			baselineItemInfosObject.baselineClassKey = valueBaselineItemInfosBaselineItemInfosItem["BaselineClassKey"].asString();
		if(!valueBaselineItemInfosBaselineItemInfosItem["BaselineClassAlias"].isNull())
			baselineItemInfosObject.baselineClassAlias = valueBaselineItemInfosBaselineItemInfosItem["BaselineClassAlias"].asString();
		if(!valueBaselineItemInfosBaselineItemInfosItem["BaselineNameAlias"].isNull())
			baselineItemInfosObject.baselineNameAlias = valueBaselineItemInfosBaselineItemInfosItem["BaselineNameAlias"].asString();
		if(!valueBaselineItemInfosBaselineItemInfosItem["BaselineItemKey"].isNull())
			baselineItemInfosObject.baselineItemKey = valueBaselineItemInfosBaselineItemInfosItem["BaselineItemKey"].asString();
		baselineItemInfos_.push_back(baselineItemInfosObject);
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

std::vector<DescribeImageBaselineItemListResult::BaselineItemInfosItem> DescribeImageBaselineItemListResult::getBaselineItemInfos()const
{
	return baselineItemInfos_;
}

DescribeImageBaselineItemListResult::PageInfo DescribeImageBaselineItemListResult::getPageInfo()const
{
	return pageInfo_;
}

