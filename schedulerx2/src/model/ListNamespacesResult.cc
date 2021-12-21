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

#include <alibabacloud/schedulerx2/model/ListNamespacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

ListNamespacesResult::ListNamespacesResult() :
	ServiceResult()
{}

ListNamespacesResult::ListNamespacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNamespacesResult::~ListNamespacesResult()
{}

void ListNamespacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allNamespacesNode = dataNode["Namespaces"]["Namespace"];
	for (auto dataNodeNamespacesNamespace : allNamespacesNode)
	{
		Data::_Namespace _namespaceObject;
		if(!dataNodeNamespacesNamespace["Name"].isNull())
			_namespaceObject.name = dataNodeNamespacesNamespace["Name"].asString();
		if(!dataNodeNamespacesNamespace["Description"].isNull())
			_namespaceObject.description = dataNodeNamespacesNamespace["Description"].asString();
		if(!dataNodeNamespacesNamespace["UId"].isNull())
			_namespaceObject.uId = dataNodeNamespacesNamespace["UId"].asString();
		data_.namespaces.push_back(_namespaceObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListNamespacesResult::getMessage()const
{
	return message_;
}

ListNamespacesResult::Data ListNamespacesResult::getData()const
{
	return data_;
}

int ListNamespacesResult::getCode()const
{
	return code_;
}

bool ListNamespacesResult::getSuccess()const
{
	return success_;
}

