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
	auto dataNode = value["Data"];
	auto allListNode = dataNode["List"]["Entity"];
	for (auto dataNodeListEntity : allListNode)
	{
		Data::Entity entityObject;
		if(!dataNodeListEntity["Uuid"].isNull())
			entityObject.uuid = dataNodeListEntity["Uuid"].asString();
		if(!dataNodeListEntity["GroupId"].isNull())
			entityObject.groupId = std::stol(dataNodeListEntity["GroupId"].asString());
		if(!dataNodeListEntity["Ip"].isNull())
			entityObject.ip = dataNodeListEntity["Ip"].asString();
		if(!dataNodeListEntity["InstanceName"].isNull())
			entityObject.instanceName = dataNodeListEntity["InstanceName"].asString();
		if(!dataNodeListEntity["InstanceId"].isNull())
			entityObject.instanceId = dataNodeListEntity["InstanceId"].asString();
		if(!dataNodeListEntity["Region"].isNull())
			entityObject.region = dataNodeListEntity["Region"].asString();
		if(!dataNodeListEntity["Os"].isNull())
			entityObject.os = dataNodeListEntity["Os"].asString();
		if(!dataNodeListEntity["Flag"].isNull())
			entityObject.flag = dataNodeListEntity["Flag"].asString();
		if(!dataNodeListEntity["BuyVersion"].isNull())
			entityObject.buyVersion = dataNodeListEntity["BuyVersion"].asString();
		if(!dataNodeListEntity["AegisOnline"].isNull())
			entityObject.aegisOnline = dataNodeListEntity["AegisOnline"].asString() == "true";
		if(!dataNodeListEntity["aegisVersion"].isNull())
			entityObject.aegisVersion = dataNodeListEntity["aegisVersion"].asString();
		data_.list.push_back(entityObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		data_.pageInfo.count = std::stoi(pageInfoNode["Count"].asString());
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

GetEntityListResult::Data GetEntityListResult::getData()const
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

