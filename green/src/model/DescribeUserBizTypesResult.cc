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

#include <alibabacloud/green/model/DescribeUserBizTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeUserBizTypesResult::DescribeUserBizTypesResult() :
	ServiceResult()
{}

DescribeUserBizTypesResult::DescribeUserBizTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserBizTypesResult::~DescribeUserBizTypesResult()
{}

void DescribeUserBizTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBizTypeList = value["BizTypeList"]["item"];
	for (auto value : allBizTypeList)
	{
		Item bizTypeListObject;
		if(!value["BizType"].isNull())
			bizTypeListObject.bizType = value["BizType"].asString();
		if(!value["SourceBizType"].isNull())
			bizTypeListObject.sourceBizType = value["SourceBizType"].asString();
		if(!value["Gray"].isNull())
			bizTypeListObject.gray = value["Gray"].asString() == "true";
		if(!value["Source"].isNull())
			bizTypeListObject.source = value["Source"].asString();
		bizTypeList_.push_back(bizTypeListObject);
	}
	auto allBizTypeListImport = value["BizTypeListImport"]["item"];
	for (auto value : allBizTypeListImport)
	{
		Item bizTypeListImportObject;
		if(!value["BizType"].isNull())
			bizTypeListImportObject.bizType = value["BizType"].asString();
		if(!value["SourceBizType"].isNull())
			bizTypeListImportObject.sourceBizType = value["SourceBizType"].asString();
		if(!value["Gray"].isNull())
			bizTypeListImportObject.gray = value["Gray"].asString() == "true";
		if(!value["Source"].isNull())
			bizTypeListImportObject.source = value["Source"].asString();
		bizTypeListImport_.push_back(bizTypeListImportObject);
	}

}

std::vector<DescribeUserBizTypesResult::Item> DescribeUserBizTypesResult::getBizTypeList()const
{
	return bizTypeList_;
}

std::vector<DescribeUserBizTypesResult::Item> DescribeUserBizTypesResult::getBizTypeListImport()const
{
	return bizTypeListImport_;
}

