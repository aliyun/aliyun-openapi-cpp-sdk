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

#include <alibabacloud/eds-user/model/DescribeResourceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

DescribeResourceGroupsResult::DescribeResourceGroupsResult() :
	ServiceResult()
{}

DescribeResourceGroupsResult::DescribeResourceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceGroupsResult::~DescribeResourceGroupsResult()
{}

void DescribeResourceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceGroupNode = value["ResourceGroup"]["ResourceGroupItem"];
	for (auto valueResourceGroupResourceGroupItem : allResourceGroupNode)
	{
		ResourceGroupItem resourceGroupObject;
		if(!valueResourceGroupResourceGroupItem["ResourceGroupId"].isNull())
			resourceGroupObject.resourceGroupId = valueResourceGroupResourceGroupItem["ResourceGroupId"].asString();
		if(!valueResourceGroupResourceGroupItem["ResourceGroupName"].isNull())
			resourceGroupObject.resourceGroupName = valueResourceGroupResourceGroupItem["ResourceGroupName"].asString();
		if(!valueResourceGroupResourceGroupItem["ResourceCount"].isNull())
			resourceGroupObject.resourceCount = valueResourceGroupResourceGroupItem["ResourceCount"].asString();
		if(!valueResourceGroupResourceGroupItem["AuthCount"].isNull())
			resourceGroupObject.authCount = valueResourceGroupResourceGroupItem["AuthCount"].asString();
		if(!valueResourceGroupResourceGroupItem["CreateTime"].isNull())
			resourceGroupObject.createTime = valueResourceGroupResourceGroupItem["CreateTime"].asString();
		auto allPoliciesNode = valueResourceGroupResourceGroupItem["Policies"]["Policy"];
		for (auto valueResourceGroupResourceGroupItemPoliciesPolicy : allPoliciesNode)
		{
			ResourceGroupItem::Policy policiesObject;
			if(!valueResourceGroupResourceGroupItemPoliciesPolicy["Id"].isNull())
				policiesObject.id = valueResourceGroupResourceGroupItemPoliciesPolicy["Id"].asString();
			if(!valueResourceGroupResourceGroupItemPoliciesPolicy["Name"].isNull())
				policiesObject.name = valueResourceGroupResourceGroupItemPoliciesPolicy["Name"].asString();
			if(!valueResourceGroupResourceGroupItemPoliciesPolicy["IsDefault"].isNull())
				policiesObject.isDefault = valueResourceGroupResourceGroupItemPoliciesPolicy["IsDefault"].asString() == "true";
			resourceGroupObject.policies.push_back(policiesObject);
		}
		auto allTimersNode = valueResourceGroupResourceGroupItem["Timers"]["Timer"];
		for (auto valueResourceGroupResourceGroupItemTimersTimer : allTimersNode)
		{
			ResourceGroupItem::Timer timersObject;
			if(!valueResourceGroupResourceGroupItemTimersTimer["Id"].isNull())
				timersObject.id = valueResourceGroupResourceGroupItemTimersTimer["Id"].asString();
			if(!valueResourceGroupResourceGroupItemTimersTimer["Name"].isNull())
				timersObject.name = valueResourceGroupResourceGroupItemTimersTimer["Name"].asString();
			if(!valueResourceGroupResourceGroupItemTimersTimer["TimerStatus"].isNull())
				timersObject.timerStatus = valueResourceGroupResourceGroupItemTimersTimer["TimerStatus"].asString();
			if(!valueResourceGroupResourceGroupItemTimersTimer["BindStatus"].isNull())
				timersObject.bindStatus = valueResourceGroupResourceGroupItemTimersTimer["BindStatus"].asString();
			resourceGroupObject.timers.push_back(timersObject);
		}
		auto allAppRulesNode = valueResourceGroupResourceGroupItem["AppRules"]["AppRule"];
		for (auto valueResourceGroupResourceGroupItemAppRulesAppRule : allAppRulesNode)
		{
			ResourceGroupItem::AppRule appRulesObject;
			if(!valueResourceGroupResourceGroupItemAppRulesAppRule["Id"].isNull())
				appRulesObject.id = valueResourceGroupResourceGroupItemAppRulesAppRule["Id"].asString();
			if(!valueResourceGroupResourceGroupItemAppRulesAppRule["Name"].isNull())
				appRulesObject.name = valueResourceGroupResourceGroupItemAppRulesAppRule["Name"].asString();
			if(!valueResourceGroupResourceGroupItemAppRulesAppRule["Type"].isNull())
				appRulesObject.type = std::stoi(valueResourceGroupResourceGroupItemAppRulesAppRule["Type"].asString());
			resourceGroupObject.appRules.push_back(appRulesObject);
		}
		resourceGroup_.push_back(resourceGroupObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string DescribeResourceGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeResourceGroupsResult::ResourceGroupItem> DescribeResourceGroupsResult::getResourceGroup()const
{
	return resourceGroup_;
}

