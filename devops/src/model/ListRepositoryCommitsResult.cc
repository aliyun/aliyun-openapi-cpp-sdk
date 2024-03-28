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

#include <alibabacloud/devops/model/ListRepositoryCommitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoryCommitsResult::ListRepositoryCommitsResult() :
	ServiceResult()
{}

ListRepositoryCommitsResult::ListRepositoryCommitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryCommitsResult::~ListRepositoryCommitsResult()
{}

void ListRepositoryCommitsResult::parse(const std::string &payload)
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
			resultObject.id = valueresultresultItem["id"].asString();
		if(!valueresultresultItem["shortId"].isNull())
			resultObject.shortId = valueresultresultItem["shortId"].asString();
		if(!valueresultresultItem["title"].isNull())
			resultObject.title = valueresultresultItem["title"].asString();
		if(!valueresultresultItem["authorName"].isNull())
			resultObject.authorName = valueresultresultItem["authorName"].asString();
		if(!valueresultresultItem["authorEmail"].isNull())
			resultObject.authorEmail = valueresultresultItem["authorEmail"].asString();
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		if(!valueresultresultItem["message"].isNull())
			resultObject.message = valueresultresultItem["message"].asString();
		if(!valueresultresultItem["authoredDate"].isNull())
			resultObject.authoredDate = valueresultresultItem["authoredDate"].asString();
		if(!valueresultresultItem["committedDate"].isNull())
			resultObject.committedDate = valueresultresultItem["committedDate"].asString();
		if(!valueresultresultItem["committerEmail"].isNull())
			resultObject.committerEmail = valueresultresultItem["committerEmail"].asString();
		if(!valueresultresultItem["committerName"].isNull())
			resultObject.committerName = valueresultresultItem["committerName"].asString();
		if(!valueresultresultItem["commentsCount"].isNull())
			resultObject.commentsCount = std::stol(valueresultresultItem["commentsCount"].asString());
		auto authorNode = value["author"];
		if(!authorNode["id"].isNull())
			resultObject.author.id = std::stol(authorNode["id"].asString());
		if(!authorNode["name"].isNull())
			resultObject.author.name = authorNode["name"].asString();
		if(!authorNode["username"].isNull())
			resultObject.author.username = authorNode["username"].asString();
		if(!authorNode["state"].isNull())
			resultObject.author.state = authorNode["state"].asString();
		if(!authorNode["avatarUrl"].isNull())
			resultObject.author.avatarUrl = authorNode["avatarUrl"].asString();
		if(!authorNode["externUid"].isNull())
			resultObject.author.externUid = authorNode["externUid"].asString();
		if(!authorNode["websiteUrl"].isNull())
			resultObject.author.websiteUrl = authorNode["websiteUrl"].asString();
		if(!authorNode["email"].isNull())
			resultObject.author.email = authorNode["email"].asString();
		if(!authorNode["tbUserId"].isNull())
			resultObject.author.tbUserId = authorNode["tbUserId"].asString();
		auto committerNode = value["committer"];
		if(!committerNode["id"].isNull())
			resultObject.committer.id = std::stol(committerNode["id"].asString());
		if(!committerNode["name"].isNull())
			resultObject.committer.name = committerNode["name"].asString();
		if(!committerNode["username"].isNull())
			resultObject.committer.username = committerNode["username"].asString();
		if(!committerNode["state"].isNull())
			resultObject.committer.state = committerNode["state"].asString();
		if(!committerNode["avatarUrl"].isNull())
			resultObject.committer.avatarUrl = committerNode["avatarUrl"].asString();
		if(!committerNode["externUid"].isNull())
			resultObject.committer.externUid = committerNode["externUid"].asString();
		if(!committerNode["websiteUrl"].isNull())
			resultObject.committer.websiteUrl = committerNode["websiteUrl"].asString();
		if(!committerNode["email"].isNull())
			resultObject.committer.email = committerNode["email"].asString();
		if(!committerNode["tbUserId"].isNull())
			resultObject.committer.tbUserId = committerNode["tbUserId"].asString();
		auto signatureNode = value["signature"];
		if(!signatureNode["gpgKeyId"].isNull())
			resultObject.signature.gpgKeyId = signatureNode["gpgKeyId"].asString();
		if(!signatureNode["verificationStatus"].isNull())
			resultObject.signature.verificationStatus = signatureNode["verificationStatus"].asString();
		auto allParentIds = value["parentIds"]["parent_ids"];
		for (auto value : allParentIds)
			resultObject.parentIds.push_back(value.asString());
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
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListRepositoryCommitsResult::ResultItem> ListRepositoryCommitsResult::getresult()const
{
	return result_;
}

std::string ListRepositoryCommitsResult::getRequestId()const
{
	return requestId_;
}

long ListRepositoryCommitsResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryCommitsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryCommitsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryCommitsResult::getSuccess()const
{
	return success_;
}

