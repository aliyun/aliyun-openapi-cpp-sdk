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

#include <alibabacloud/ddoscoo/model/DescribeL7RsPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeL7RsPolicyResult::DescribeL7RsPolicyResult() :
	ServiceResult()
{}

DescribeL7RsPolicyResult::DescribeL7RsPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeL7RsPolicyResult::~DescribeL7RsPolicyResult()
{}

void DescribeL7RsPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAttributesNode = value["Attributes"]["AttributeItem"];
	for (auto valueAttributesAttributeItem : allAttributesNode)
	{
		AttributeItem attributesObject;
		if(!valueAttributesAttributeItem["RsType"].isNull())
			attributesObject.rsType = std::stoi(valueAttributesAttributeItem["RsType"].asString());
		if(!valueAttributesAttributeItem["RealServer"].isNull())
			attributesObject.realServer = valueAttributesAttributeItem["RealServer"].asString();
		auto attributeNode = value["Attribute"];
		if(!attributeNode["Weight"].isNull())
			attributesObject.attribute.weight = std::stoi(attributeNode["Weight"].asString());
		attributes_.push_back(attributesObject);
	}
	if(!value["ProxyMode"].isNull())
		proxyMode_ = value["ProxyMode"].asString();

}

std::vector<DescribeL7RsPolicyResult::AttributeItem> DescribeL7RsPolicyResult::getAttributes()const
{
	return attributes_;
}

std::string DescribeL7RsPolicyResult::getProxyMode()const
{
	return proxyMode_;
}

