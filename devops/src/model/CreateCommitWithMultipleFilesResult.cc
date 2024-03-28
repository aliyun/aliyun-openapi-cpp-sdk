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

#include <alibabacloud/devops/model/CreateCommitWithMultipleFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateCommitWithMultipleFilesResult::CreateCommitWithMultipleFilesResult() :
	ServiceResult()
{}

CreateCommitWithMultipleFilesResult::CreateCommitWithMultipleFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCommitWithMultipleFilesResult::~CreateCommitWithMultipleFilesResult()
{}

void CreateCommitWithMultipleFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["shortId"].isNull())
		result_.shortId = resultNode["shortId"].asString();
	if(!resultNode["title"].isNull())
		result_.title = resultNode["title"].asString();
	if(!resultNode["message"].isNull())
		result_.message = resultNode["message"].asString();
	if(!resultNode["authorName"].isNull())
		result_.authorName = resultNode["authorName"].asString();
	if(!resultNode["authorEmail"].isNull())
		result_.authorEmail = resultNode["authorEmail"].asString();
	if(!resultNode["authoredDate"].isNull())
		result_.authoredDate = resultNode["authoredDate"].asString();
	if(!resultNode["committerName"].isNull())
		result_.committerName = resultNode["committerName"].asString();
	if(!resultNode["committerEmail"].isNull())
		result_.committerEmail = resultNode["committerEmail"].asString();
	if(!resultNode["committedDate"].isNull())
		result_.committedDate = resultNode["committedDate"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	auto authorNode = resultNode["author"];
	if(!authorNode["id"].isNull())
		result_.author.id = std::stol(authorNode["id"].asString());
	if(!authorNode["aliyunPk"].isNull())
		result_.author.aliyunPk = authorNode["aliyunPk"].asString();
	if(!authorNode["name"].isNull())
		result_.author.name = authorNode["name"].asString();
	if(!authorNode["username"].isNull())
		result_.author.username = authorNode["username"].asString();
	if(!authorNode["email"].isNull())
		result_.author.email = authorNode["email"].asString();
	if(!authorNode["state"].isNull())
		result_.author.state = authorNode["state"].asString();
	if(!authorNode["avatarUrl"].isNull())
		result_.author.avatarUrl = authorNode["avatarUrl"].asString();
	if(!authorNode["websiteUrl"].isNull())
		result_.author.websiteUrl = authorNode["websiteUrl"].asString();
	auto committerNode = resultNode["committer"];
	if(!committerNode["id"].isNull())
		result_.committer.id = std::stol(committerNode["id"].asString());
	if(!committerNode["aliyunPk"].isNull())
		result_.committer.aliyunPk = committerNode["aliyunPk"].asString();
	if(!committerNode["name"].isNull())
		result_.committer.name = committerNode["name"].asString();
	if(!committerNode["username"].isNull())
		result_.committer.username = committerNode["username"].asString();
	if(!committerNode["email"].isNull())
		result_.committer.email = committerNode["email"].asString();
	if(!committerNode["state"].isNull())
		result_.committer.state = committerNode["state"].asString();
	if(!committerNode["avatarUrl"].isNull())
		result_.committer.avatarUrl = committerNode["avatarUrl"].asString();
	if(!committerNode["websiteUrl"].isNull())
		result_.committer.websiteUrl = committerNode["websiteUrl"].asString();
		auto allParentIds = resultNode["parentIds"]["parent_ids_node"];
		for (auto value : allParentIds)
			result_.parentIds.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();

}

std::string CreateCommitWithMultipleFilesResult::getRequestId()const
{
	return requestId_;
}

std::string CreateCommitWithMultipleFilesResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string CreateCommitWithMultipleFilesResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateCommitWithMultipleFilesResult::getSuccess()const
{
	return success_;
}

CreateCommitWithMultipleFilesResult::Result CreateCommitWithMultipleFilesResult::getResult()const
{
	return result_;
}

