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

#include <alibabacloud/codeup/model/ListMergeRequestsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListMergeRequestsResult::ListMergeRequestsResult() :
	ServiceResult()
{}

ListMergeRequestsResult::ListMergeRequestsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMergeRequestsResult::~ListMergeRequestsResult()
{}

void ListMergeRequestsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["AcceptedRevision"].isNull())
			resultObject.acceptedRevision = valueResultResultItem["AcceptedRevision"].asString();
		if(!valueResultResultItem["AheadCommitCount"].isNull())
			resultObject.aheadCommitCount = std::stoi(valueResultResultItem["AheadCommitCount"].asString());
		if(!valueResultResultItem["BehindCommitCount"].isNull())
			resultObject.behindCommitCount = std::stoi(valueResultResultItem["BehindCommitCount"].asString());
		if(!valueResultResultItem["CreatedAt"].isNull())
			resultObject.createdAt = valueResultResultItem["CreatedAt"].asString();
		if(!valueResultResultItem["Description"].isNull())
			resultObject.description = valueResultResultItem["Description"].asString();
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["MergeError"].isNull())
			resultObject.mergeError = valueResultResultItem["MergeError"].asString();
		if(!valueResultResultItem["MergeStatus"].isNull())
			resultObject.mergeStatus = valueResultResultItem["MergeStatus"].asString();
		if(!valueResultResultItem["MergeType"].isNull())
			resultObject.mergeType = valueResultResultItem["MergeType"].asString();
		if(!valueResultResultItem["MergedRevision"].isNull())
			resultObject.mergedRevision = valueResultResultItem["MergedRevision"].asString();
		if(!valueResultResultItem["NameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueResultResultItem["NameWithNamespace"].asString();
		if(!valueResultResultItem["ProjectId"].isNull())
			resultObject.projectId = std::stol(valueResultResultItem["ProjectId"].asString());
		if(!valueResultResultItem["SourceBranch"].isNull())
			resultObject.sourceBranch = valueResultResultItem["SourceBranch"].asString();
		if(!valueResultResultItem["State"].isNull())
			resultObject.state = valueResultResultItem["State"].asString();
		if(!valueResultResultItem["TargetBranch"].isNull())
			resultObject.targetBranch = valueResultResultItem["TargetBranch"].asString();
		if(!valueResultResultItem["Title"].isNull())
			resultObject.title = valueResultResultItem["Title"].asString();
		if(!valueResultResultItem["UpdatedAt"].isNull())
			resultObject.updatedAt = valueResultResultItem["UpdatedAt"].asString();
		if(!valueResultResultItem["WebUrl"].isNull())
			resultObject.webUrl = valueResultResultItem["WebUrl"].asString();
		if(!valueResultResultItem["IsSupportMerge"].isNull())
			resultObject.isSupportMerge = valueResultResultItem["IsSupportMerge"].asString() == "true";
		auto allAssigneeListNode = valueResultResultItem["AssigneeList"]["AssigneeListItem"];
		for (auto valueResultResultItemAssigneeListAssigneeListItem : allAssigneeListNode)
		{
			ResultItem::AssigneeListItem assigneeListObject;
			if(!valueResultResultItemAssigneeListAssigneeListItem["AvatarUrl"].isNull())
				assigneeListObject.avatarUrl = valueResultResultItemAssigneeListAssigneeListItem["AvatarUrl"].asString();
			if(!valueResultResultItemAssigneeListAssigneeListItem["ExternUserId"].isNull())
				assigneeListObject.externUserId = valueResultResultItemAssigneeListAssigneeListItem["ExternUserId"].asString();
			if(!valueResultResultItemAssigneeListAssigneeListItem["Id"].isNull())
				assigneeListObject.id = valueResultResultItemAssigneeListAssigneeListItem["Id"].asString();
			if(!valueResultResultItemAssigneeListAssigneeListItem["Name"].isNull())
				assigneeListObject.name = valueResultResultItemAssigneeListAssigneeListItem["Name"].asString();
			if(!valueResultResultItemAssigneeListAssigneeListItem["Status"].isNull())
				assigneeListObject.status = valueResultResultItemAssigneeListAssigneeListItem["Status"].asString();
			if(!valueResultResultItemAssigneeListAssigneeListItem["Email"].isNull())
				assigneeListObject.email = valueResultResultItemAssigneeListAssigneeListItem["Email"].asString();
			resultObject.assigneeList.push_back(assigneeListObject);
		}
		auto approveCheckResultNode = value["ApproveCheckResult"];
		if(!approveCheckResultNode["TotalCheckResult"].isNull())
			resultObject.approveCheckResult.totalCheckResult = approveCheckResultNode["TotalCheckResult"].asString();
		auto allSatisfiedCheckResultsNode = approveCheckResultNode["SatisfiedCheckResults"]["SatisfiedCheckResultsItem"];
		for (auto approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem : allSatisfiedCheckResultsNode)
		{
			ResultItem::ApproveCheckResult::SatisfiedCheckResultsItem satisfiedCheckResultsItemObject;
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckName"].isNull())
				satisfiedCheckResultsItemObject.checkName = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckName"].asString();
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckStatus"].isNull())
				satisfiedCheckResultsItemObject.checkStatus = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckStatus"].asString();
			if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckType"].isNull())
				satisfiedCheckResultsItemObject.checkType = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckType"].asString();
			auto allExtraUsersNode = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["ExtraUsers"]["ExtraUsersItem"];
			for (auto approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItemExtraUsersExtraUsersItem : allExtraUsersNode)
			{
				ResultItem::ApproveCheckResult::SatisfiedCheckResultsItem::ExtraUsersItem extraUsersObject;
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
			resultObject.approveCheckResult.satisfiedCheckResults.push_back(satisfiedCheckResultsItemObject);
		}
		auto allUnsatisfiedCheckResultsNode = approveCheckResultNode["UnsatisfiedCheckResults"]["UnsatisfiedCheckResultsItem"];
		for (auto approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem : allUnsatisfiedCheckResultsNode)
		{
			ResultItem::ApproveCheckResult::UnsatisfiedCheckResultsItem unsatisfiedCheckResultsItemObject;
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckName"].isNull())
				unsatisfiedCheckResultsItemObject.checkName = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckName"].asString();
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckStatus"].isNull())
				unsatisfiedCheckResultsItemObject.checkStatus = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckStatus"].asString();
			if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckType"].isNull())
				unsatisfiedCheckResultsItemObject.checkType = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckType"].asString();
			auto allExtraUsers3Node = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["ExtraUsers"]["ExtraUsersItem"];
			for (auto approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItemExtraUsersExtraUsersItem : allExtraUsers3Node)
			{
				ResultItem::ApproveCheckResult::UnsatisfiedCheckResultsItem::ExtraUsersItem4 extraUsers3Object;
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
			resultObject.approveCheckResult.unsatisfiedCheckResults.push_back(unsatisfiedCheckResultsItemObject);
		}
		auto authorNode = value["Author"];
		if(!authorNode["AvatarUrl"].isNull())
			resultObject.author.avatarUrl = authorNode["AvatarUrl"].asString();
		if(!authorNode["ExternUserId"].isNull())
			resultObject.author.externUserId = authorNode["ExternUserId"].asString();
		if(!authorNode["Id"].isNull())
			resultObject.author.id = std::stol(authorNode["Id"].asString());
		if(!authorNode["Name"].isNull())
			resultObject.author.name = authorNode["Name"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListMergeRequestsResult::getTotal()const
{
	return total_;
}

std::string ListMergeRequestsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMergeRequestsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMergeRequestsResult::getSuccess()const
{
	return success_;
}

std::vector<ListMergeRequestsResult::ResultItem> ListMergeRequestsResult::getResult()const
{
	return result_;
}

