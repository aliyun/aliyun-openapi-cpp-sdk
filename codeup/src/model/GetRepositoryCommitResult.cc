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

#include <alibabacloud/codeup/model/GetRepositoryCommitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetRepositoryCommitResult::GetRepositoryCommitResult() :
	ServiceResult()
{}

GetRepositoryCommitResult::GetRepositoryCommitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRepositoryCommitResult::~GetRepositoryCommitResult()
{}

void GetRepositoryCommitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AuthorDate"].isNull())
		result_.authorDate = resultNode["AuthorDate"].asString();
	if(!resultNode["AuthorEmail"].isNull())
		result_.authorEmail = resultNode["AuthorEmail"].asString();
	if(!resultNode["AuthorName"].isNull())
		result_.authorName = resultNode["AuthorName"].asString();
	if(!resultNode["CommittedDate"].isNull())
		result_.committedDate = resultNode["CommittedDate"].asString();
	if(!resultNode["CommitterEmail"].isNull())
		result_.committerEmail = resultNode["CommitterEmail"].asString();
	if(!resultNode["CommitterName"].isNull())
		result_.committerName = resultNode["CommitterName"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["Id"].isNull())
		result_.id = resultNode["Id"].asString();
	if(!resultNode["Message"].isNull())
		result_.message = resultNode["Message"].asString();
	if(!resultNode["ShortId"].isNull())
		result_.shortId = resultNode["ShortId"].asString();
	if(!resultNode["Title"].isNull())
		result_.title = resultNode["Title"].asString();
	auto signatureNode = resultNode["Signature"];
	if(!signatureNode["GpgKeyId"].isNull())
		result_.signature.gpgKeyId = signatureNode["GpgKeyId"].asString();
	if(!signatureNode["VerificationStatus"].isNull())
		result_.signature.verificationStatus = signatureNode["VerificationStatus"].asString();
		auto allParentIds = resultNode["ParentIds"]["ParentIds"];
		for (auto value : allParentIds)
			result_.parentIds.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRepositoryCommitResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetRepositoryCommitResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetRepositoryCommitResult::getSuccess()const
{
	return success_;
}

GetRepositoryCommitResult::Result GetRepositoryCommitResult::getResult()const
{
	return result_;
}

