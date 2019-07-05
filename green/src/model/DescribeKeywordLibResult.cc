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

#include <alibabacloud/green/model/DescribeKeywordLibResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeKeywordLibResult::DescribeKeywordLibResult() :
	ServiceResult()
{}

DescribeKeywordLibResult::DescribeKeywordLibResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKeywordLibResult::~DescribeKeywordLibResult()
{}

void DescribeKeywordLibResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allKeywordLibList = value["KeywordLibList"]["KeywordLib"];
	for (auto value : allKeywordLibList)
	{
		KeywordLib keywordLibListObject;
		if(!value["Id"].isNull())
			keywordLibListObject.id = std::stoi(value["Id"].asString());
		if(!value["ModifiedTime"].isNull())
			keywordLibListObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["Name"].isNull())
			keywordLibListObject.name = value["Name"].asString();
		if(!value["Code"].isNull())
			keywordLibListObject.code = value["Code"].asString();
		if(!value["Count"].isNull())
			keywordLibListObject.count = std::stoi(value["Count"].asString());
		if(!value["Category"].isNull())
			keywordLibListObject.category = value["Category"].asString();
		if(!value["ResourceType"].isNull())
			keywordLibListObject.resourceType = value["ResourceType"].asString();
		if(!value["LibType"].isNull())
			keywordLibListObject.libType = value["LibType"].asString();
		if(!value["Source"].isNull())
			keywordLibListObject.source = value["Source"].asString();
		if(!value["ServiceModule"].isNull())
			keywordLibListObject.serviceModule = value["ServiceModule"].asString();
		if(!value["Language"].isNull())
			keywordLibListObject.language = value["Language"].asString();
		if(!value["MatchMode"].isNull())
			keywordLibListObject.matchMode = value["MatchMode"].asString();
		if(!value["Enable"].isNull())
			keywordLibListObject.enable = value["Enable"].asString() == "true";
		auto allBizTypes = value["BizTypes"]["StringItem"];
		for (auto value : allBizTypes)
			keywordLibListObject.bizTypes.push_back(value.asString());
		keywordLibList_.push_back(keywordLibListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeKeywordLibResult::KeywordLib> DescribeKeywordLibResult::getKeywordLibList()const
{
	return keywordLibList_;
}

int DescribeKeywordLibResult::getTotalCount()const
{
	return totalCount_;
}

