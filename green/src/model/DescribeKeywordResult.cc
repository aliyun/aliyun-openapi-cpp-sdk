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

#include <alibabacloud/green/model/DescribeKeywordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeKeywordResult::DescribeKeywordResult() :
	ServiceResult()
{}

DescribeKeywordResult::DescribeKeywordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKeywordResult::~DescribeKeywordResult()
{}

void DescribeKeywordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeywordListNode = value["KeywordList"]["Keyword"];
	for (auto valueKeywordListKeyword : allKeywordListNode)
	{
		Keyword keywordListObject;
		if(!valueKeywordListKeyword["Id"].isNull())
			keywordListObject.id = std::stoi(valueKeywordListKeyword["Id"].asString());
		if(!valueKeywordListKeyword["CreateTime"].isNull())
			keywordListObject.createTime = valueKeywordListKeyword["CreateTime"].asString();
		if(!valueKeywordListKeyword["Keyword"].isNull())
			keywordListObject.keyword = valueKeywordListKeyword["Keyword"].asString();
		if(!valueKeywordListKeyword["HitCount"].isNull())
			keywordListObject.hitCount = std::stoi(valueKeywordListKeyword["HitCount"].asString());
		keywordList_.push_back(keywordListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeKeywordResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeKeywordResult::getPageSize()const
{
	return pageSize_;
}

int DescribeKeywordResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeKeywordResult::Keyword> DescribeKeywordResult::getKeywordList()const
{
	return keywordList_;
}

