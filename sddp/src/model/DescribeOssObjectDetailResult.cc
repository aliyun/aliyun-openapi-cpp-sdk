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

#include <alibabacloud/sddp/model/DescribeOssObjectDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeOssObjectDetailResult::DescribeOssObjectDetailResult() :
	ServiceResult()
{}

DescribeOssObjectDetailResult::DescribeOssObjectDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssObjectDetailResult::~DescribeOssObjectDetailResult()
{}

void DescribeOssObjectDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ossObjectDetailNode = value["OssObjectDetail"];
	if(!ossObjectDetailNode["Name"].isNull())
		ossObjectDetail_.name = ossObjectDetailNode["Name"].asString();
	if(!ossObjectDetailNode["RegionId"].isNull())
		ossObjectDetail_.regionId = ossObjectDetailNode["RegionId"].asString();
	if(!ossObjectDetailNode["RiskLevelName"].isNull())
		ossObjectDetail_.riskLevelName = ossObjectDetailNode["RiskLevelName"].asString();
	if(!ossObjectDetailNode["BucketName"].isNull())
		ossObjectDetail_.bucketName = ossObjectDetailNode["BucketName"].asString();
	if(!ossObjectDetailNode["CategoryName"].isNull())
		ossObjectDetail_.categoryName = ossObjectDetailNode["CategoryName"].asString();
	auto allRuleList = value["RuleList"]["Rule"];
	for (auto value : allRuleList)
	{
		OssObjectDetail::Rule ruleObject;
		if(!value["RuleName"].isNull())
			ruleObject.ruleName = value["RuleName"].asString();
		if(!value["Count"].isNull())
			ruleObject.count = std::stol(value["Count"].asString());
		ossObjectDetail_.ruleList.push_back(ruleObject);
	}

}

DescribeOssObjectDetailResult::OssObjectDetail DescribeOssObjectDetailResult::getOssObjectDetail()const
{
	return ossObjectDetail_;
}

