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

#include <alibabacloud/ecd/model/DescribeUsersInGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeUsersInGroupResult::DescribeUsersInGroupResult() :
	ServiceResult()
{}

DescribeUsersInGroupResult::DescribeUsersInGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUsersInGroupResult::~DescribeUsersInGroupResult()
{}

void DescribeUsersInGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndUsersNode = value["EndUsers"]["EndUser"];
	for (auto valueEndUsersEndUser : allEndUsersNode)
	{
		EndUser endUsersObject;
		if(!valueEndUsersEndUser["EndUserId"].isNull())
			endUsersObject.endUserId = valueEndUsersEndUser["EndUserId"].asString();
		if(!valueEndUsersEndUser["EndUserEmail"].isNull())
			endUsersObject.endUserEmail = valueEndUsersEndUser["EndUserEmail"].asString();
		if(!valueEndUsersEndUser["DesktopName"].isNull())
			endUsersObject.desktopName = valueEndUsersEndUser["DesktopName"].asString();
		if(!valueEndUsersEndUser["ConnectionStatus"].isNull())
			endUsersObject.connectionStatus = valueEndUsersEndUser["ConnectionStatus"].asString();
		if(!valueEndUsersEndUser["DesktopId"].isNull())
			endUsersObject.desktopId = valueEndUsersEndUser["DesktopId"].asString();
		if(!valueEndUsersEndUser["EndUserType"].isNull())
			endUsersObject.endUserType = valueEndUsersEndUser["EndUserType"].asString();
		if(!valueEndUsersEndUser["EndUserPhone"].isNull())
			endUsersObject.endUserPhone = valueEndUsersEndUser["EndUserPhone"].asString();
		if(!valueEndUsersEndUser["EndUserName"].isNull())
			endUsersObject.endUserName = valueEndUsersEndUser["EndUserName"].asString();
		if(!valueEndUsersEndUser["UserDesktopId"].isNull())
			endUsersObject.userDesktopId = valueEndUsersEndUser["UserDesktopId"].asString();
		if(!valueEndUsersEndUser["EndUserRemark"].isNull())
			endUsersObject.endUserRemark = valueEndUsersEndUser["EndUserRemark"].asString();
		if(!valueEndUsersEndUser["DisplayName"].isNull())
			endUsersObject.displayName = valueEndUsersEndUser["DisplayName"].asString();
		auto allUserSetPropertiesModelsNode = valueEndUsersEndUser["UserSetPropertiesModels"]["userSetPropertiesModelsItem"];
		for (auto valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem : allUserSetPropertiesModelsNode)
		{
			EndUser::UserSetPropertiesModelsItem userSetPropertiesModelsObject;
			if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["UserId"].isNull())
				userSetPropertiesModelsObject.userId = std::stol(valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["UserId"].asString());
			if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["UserName"].isNull())
				userSetPropertiesModelsObject.userName = valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["UserName"].asString();
			if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyId"].isNull())
				userSetPropertiesModelsObject.propertyId = std::stol(valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyId"].asString());
			if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyKey"].isNull())
				userSetPropertiesModelsObject.propertyKey = valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyKey"].asString();
			if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyType"].isNull())
				userSetPropertiesModelsObject.propertyType = std::stoi(valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyType"].asString());
			auto allPropertyValuesNode = valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyValues"]["propertyValuesItem"];
			for (auto valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem : allPropertyValuesNode)
			{
				EndUser::UserSetPropertiesModelsItem::PropertyValuesItem propertyValuesObject;
				if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValueId"].isNull())
					propertyValuesObject.propertyValueId = std::stol(valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValueId"].asString());
				if(!valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValue"].isNull())
					propertyValuesObject.propertyValue = valueEndUsersEndUserUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValue"].asString();
				userSetPropertiesModelsObject.propertyValues.push_back(propertyValuesObject);
			}
			endUsersObject.userSetPropertiesModels.push_back(userSetPropertiesModelsObject);
		}
		auto externalInfoNode = value["ExternalInfo"];
		if(!externalInfoNode["ExternalName"].isNull())
			endUsersObject.externalInfo.externalName = externalInfoNode["ExternalName"].asString();
		if(!externalInfoNode["JobNumber"].isNull())
			endUsersObject.externalInfo.jobNumber = externalInfoNode["JobNumber"].asString();
		endUsers_.push_back(endUsersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["UsersCount"].isNull())
		usersCount_ = std::stoi(value["UsersCount"].asString());
	if(!value["OnlineUsersCount"].isNull())
		onlineUsersCount_ = std::stoi(value["OnlineUsersCount"].asString());

}

int DescribeUsersInGroupResult::getOnlineUsersCount()const
{
	return onlineUsersCount_;
}

std::string DescribeUsersInGroupResult::getNextToken()const
{
	return nextToken_;
}

int DescribeUsersInGroupResult::getUsersCount()const
{
	return usersCount_;
}

std::vector<DescribeUsersInGroupResult::EndUser> DescribeUsersInGroupResult::getEndUsers()const
{
	return endUsers_;
}

