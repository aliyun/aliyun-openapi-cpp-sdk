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

#include <alibabacloud/aegis/model/GetEntityListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

GetEntityListResult::GetEntityListResult() :
	ServiceResult()
{}

GetEntityListResult::GetEntityListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEntityListResult::~GetEntityListResult()
{}

void GetEntityListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"];
	for (auto value : allData)
	{
		Data dataObject;
		auto allList = value["List"]["Entity"];
		for (auto value : allList)
		{
			Data::Entity entityObject;
			if(!value["Uuid"].isNull())
				entityObject.uuid = value["Uuid"].asString();
			if(!value["GroupId"].isNull())
				entityObject.groupId = std::stol(value["GroupId"].asString());
			if(!value["Ip"].isNull())
				entityObject.ip = value["Ip"].asString();
			if(!value["InstanceName"].isNull())
				entityObject.instanceName = value["InstanceName"].asString();
			if(!value["InstanceId"].isNull())
				entityObject.instanceId = value["InstanceId"].asString();
			if(!value["Region"].isNull())
				entityObject.region = value["Region"].asString();
			if(!value["Os"].isNull())
				entityObject.os = value["Os"].asString();
			if(!value["Flag"].isNull())
				entityObject.flag = value["Flag"].asString();
			if(!value["BuyVersion"].isNull())
				entityObject.buyVersion = value["BuyVersion"].asString();
			if(!value["AegisOnline"].isNull())
				entityObject.aegisOnline = value["AegisOnline"].asString() == "true";
			if(!value["aegisVersion"].isNull())
				entityObject.aegisVersion = value["aegisVersion"].asString();
			dataObject.list.push_back(entityObject);
		}
		auto allPageInfo = value["PageInfo"];
		for (auto value : allPageInfo)
		{
			Data::PageInfo pageInfoObject;
			if(!value["CurrentPage"].isNull())
				pageInfoObject.currentPage = std::stoi(value["CurrentPage"].asString());
			if(!value["PageSize"].isNull())
				pageInfoObject.pageSize = std::stoi(value["PageSize"].asString());
			if(!value["TotalCount"].isNull())
				pageInfoObject.totalCount = std::stoi(value["TotalCount"].asString());
			if(!value["Count"].isNull())
				pageInfoObject.count = std::stoi(value["Count"].asString());
			dataObject.pageInfo.push_back(pageInfoObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetEntityListResult::getRequestId()const
{
	return requestId_;
}

std::string GetEntityListResult::getMessage()const
{
	return message_;
}

std::vector<GetEntityListResult::Data> GetEntityListResult::getData()const
{
	return data_;
}

std::string GetEntityListResult::getCode()const
{
	return code_;
}

bool GetEntityListResult::getSuccess()const
{
	return success_;
}

