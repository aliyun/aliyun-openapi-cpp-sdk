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

#include <alibabacloud/devops/model/GetBranchInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

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
	auto resultNode = value["result"];
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["protected"].isNull())
		result_._protected = resultNode["protected"].asString();
	auto commitNode = resultNode["commit"];
	if(!commitNode["id"].isNull())
		result_.commit.id = commitNode["id"].asString();
	if(!commitNode["shortId"].isNull())
		result_.commit.shortId = commitNode["shortId"].asString();
	if(!commitNode["title"].isNull())
		result_.commit.title = commitNode["title"].asString();
	if(!commitNode["authorName"].isNull())
		result_.commit.authorName = commitNode["authorName"].asString();
	if(!commitNode["authorEmail"].isNull())
		result_.commit.authorEmail = commitNode["authorEmail"].asString();
	if(!commitNode["createdAt"].isNull())
		result_.commit.createdAt = commitNode["createdAt"].asString();
	if(!commitNode["message"].isNull())
		result_.commit.message = commitNode["message"].asString();
	if(!commitNode["authoredDate"].isNull())
		result_.commit.authoredDate = commitNode["authoredDate"].asString();
	if(!commitNode["committedDate"].isNull())
		result_.commit.committedDate = commitNode["committedDate"].asString();
	if(!commitNode["committerEmail"].isNull())
		result_.commit.committerEmail = commitNode["committerEmail"].asString();
	if(!commitNode["committerName"].isNull())
		result_.commit.committerName = commitNode["committerName"].asString();
	if(!commitNode["commentsCount"].isNull())
		result_.commit.commentsCount = std::stol(commitNode["commentsCount"].asString());
	auto authorNode = commitNode["author"];
	if(!authorNode["id"].isNull())
		result_.commit.author.id = std::stol(authorNode["id"].asString());
	if(!authorNode["name"].isNull())
		result_.commit.author.name = authorNode["name"].asString();
	if(!authorNode["username"].isNull())
		result_.commit.author.username = authorNode["username"].asString();
	if(!authorNode["state"].isNull())
		result_.commit.author.state = authorNode["state"].asString();
	if(!authorNode["avatarUrl"].isNull())
		result_.commit.author.avatarUrl = authorNode["avatarUrl"].asString();
	if(!authorNode["externUid"].isNull())
		result_.commit.author.externUid = authorNode["externUid"].asString();
	if(!authorNode["email"].isNull())
		result_.commit.author.email = authorNode["email"].asString();
	if(!authorNode["tbUserId"].isNull())
		result_.commit.author.tbUserId = authorNode["tbUserId"].asString();
	auto committerNode = commitNode["committer"];
	if(!committerNode["id"].isNull())
		result_.commit.committer.id = std::stol(committerNode["id"].asString());
	if(!committerNode["name"].isNull())
		result_.commit.committer.name = committerNode["name"].asString();
	if(!committerNode["username"].isNull())
		result_.commit.committer.username = committerNode["username"].asString();
	if(!committerNode["state"].isNull())
		result_.commit.committer.state = committerNode["state"].asString();
	if(!committerNode["avatarUrl"].isNull())
		result_.commit.committer.avatarUrl = committerNode["avatarUrl"].asString();
	if(!committerNode["externUid"].isNull())
		result_.commit.committer.externUid = committerNode["externUid"].asString();
	if(!committerNode["email"].isNull())
		result_.commit.committer.email = committerNode["email"].asString();
	if(!committerNode["tbUserId"].isNull())
		result_.commit.committer.tbUserId = committerNode["tbUserId"].asString();
	auto signatureNode = commitNode["signature"];
	if(!signatureNode["gpgKeyId"].isNull())
		result_.commit.signature.gpgKeyId = signatureNode["gpgKeyId"].asString();
	if(!signatureNode["verificationStatus"].isNull())
		result_.commit.signature.verificationStatus = signatureNode["verificationStatus"].asString();
		auto allParentIds = commitNode["parentIds"]["parent_ids"];
		for (auto value : allParentIds)
			result_.commit.parentIds.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetBranchInfoResult::getRequestId()const
{
	return requestId_;
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

