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

#include <alibabacloud/cloudauth/model/DescribeWhitelistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeWhitelistResult::DescribeWhitelistResult() :
	ServiceResult()
{}

DescribeWhitelistResult::DescribeWhitelistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhitelistResult::~DescribeWhitelistResult()
{}

void DescribeWhitelistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Id"].isNull())
			itemsObject.id = std::stol(valueItemsItem["Id"].asString());
		if(!valueItemsItem["Uid"].isNull())
			itemsObject.uid = std::stol(valueItemsItem["Uid"].asString());
		if(!valueItemsItem["BizType"].isNull())
			itemsObject.bizType = valueItemsItem["BizType"].asString();
		if(!valueItemsItem["StartDate"].isNull())
			itemsObject.startDate = std::stol(valueItemsItem["StartDate"].asString());
		if(!valueItemsItem["EndDate"].isNull())
			itemsObject.endDate = std::stol(valueItemsItem["EndDate"].asString());
		if(!valueItemsItem["IdCardNum"].isNull())
			itemsObject.idCardNum = valueItemsItem["IdCardNum"].asString();
		if(!valueItemsItem["BizId"].isNull())
			itemsObject.bizId = valueItemsItem["BizId"].asString();
		if(!valueItemsItem["Valid"].isNull())
			itemsObject.valid = std::stoi(valueItemsItem["Valid"].asString());
		if(!valueItemsItem["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsItem["GmtCreate"].asString());
		if(!valueItemsItem["GmtModified"].isNull())
			itemsObject.gmtModified = std::stol(valueItemsItem["GmtModified"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeWhitelistResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWhitelistResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWhitelistResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWhitelistResult::Item> DescribeWhitelistResult::getItems()const
{
	return items_;
}

