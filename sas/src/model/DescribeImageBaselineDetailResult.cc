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

#include <alibabacloud/sas/model/DescribeImageBaselineDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageBaselineDetailResult::DescribeImageBaselineDetailResult() :
	ServiceResult()
{}

DescribeImageBaselineDetailResult::DescribeImageBaselineDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageBaselineDetailResult::~DescribeImageBaselineDetailResult()
{}

void DescribeImageBaselineDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto baselineDetailNode = value["BaselineDetail"];
	if(!baselineDetailNode["Advice"].isNull())
		baselineDetail_.advice = baselineDetailNode["Advice"].asString();
	if(!baselineDetailNode["ResultId"].isNull())
		baselineDetail_.resultId = baselineDetailNode["ResultId"].asString();
	if(!baselineDetailNode["Description"].isNull())
		baselineDetail_.description = baselineDetailNode["Description"].asString();
	if(!baselineDetailNode["BaselineItemAlias"].isNull())
		baselineDetail_.baselineItemAlias = baselineDetailNode["BaselineItemAlias"].asString();
	if(!baselineDetailNode["BaselineNameAlias"].isNull())
		baselineDetail_.baselineNameAlias = baselineDetailNode["BaselineNameAlias"].asString();
	if(!baselineDetailNode["BaselineClassAlias"].isNull())
		baselineDetail_.baselineClassAlias = baselineDetailNode["BaselineClassAlias"].asString();
	if(!baselineDetailNode["BaselineItemKey"].isNull())
		baselineDetail_.baselineItemKey = baselineDetailNode["BaselineItemKey"].asString();
	if(!baselineDetailNode["Prompt"].isNull())
		baselineDetail_.prompt = baselineDetailNode["Prompt"].asString();
	if(!baselineDetailNode["Level"].isNull())
		baselineDetail_.level = baselineDetailNode["Level"].asString();

}

DescribeImageBaselineDetailResult::BaselineDetail DescribeImageBaselineDetailResult::getBaselineDetail()const
{
	return baselineDetail_;
}

