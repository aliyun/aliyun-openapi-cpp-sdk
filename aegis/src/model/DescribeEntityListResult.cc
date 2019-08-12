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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEntityList = value["EntityList"]["Entity"];
	for (auto value : allEntityList)
	{
		Entity entityListObject;
		if(!value["AegisOnline"].isNull())
			entityListObject.aegisOnline = value["AegisOnline"].asString() == "true";
		if(!value["Flag"].isNull())
			entityListObject.flag = std::stoi(value["Flag"].asString());
		if(!value["Os"].isNull())
			entityListObject.os = value["Os"].asString();
		if(!value["InstanceName"].isNull())
			entityListObject.instanceName = value["InstanceName"].asString();
		if(!value["AegisVersion"].isNull())
			entityListObject.aegisVersion = value["AegisVersion"].asString();
		if(!value["GroupId"].isNull())
			entityListObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Ip"].isNull())
			entityListObject.ip = value["Ip"].asString();
		if(!value["ClientStatus"].isNull())
			entityListObject.clientStatus = value["ClientStatus"].asString() == "true";
		if(!value["Region"].isNull())
			entityListObject.region = value["Region"].asString();
		if(!value["BuyVersion"].isNull())
			entityListObject.buyVersion = value["BuyVersion"].asString();
		if(!value["Uuid"].isNull())
			entityListObject.uuid = value["Uuid"].asString();
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

