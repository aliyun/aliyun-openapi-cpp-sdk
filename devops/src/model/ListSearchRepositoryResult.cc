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

#include <alibabacloud/devops/model/ListSearchRepositoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListSearchRepositoryResult::ListSearchRepositoryResult() :
	ServiceResult()
{}

ListSearchRepositoryResult::ListSearchRepositoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSearchRepositoryResult::~ListSearchRepositoryResult()
{}

void ListSearchRepositoryResult::parse(const std::string &payload)
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
		if(!highlightTextMapNode["organizationId"].isNull())
			resultObject.highlightTextMap.organizationId = highlightTextMapNode["organizationId"].asString();
		if(!highlightTextMapNode["creatorUserId"].isNull())
			resultObject.highlightTextMap.creatorUserId = highlightTextMapNode["creatorUserId"].asString();
		if(!highlightTextMapNode["repoPath"].isNull())
			resultObject.highlightTextMap.repoPath = highlightTextMapNode["repoPath"].asString();
		if(!highlightTextMapNode["repoNameWithNamespace"].isNull())
			resultObject.highlightTextMap.repoNameWithNamespace = highlightTextMapNode["repoNameWithNamespace"].asString();
		if(!highlightTextMapNode["readMe"].isNull())
			resultObject.highlightTextMap.readMe = highlightTextMapNode["readMe"].asString();
		if(!highlightTextMapNode["description"].isNull())
			resultObject.highlightTextMap.description = highlightTextMapNode["description"].asString();
		auto sourceNode = value["source"];
		if(!sourceNode["repoName"].isNull())
			resultObject.source.repoName = sourceNode["repoName"].asString();
		if(!sourceNode["repoPath"].isNull())
			resultObject.source.repoPath = sourceNode["repoPath"].asString();
		if(!sourceNode["description"].isNull())
			resultObject.source.description = sourceNode["description"].asString();
		if(!sourceNode["visibilityLevel"].isNull())
			resultObject.source.visibilityLevel = std::stoi(sourceNode["visibilityLevel"].asString());
		if(!sourceNode["createTime"].isNull())
			resultObject.source.createTime = sourceNode["createTime"].asString();
		if(!sourceNode["lastActivityTime"].isNull())
			resultObject.source.lastActivityTime = sourceNode["lastActivityTime"].asString();
		if(!sourceNode["readMe"].isNull())
			resultObject.source.readMe = sourceNode["readMe"].asString();
		if(!sourceNode["organizationId"].isNull())
			resultObject.source.organizationId = sourceNode["organizationId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListSearchRepositoryResult::ResultItem> ListSearchRepositoryResult::getresult()const
{
	return result_;
}

std::string ListSearchRepositoryResult::getRequestId()const
{
	return requestId_;
}

long ListSearchRepositoryResult::getTotal()const
{
	return total_;
}

std::string ListSearchRepositoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSearchRepositoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListSearchRepositoryResult::getSuccess()const
{
	return success_;
}

