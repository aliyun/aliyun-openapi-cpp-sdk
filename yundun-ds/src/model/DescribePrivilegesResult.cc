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

#include <alibabacloud/yundun-ds/model/DescribePrivilegesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

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
	auto allItemsNode = value["Items"]["Privilege"];
	for (auto valueItemsPrivilege : allItemsNode)
	{
		Privilege itemsObject;
		if(!valueItemsPrivilege["Id"].isNull())
			itemsObject.id = std::stol(valueItemsPrivilege["Id"].asString());
		if(!valueItemsPrivilege["AccountId"].isNull())
			itemsObject.accountId = std::stol(valueItemsPrivilege["AccountId"].asString());
		if(!valueItemsPrivilege["AccountType"].isNull())
			itemsObject.accountType = std::stoi(valueItemsPrivilege["AccountType"].asString());
		if(!valueItemsPrivilege["UseAccountId"].isNull())
			itemsObject.useAccountId = std::stol(valueItemsPrivilege["UseAccountId"].asString());
		if(!valueItemsPrivilege["UseAccountType"].isNull())
			itemsObject.useAccountType = std::stoi(valueItemsPrivilege["UseAccountType"].asString());
		if(!valueItemsPrivilege["ProductName"].isNull())
			itemsObject.productName = valueItemsPrivilege["ProductName"].asString();
		if(!valueItemsPrivilege["productCode"].isNull())
			itemsObject.productCode = valueItemsPrivilege["productCode"].asString();
		if(!valueItemsPrivilege["DataType"].isNull())
			itemsObject.dataType = valueItemsPrivilege["DataType"].asString();
		if(!valueItemsPrivilege["DataTypeId"].isNull())
			itemsObject.dataTypeId = valueItemsPrivilege["DataTypeId"].asString();
		if(!valueItemsPrivilege["DataTypeName"].isNull())
			itemsObject.dataTypeName = valueItemsPrivilege["DataTypeName"].asString();
		if(!valueItemsPrivilege["DataInstance"].isNull())
			itemsObject.dataInstance = valueItemsPrivilege["DataInstance"].asString();
		if(!valueItemsPrivilege["DataTable"].isNull())
			itemsObject.dataTable = valueItemsPrivilege["DataTable"].asString();
		if(!valueItemsPrivilege["DataColumn"].isNull())
			itemsObject.dataColumn = valueItemsPrivilege["DataColumn"].asString();
		if(!valueItemsPrivilege["DataPackage"].isNull())
			itemsObject.dataPackage = valueItemsPrivilege["DataPackage"].asString();
		if(!valueItemsPrivilege["ResourceName"].isNull())
			itemsObject.resourceName = valueItemsPrivilege["ResourceName"].asString();
		if(!valueItemsPrivilege["ResourcePath"].isNull())
			itemsObject.resourcePath = valueItemsPrivilege["ResourcePath"].asString();
		if(!valueItemsPrivilege["Operation"].isNull())
			itemsObject.operation = valueItemsPrivilege["Operation"].asString();
		if(!valueItemsPrivilege["PolicyCondition"].isNull())
			itemsObject.policyCondition = valueItemsPrivilege["PolicyCondition"].asString();
		if(!valueItemsPrivilege["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsPrivilege["Sensitive"].asString();
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

