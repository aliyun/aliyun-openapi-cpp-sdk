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

#include <alibabacloud/cloudauth/model/DescribeVerifyUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeVerifyUsageResult::DescribeVerifyUsageResult() :
	ServiceResult()
{}

DescribeVerifyUsageResult::DescribeVerifyUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVerifyUsageResult::~DescribeVerifyUsageResult()
{}

void DescribeVerifyUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVerifyUsageListNode = value["VerifyUsageList"]["VerifyUsage"];
	for (auto valueVerifyUsageListVerifyUsage : allVerifyUsageListNode)
	{
		VerifyUsage verifyUsageListObject;
		if(!valueVerifyUsageListVerifyUsage["BizType"].isNull())
			verifyUsageListObject.bizType = valueVerifyUsageListVerifyUsage["BizType"].asString();
		if(!valueVerifyUsageListVerifyUsage["Date"].isNull())
			verifyUsageListObject.date = valueVerifyUsageListVerifyUsage["Date"].asString();
		if(!valueVerifyUsageListVerifyUsage["TotalCount"].isNull())
			verifyUsageListObject.totalCount = std::stol(valueVerifyUsageListVerifyUsage["TotalCount"].asString());
		if(!valueVerifyUsageListVerifyUsage["PassCount"].isNull())
			verifyUsageListObject.passCount = std::stol(valueVerifyUsageListVerifyUsage["PassCount"].asString());
		if(!valueVerifyUsageListVerifyUsage["FailCount"].isNull())
			verifyUsageListObject.failCount = std::stol(valueVerifyUsageListVerifyUsage["FailCount"].asString());
		verifyUsageList_.push_back(verifyUsageListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeVerifyUsageResult::VerifyUsage> DescribeVerifyUsageResult::getVerifyUsageList()const
{
	return verifyUsageList_;
}

int DescribeVerifyUsageResult::getTotalCount()const
{
	return totalCount_;
}

