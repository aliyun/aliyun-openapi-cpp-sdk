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

#include <alibabacloud/codeup/model/GetBranchInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetBranchInfoResult::GetBranchInfoResult() :
	ServiceResult()
{}

GetBranchInfoResult::GetBranchInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBranchInfoResult::~GetBranchInfoResult()
{}

void GetBranchInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["BranchName"].isNull())
		result_.branchName = resultNode["BranchName"].asString();
	if(!resultNode["ProtectedBranch"].isNull())
		result_.protectedBranch = resultNode["ProtectedBranch"].asString() == "true";
	auto commitInfoNode = resultNode["CommitInfo"];
	if(!commitInfoNode["Id"].isNull())
		result_.commitInfo.id = commitInfoNode["Id"].asString();
	if(!commitInfoNode["ShortId"].isNull())
		result_.commitInfo.shortId = commitInfoNode["ShortId"].asString();
	if(!commitInfoNode["Title"].isNull())
		result_.commitInfo.title = commitInfoNode["Title"].asString();
	if(!commitInfoNode["AuthorName"].isNull())
		result_.commitInfo.authorName = commitInfoNode["AuthorName"].asString();
	if(!commitInfoNode["AuthorEmail"].isNull())
		result_.commitInfo.authorEmail = commitInfoNode["AuthorEmail"].asString();
	if(!commitInfoNode["CreatedAt"].isNull())
		result_.commitInfo.createdAt = commitInfoNode["CreatedAt"].asString();
	if(!commitInfoNode["Message"].isNull())
		result_.commitInfo.message = commitInfoNode["Message"].asString();
	if(!commitInfoNode["AuthorDate"].isNull())
		result_.commitInfo.authorDate = commitInfoNode["AuthorDate"].asString();
	if(!commitInfoNode["CommittedDate"].isNull())
		result_.commitInfo.committedDate = commitInfoNode["CommittedDate"].asString();
	if(!commitInfoNode["CommitterEmail"].isNull())
		result_.commitInfo.committerEmail = commitInfoNode["CommitterEmail"].asString();
	if(!commitInfoNode["CommitterName"].isNull())
		result_.commitInfo.committerName = commitInfoNode["CommitterName"].asString();
		auto allParentIds = commitInfoNode["ParentIds"]["ParentIds"];
		for (auto value : allParentIds)
			result_.commitInfo.parentIds.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string GetBranchInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetBranchInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetBranchInfoResult::getSuccess()const
{
	return success_;
}

GetBranchInfoResult::Result GetBranchInfoResult::getResult()const
{
	return result_;
}

