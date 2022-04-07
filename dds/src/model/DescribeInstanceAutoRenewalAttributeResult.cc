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

#include <alibabacloud/dds/model/DescribeInstanceAutoRenewalAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeInstanceAutoRenewalAttributeResult::DescribeInstanceAutoRenewalAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAutoRenewalAttributeResult::DescribeInstanceAutoRenewalAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAutoRenewalAttributeResult::~DescribeInstanceAutoRenewalAttributeResult()
{}

void DescribeInstanceAutoRenewalAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsItem["DBInstanceType"].asString();
		if(!valueItemsItem["AutoRenew"].isNull())
			itemsObject.autoRenew = valueItemsItem["AutoRenew"].asString();
		if(!valueItemsItem["Duration"].isNull())
			itemsObject.duration = valueItemsItem["Duration"].asString();
		if(!valueItemsItem["DbInstanceId"].isNull())
			itemsObject.dbInstanceId = valueItemsItem["DbInstanceId"].asString();
		if(!valueItemsItem["RegionId"].isNull())
			itemsObject.regionId = valueItemsItem["RegionId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeInstanceAutoRenewalAttributeResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

int DescribeInstanceAutoRenewalAttributeResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeInstanceAutoRenewalAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceAutoRenewalAttributeResult::Item> DescribeInstanceAutoRenewalAttributeResult::getItems()const
{
	return items_;
}

