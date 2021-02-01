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

#include <alibabacloud/facebody/model/ListBodyPersonResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

ListBodyPersonResult::ListBodyPersonResult() :
	ServiceResult()
{}

ListBodyPersonResult::ListBodyPersonResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBodyPersonResult::~ListBodyPersonResult()
{}

void ListBodyPersonResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allPersonListNode = dataNode["PersonList"]["Person"];
	for (auto dataNodePersonListPerson : allPersonListNode)
	{
		Data::Person personObject;
		if(!dataNodePersonListPerson["TraceCount"].isNull())
			personObject.traceCount = std::stol(dataNodePersonListPerson["TraceCount"].asString());
		if(!dataNodePersonListPerson["InstanceId"].isNull())
			personObject.instanceId = std::stol(dataNodePersonListPerson["InstanceId"].asString());
		if(!dataNodePersonListPerson["DbId"].isNull())
			personObject.dbId = std::stol(dataNodePersonListPerson["DbId"].asString());
		if(!dataNodePersonListPerson["Id"].isNull())
			personObject.id = std::stol(dataNodePersonListPerson["Id"].asString());
		if(!dataNodePersonListPerson["Name"].isNull())
			personObject.name = dataNodePersonListPerson["Name"].asString();
		data_.personList.push_back(personObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListBodyPersonResult::getMessage()const
{
	return message_;
}

ListBodyPersonResult::Data ListBodyPersonResult::getData()const
{
	return data_;
}

std::string ListBodyPersonResult::getCode()const
{
	return code_;
}

