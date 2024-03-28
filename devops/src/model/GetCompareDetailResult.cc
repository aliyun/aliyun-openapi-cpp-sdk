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

#include <alibabacloud/devops/model/GetCompareDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetCompareDetailResult::GetCompareDetailResult() :
	ServiceResult()
{}

GetCompareDetailResult::GetCompareDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCompareDetailResult::~GetCompareDetailResult()
{}

void GetCompareDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	auto allcommitsNode = resultNode["commits"]["commitsItem"];
	for (auto resultNodecommitscommitsItem : allcommitsNode)
	{
		Result::CommitsItem commitsItemObject;
		if(!resultNodecommitscommitsItem["id"].isNull())
			commitsItemObject.id = resultNodecommitscommitsItem["id"].asString();
		if(!resultNodecommitscommitsItem["shortId"].isNull())
			commitsItemObject.shortId = resultNodecommitscommitsItem["shortId"].asString();
		if(!resultNodecommitscommitsItem["title"].isNull())
			commitsItemObject.title = resultNodecommitscommitsItem["title"].asString();
		if(!resultNodecommitscommitsItem["message"].isNull())
			commitsItemObject.message = resultNodecommitscommitsItem["message"].asString();
		if(!resultNodecommitscommitsItem["authorName"].isNull())
			commitsItemObject.authorName = resultNodecommitscommitsItem["authorName"].asString();
		if(!resultNodecommitscommitsItem["authorEmail"].isNull())
			commitsItemObject.authorEmail = resultNodecommitscommitsItem["authorEmail"].asString();
		if(!resultNodecommitscommitsItem["authoredDate"].isNull())
			commitsItemObject.authoredDate = resultNodecommitscommitsItem["authoredDate"].asString();
		if(!resultNodecommitscommitsItem["createdAt"].isNull())
			commitsItemObject.createdAt = resultNodecommitscommitsItem["createdAt"].asString();
		if(!resultNodecommitscommitsItem["committerName"].isNull())
			commitsItemObject.committerName = resultNodecommitscommitsItem["committerName"].asString();
		if(!resultNodecommitscommitsItem["committerEmail"].isNull())
			commitsItemObject.committerEmail = resultNodecommitscommitsItem["committerEmail"].asString();
		if(!resultNodecommitscommitsItem["committedDate"].isNull())
			commitsItemObject.committedDate = resultNodecommitscommitsItem["committedDate"].asString();
		if(!resultNodecommitscommitsItem["commentsCount"].isNull())
			commitsItemObject.commentsCount = std::stol(resultNodecommitscommitsItem["commentsCount"].asString());
		auto authorNode = value["author"];
		if(!authorNode["id"].isNull())
			commitsItemObject.author.id = std::stol(authorNode["id"].asString());
		if(!authorNode["name"].isNull())
			commitsItemObject.author.name = authorNode["name"].asString();
		if(!authorNode["username"].isNull())
			commitsItemObject.author.username = authorNode["username"].asString();
		if(!authorNode["state"].isNull())
			commitsItemObject.author.state = authorNode["state"].asString();
		if(!authorNode["avatarUrl"].isNull())
			commitsItemObject.author.avatarUrl = authorNode["avatarUrl"].asString();
		if(!authorNode["externUid"].isNull())
			commitsItemObject.author.externUid = authorNode["externUid"].asString();
		if(!authorNode["email"].isNull())
			commitsItemObject.author.email = authorNode["email"].asString();
		if(!authorNode["websiteUrl"].isNull())
			commitsItemObject.author.websiteUrl = authorNode["websiteUrl"].asString();
		auto committerNode = value["committer"];
		if(!committerNode["id"].isNull())
			commitsItemObject.committer.id = std::stol(committerNode["id"].asString());
		if(!committerNode["name"].isNull())
			commitsItemObject.committer.name = committerNode["name"].asString();
		if(!committerNode["username"].isNull())
			commitsItemObject.committer.username = committerNode["username"].asString();
		if(!committerNode["state"].isNull())
			commitsItemObject.committer.state = committerNode["state"].asString();
		if(!committerNode["avatarUrl"].isNull())
			commitsItemObject.committer.avatarUrl = committerNode["avatarUrl"].asString();
		if(!committerNode["externUid"].isNull())
			commitsItemObject.committer.externUid = committerNode["externUid"].asString();
		if(!committerNode["email"].isNull())
			commitsItemObject.committer.email = committerNode["email"].asString();
		if(!committerNode["websiteUrl"].isNull())
			commitsItemObject.committer.websiteUrl = committerNode["websiteUrl"].asString();
		auto allParentIds = value["parentIds"]["parentIds"];
		for (auto value : allParentIds)
			commitsItemObject.parentIds.push_back(value.asString());
		result_.commits.push_back(commitsItemObject);
	}
	auto alldiffsNode = resultNode["diffs"]["diffsItem"];
	for (auto resultNodediffsdiffsItem : alldiffsNode)
	{
		Result::DiffsItem diffsItemObject;
		if(!resultNodediffsdiffsItem["diff"].isNull())
			diffsItemObject.diff = resultNodediffsdiffsItem["diff"].asString();
		if(!resultNodediffsdiffsItem["newPath"].isNull())
			diffsItemObject.newPath = resultNodediffsdiffsItem["newPath"].asString();
		if(!resultNodediffsdiffsItem["oldPath"].isNull())
			diffsItemObject.oldPath = resultNodediffsdiffsItem["oldPath"].asString();
		if(!resultNodediffsdiffsItem["aMode"].isNull())
			diffsItemObject.aMode = resultNodediffsdiffsItem["aMode"].asString();
		if(!resultNodediffsdiffsItem["bMode"].isNull())
			diffsItemObject.bMode = resultNodediffsdiffsItem["bMode"].asString();
		if(!resultNodediffsdiffsItem["newFile"].isNull())
			diffsItemObject.newFile = resultNodediffsdiffsItem["newFile"].asString() == "true";
		if(!resultNodediffsdiffsItem["renamedFile"].isNull())
			diffsItemObject.renamedFile = resultNodediffsdiffsItem["renamedFile"].asString() == "true";
		if(!resultNodediffsdiffsItem["deletedFile"].isNull())
			diffsItemObject.deletedFile = resultNodediffsdiffsItem["deletedFile"].asString() == "true";
		if(!resultNodediffsdiffsItem["isBinary"].isNull())
			diffsItemObject.isBinary = resultNodediffsdiffsItem["isBinary"].asString() == "true";
		if(!resultNodediffsdiffsItem["oldId"].isNull())
			diffsItemObject.oldId = resultNodediffsdiffsItem["oldId"].asString();
		if(!resultNodediffsdiffsItem["newId"].isNull())
			diffsItemObject.newId = resultNodediffsdiffsItem["newId"].asString();
		if(!resultNodediffsdiffsItem["isNewLfs"].isNull())
			diffsItemObject.isNewLfs = resultNodediffsdiffsItem["isNewLfs"].asString() == "true";
		if(!resultNodediffsdiffsItem["isOldLfs"].isNull())
			diffsItemObject.isOldLfs = resultNodediffsdiffsItem["isOldLfs"].asString() == "true";
		result_.diffs.push_back(diffsItemObject);
	}
		auto allMessages = resultNode["messages"]["messages"];
		for (auto value : allMessages)
			result_.messages.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetCompareDetailResult::getRequestId()const
{
	return requestId_;
}

std::string GetCompareDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetCompareDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetCompareDetailResult::getSuccess()const
{
	return success_;
}

GetCompareDetailResult::Result GetCompareDetailResult::getResult()const
{
	return result_;
}

