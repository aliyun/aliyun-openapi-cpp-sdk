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

#include <alibabacloud/sddp/model/DescribeOssObjectDetailV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeOssObjectDetailV2Result::DescribeOssObjectDetailV2Result() :
	ServiceResult()
{}

DescribeOssObjectDetailV2Result::DescribeOssObjectDetailV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssObjectDetailV2Result::~DescribeOssObjectDetailV2Result()
{}

void DescribeOssObjectDetailV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ossObjectDetailNode = value["OssObjectDetail"];
	if(!ossObjectDetailNode["CategoryName"].isNull())
		ossObjectDetail_.categoryName = ossObjectDetailNode["CategoryName"].asString();
	if(!ossObjectDetailNode["Name"].isNull())
		ossObjectDetail_.name = ossObjectDetailNode["Name"].asString();
	if(!ossObjectDetailNode["BucketName"].isNull())
		ossObjectDetail_.bucketName = ossObjectDetailNode["BucketName"].asString();
	if(!ossObjectDetailNode["RiskLevelName"].isNull())
		ossObjectDetail_.riskLevelName = ossObjectDetailNode["RiskLevelName"].asString();
	if(!ossObjectDetailNode["RegionId"].isNull())
		ossObjectDetail_.regionId = ossObjectDetailNode["RegionId"].asString();
	auto allRuleListNode = ossObjectDetailNode["RuleList"]["Rule"];
	for (auto ossObjectDetailNodeRuleListRule : allRuleListNode)
	{
		OssObjectDetail::Rule ruleObject;
		if(!ossObjectDetailNodeRuleListRule["RiskLevelName"].isNull())
			ruleObject.riskLevelName = ossObjectDetailNodeRuleListRule["RiskLevelName"].asString();
		if(!ossObjectDetailNodeRuleListRule["Category"].isNull())
			ruleObject.category = std::stoi(ossObjectDetailNodeRuleListRule["Category"].asString());
		if(!ossObjectDetailNodeRuleListRule["CategoryName"].isNull())
			ruleObject.categoryName = ossObjectDetailNodeRuleListRule["CategoryName"].asString();
		if(!ossObjectDetailNodeRuleListRule["RiskLevelId"].isNull())
			ruleObject.riskLevelId = std::stol(ossObjectDetailNodeRuleListRule["RiskLevelId"].asString());
		if(!ossObjectDetailNodeRuleListRule["Count"].isNull())
			ruleObject.count = std::stol(ossObjectDetailNodeRuleListRule["Count"].asString());
		if(!ossObjectDetailNodeRuleListRule["RuleName"].isNull())
			ruleObject.ruleName = ossObjectDetailNodeRuleListRule["RuleName"].asString();
		auto allModelTagsNode = ossObjectDetailNodeRuleListRule["ModelTags"]["modelTagsItem"];
		for (auto ossObjectDetailNodeRuleListRuleModelTagsmodelTagsItem : allModelTagsNode)
		{
			OssObjectDetail::Rule::ModelTagsItem modelTagsObject;
			if(!ossObjectDetailNodeRuleListRuleModelTagsmodelTagsItem["Id"].isNull())
				modelTagsObject.id = std::stol(ossObjectDetailNodeRuleListRuleModelTagsmodelTagsItem["Id"].asString());
			if(!ossObjectDetailNodeRuleListRuleModelTagsmodelTagsItem["Name"].isNull())
				modelTagsObject.name = ossObjectDetailNodeRuleListRuleModelTagsmodelTagsItem["Name"].asString();
			ruleObject.modelTags.push_back(modelTagsObject);
		}
		auto allSampleList = value["SampleList"]["Sample"];
		for (auto value : allSampleList)
			ruleObject.sampleList.push_back(value.asString());
		ossObjectDetail_.ruleList.push_back(ruleObject);
	}

}

DescribeOssObjectDetailV2Result::OssObjectDetail DescribeOssObjectDetailV2Result::getOssObjectDetail()const
{
	return ossObjectDetail_;
}

