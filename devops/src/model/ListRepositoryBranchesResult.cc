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

#include <alibabacloud/devops/model/ListRepositoryBranchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

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
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["protected"].isNull())
			resultObject._protected = valueresultresultItem["protected"].asString();
		auto commitNode = value["commit"];
		if(!commitNode["id"].isNull())
			resultObject.commit.id = commitNode["id"].asString();
		if(!commitNode["shortId"].isNull())
			resultObject.commit.shortId = commitNode["shortId"].asString();
		if(!commitNode["title"].isNull())
			resultObject.commit.title = commitNode["title"].asString();
		if(!commitNode["authorName"].isNull())
			resultObject.commit.authorName = commitNode["authorName"].asString();
		if(!commitNode["authorEmail"].isNull())
			resultObject.commit.authorEmail = commitNode["authorEmail"].asString();
		if(!commitNode["createdAt"].isNull())
			resultObject.commit.createdAt = commitNode["createdAt"].asString();
		if(!commitNode["message"].isNull())
			resultObject.commit.message = commitNode["message"].asString();
		if(!commitNode["authoredDate"].isNull())
			resultObject.commit.authoredDate = commitNode["authoredDate"].asString();
		if(!commitNode["committedDate"].isNull())
			resultObject.commit.committedDate = commitNode["committedDate"].asString();
		if(!commitNode["committerEmail"].isNull())
			resultObject.commit.committerEmail = commitNode["committerEmail"].asString();
		if(!commitNode["committerName"].isNull())
			resultObject.commit.committerName = commitNode["committerName"].asString();
			auto allParentIds = commitNode["parentIds"]["parent_ids"];
			for (auto value : allParentIds)
				resultObject.commit.parentIds.push_back(value.asString());
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

std::vector<ListRepositoryBranchesResult::ResultItem> ListRepositoryBranchesResult::getresult()const
{
	return result_;
}

std::string ListRepositoryBranchesResult::getRequestId()const
{
	return requestId_;
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

