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

#include <alibabacloud/r-kvstore/model/DescribeInstanceAutoRenewalAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["Duration"].isNull())
			itemsObject.duration = std::stoi(value["Duration"].asString());
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["AutoRenew"].isNull())
			itemsObject.autoRenew = value["AutoRenew"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeInstanceAutoRenewalAttributeResult::getTotalRecordCount()const
{
	return totalRecordCount_;
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

