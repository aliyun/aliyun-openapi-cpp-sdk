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

#include <alibabacloud/edas/model/ListChildrenStacksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListChildrenStacksResult::ListChildrenStacksResult() :
	ServiceResult()
{}

ListChildrenStacksResult::ListChildrenStacksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListChildrenStacksResult::~ListChildrenStacksResult()
{}

void ListChildrenStacksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allResultNode = dataNode["Result"]["Stack"];
	for (auto dataNodeResultStack : allResultNode)
	{
		Data::Stack stackObject;
		if(!dataNodeResultStack["Id"].isNull())
			stackObject.id = std::stol(dataNodeResultStack["Id"].asString());
		if(!dataNodeResultStack["Name"].isNull())
			stackObject.name = dataNodeResultStack["Name"].asString();
		if(!dataNodeResultStack["Comment"].isNull())
			stackObject.comment = dataNodeResultStack["Comment"].asString();
		if(!dataNodeResultStack["Preferred"].isNull())
			stackObject.preferred = dataNodeResultStack["Preferred"].asString() == "true";
		if(!dataNodeResultStack["Latest"].isNull())
			stackObject.latest = dataNodeResultStack["Latest"].asString() == "true";
		auto allBuildTypes = value["BuildTypes"]["BuildType"];
		for (auto value : allBuildTypes)
			stackObject.buildTypes.push_back(value.asString());
		data_.result.push_back(stackObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListChildrenStacksResult::getMessage()const
{
	return message_;
}

ListChildrenStacksResult::Data ListChildrenStacksResult::getData()const
{
	return data_;
}

int ListChildrenStacksResult::getCode()const
{
	return code_;
}

