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

#include <alibabacloud/aegis/model/DescribeEntityListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeEntityListResult::DescribeEntityListResult() :
	ServiceResult()
{}

DescribeEntityListResult::DescribeEntityListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEntityListResult::~DescribeEntityListResult()
{}

void DescribeEntityListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntityListNode = value["EntityList"]["Entity"];
	for (auto valueEntityListEntity : allEntityListNode)
	{
		Entity entityListObject;
		if(!valueEntityListEntity["AegisOnline"].isNull())
			entityListObject.aegisOnline = valueEntityListEntity["AegisOnline"].asString() == "true";
		if(!valueEntityListEntity["Flag"].isNull())
			entityListObject.flag = std::stoi(valueEntityListEntity["Flag"].asString());
		if(!valueEntityListEntity["Os"].isNull())
			entityListObject.os = valueEntityListEntity["Os"].asString();
		if(!valueEntityListEntity["InstanceName"].isNull())
			entityListObject.instanceName = valueEntityListEntity["InstanceName"].asString();
		if(!valueEntityListEntity["AegisVersion"].isNull())
			entityListObject.aegisVersion = valueEntityListEntity["AegisVersion"].asString();
		if(!valueEntityListEntity["GroupId"].isNull())
			entityListObject.groupId = std::stol(valueEntityListEntity["GroupId"].asString());
		if(!valueEntityListEntity["Ip"].isNull())
			entityListObject.ip = valueEntityListEntity["Ip"].asString();
		if(!valueEntityListEntity["ClientStatus"].isNull())
			entityListObject.clientStatus = valueEntityListEntity["ClientStatus"].asString() == "true";
		if(!valueEntityListEntity["Region"].isNull())
			entityListObject.region = valueEntityListEntity["Region"].asString();
		if(!valueEntityListEntity["BuyVersion"].isNull())
			entityListObject.buyVersion = valueEntityListEntity["BuyVersion"].asString();
		if(!valueEntityListEntity["Uuid"].isNull())
			entityListObject.uuid = valueEntityListEntity["Uuid"].asString();
		entityList_.push_back(entityListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEntityListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEntityListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEntityListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeEntityListResult::Entity> DescribeEntityListResult::getEntityList()const
{
	return entityList_;
}

