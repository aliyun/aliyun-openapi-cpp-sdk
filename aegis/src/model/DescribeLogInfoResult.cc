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

#include <alibabacloud/aegis/model/DescribeLogInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLogInfoResult::DescribeLogInfoResult() :
	ServiceResult()
{}

DescribeLogInfoResult::DescribeLogInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogInfoResult::~DescribeLogInfoResult()
{}

void DescribeLogInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allLogInfoItems = value["LogInfoItems"]["Item"];
	for (auto value : allLogInfoItems)
	{
		Item logInfoItemsObject;
		if(!value["Name"].isNull())
			logInfoItemsObject.name = value["Name"].asString();
		if(!value["Id"].isNull())
			logInfoItemsObject.id = value["Id"].asString();
		auto allFields = value["Fields"]["Field"];
		for (auto value : allFields)
		{
			Item::Field fieldsObject;
			if(!value["Name"].isNull())
				fieldsObject.name = value["Name"].asString();
			if(!value["Type"].isNull())
				fieldsObject.type = value["Type"].asString();
			if(!value["Desc"].isNull())
				fieldsObject.desc = value["Desc"].asString();
			logInfoItemsObject.fields.push_back(fieldsObject);
		}
		logInfoItems_.push_back(logInfoItemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLogInfoResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeLogInfoResult::Item> DescribeLogInfoResult::getLogInfoItems()const
{
	return logInfoItems_;
}

