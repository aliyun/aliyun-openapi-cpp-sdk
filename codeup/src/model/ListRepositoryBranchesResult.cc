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

#include <alibabacloud/codeup/model/ListRepositoryBranchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListRepositoryBranchesResult::ListRepositoryBranchesResult() :
	ServiceResult()
{}

ListRepositoryBranchesResult::ListRepositoryBranchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryBranchesResult::~ListRepositoryBranchesResult()
{}

void ListRepositoryBranchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["BranchName"].isNull())
			resultObject.branchName = valueResultResultItem["BranchName"].asString();
		if(!valueResultResultItem["ProtectedBranch"].isNull())
			resultObject.protectedBranch = valueResultResultItem["ProtectedBranch"].asString() == "true";
		auto commitInfoNode = value["CommitInfo"];
		if(!commitInfoNode["Id"].isNull())
			resultObject.commitInfo.id = commitInfoNode["Id"].asString();
		if(!commitInfoNode["ShortId"].isNull())
			resultObject.commitInfo.shortId = commitInfoNode["ShortId"].asString();
		if(!commitInfoNode["Title"].isNull())
			resultObject.commitInfo.title = commitInfoNode["Title"].asString();
		if(!commitInfoNode["AuthorName"].isNull())
			resultObject.commitInfo.authorName = commitInfoNode["AuthorName"].asString();
		if(!commitInfoNode["AuthorEmail"].isNull())
			resultObject.commitInfo.authorEmail = commitInfoNode["AuthorEmail"].asString();
		if(!commitInfoNode["CreatedAt"].isNull())
			resultObject.commitInfo.createdAt = commitInfoNode["CreatedAt"].asString();
		if(!commitInfoNode["Message"].isNull())
			resultObject.commitInfo.message = commitInfoNode["Message"].asString();
		if(!commitInfoNode["AuthorDate"].isNull())
			resultObject.commitInfo.authorDate = commitInfoNode["AuthorDate"].asString();
		if(!commitInfoNode["CommittedDate"].isNull())
			resultObject.commitInfo.committedDate = commitInfoNode["CommittedDate"].asString();
		if(!commitInfoNode["CommitterEmail"].isNull())
			resultObject.commitInfo.committerEmail = commitInfoNode["CommitterEmail"].asString();
		if(!commitInfoNode["CommitterName"].isNull())
			resultObject.commitInfo.committerName = commitInfoNode["CommitterName"].asString();
			auto allParentIds = commitInfoNode["ParentIds"]["ParentIds"];
			for (auto value : allParentIds)
				resultObject.commitInfo.parentIds.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListRepositoryBranchesResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryBranchesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryBranchesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryBranchesResult::getSuccess()const
{
	return success_;
}

std::vector<ListRepositoryBranchesResult::ResultItem> ListRepositoryBranchesResult::getResult()const
{
	return result_;
}

