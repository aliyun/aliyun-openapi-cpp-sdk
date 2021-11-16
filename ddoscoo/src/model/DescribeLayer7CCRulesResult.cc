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

#include <alibabacloud/ddoscoo/model/DescribeLayer7CCRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeLayer7CCRulesResult::DescribeLayer7CCRulesResult() :
	ServiceResult()
{}

DescribeLayer7CCRulesResult::DescribeLayer7CCRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLayer7CCRulesResult::~DescribeLayer7CCRulesResult()
{}

void DescribeLayer7CCRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLayer7CCRulesNode = value["Layer7CCRules"]["Layer7CCRule"];
	for (auto valueLayer7CCRulesLayer7CCRule : allLayer7CCRulesNode)
	{
		Layer7CCRule layer7CCRulesObject;
		if(!valueLayer7CCRulesLayer7CCRule["Name"].isNull())
			layer7CCRulesObject.name = valueLayer7CCRulesLayer7CCRule["Name"].asString();
		if(!valueLayer7CCRulesLayer7CCRule["Act"].isNull())
			layer7CCRulesObject.act = valueLayer7CCRulesLayer7CCRule["Act"].asString();
		if(!valueLayer7CCRulesLayer7CCRule["Count"].isNull())
			layer7CCRulesObject.count = std::stoi(valueLayer7CCRulesLayer7CCRule["Count"].asString());
		if(!valueLayer7CCRulesLayer7CCRule["Interval"].isNull())
			layer7CCRulesObject.interval = std::stoi(valueLayer7CCRulesLayer7CCRule["Interval"].asString());
		if(!valueLayer7CCRulesLayer7CCRule["Mode"].isNull())
			layer7CCRulesObject.mode = valueLayer7CCRulesLayer7CCRule["Mode"].asString();
		if(!valueLayer7CCRulesLayer7CCRule["Ttl"].isNull())
			layer7CCRulesObject.ttl = std::stoi(valueLayer7CCRulesLayer7CCRule["Ttl"].asString());
		if(!valueLayer7CCRulesLayer7CCRule["Uri"].isNull())
			layer7CCRulesObject.uri = valueLayer7CCRulesLayer7CCRule["Uri"].asString();
		layer7CCRules_.push_back(layer7CCRulesObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeLayer7CCRulesResult::Layer7CCRule> DescribeLayer7CCRulesResult::getLayer7CCRules()const
{
	return layer7CCRules_;
}

long DescribeLayer7CCRulesResult::getTotal()const
{
	return total_;
}

