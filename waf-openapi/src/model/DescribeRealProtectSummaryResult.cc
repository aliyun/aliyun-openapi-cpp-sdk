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

#include <alibabacloud/waf-openapi/model/DescribeRealProtectSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeRealProtectSummaryResult::DescribeRealProtectSummaryResult() :
	ServiceResult()
{}

DescribeRealProtectSummaryResult::DescribeRealProtectSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRealProtectSummaryResult::~DescribeRealProtectSummaryResult()
{}

void DescribeRealProtectSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRealProtectSummarysNode = value["RealProtectSummarys"]["Item"];
	for (auto valueRealProtectSummarysItem : allRealProtectSummarysNode)
	{
		Item realProtectSummarysObject;
		if(!valueRealProtectSummarysItem["AlgorithmPv"].isNull())
			realProtectSummarysObject.algorithmPv = std::stol(valueRealProtectSummarysItem["AlgorithmPv"].asString());
		if(!valueRealProtectSummarysItem["JsinjectPv"].isNull())
			realProtectSummarysObject.jsinjectPv = std::stol(valueRealProtectSummarysItem["JsinjectPv"].asString());
		if(!valueRealProtectSummarysItem["IntelligencePv"].isNull())
			realProtectSummarysObject.intelligencePv = std::stol(valueRealProtectSummarysItem["IntelligencePv"].asString());
		if(!valueRealProtectSummarysItem["SdkPv"].isNull())
			realProtectSummarysObject.sdkPv = std::stol(valueRealProtectSummarysItem["SdkPv"].asString());
		if(!valueRealProtectSummarysItem["Index"].isNull())
			realProtectSummarysObject.index = std::stol(valueRealProtectSummarysItem["Index"].asString());
		if(!valueRealProtectSummarysItem["Qps"].isNull())
			realProtectSummarysObject.qps = std::stol(valueRealProtectSummarysItem["Qps"].asString());
		realProtectSummarys_.push_back(realProtectSummarysObject);
	}

}

std::vector<DescribeRealProtectSummaryResult::Item> DescribeRealProtectSummaryResult::getRealProtectSummarys()const
{
	return realProtectSummarys_;
}

