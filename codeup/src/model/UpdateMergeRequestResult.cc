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

#include <alibabacloud/codeup/model/UpdateMergeRequestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

UpdateMergeRequestResult::UpdateMergeRequestResult() :
	ServiceResult()
{}

UpdateMergeRequestResult::UpdateMergeRequestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateMergeRequestResult::~UpdateMergeRequestResult()
{}

void UpdateMergeRequestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AcceptedRevision"].isNull())
		result_.acceptedRevision = resultNode["AcceptedRevision"].asString();
	if(!resultNode["AheadCommitCount"].isNull())
		result_.aheadCommitCount = std::stoi(resultNode["AheadCommitCount"].asString());
	if(!resultNode["BehindCommitCount"].isNull())
		result_.behindCommitCount = std::stoi(resultNode["BehindCommitCount"].asString());
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["MergeError"].isNull())
		result_.mergeError = resultNode["MergeError"].asString();
	if(!resultNode["MergeStatus"].isNull())
		result_.mergeStatus = resultNode["MergeStatus"].asString();
	if(!resultNode["MergeType"].isNull())
		result_.mergeType = resultNode["MergeType"].asString();
	if(!resultNode["MergedRevision"].isNull())
		result_.mergedRevision = resultNode["MergedRevision"].asString();
	if(!resultNode["NameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["NameWithNamespace"].asString();
	if(!resultNode["ProjectId"].isNull())
		result_.projectId = std::stol(resultNode["ProjectId"].asString());
	if(!resultNode["SourceBranch"].isNull())
		result_.sourceBranch = resultNode["SourceBranch"].asString();
	if(!resultNode["State"].isNull())
		result_.state = resultNode["State"].asString();
	if(!resultNode["TargetBranch"].isNull())
		result_.targetBranch = resultNode["TargetBranch"].asString();
	if(!resultNode["Title"].isNull())
		result_.title = resultNode["Title"].asString();
	if(!resultNode["UpdatedAt"].isNull())
		result_.updatedAt = resultNode["UpdatedAt"].asString();
	if(!resultNode["WebUrl"].isNull())
		result_.webUrl = resultNode["WebUrl"].asString();
	auto allAssigneeListNode = resultNode["AssigneeList"]["AssigneeListItem"];
	for (auto resultNodeAssigneeListAssigneeListItem : allAssigneeListNode)
	{
		Result::AssigneeListItem assigneeListItemObject;
		if(!resultNodeAssigneeListAssigneeListItem["AvatarUrl"].isNull())
			assigneeListItemObject.avatarUrl = resultNodeAssigneeListAssigneeListItem["AvatarUrl"].asString();
		if(!resultNodeAssigneeListAssigneeListItem["ExternUserId"].isNull())
			assigneeListItemObject.externUserId = resultNodeAssigneeListAssigneeListItem["ExternUserId"].asString();
		if(!resultNodeAssigneeListAssigneeListItem["Id"].isNull())
			assigneeListItemObject.id = resultNodeAssigneeListAssigneeListItem["Id"].asString();
		if(!resultNodeAssigneeListAssigneeListItem["Name"].isNull())
			assigneeListItemObject.name = resultNodeAssigneeListAssigneeListItem["Name"].asString();
		result_.assigneeList.push_back(assigneeListItemObject);
	}
	auto approveCheckResultNode = resultNode["ApproveCheckResult"];
	if(!approveCheckResultNode["TotalCheckResult"].isNull())
		result_.approveCheckResult.totalCheckResult = approveCheckResultNode["TotalCheckResult"].asString();
	auto allSatisfiedCheckResultsNode = approveCheckResultNode["SatisfiedCheckResults"]["SatisfiedCheckResultsItem"];
	for (auto approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem : allSatisfiedCheckResultsNode)
	{
		Result::ApproveCheckResult::SatisfiedCheckResultsItem satisfiedCheckResultsItemObject;
		if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckName"].isNull())
			satisfiedCheckResultsItemObject.checkName = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckName"].asString();
		if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckStatus"].isNull())
			satisfiedCheckResultsItemObject.checkStatus = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckStatus"].asString();
		if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckType"].isNull())
			satisfiedCheckResultsItemObject.checkType = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckType"].asString();
		auto allExtraUsersNode = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["ExtraUsers"]["ExtraUsersItem"];
		for (auto approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem : allExtraUsersNode)
		{
			Result::ApproveCheckResult::SatisfiedCheckResultsItem::ExtraUsersItem extraUsersObject;
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["AvatarUrl"].isNull())
				extraUsersObject.avatarUrl = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["AvatarUrl"].asString();
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["ExternUserId"].isNull())
				extraUsersObject.externUserId = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["ExternUserId"].asString();
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["Id"].isNull())
				extraUsersObject.id = std::stol(approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["Id"].asString());
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["Name"].isNull())
				extraUsersObject.name = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem["Name"].asString();
			satisfiedCheckResultsItemObject.extraUsers.push_back(extraUsersObject);
		}
		auto allSatisfiedItems = value["SatisfiedItems"]["SatisfiedItems"];
		for (auto value : allSatisfiedItems)
			satisfiedCheckResultsItemObject.satisfiedItems.push_back(value.asString());
		auto allUnsatisfiedItems = value["UnsatisfiedItems"]["UnsatisfiedItems"];
		for (auto value : allUnsatisfiedItems)
			satisfiedCheckResultsItemObject.unsatisfiedItems.push_back(value.asString());
		result_.approveCheckResult.satisfiedCheckResults.push_back(satisfiedCheckResultsItemObject);
	}
	auto allUnsatisfiedCheckResultsNode = approveCheckResultNode["UnsatisfiedCheckResults"]["UnsatisfiedCheckResultsItem"];
	for (auto approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem : allUnsatisfiedCheckResultsNode)
	{
		Result::ApproveCheckResult::UnsatisfiedCheckResultsItem unsatisfiedCheckResultsItemObject;
		if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckName"].isNull())
			unsatisfiedCheckResultsItemObject.checkName = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckName"].asString();
		if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckStatus"].isNull())
			unsatisfiedCheckResultsItemObject.checkStatus = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckStatus"].asString();
		if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckType"].isNull())
			unsatisfiedCheckResultsItemObject.checkType = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckType"].asString();
		auto allExtraUsers3Node = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["ExtraUsers"]["ExtraUsersItem"];
		for (auto approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem : allExtraUsers3Node)
		{
			Result::ApproveCheckResult::UnsatisfiedCheckResultsItem::ExtraUsersItem4 extraUsers3Object;
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["AvatarUrl"].isNull())
				extraUsers3Object.avatarUrl = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["AvatarUrl"].asString();
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["ExternUserId"].isNull())
				extraUsers3Object.externUserId = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["ExternUserId"].asString();
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["Id"].isNull())
				extraUsers3Object.id = std::stol(approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["Id"].asString());
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["Name"].isNull())
				extraUsers3Object.name = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem["Name"].asString();
			unsatisfiedCheckResultsItemObject.extraUsers3.push_back(extraUsers3Object);
		}
		auto allSatisfiedItems1 = value["SatisfiedItems"]["SatisfiedItems"];
		for (auto value : allSatisfiedItems1)
			unsatisfiedCheckResultsItemObject.satisfiedItems1.push_back(value.asString());
		auto allUnsatisfiedItems2 = value["UnsatisfiedItems"]["UnsatisfiedItems"];
		for (auto value : allUnsatisfiedItems2)
			unsatisfiedCheckResultsItemObject.unsatisfiedItems2.push_back(value.asString());
		result_.approveCheckResult.unsatisfiedCheckResults.push_back(unsatisfiedCheckResultsItemObject);
	}
	auto authorNode = resultNode["Author"];
	if(!authorNode["AvatarUrl"].isNull())
		result_.author.avatarUrl = authorNode["AvatarUrl"].asString();
	if(!authorNode["ExternUserId"].isNull())
		result_.author.externUserId = authorNode["ExternUserId"].asString();
	if(!authorNode["Id"].isNull())
		result_.author.id = std::stol(authorNode["Id"].asString());
	if(!authorNode["Name"].isNull())
		result_.author.name = authorNode["Name"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateMergeRequestResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateMergeRequestResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateMergeRequestResult::getSuccess()const
{
	return success_;
}

UpdateMergeRequestResult::Result UpdateMergeRequestResult::getResult()const
{
	return result_;
}

