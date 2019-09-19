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
	auto allKeywordLibListNode = value["KeywordLibList"]["KeywordLib"];
	for (auto valueKeywordLibListKeywordLib : allKeywordLibListNode)
	{
		KeywordLib keywordLibListObject;
		if(!valueKeywordLibListKeywordLib["Id"].isNull())
			keywordLibListObject.id = std::stoi(valueKeywordLibListKeywordLib["Id"].asString());
		if(!valueKeywordLibListKeywordLib["ModifiedTime"].isNull())
			keywordLibListObject.modifiedTime = valueKeywordLibListKeywordLib["ModifiedTime"].asString();
		if(!valueKeywordLibListKeywordLib["Name"].isNull())
			keywordLibListObject.name = valueKeywordLibListKeywordLib["Name"].asString();
		if(!valueKeywordLibListKeywordLib["Code"].isNull())
			keywordLibListObject.code = valueKeywordLibListKeywordLib["Code"].asString();
		if(!valueKeywordLibListKeywordLib["Count"].isNull())
			keywordLibListObject.count = std::stoi(valueKeywordLibListKeywordLib["Count"].asString());
		if(!valueKeywordLibListKeywordLib["Category"].isNull())
			keywordLibListObject.category = valueKeywordLibListKeywordLib["Category"].asString();
		if(!valueKeywordLibListKeywordLib["ResourceType"].isNull())
			keywordLibListObject.resourceType = valueKeywordLibListKeywordLib["ResourceType"].asString();
		if(!valueKeywordLibListKeywordLib["LibType"].isNull())
			keywordLibListObject.libType = valueKeywordLibListKeywordLib["LibType"].asString();
		if(!valueKeywordLibListKeywordLib["Source"].isNull())
			keywordLibListObject.source = valueKeywordLibListKeywordLib["Source"].asString();
		if(!valueKeywordLibListKeywordLib["ServiceModule"].isNull())
			keywordLibListObject.serviceModule = valueKeywordLibListKeywordLib["ServiceModule"].asString();
		if(!valueKeywordLibListKeywordLib["Language"].isNull())
			keywordLibListObject.language = valueKeywordLibListKeywordLib["Language"].asString();
		if(!valueKeywordLibListKeywordLib["MatchMode"].isNull())
			keywordLibListObject.matchMode = valueKeywordLibListKeywordLib["MatchMode"].asString();
		if(!valueKeywordLibListKeywordLib["Enable"].isNull())
			keywordLibListObject.enable = valueKeywordLibListKeywordLib["Enable"].asString() == "true";
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

