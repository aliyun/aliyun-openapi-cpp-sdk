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

#include <alibabacloud/drds/model/DescribeBackMenuResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeBackMenuResult::DescribeBackMenuResult() :
	ServiceResult()
{}

DescribeBackMenuResult::DescribeBackMenuResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackMenuResult::~DescribeBackMenuResult()
{}

void DescribeBackMenuResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["listItem"];
	for (auto valueListlistItem : allListNode)
	{
		ListItem listObject;
		if(!valueListlistItem["Support"].isNull())
			listObject.support = valueListlistItem["Support"].asString() == "true";
		if(!valueListlistItem["MenuName"].isNull())
			listObject.menuName = valueListlistItem["MenuName"].asString();
		list_.push_back(listObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeBackMenuResult::ListItem> DescribeBackMenuResult::getList()const
{
	return list_;
}

bool DescribeBackMenuResult::getSuccess()const
{
	return success_;
}

