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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogInfoItemsNode = value["LogInfoItems"]["Item"];
	for (auto valueLogInfoItemsItem : allLogInfoItemsNode)
	{
		Item logInfoItemsObject;
		if(!valueLogInfoItemsItem["Name"].isNull())
			logInfoItemsObject.name = valueLogInfoItemsItem["Name"].asString();
		if(!valueLogInfoItemsItem["Id"].isNull())
			logInfoItemsObject.id = valueLogInfoItemsItem["Id"].asString();
		auto allFieldsNode = allLogInfoItemsNode["Fields"]["Field"];
		for (auto allLogInfoItemsNodeFieldsField : allFieldsNode)
		{
			Item::Field fieldsObject;
			if(!allLogInfoItemsNodeFieldsField["Name"].isNull())
				fieldsObject.name = allLogInfoItemsNodeFieldsField["Name"].asString();
			if(!allLogInfoItemsNodeFieldsField["Type"].isNull())
				fieldsObject.type = allLogInfoItemsNodeFieldsField["Type"].asString();
			if(!allLogInfoItemsNodeFieldsField["Desc"].isNull())
				fieldsObject.desc = allLogInfoItemsNodeFieldsField["Desc"].asString();
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

