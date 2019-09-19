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

#include <alibabacloud/yundun-ds/model/DescribeDataHubSubscriptionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataHubSubscriptionsResult::DescribeDataHubSubscriptionsResult() :
	ServiceResult()
{}

DescribeDataHubSubscriptionsResult::DescribeDataHubSubscriptionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataHubSubscriptionsResult::~DescribeDataHubSubscriptionsResult()
{}

void DescribeDataHubSubscriptionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Subscription"];
	for (auto valueItemsSubscription : allItemsNode)
	{
		Subscription itemsObject;
		if(!valueItemsSubscription["Id"].isNull())
			itemsObject.id = std::stol(valueItemsSubscription["Id"].asString());
		if(!valueItemsSubscription["Name"].isNull())
			itemsObject.name = valueItemsSubscription["Name"].asString();
		if(!valueItemsSubscription["Description"].isNull())
			itemsObject.description = valueItemsSubscription["Description"].asString();
		if(!valueItemsSubscription["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsSubscription["CreationTime"].asString());
		if(!valueItemsSubscription["State"].isNull())
			itemsObject.state = valueItemsSubscription["State"].asString();
		if(!valueItemsSubscription["ApplicationName"].isNull())
			itemsObject.applicationName = valueItemsSubscription["ApplicationName"].asString();
		if(!valueItemsSubscription["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsSubscription["UserId"].asString());
		if(!valueItemsSubscription["LoginName"].isNull())
			itemsObject.loginName = valueItemsSubscription["LoginName"].asString();
		if(!valueItemsSubscription["DisplayName"].isNull())
			itemsObject.displayName = valueItemsSubscription["DisplayName"].asString();
		if(!valueItemsSubscription["SubscriptionUserId"].isNull())
			itemsObject.subscriptionUserId = std::stol(valueItemsSubscription["SubscriptionUserId"].asString());
		if(!valueItemsSubscription["SubscriptionUserName"].isNull())
			itemsObject.subscriptionUserName = valueItemsSubscription["SubscriptionUserName"].asString();
		if(!valueItemsSubscription["SubscriptionDisplayName"].isNull())
			itemsObject.subscriptionDisplayName = valueItemsSubscription["SubscriptionDisplayName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataHubSubscriptionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataHubSubscriptionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataHubSubscriptionsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataHubSubscriptionsResult::Subscription> DescribeDataHubSubscriptionsResult::getItems()const
{
	return items_;
}

