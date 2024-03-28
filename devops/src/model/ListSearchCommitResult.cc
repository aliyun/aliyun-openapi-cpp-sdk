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

#include <alibabacloud/devops/model/ListSearchCommitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListSearchCommitResult::ListSearchCommitResult() :
	ServiceResult()
{}

ListSearchCommitResult::ListSearchCommitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSearchCommitResult::~ListSearchCommitResult()
{}

void ListSearchCommitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["docId"].isNull())
			resultObject.docId = valueresultresultItem["docId"].asString();
		auto highlightTextMapNode = value["highlightTextMap"];
		if(!highlightTextMapNode["commitId"].isNull())
			resultObject.highlightTextMap.commitId = highlightTextMapNode["commitId"].asString();
		if(!highlightTextMapNode["title"].isNull())
			resultObject.highlightTextMap.title = highlightTextMapNode["title"].asString();
		if(!highlightTextMapNode["commitMessage"].isNull())
			resultObject.highlightTextMap.commitMessage = highlightTextMapNode["commitMessage"].asString();
		if(!highlightTextMapNode["organizationId"].isNull())
			resultObject.highlightTextMap.organizationId = highlightTextMapNode["organizationId"].asString();
		auto sourceNode = value["source"];
		if(!sourceNode["commitId"].isNull())
			resultObject.source.commitId = sourceNode["commitId"].asString();
		if(!sourceNode["title"].isNull())
			resultObject.source.title = sourceNode["title"].asString();
		if(!sourceNode["commitMessage"].isNull())
			resultObject.source.commitMessage = sourceNode["commitMessage"].asString();
		if(!sourceNode["authorTime"].isNull())
			resultObject.source.authorTime = sourceNode["authorTime"].asString();
		if(!sourceNode["repoPath"].isNull())
			resultObject.source.repoPath = sourceNode["repoPath"].asString();
		if(!sourceNode["organizationId"].isNull())
			resultObject.source.organizationId = sourceNode["organizationId"].asString();
		auto authorNode = sourceNode["author"];
		if(!authorNode["name"].isNull())
			resultObject.source.author.name = authorNode["name"].asString();
		if(!authorNode["email"].isNull())
			resultObject.source.author.email = authorNode["email"].asString();
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

std::vector<ListSearchCommitResult::ResultItem> ListSearchCommitResult::getresult()const
{
	return result_;
}

std::string ListSearchCommitResult::getRequestId()const
{
	return requestId_;
}

long ListSearchCommitResult::getTotal()const
{
	return total_;
}

std::string ListSearchCommitResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSearchCommitResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListSearchCommitResult::getSuccess()const
{
	return success_;
}

