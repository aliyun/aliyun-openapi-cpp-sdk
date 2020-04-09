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

#include <alibabacloud/waf-openapi/model/DescribeProtectBlockSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeProtectBlockSummaryResult::DescribeProtectBlockSummaryResult() :
	ServiceResult()
{}

DescribeProtectBlockSummaryResult::DescribeProtectBlockSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProtectBlockSummaryResult::~DescribeProtectBlockSummaryResult()
{}

void DescribeProtectBlockSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProtectBlockSummarysNode = value["ProtectBlockSummarys"]["Item"];
	for (auto valueProtectBlockSummarysItem : allProtectBlockSummarysNode)
	{
		Item protectBlockSummarysObject;
		if(!valueProtectBlockSummarysItem["BlockPv"].isNull())
			protectBlockSummarysObject.blockPv = std::stol(valueProtectBlockSummarysItem["BlockPv"].asString());
		if(!valueProtectBlockSummarysItem["Index"].isNull())
			protectBlockSummarysObject.index = std::stol(valueProtectBlockSummarysItem["Index"].asString());
		if(!valueProtectBlockSummarysItem["AllPv"].isNull())
			protectBlockSummarysObject.allPv = std::stol(valueProtectBlockSummarysItem["AllPv"].asString());
		protectBlockSummarys_.push_back(protectBlockSummarysObject);
	}

}

std::vector<DescribeProtectBlockSummaryResult::Item> DescribeProtectBlockSummaryResult::getProtectBlockSummarys()const
{
	return protectBlockSummarys_;
}

