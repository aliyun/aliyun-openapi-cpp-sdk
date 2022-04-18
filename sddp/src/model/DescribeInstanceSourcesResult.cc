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

#include <alibabacloud/sddp/model/DescribeInstanceSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeInstanceSourcesResult::DescribeInstanceSourcesResult() :
	ServiceResult()
{}

DescribeInstanceSourcesResult::DescribeInstanceSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSourcesResult::~DescribeInstanceSourcesResult()
{}

void DescribeInstanceSourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["InstanceSource"];
	for (auto valueItemsInstanceSource : allItemsNode)
	{
		InstanceSource itemsObject;
		if(!valueItemsInstanceSource["LastModifyUserId"].isNull())
			itemsObject.lastModifyUserId = valueItemsInstanceSource["LastModifyUserId"].asString();
		if(!valueItemsInstanceSource["PasswordStatus"].isNull())
			itemsObject.passwordStatus = std::stoi(valueItemsInstanceSource["PasswordStatus"].asString());
		if(!valueItemsInstanceSource["EngineType"].isNull())
			itemsObject.engineType = valueItemsInstanceSource["EngineType"].asString();
		if(!valueItemsInstanceSource["TenantName"].isNull())
			itemsObject.tenantName = valueItemsInstanceSource["TenantName"].asString();
		if(!valueItemsInstanceSource["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsInstanceSource["InstanceId"].asString();
		if(!valueItemsInstanceSource["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsInstanceSource["InstanceDescription"].asString();
		if(!valueItemsInstanceSource["DataLimitId"].isNull())
			itemsObject.dataLimitId = std::stol(valueItemsInstanceSource["DataLimitId"].asString());
		if(!valueItemsInstanceSource["RegionId"].isNull())
			itemsObject.regionId = valueItemsInstanceSource["RegionId"].asString();
		if(!valueItemsInstanceSource["DbName"].isNull())
			itemsObject.dbName = valueItemsInstanceSource["DbName"].asString();
		if(!valueItemsInstanceSource["LastModifyTime"].isNull())
			itemsObject.lastModifyTime = std::stol(valueItemsInstanceSource["LastModifyTime"].asString());
		if(!valueItemsInstanceSource["RegionName"].isNull())
			itemsObject.regionName = valueItemsInstanceSource["RegionName"].asString();
		if(!valueItemsInstanceSource["CanModifyUserName"].isNull())
			itemsObject.canModifyUserName = valueItemsInstanceSource["CanModifyUserName"].asString() == "true";
		if(!valueItemsInstanceSource["LogStoreDay"].isNull())
			itemsObject.logStoreDay = std::stoi(valueItemsInstanceSource["LogStoreDay"].asString());
		if(!valueItemsInstanceSource["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsInstanceSource["GmtCreate"].asString());
		if(!valueItemsInstanceSource["AutoScan"].isNull())
			itemsObject.autoScan = std::stoi(valueItemsInstanceSource["AutoScan"].asString());
		if(!valueItemsInstanceSource["ProductId"].isNull())
			itemsObject.productId = std::stol(valueItemsInstanceSource["ProductId"].asString());
		if(!valueItemsInstanceSource["InstanceSize"].isNull())
			itemsObject.instanceSize = std::stol(valueItemsInstanceSource["InstanceSize"].asString());
		if(!valueItemsInstanceSource["UserName"].isNull())
			itemsObject.userName = valueItemsInstanceSource["UserName"].asString();
		if(!valueItemsInstanceSource["AuditStatus"].isNull())
			itemsObject.auditStatus = std::stoi(valueItemsInstanceSource["AuditStatus"].asString());
		if(!valueItemsInstanceSource["Id"].isNull())
			itemsObject.id = std::stol(valueItemsInstanceSource["Id"].asString());
		if(!valueItemsInstanceSource["TenantId"].isNull())
			itemsObject.tenantId = valueItemsInstanceSource["TenantId"].asString();
		if(!valueItemsInstanceSource["Enable"].isNull())
			itemsObject.enable = std::stoi(valueItemsInstanceSource["Enable"].asString());
		if(!valueItemsInstanceSource["CheckStatus"].isNull())
			itemsObject.checkStatus = std::stoi(valueItemsInstanceSource["CheckStatus"].asString());
		if(!valueItemsInstanceSource["DatamaskStatus"].isNull())
			itemsObject.datamaskStatus = std::stoi(valueItemsInstanceSource["DatamaskStatus"].asString());
		if(!valueItemsInstanceSource["ErrorMessage"].isNull())
			itemsObject.errorMessage = valueItemsInstanceSource["ErrorMessage"].asString();
		if(!valueItemsInstanceSource["SamplingSize"].isNull())
			itemsObject.samplingSize = std::stoi(valueItemsInstanceSource["SamplingSize"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstanceSourcesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceSourcesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceSourcesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeInstanceSourcesResult::InstanceSource> DescribeInstanceSourcesResult::getItems()const
{
	return items_;
}

