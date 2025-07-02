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

#include <alibabacloud/eds-user/model/FilterUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

FilterUsersResult::FilterUsersResult() :
	ServiceResult()
{}

FilterUsersResult::FilterUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FilterUsersResult::~FilterUsersResult()
{}

void FilterUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["data"];
	for (auto valueUsersdata : allUsersNode)
	{
		Data usersObject;
		if(!valueUsersdata["Id"].isNull())
			usersObject.id = std::stol(valueUsersdata["Id"].asString());
		if(!valueUsersdata["EndUserId"].isNull())
			usersObject.endUserId = valueUsersdata["EndUserId"].asString();
		if(!valueUsersdata["Email"].isNull())
			usersObject.email = valueUsersdata["Email"].asString();
		if(!valueUsersdata["Phone"].isNull())
			usersObject.phone = valueUsersdata["Phone"].asString();
		if(!valueUsersdata["Status"].isNull())
			usersObject.status = std::stol(valueUsersdata["Status"].asString());
		if(!valueUsersdata["DesktopCount"].isNull())
			usersObject.desktopCount = std::stol(valueUsersdata["DesktopCount"].asString());
		if(!valueUsersdata["DesktopGroupCount"].isNull())
			usersObject.desktopGroupCount = std::stol(valueUsersdata["DesktopGroupCount"].asString());
		if(!valueUsersdata["OwnerType"].isNull())
			usersObject.ownerType = valueUsersdata["OwnerType"].asString();
		if(!valueUsersdata["Remark"].isNull())
			usersObject.remark = valueUsersdata["Remark"].asString();
		if(!valueUsersdata["IsTenantManager"].isNull())
			usersObject.isTenantManager = valueUsersdata["IsTenantManager"].asString() == "true";
		if(!valueUsersdata["EnableAdminAccess"].isNull())
			usersObject.enableAdminAccess = valueUsersdata["EnableAdminAccess"].asString() == "true";
		if(!valueUsersdata["RealNickName"].isNull())
			usersObject.realNickName = valueUsersdata["RealNickName"].asString();
		if(!valueUsersdata["AutoLockTime"].isNull())
			usersObject.autoLockTime = valueUsersdata["AutoLockTime"].asString();
		if(!valueUsersdata["PasswordExpireDays"].isNull())
			usersObject.passwordExpireDays = std::stoi(valueUsersdata["PasswordExpireDays"].asString());
		if(!valueUsersdata["PasswordExpireRestDays"].isNull())
			usersObject.passwordExpireRestDays = std::stoi(valueUsersdata["PasswordExpireRestDays"].asString());
		auto allUserSetPropertiesModelsNode = valueUsersdata["UserSetPropertiesModels"]["userSetPropertiesModelsItem"];
		for (auto valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem : allUserSetPropertiesModelsNode)
		{
			Data::UserSetPropertiesModelsItem userSetPropertiesModelsObject;
			if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["UserId"].isNull())
				userSetPropertiesModelsObject.userId = std::stol(valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["UserId"].asString());
			if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["UserName"].isNull())
				userSetPropertiesModelsObject.userName = valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["UserName"].asString();
			if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyId"].isNull())
				userSetPropertiesModelsObject.propertyId = std::stol(valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyId"].asString());
			if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyKey"].isNull())
				userSetPropertiesModelsObject.propertyKey = valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyKey"].asString();
			if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyType"].isNull())
				userSetPropertiesModelsObject.propertyType = std::stoi(valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyType"].asString());
			auto allPropertyValuesNode = valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItem["PropertyValues"]["propertyValuesItem"];
			for (auto valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem : allPropertyValuesNode)
			{
				Data::UserSetPropertiesModelsItem::PropertyValuesItem propertyValuesObject;
				if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValueId"].isNull())
					propertyValuesObject.propertyValueId = std::stol(valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValueId"].asString());
				if(!valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValue"].isNull())
					propertyValuesObject.propertyValue = valueUsersdataUserSetPropertiesModelsuserSetPropertiesModelsItemPropertyValuespropertyValuesItem["PropertyValue"].asString();
				userSetPropertiesModelsObject.propertyValues.push_back(propertyValuesObject);
			}
			usersObject.userSetPropertiesModels.push_back(userSetPropertiesModelsObject);
		}
		auto allOrgListNode = valueUsersdata["OrgList"]["orgListItem"];
		for (auto valueUsersdataOrgListorgListItem : allOrgListNode)
		{
			Data::OrgListItem orgListObject;
			if(!valueUsersdataOrgListorgListItem["OrgId"].isNull())
				orgListObject.orgId = valueUsersdataOrgListorgListItem["OrgId"].asString();
			if(!valueUsersdataOrgListorgListItem["OrgName"].isNull())
				orgListObject.orgName = valueUsersdataOrgListorgListItem["OrgName"].asString();
			if(!valueUsersdataOrgListorgListItem["OrgNamePath"].isNull())
				orgListObject.orgNamePath = valueUsersdataOrgListorgListItem["OrgNamePath"].asString();
			usersObject.orgList.push_back(orgListObject);
		}
		auto allSupportLoginIdpsNode = valueUsersdata["SupportLoginIdps"]["IdpInfo"];
		for (auto valueUsersdataSupportLoginIdpsIdpInfo : allSupportLoginIdpsNode)
		{
			Data::IdpInfo supportLoginIdpsObject;
			if(!valueUsersdataSupportLoginIdpsIdpInfo["IdpId"].isNull())
				supportLoginIdpsObject.idpId = valueUsersdataSupportLoginIdpsIdpInfo["IdpId"].asString();
			if(!valueUsersdataSupportLoginIdpsIdpInfo["IdpName"].isNull())
				supportLoginIdpsObject.idpName = valueUsersdataSupportLoginIdpsIdpInfo["IdpName"].asString();
			usersObject.supportLoginIdps.push_back(supportLoginIdpsObject);
		}
		auto externalInfoNode = value["ExternalInfo"];
		if(!externalInfoNode["ExternalName"].isNull())
			usersObject.externalInfo.externalName = externalInfoNode["ExternalName"].asString();
		if(!externalInfoNode["JobNumber"].isNull())
			usersObject.externalInfo.jobNumber = externalInfoNode["JobNumber"].asString();
		users_.push_back(usersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string FilterUsersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<FilterUsersResult::Data> FilterUsersResult::getUsers()const
{
	return users_;
}

