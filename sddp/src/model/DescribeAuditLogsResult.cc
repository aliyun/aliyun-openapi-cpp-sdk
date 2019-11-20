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

#include <alibabacloud/sddp/model/DescribeAuditLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeAuditLogsResult::DescribeAuditLogsResult() :
	ServiceResult()
{}

DescribeAuditLogsResult::DescribeAuditLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditLogsResult::~DescribeAuditLogsResult()
{}

void DescribeAuditLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Log"];
	for (auto valueItemsLog : allItemsNode)
	{
		Log itemsObject;
		if(!valueItemsLog["Id"].isNull())
			itemsObject.id = std::stol(valueItemsLog["Id"].asString());
		if(!valueItemsLog["ProductCode"].isNull())
			itemsObject.productCode = valueItemsLog["ProductCode"].asString();
		if(!valueItemsLog["ProductId"].isNull())
			itemsObject.productId = std::stol(valueItemsLog["ProductId"].asString());
		if(!valueItemsLog["LogTime"].isNull())
			itemsObject.logTime = std::stol(valueItemsLog["LogTime"].asString());
		if(!valueItemsLog["UserId"].isNull())
			itemsObject.userId = valueItemsLog["UserId"].asString();
		if(!valueItemsLog["UserName"].isNull())
			itemsObject.userName = valueItemsLog["UserName"].asString();
		if(!valueItemsLog["ClientIp"].isNull())
			itemsObject.clientIp = valueItemsLog["ClientIp"].asString();
		if(!valueItemsLog["ClientPort"].isNull())
			itemsObject.clientPort = valueItemsLog["ClientPort"].asString();
		if(!valueItemsLog["ClientUa"].isNull())
			itemsObject.clientUa = valueItemsLog["ClientUa"].asString();
		if(!valueItemsLog["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsLog["InstanceName"].asString();
		if(!valueItemsLog["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsLog["CreationTime"].asString());
		if(!valueItemsLog["DatabaseName"].isNull())
			itemsObject.databaseName = valueItemsLog["DatabaseName"].asString();
		if(!valueItemsLog["TableName"].isNull())
			itemsObject.tableName = valueItemsLog["TableName"].asString();
		if(!valueItemsLog["ColumnName"].isNull())
			itemsObject.columnName = valueItemsLog["ColumnName"].asString();
		if(!valueItemsLog["PackageName"].isNull())
			itemsObject.packageName = valueItemsLog["PackageName"].asString();
		if(!valueItemsLog["OssObjectKey"].isNull())
			itemsObject.ossObjectKey = valueItemsLog["OssObjectKey"].asString();
		if(!valueItemsLog["ExecuteTime"].isNull())
			itemsObject.executeTime = std::stol(valueItemsLog["ExecuteTime"].asString());
		if(!valueItemsLog["EffectRow"].isNull())
			itemsObject.effectRow = std::stol(valueItemsLog["EffectRow"].asString());
		if(!valueItemsLog["OperateType"].isNull())
			itemsObject.operateType = valueItemsLog["OperateType"].asString();
		if(!valueItemsLog["RuleId"].isNull())
			itemsObject.ruleId = valueItemsLog["RuleId"].asString();
		if(!valueItemsLog["RuleName"].isNull())
			itemsObject.ruleName = valueItemsLog["RuleName"].asString();
		if(!valueItemsLog["WarnLevel"].isNull())
			itemsObject.warnLevel = valueItemsLog["WarnLevel"].asString();
		if(!valueItemsLog["ExecuteStatus"].isNull())
			itemsObject.executeStatus = std::stoi(valueItemsLog["ExecuteStatus"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAuditLogsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAuditLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAuditLogsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeAuditLogsResult::Log> DescribeAuditLogsResult::getItems()const
{
	return items_;
}

