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

#include <alibabacloud/sas-api/model/DescribeHitRateColumnResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas_api;
using namespace AlibabaCloud::Sas_api::Model;

DescribeHitRateColumnResult::DescribeHitRateColumnResult() :
	ServiceResult()
{}

DescribeHitRateColumnResult::DescribeHitRateColumnResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHitRateColumnResult::~DescribeHitRateColumnResult()
{}

void DescribeHitRateColumnResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["Data"].isNull())
			itemsObject.data = std::stol(value["Data"].asString());
		if(!value["Id"].isNull())
			itemsObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		items_.push_back(itemsObject);
	}
	auto timeScopeNode = value["TimeScope"];
	if(!timeScopeNode["Interval"].isNull())
		timeScope_.interval = std::stol(timeScopeNode["Interval"].asString());
	if(!timeScopeNode["Start"].isNull())
		timeScope_.start = std::stol(timeScopeNode["Start"].asString());

}

DescribeHitRateColumnResult::TimeScope DescribeHitRateColumnResult::getTimeScope()const
{
	return timeScope_;
}

std::vector<DescribeHitRateColumnResult::Item> DescribeHitRateColumnResult::getItems()const
{
	return items_;
}

