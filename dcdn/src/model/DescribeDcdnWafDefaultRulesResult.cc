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

#include <alibabacloud/dcdn/model/DescribeDcdnWafDefaultRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafDefaultRulesResult::DescribeDcdnWafDefaultRulesResult() :
	ServiceResult()
{}

DescribeDcdnWafDefaultRulesResult::DescribeDcdnWafDefaultRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafDefaultRulesResult::~DescribeDcdnWafDefaultRulesResult()
{}

void DescribeDcdnWafDefaultRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["Default"];
	for (auto valueContentDefault : allContentNode)
	{
		_Default contentObject;
		if(!valueContentDefault["DefenseScene"].isNull())
			contentObject.defenseScene = valueContentDefault["DefenseScene"].asString();
		auto allRulesNode = valueContentDefault["Rules"]["Rule"];
		for (auto valueContentDefaultRulesRule : allRulesNode)
		{
			_Default::Rule rulesObject;
			if(!valueContentDefaultRulesRule["Type"].isNull())
				rulesObject.type = valueContentDefaultRulesRule["Type"].asString();
			if(!valueContentDefaultRulesRule["Name"].isNull())
				rulesObject.name = valueContentDefaultRulesRule["Name"].asString();
			if(!valueContentDefaultRulesRule["Status"].isNull())
				rulesObject.status = valueContentDefaultRulesRule["Status"].asString();
			if(!valueContentDefaultRulesRule["Config"].isNull())
				rulesObject.config = valueContentDefaultRulesRule["Config"].asString();
			if(!valueContentDefaultRulesRule["Action"].isNull())
				rulesObject.action = valueContentDefaultRulesRule["Action"].asString();
			contentObject.rules.push_back(rulesObject);
		}
		content_.push_back(contentObject);
	}

}

std::vector<DescribeDcdnWafDefaultRulesResult::_Default> DescribeDcdnWafDefaultRulesResult::getContent()const
{
	return content_;
}

