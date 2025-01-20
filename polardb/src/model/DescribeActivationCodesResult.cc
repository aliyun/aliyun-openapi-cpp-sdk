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

#include <alibabacloud/polardb/model/DescribeActivationCodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeActivationCodesResult::DescribeActivationCodesResult() :
	ServiceResult()
{}

DescribeActivationCodesResult::DescribeActivationCodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActivationCodesResult::~DescribeActivationCodesResult()
{}

void DescribeActivationCodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ActivationCodes"];
	for (auto valueItemsActivationCodes : allItemsNode)
	{
		ActivationCodes itemsObject;
		if(!valueItemsActivationCodes["ActivateAt"].isNull())
			itemsObject.activateAt = valueItemsActivationCodes["ActivateAt"].asString();
		if(!valueItemsActivationCodes["Description"].isNull())
			itemsObject.description = valueItemsActivationCodes["Description"].asString();
		if(!valueItemsActivationCodes["ExpireAt"].isNull())
			itemsObject.expireAt = valueItemsActivationCodes["ExpireAt"].asString();
		if(!valueItemsActivationCodes["GmtCreated"].isNull())
			itemsObject.gmtCreated = valueItemsActivationCodes["GmtCreated"].asString();
		if(!valueItemsActivationCodes["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsActivationCodes["GmtModified"].asString();
		if(!valueItemsActivationCodes["Id"].isNull())
			itemsObject.id = std::stoi(valueItemsActivationCodes["Id"].asString());
		if(!valueItemsActivationCodes["MacAddress"].isNull())
			itemsObject.macAddress = valueItemsActivationCodes["MacAddress"].asString();
		if(!valueItemsActivationCodes["Name"].isNull())
			itemsObject.name = valueItemsActivationCodes["Name"].asString();
		if(!valueItemsActivationCodes["SystemIdentifier"].isNull())
			itemsObject.systemIdentifier = valueItemsActivationCodes["SystemIdentifier"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeActivationCodesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeActivationCodesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeActivationCodesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeActivationCodesResult::ActivationCodes> DescribeActivationCodesResult::getItems()const
{
	return items_;
}

