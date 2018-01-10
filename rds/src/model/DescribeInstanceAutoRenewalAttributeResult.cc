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

#include <alibabacloud/rds/model/DescribeInstanceAutoRenewalAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemObject;
		itemObject.dBInstanceId = value["DBInstanceId"].asString();
		itemObject.regionId = value["RegionId"].asString();
		itemObject.duration = std::stoi(value["Duration"].asString());
		itemObject.status = value["Status"].asString();
		itemObject.autoRenew = value["AutoRenew"].asString();
		items_.push_back(itemObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeInstanceAutoRenewalAttributeResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeInstanceAutoRenewalAttributeResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeInstanceAutoRenewalAttributeResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeInstanceAutoRenewalAttributeResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeInstanceAutoRenewalAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceAutoRenewalAttributeResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

