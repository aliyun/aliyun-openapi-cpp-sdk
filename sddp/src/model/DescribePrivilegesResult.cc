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

#include <alibabacloud/sddp/model/DescribePrivilegesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribePrivilegesResult::DescribePrivilegesResult() :
	ServiceResult()
{}

DescribePrivilegesResult::DescribePrivilegesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePrivilegesResult::~DescribePrivilegesResult()
{}

void DescribePrivilegesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Privilege"];
	for (auto value : allItems)
	{
		Privilege itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["AccountId"].isNull())
			itemsObject.accountId = std::stol(value["AccountId"].asString());
		if(!value["AccountType"].isNull())
			itemsObject.accountType = std::stoi(value["AccountType"].asString());
		if(!value["UseAccountId"].isNull())
			itemsObject.useAccountId = std::stol(value["UseAccountId"].asString());
		if(!value["UseAccountType"].isNull())
			itemsObject.useAccountType = std::stoi(value["UseAccountType"].asString());
		if(!value["ProductName"].isNull())
			itemsObject.productName = value["ProductName"].asString();
		if(!value["productCode"].isNull())
			itemsObject.productCode = value["productCode"].asString();
		if(!value["DataType"].isNull())
			itemsObject.dataType = value["DataType"].asString();
		if(!value["DataTypeId"].isNull())
			itemsObject.dataTypeId = value["DataTypeId"].asString();
		if(!value["DataTypeName"].isNull())
			itemsObject.dataTypeName = value["DataTypeName"].asString();
		if(!value["DataInstance"].isNull())
			itemsObject.dataInstance = value["DataInstance"].asString();
		if(!value["DataTable"].isNull())
			itemsObject.dataTable = value["DataTable"].asString();
		if(!value["DataColumn"].isNull())
			itemsObject.dataColumn = value["DataColumn"].asString();
		if(!value["DataPackage"].isNull())
			itemsObject.dataPackage = value["DataPackage"].asString();
		if(!value["ResourceName"].isNull())
			itemsObject.resourceName = value["ResourceName"].asString();
		if(!value["ResourcePath"].isNull())
			itemsObject.resourcePath = value["ResourcePath"].asString();
		if(!value["Operation"].isNull())
			itemsObject.operation = value["Operation"].asString();
		if(!value["PolicyCondition"].isNull())
			itemsObject.policyCondition = value["PolicyCondition"].asString();
		if(!value["Sensitive"].isNull())
			itemsObject.sensitive = value["Sensitive"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribePrivilegesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePrivilegesResult::getPageSize()const
{
	return pageSize_;
}

int DescribePrivilegesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribePrivilegesResult::Privilege> DescribePrivilegesResult::getItems()const
{
	return items_;
}

