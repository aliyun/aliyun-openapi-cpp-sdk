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

#include <alibabacloud/aegis/model/DescribeAssetSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAssetSummaryResult::DescribeAssetSummaryResult() :
	ServiceResult()
{}

DescribeAssetSummaryResult::DescribeAssetSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAssetSummaryResult::~DescribeAssetSummaryResult()
{}

void DescribeAssetSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto summaryNode = value["Summary"];
	if(!summaryNode["TotalCount"].isNull())
		summary_.totalCount = std::stoi(summaryNode["TotalCount"].asString());
	if(!summaryNode["Offline"].isNull())
		summary_.offline = std::stoi(summaryNode["Offline"].asString());
	if(!summaryNode["Online"].isNull())
		summary_.online = std::stoi(summaryNode["Online"].asString());
	if(!summaryNode["AllRegionCount"].isNull())
		summary_.allRegionCount = std::stoi(summaryNode["AllRegionCount"].asString());

}

DescribeAssetSummaryResult::Summary DescribeAssetSummaryResult::getSummary()const
{
	return summary_;
}

