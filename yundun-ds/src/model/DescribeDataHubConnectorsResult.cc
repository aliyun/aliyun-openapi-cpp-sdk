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

#include <alibabacloud/yundun-ds/model/DescribeDataHubConnectorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataHubConnectorsResult::DescribeDataHubConnectorsResult() :
	ServiceResult()
{}

DescribeDataHubConnectorsResult::DescribeDataHubConnectorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataHubConnectorsResult::~DescribeDataHubConnectorsResult()
{}

void DescribeDataHubConnectorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Connector"];
	for (auto valueItemsConnector : allItemsNode)
	{
		Connector itemsObject;
		if(!valueItemsConnector["Id"].isNull())
			itemsObject.id = std::stol(valueItemsConnector["Id"].asString());
		if(!valueItemsConnector["Name"].isNull())
			itemsObject.name = valueItemsConnector["Name"].asString();
		if(!valueItemsConnector["Description"].isNull())
			itemsObject.description = valueItemsConnector["Description"].asString();
		if(!valueItemsConnector["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsConnector["CreationTime"].asString());
		if(!valueItemsConnector["ConnectorProduct"].isNull())
			itemsObject.connectorProduct = valueItemsConnector["ConnectorProduct"].asString();
		if(!valueItemsConnector["ConnectorPath"].isNull())
			itemsObject.connectorPath = valueItemsConnector["ConnectorPath"].asString();
		if(!valueItemsConnector["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsConnector["RiskLevelId"].asString());
		if(!valueItemsConnector["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsConnector["RiskLevelName"].asString();
		if(!valueItemsConnector["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsConnector["UserId"].asString());
		if(!valueItemsConnector["LoginName"].isNull())
			itemsObject.loginName = valueItemsConnector["LoginName"].asString();
		if(!valueItemsConnector["DisplayName"].isNull())
			itemsObject.displayName = valueItemsConnector["DisplayName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataHubConnectorsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataHubConnectorsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataHubConnectorsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataHubConnectorsResult::Connector> DescribeDataHubConnectorsResult::getItems()const
{
	return items_;
}

