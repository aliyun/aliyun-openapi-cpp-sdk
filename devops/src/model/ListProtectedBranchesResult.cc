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

#include <alibabacloud/devops/model/ListProtectedBranchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListProtectedBranchesResult::ListProtectedBranchesResult() :
	ServiceResult()
{}

ListProtectedBranchesResult::ListProtectedBranchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProtectedBranchesResult::~ListProtectedBranchesResult()
{}

void ListProtectedBranchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["branch"].isNull())
			resultObject.branch = valueresultresultItem["branch"].asString();
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		if(!valueresultresultItem["updatedAt"].isNull())
			resultObject.updatedAt = valueresultresultItem["updatedAt"].asString();
		auto allallowPushUsersNode = valueresultresultItem["allowPushUsers"]["allow_push_users"];
		for (auto valueresultresultItemallowPushUsersallow_push_users : allallowPushUsersNode)
		{
			ResultItem::Allow_push_users allowPushUsersObject;
			if(!valueresultresultItemallowPushUsersallow_push_users["id"].isNull())
				allowPushUsersObject.id = std::stol(valueresultresultItemallowPushUsersallow_push_users["id"].asString());
			if(!valueresultresultItemallowPushUsersallow_push_users["name"].isNull())
				allowPushUsersObject.name = valueresultresultItemallowPushUsersallow_push_users["name"].asString();
			if(!valueresultresultItemallowPushUsersallow_push_users["username"].isNull())
				allowPushUsersObject.username = valueresultresultItemallowPushUsersallow_push_users["username"].asString();
			if(!valueresultresultItemallowPushUsersallow_push_users["email"].isNull())
				allowPushUsersObject.email = valueresultresultItemallowPushUsersallow_push_users["email"].asString();
			if(!valueresultresultItemallowPushUsersallow_push_users["avatar"].isNull())
				allowPushUsersObject.avatar = valueresultresultItemallowPushUsersallow_push_users["avatar"].asString();
			if(!valueresultresultItemallowPushUsersallow_push_users["tbUserId"].isNull())
				allowPushUsersObject.tbUserId = valueresultresultItemallowPushUsersallow_push_users["tbUserId"].asString();
			resultObject.allowPushUsers.push_back(allowPushUsersObject);
		}
		auto allallowMergeUsersNode = valueresultresultItem["allowMergeUsers"]["allow_merge_users"];
		for (auto valueresultresultItemallowMergeUsersallow_merge_users : allallowMergeUsersNode)
		{
			ResultItem::Allow_merge_users allowMergeUsersObject;
			if(!valueresultresultItemallowMergeUsersallow_merge_users["id"].isNull())
				allowMergeUsersObject.id = std::stol(valueresultresultItemallowMergeUsersallow_merge_users["id"].asString());
			if(!valueresultresultItemallowMergeUsersallow_merge_users["name"].isNull())
				allowMergeUsersObject.name = valueresultresultItemallowMergeUsersallow_merge_users["name"].asString();
			if(!valueresultresultItemallowMergeUsersallow_merge_users["username"].isNull())
				allowMergeUsersObject.username = valueresultresultItemallowMergeUsersallow_merge_users["username"].asString();
			if(!valueresultresultItemallowMergeUsersallow_merge_users["email"].isNull())
				allowMergeUsersObject.email = valueresultresultItemallowMergeUsersallow_merge_users["email"].asString();
			if(!valueresultresultItemallowMergeUsersallow_merge_users["avatar"].isNull())
				allowMergeUsersObject.avatar = valueresultresultItemallowMergeUsersallow_merge_users["avatar"].asString();
			if(!valueresultresultItemallowMergeUsersallow_merge_users["tbUserId"].isNull())
				allowMergeUsersObject.tbUserId = valueresultresultItemallowMergeUsersallow_merge_users["tbUserId"].asString();
			resultObject.allowMergeUsers.push_back(allowMergeUsersObject);
		}
		auto mergeRequestSettingNode = value["mergeRequestSetting"];
		if(!mergeRequestSettingNode["isRequired"].isNull())
			resultObject.mergeRequestSetting.isRequired = mergeRequestSettingNode["isRequired"].asString() == "true";
		if(!mergeRequestSettingNode["mrMode"].isNull())
			resultObject.mergeRequestSetting.mrMode = mergeRequestSettingNode["mrMode"].asString();
		if(!mergeRequestSettingNode["isAllowSelfApproval"].isNull())
			resultObject.mergeRequestSetting.isAllowSelfApproval = mergeRequestSettingNode["isAllowSelfApproval"].asString() == "true";
		if(!mergeRequestSettingNode["isRequireDiscussionProcessed"].isNull())
			resultObject.mergeRequestSetting.isRequireDiscussionProcessed = mergeRequestSettingNode["isRequireDiscussionProcessed"].asString() == "true";
		if(!mergeRequestSettingNode["isResetApprovalWhenNewPush"].isNull())
			resultObject.mergeRequestSetting.isResetApprovalWhenNewPush = mergeRequestSettingNode["isResetApprovalWhenNewPush"].asString() == "true";
		if(!mergeRequestSettingNode["minimumApproval"].isNull())
			resultObject.mergeRequestSetting.minimumApproval = std::stoi(mergeRequestSettingNode["minimumApproval"].asString());
		if(!mergeRequestSettingNode["whiteList"].isNull())
			resultObject.mergeRequestSetting.whiteList = mergeRequestSettingNode["whiteList"].asString();
		auto alldefaultAssigneesNode = mergeRequestSettingNode["defaultAssignees"]["default_assignees"];
		for (auto mergeRequestSettingNodedefaultAssigneesdefault_assignees : alldefaultAssigneesNode)
		{
			ResultItem::MergeRequestSetting::Default_assignees default_assigneesObject;
			if(!mergeRequestSettingNodedefaultAssigneesdefault_assignees["id"].isNull())
				default_assigneesObject.id = std::stol(mergeRequestSettingNodedefaultAssigneesdefault_assignees["id"].asString());
			if(!mergeRequestSettingNodedefaultAssigneesdefault_assignees["username"].isNull())
				default_assigneesObject.username = mergeRequestSettingNodedefaultAssigneesdefault_assignees["username"].asString();
			if(!mergeRequestSettingNodedefaultAssigneesdefault_assignees["name"].isNull())
				default_assigneesObject.name = mergeRequestSettingNodedefaultAssigneesdefault_assignees["name"].asString();
			if(!mergeRequestSettingNodedefaultAssigneesdefault_assignees["email"].isNull())
				default_assigneesObject.email = mergeRequestSettingNodedefaultAssigneesdefault_assignees["email"].asString();
			if(!mergeRequestSettingNodedefaultAssigneesdefault_assignees["avatar"].isNull())
				default_assigneesObject.avatar = mergeRequestSettingNodedefaultAssigneesdefault_assignees["avatar"].asString();
			if(!mergeRequestSettingNodedefaultAssigneesdefault_assignees["tbUserId"].isNull())
				default_assigneesObject.tbUserId = mergeRequestSettingNodedefaultAssigneesdefault_assignees["tbUserId"].asString();
			resultObject.mergeRequestSetting.defaultAssignees.push_back(default_assigneesObject);
		}
			auto allAllowMergeRequestRoles = mergeRequestSettingNode["allowMergeRequestRoles"]["allow_merge_request"];
			for (auto value : allAllowMergeRequestRoles)
				resultObject.mergeRequestSetting.allowMergeRequestRoles.push_back(value.asString());
		auto testSettingDTONode = value["testSettingDTO"];
		if(!testSettingDTONode["isRequired"].isNull())
			resultObject.testSettingDTO.isRequired = testSettingDTONode["isRequired"].asString() == "true";
		auto codeGuidelinesDetectionNode = testSettingDTONode["codeGuidelinesDetection"];
		if(!codeGuidelinesDetectionNode["enabled"].isNull())
			resultObject.testSettingDTO.codeGuidelinesDetection.enabled = codeGuidelinesDetectionNode["enabled"].asString() == "true";
		if(!codeGuidelinesDetectionNode["message"].isNull())
			resultObject.testSettingDTO.codeGuidelinesDetection.message = codeGuidelinesDetectionNode["message"].asString();
		auto sensitiveInfoDetectionNode = testSettingDTONode["sensitiveInfoDetection"];
		if(!sensitiveInfoDetectionNode["enabled"].isNull())
			resultObject.testSettingDTO.sensitiveInfoDetection.enabled = sensitiveInfoDetectionNode["enabled"].asString() == "true";
		if(!sensitiveInfoDetectionNode["message"].isNull())
			resultObject.testSettingDTO.sensitiveInfoDetection.message = sensitiveInfoDetectionNode["message"].asString();
		auto checkTaskQualityConfigNode = testSettingDTONode["checkTaskQualityConfig"];
		if(!checkTaskQualityConfigNode["enabled"].isNull())
			resultObject.testSettingDTO.checkTaskQualityConfig.enabled = checkTaskQualityConfigNode["enabled"].asString() == "true";
		if(!checkTaskQualityConfigNode["bizNo"].isNull())
			resultObject.testSettingDTO.checkTaskQualityConfig.bizNo = checkTaskQualityConfigNode["bizNo"].asString();
		if(!checkTaskQualityConfigNode["taskName"].isNull())
			resultObject.testSettingDTO.checkTaskQualityConfig.taskName = checkTaskQualityConfigNode["taskName"].asString();
		if(!checkTaskQualityConfigNode["message"].isNull())
			resultObject.testSettingDTO.checkTaskQualityConfig.message = checkTaskQualityConfigNode["message"].asString();
		auto checkConfigNode = testSettingDTONode["checkConfig"];
		auto allcheckItemsNode = checkConfigNode["checkItems"]["check_items"];
		for (auto checkConfigNodecheckItemscheck_items : allcheckItemsNode)
		{
			ResultItem::TestSettingDTO::CheckConfig::Check_items check_itemsObject;
			if(!checkConfigNodecheckItemscheck_items["name"].isNull())
				check_itemsObject.name = checkConfigNodecheckItemscheck_items["name"].asString();
			if(!checkConfigNodecheckItemscheck_items["isRequired"].isNull())
				check_itemsObject.isRequired = checkConfigNodecheckItemscheck_items["isRequired"].asString() == "true";
			resultObject.testSettingDTO.checkConfig.checkItems.push_back(check_itemsObject);
		}
		auto allAllowPushRoles = value["allowPushRoles"]["allow_push"];
		for (auto value : allAllowPushRoles)
			resultObject.allowPushRoles.push_back(value.asString());
		auto allAllowPushUserIds = value["allowPushUserIds"]["allow_push_user_ids"];
		for (auto value : allAllowPushUserIds)
			resultObject.allowPushUserIds.push_back(value.asString());
		auto allAllowMergeRoles = value["allowMergeRoles"]["allow_merge"];
		for (auto value : allAllowMergeRoles)
			resultObject.allowMergeRoles.push_back(value.asString());
		auto allAllowMergeUserIds = value["allowMergeUserIds"]["allow_merge_user_ids"];
		for (auto value : allAllowMergeUserIds)
			resultObject.allowMergeUserIds.push_back(value.asString());
		auto allMatches = value["matches"]["matches"];
		for (auto value : allMatches)
			resultObject.matches.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListProtectedBranchesResult::ResultItem> ListProtectedBranchesResult::getresult()const
{
	return result_;
}

std::string ListProtectedBranchesResult::getRequestId()const
{
	return requestId_;
}

std::string ListProtectedBranchesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProtectedBranchesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProtectedBranchesResult::getSuccess()const
{
	return success_;
}

