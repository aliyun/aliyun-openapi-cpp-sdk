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

#include <alibabacloud/ddoscoo/model/DescribeWebCCRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebCCRulesResult::DescribeWebCCRulesResult() :
	ServiceResult()
{}

DescribeWebCCRulesResult::DescribeWebCCRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebCCRulesResult::~DescribeWebCCRulesResult()
{}

void DescribeWebCCRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebCCRulesNode = value["WebCCRules"]["WebCCRule"];
	for (auto valueWebCCRulesWebCCRule : allWebCCRulesNode)
	{
		WebCCRule webCCRulesObject;
		if(!valueWebCCRulesWebCCRule["Ttl"].isNull())
			webCCRulesObject.ttl = std::stoi(valueWebCCRulesWebCCRule["Ttl"].asString());
		if(!valueWebCCRulesWebCCRule["Act"].isNull())
			webCCRulesObject.act = valueWebCCRulesWebCCRule["Act"].asString();
		if(!valueWebCCRulesWebCCRule["Interval"].isNull())
			webCCRulesObject.interval = std::stoi(valueWebCCRulesWebCCRule["Interval"].asString());
		if(!valueWebCCRulesWebCCRule["Mode"].isNull())
			webCCRulesObject.mode = valueWebCCRulesWebCCRule["Mode"].asString();
		if(!valueWebCCRulesWebCCRule["Name"].isNull())
			webCCRulesObject.name = valueWebCCRulesWebCCRule["Name"].asString();
		if(!valueWebCCRulesWebCCRule["Uri"].isNull())
			webCCRulesObject.uri = valueWebCCRulesWebCCRule["Uri"].asString();
		if(!valueWebCCRulesWebCCRule["Count"].isNull())
			webCCRulesObject.count = std::stoi(valueWebCCRulesWebCCRule["Count"].asString());
		webCCRules_.push_back(webCCRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeWebCCRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeWebCCRulesResult::WebCCRule> DescribeWebCCRulesResult::getWebCCRules()const
{
	return webCCRules_;
}

