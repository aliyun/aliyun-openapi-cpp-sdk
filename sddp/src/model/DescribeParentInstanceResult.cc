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

#include <alibabacloud/sddp/model/DescribeParentInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeParentInstanceResult::DescribeParentInstanceResult() :
	ServiceResult()
{}

DescribeParentInstanceResult::DescribeParentInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParentInstanceResult::~DescribeParentInstanceResult()
{}

void DescribeParentInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["data"];
	for (auto valueItemsdata : allItemsNode)
	{
		Data itemsObject;
		if(!valueItemsdata["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsdata["InstanceId"].asString();
		if(!valueItemsdata["LocalName"].isNull())
			itemsObject.localName = valueItemsdata["LocalName"].asString();
		if(!valueItemsdata["EngineType"].isNull())
			itemsObject.engineType = valueItemsdata["EngineType"].asString();
		if(!valueItemsdata["ParentId"].isNull())
			itemsObject.parentId = valueItemsdata["ParentId"].asString();
		if(!valueItemsdata["DbNum"].isNull())
			itemsObject.dbNum = valueItemsdata["DbNum"].asString();
		if(!valueItemsdata["ClusterStatus"].isNull())
			itemsObject.clusterStatus = valueItemsdata["ClusterStatus"].asString();
		if(!valueItemsdata["TenantId"].isNull())
			itemsObject.tenantId = valueItemsdata["TenantId"].asString();
		if(!valueItemsdata["TenantName"].isNull())
			itemsObject.tenantName = valueItemsdata["TenantName"].asString();
		if(!valueItemsdata["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsdata["InstanceDescription"].asString();
		if(!valueItemsdata["ResourceType"].isNull())
			itemsObject.resourceType = valueItemsdata["ResourceType"].asString();
		if(!valueItemsdata["UnConnectDbCount"].isNull())
			itemsObject.unConnectDbCount = valueItemsdata["UnConnectDbCount"].asString();
		if(!valueItemsdata["UnSupportOneClickAuthReason"].isNull())
			itemsObject.unSupportOneClickAuthReason = valueItemsdata["UnSupportOneClickAuthReason"].asString();
		if(!valueItemsdata["ConnectNode"].isNull())
			itemsObject.connectNode = valueItemsdata["ConnectNode"].asString();
		if(!valueItemsdata["SupportConnectNodes"].isNull())
			itemsObject.supportConnectNodes = valueItemsdata["SupportConnectNodes"].asString();
		if(!valueItemsdata["AuthStatus"].isNull())
			itemsObject.authStatus = std::stoi(valueItemsdata["AuthStatus"].asString());
		if(!valueItemsdata["InstanceSize"].isNull())
			itemsObject.instanceSize = std::stol(valueItemsdata["InstanceSize"].asString());
		if(!valueItemsdata["AuditStatus"].isNull())
			itemsObject.auditStatus = std::stoi(valueItemsdata["AuditStatus"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeParentInstanceResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeParentInstanceResult::getPageSize()const
{
	return pageSize_;
}

int DescribeParentInstanceResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeParentInstanceResult::Data> DescribeParentInstanceResult::getItems()const
{
	return items_;
}

