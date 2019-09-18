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

#include <alibabacloud/emr/model/ListStackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListStackResult::ListStackResult() :
	ServiceResult()
{}

ListStackResult::ListStackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStackResult::~ListStackResult()
{}

void ListStackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStackList = value["StackList"]["Stack"];
	for (auto value : allStackList)
	{
		Stack stackListObject;
		if(!value["Name"].isNull())
			stackListObject.name = value["Name"].asString();
		if(!value["Version"].isNull())
			stackListObject.version = value["Version"].asString();
		if(!value["Status"].isNull())
			stackListObject.status = value["Status"].asString();
		stackList_.push_back(stackListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListStackResult::getTotalCount()const
{
	return totalCount_;
}

int ListStackResult::getPageSize()const
{
	return pageSize_;
}

int ListStackResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListStackResult::Stack> ListStackResult::getStackList()const
{
	return stackList_;
}

