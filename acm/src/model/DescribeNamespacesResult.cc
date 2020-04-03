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

#include <alibabacloud/acm/model/DescribeNamespacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Acm;
using namespace AlibabaCloud::Acm::Model;

DescribeNamespacesResult::DescribeNamespacesResult() :
	ServiceResult()
{}

DescribeNamespacesResult::DescribeNamespacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNamespacesResult::~DescribeNamespacesResult()
{}

void DescribeNamespacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNamespacesNode = value["Namespaces"]["Namespace"];
	for (auto valueNamespacesNamespace : allNamespacesNode)
	{
		_Namespace namespacesObject;
		if(!valueNamespacesNamespace["ConfigCount"].isNull())
			namespacesObject.configCount = std::stoi(valueNamespacesNamespace["ConfigCount"].asString());
		if(!valueNamespacesNamespace["NamespaceId"].isNull())
			namespacesObject.namespaceId = valueNamespacesNamespace["NamespaceId"].asString();
		if(!valueNamespacesNamespace["NamespaceName"].isNull())
			namespacesObject.namespaceName = valueNamespacesNamespace["NamespaceName"].asString();
		if(!valueNamespacesNamespace["Quota"].isNull())
			namespacesObject.quota = std::stoi(valueNamespacesNamespace["Quota"].asString());
		if(!valueNamespacesNamespace["Type"].isNull())
			namespacesObject.type = std::stoi(valueNamespacesNamespace["Type"].asString());
		namespaces_.push_back(namespacesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<DescribeNamespacesResult::_Namespace> DescribeNamespacesResult::getNamespaces()const
{
	return namespaces_;
}

std::string DescribeNamespacesResult::getMessage()const
{
	return message_;
}

std::string DescribeNamespacesResult::getCode()const
{
	return code_;
}

