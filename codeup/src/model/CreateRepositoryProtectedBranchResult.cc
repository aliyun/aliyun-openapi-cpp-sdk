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

#include <alibabacloud/codeup/model/CreateRepositoryProtectedBranchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

CreateRepositoryProtectedBranchResult::CreateRepositoryProtectedBranchResult() :
	ServiceResult()
{}

CreateRepositoryProtectedBranchResult::CreateRepositoryProtectedBranchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRepositoryProtectedBranchResult::~CreateRepositoryProtectedBranchResult()
{}

void CreateRepositoryProtectedBranchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["Branch"].isNull())
		result_.branch = resultNode["Branch"].asString();
	auto mergeRequestSettingNode = resultNode["MergeRequestSetting"];
	if(!mergeRequestSettingNode["Required"].isNull())
		result_.mergeRequestSetting.required = mergeRequestSettingNode["Required"].asString() == "true";
	if(!mergeRequestSettingNode["MergeRequestMode"].isNull())
		result_.mergeRequestSetting.mergeRequestMode = mergeRequestSettingNode["MergeRequestMode"].asString();
	if(!mergeRequestSettingNode["AllowSelfApproval"].isNull())
		result_.mergeRequestSetting.allowSelfApproval = mergeRequestSettingNode["AllowSelfApproval"].asString() == "true";
	if(!mergeRequestSettingNode["IsRequireDiscussionProcessed"].isNull())
		result_.mergeRequestSetting.isRequireDiscussionProcessed = mergeRequestSettingNode["IsRequireDiscussionProcessed"].asString() == "true";
	if(!mergeRequestSettingNode["IsResetApprovalWhenNewPush"].isNull())
		result_.mergeRequestSetting.isResetApprovalWhenNewPush = mergeRequestSettingNode["IsResetApprovalWhenNewPush"].asString() == "true";
	if(!mergeRequestSettingNode["MinimualApproval"].isNull())
		result_.mergeRequestSetting.minimualApproval = std::stoi(mergeRequestSettingNode["MinimualApproval"].asString());
		auto allAllowMergeRequestRoles = mergeRequestSettingNode["AllowMergeRequestRoles"]["AllowMergeRequestRoles"];
		for (auto value : allAllowMergeRequestRoles)
			result_.mergeRequestSetting.allowMergeRequestRoles.push_back(value.asString());
		auto allDefaultAssignees = mergeRequestSettingNode["DefaultAssignees"]["DefaultAssignees"];
		for (auto value : allDefaultAssignees)
			result_.mergeRequestSetting.defaultAssignees.push_back(value.asString());
	auto testSettingNode = resultNode["TestSetting"];
	if(!testSettingNode["Required"].isNull())
		result_.testSetting.required = testSettingNode["Required"].asString() == "true";
	auto codingGuidelinesDetectionNode = testSettingNode["CodingGuidelinesDetection"];
	if(!codingGuidelinesDetectionNode["Enabled"].isNull())
		result_.testSetting.codingGuidelinesDetection.enabled = codingGuidelinesDetectionNode["Enabled"].asString() == "true";
	if(!codingGuidelinesDetectionNode["Message"].isNull())
		result_.testSetting.codingGuidelinesDetection.message = codingGuidelinesDetectionNode["Message"].asString();
	auto sensitiveInfoDetectionNode = testSettingNode["SensitiveInfoDetection"];
	if(!sensitiveInfoDetectionNode["Enabled"].isNull())
		result_.testSetting.sensitiveInfoDetection.enabled = sensitiveInfoDetectionNode["Enabled"].asString() == "true";
	if(!sensitiveInfoDetectionNode["Message"].isNull())
		result_.testSetting.sensitiveInfoDetection.message = sensitiveInfoDetectionNode["Message"].asString();
	auto checkConfigNode = testSettingNode["CheckConfig"];
	auto allCheckItemsNode = checkConfigNode["CheckItems"]["CheckItemsItem"];
	for (auto checkConfigNodeCheckItemsCheckItemsItem : allCheckItemsNode)
	{
		Result::TestSetting::CheckConfig::CheckItemsItem checkItemsItemObject;
		if(!checkConfigNodeCheckItemsCheckItemsItem["Name"].isNull())
			checkItemsItemObject.name = checkConfigNodeCheckItemsCheckItemsItem["Name"].asString();
		if(!checkConfigNodeCheckItemsCheckItemsItem["Required"].isNull())
			checkItemsItemObject.required = checkConfigNodeCheckItemsCheckItemsItem["Required"].asString() == "true";
		result_.testSetting.checkConfig.checkItems.push_back(checkItemsItemObject);
	}
		auto allAllowPushRoles = resultNode["AllowPushRoles"]["AllowPushRoles"];
		for (auto value : allAllowPushRoles)
			result_.allowPushRoles.push_back(value.asString());
		auto allAllowMergeRoles = resultNode["AllowMergeRoles"]["AllowMergeRoles"];
		for (auto value : allAllowMergeRoles)
			result_.allowMergeRoles.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateRepositoryProtectedBranchResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateRepositoryProtectedBranchResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateRepositoryProtectedBranchResult::getSuccess()const
{
	return success_;
}

CreateRepositoryProtectedBranchResult::Result CreateRepositoryProtectedBranchResult::getResult()const
{
	return result_;
}

