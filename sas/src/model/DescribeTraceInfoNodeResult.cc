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

#include <alibabacloud/sas/model/DescribeTraceInfoNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeTraceInfoNodeResult::DescribeTraceInfoNodeResult() :
	ServiceResult()
{}

DescribeTraceInfoNodeResult::DescribeTraceInfoNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTraceInfoNodeResult::~DescribeTraceInfoNodeResult()
{}

void DescribeTraceInfoNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto nodeNode = value["Node"];
	if(!nodeNode["Type"].isNull())
		node_.type = nodeNode["Type"].asString();
	if(!nodeNode["Name"].isNull())
		node_.name = nodeNode["Name"].asString();
	auto allPropertyListNode = nodeNode["PropertyList"]["Property"];
	for (auto nodeNodePropertyListProperty : allPropertyListNode)
	{
		Node::Property propertyObject;
		if(!nodeNodePropertyListProperty["Name"].isNull())
			propertyObject.name = nodeNodePropertyListProperty["Name"].asString();
		if(!nodeNodePropertyListProperty["Value"].isNull())
			propertyObject.value = nodeNodePropertyListProperty["Value"].asString();
		node_.propertyList.push_back(propertyObject);
	}

}

DescribeTraceInfoNodeResult::Node DescribeTraceInfoNodeResult::getNode()const
{
	return node_;
}

