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

#include <alibabacloud/devops/model/CreateProtectdBranchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateProtectdBranchResult::CreateProtectdBranchResult() :
	ServiceResult()
{}

CreateProtectdBranchResult::CreateProtectdBranchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProtectdBranchResult::~CreateProtectdBranchResult()
{}

void CreateProtectdBranchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["branch"].isNull())
		result_.branch = resultNode["branch"].asString();
	auto mergeRequestSettingNode = resultNode["mergeRequestSetting"];
	if(!mergeRequestSettingNode["isRequired"].isNull())
		result_.mergeRequestSetting.isRequired = mergeRequestSettingNode["isRequired"].asString() == "true";
	if(!mergeRequestSettingNode["mrMode"].isNull())
		result_.mergeRequestSetting.mrMode = mergeRequestSettingNode["mrMode"].asString();
	if(!mergeRequestSettingNode["isAllowSelfApproval"].isNull())
		result_.mergeRequestSetting.isAllowSelfApproval = mergeRequestSettingNode["isAllowSelfApproval"].asString() == "true";
	if(!mergeRequestSettingNode["isRequireDiscussionProcessed"].isNull())
		result_.mergeRequestSetting.isRequireDiscussionProcessed = mergeRequestSettingNode["isRequireDiscussionProcessed"].asString() == "true";
	if(!mergeRequestSettingNode["isResetApprovalWhenNewPush"].isNull())
		result_.mergeRequestSetting.isResetApprovalWhenNewPush = mergeRequestSettingNode["isResetApprovalWhenNewPush"].asString() == "true";
	if(!mergeRequestSettingNode["minimumApproval"].isNull())
		result_.mergeRequestSetting.minimumApproval = std::stoi(mergeRequestSettingNode["minimumApproval"].asString());
	if(!mergeRequestSettingNode["whiteList"].isNull())
		result_.mergeRequestSetting.whiteList = mergeRequestSettingNode["whiteList"].asString();
		auto allAllowMergeRequestRoles = mergeRequestSettingNode["allowMergeRequestRoles"]["allow_merge_request"];
		for (auto value : allAllowMergeRequestRoles)
			result_.mergeRequestSetting.allowMergeRequestRoles.push_back(value.asString());
		auto allDefaultAssignees = mergeRequestSettingNode["defaultAssignees"]["default_assignees"];
		for (auto value : allDefaultAssignees)
			result_.mergeRequestSetting.defaultAssignees.push_back(value.asString());
	auto testSettingDTONode = resultNode["testSettingDTO"];
	if(!testSettingDTONode["isRequired"].isNull())
		result_.testSettingDTO.isRequired = testSettingDTONode["isRequired"].asString() == "true";
	auto codeGuidelinesDetectionNode = testSettingDTONode["codeGuidelinesDetection"];
	if(!codeGuidelinesDetectionNode["enabled"].isNull())
		result_.testSettingDTO.codeGuidelinesDetection.enabled = codeGuidelinesDetectionNode["enabled"].asString() == "true";
	if(!codeGuidelinesDetectionNode["message"].isNull())
		result_.testSettingDTO.codeGuidelinesDetection.message = codeGuidelinesDetectionNode["message"].asString();
	auto sensitiveInfoDetectionNode = testSettingDTONode["sensitiveInfoDetection"];
	if(!sensitiveInfoDetectionNode["enabled"].isNull())
		result_.testSettingDTO.sensitiveInfoDetection.enabled = sensitiveInfoDetectionNode["enabled"].asString() == "true";
	if(!sensitiveInfoDetectionNode["message"].isNull())
		result_.testSettingDTO.sensitiveInfoDetection.message = sensitiveInfoDetectionNode["message"].asString();
	auto checkTaskQualityConfigNode = testSettingDTONode["checkTaskQualityConfig"];
	if(!checkTaskQualityConfigNode["enabled"].isNull())
		result_.testSettingDTO.checkTaskQualityConfig.enabled = checkTaskQualityConfigNode["enabled"].asString() == "true";
	if(!checkTaskQualityConfigNode["bizNo"].isNull())
		result_.testSettingDTO.checkTaskQualityConfig.bizNo = checkTaskQualityConfigNode["bizNo"].asString();
	if(!checkTaskQualityConfigNode["taskName"].isNull())
		result_.testSettingDTO.checkTaskQualityConfig.taskName = checkTaskQualityConfigNode["taskName"].asString();
	if(!checkTaskQualityConfigNode["message"].isNull())
		result_.testSettingDTO.checkTaskQualityConfig.message = checkTaskQualityConfigNode["message"].asString();
	auto checkConfigNode = testSettingDTONode["checkConfig"];
	auto allcheckItemsNode = checkConfigNode["checkItems"]["check_items"];
	for (auto checkConfigNodecheckItemscheck_items : allcheckItemsNode)
	{
		Result::TestSettingDTO::CheckConfig::Check_items check_itemsObject;
		if(!checkConfigNodecheckItemscheck_items["name"].isNull())
			check_itemsObject.name = checkConfigNodecheckItemscheck_items["name"].asString();
		if(!checkConfigNodecheckItemscheck_items["isRequired"].isNull())
			check_itemsObject.isRequired = checkConfigNodecheckItemscheck_items["isRequired"].asString() == "true";
		result_.testSettingDTO.checkConfig.checkItems.push_back(check_itemsObject);
	}
		auto allAllowPushRoles = resultNode["allowPushRoles"]["allow_push"];
		for (auto value : allAllowPushRoles)
			result_.allowPushRoles.push_back(value.asString());
		auto allAllowPushUserIds = resultNode["allowPushUserIds"]["allow_push_user_ids"];
		for (auto value : allAllowPushUserIds)
			result_.allowPushUserIds.push_back(value.asString());
		auto allAllowMergeRoles = resultNode["allowMergeRoles"]["allow_merge"];
		for (auto value : allAllowMergeRoles)
			result_.allowMergeRoles.push_back(value.asString());
		auto allAllowMergeUserIds = resultNode["allowMergeUserIds"]["allow_merge_user_ids"];
		for (auto value : allAllowMergeUserIds)
			result_.allowMergeUserIds.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateProtectdBranchResult::getRequestId()const
{
	return requestId_;
}

std::string CreateProtectdBranchResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateProtectdBranchResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateProtectdBranchResult::getSuccess()const
{
	return success_;
}

CreateProtectdBranchResult::Result CreateProtectdBranchResult::getResult()const
{
	return result_;
}

