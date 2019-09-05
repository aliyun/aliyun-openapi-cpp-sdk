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

#include <alibabacloud/polardb/model/DescribeAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeAutoRenewAttributeResult::DescribeAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeAutoRenewAttributeResult::DescribeAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoRenewAttributeResult::~DescribeAutoRenewAttributeResult()
{}

void DescribeAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AutoRenewAttribute"];
	for (auto value : allItems)
	{
		AutoRenewAttribute itemsObject;
		if(!value["DBClusterId"].isNull())
			itemsObject.dBClusterId = value["DBClusterId"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["AutoRenewEnabled"].isNull())
			itemsObject.autoRenewEnabled = value["AutoRenewEnabled"].asString() == "true";
		if(!value["Duration"].isNull())
			itemsObject.duration = std::stoi(value["Duration"].asString());
		if(!value["PeriodUnit"].isNull())
			itemsObject.periodUnit = value["PeriodUnit"].asString();
		if(!value["RenewalStatus"].isNull())
			itemsObject.renewalStatus = value["RenewalStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeAutoRenewAttributeResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeAutoRenewAttributeResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeAutoRenewAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoRenewAttributeResult::AutoRenewAttribute> DescribeAutoRenewAttributeResult::getItems()const
{
	return items_;
}

