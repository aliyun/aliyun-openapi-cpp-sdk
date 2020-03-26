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

#include <alibabacloud/green/model/DescribeUsageBillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeUsageBillResult::DescribeUsageBillResult() :
	ServiceResult()
{}

DescribeUsageBillResult::DescribeUsageBillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUsageBillResult::~DescribeUsageBillResult()
{}

void DescribeUsageBillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBillListNode = value["BillList"]["Bill"];
	for (auto valueBillListBill : allBillListNode)
	{
		Bill billListObject;
		if(!valueBillListBill["Region"].isNull())
			billListObject.region = valueBillListBill["Region"].asString();
		if(!valueBillListBill["Scene"].isNull())
			billListObject.scene = valueBillListBill["Scene"].asString();
		if(!valueBillListBill["TotalCount"].isNull())
			billListObject.totalCount = std::stol(valueBillListBill["TotalCount"].asString());
		if(!valueBillListBill["ConfirmCount"].isNull())
			billListObject.confirmCount = std::stol(valueBillListBill["ConfirmCount"].asString());
		if(!valueBillListBill["ReviewCount"].isNull())
			billListObject.reviewCount = std::stol(valueBillListBill["ReviewCount"].asString());
		if(!valueBillListBill["FreeCount"].isNull())
			billListObject.freeCount = std::stol(valueBillListBill["FreeCount"].asString());
		if(!valueBillListBill["SubUid"].isNull())
			billListObject.subUid = valueBillListBill["SubUid"].asString();
		if(!valueBillListBill["BizType"].isNull())
			billListObject.bizType = valueBillListBill["BizType"].asString();
		if(!valueBillListBill["Day"].isNull())
			billListObject.day = valueBillListBill["Day"].asString();
		billList_.push_back(billListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeUsageBillResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeUsageBillResult::getPageSize()const
{
	return pageSize_;
}

int DescribeUsageBillResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeUsageBillResult::Bill> DescribeUsageBillResult::getBillList()const
{
	return billList_;
}

