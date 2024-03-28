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

#include <alibabacloud/devops/model/ListRepositoryCommitDiffResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoryCommitDiffResult::ListRepositoryCommitDiffResult() :
	ServiceResult()
{}

ListRepositoryCommitDiffResult::ListRepositoryCommitDiffResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryCommitDiffResult::~ListRepositoryCommitDiffResult()
{}

void ListRepositoryCommitDiffResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["oldId"].isNull())
			resultObject.oldId = valueresultResultItem["oldId"].asString();
		if(!valueresultResultItem["newId"].isNull())
			resultObject.newId = valueresultResultItem["newId"].asString();
		if(!valueresultResultItem["isNewLfs"].isNull())
			resultObject.isNewLfs = valueresultResultItem["isNewLfs"].asString() == "true";
		if(!valueresultResultItem["isOldLfs"].isNull())
			resultObject.isOldLfs = valueresultResultItem["isOldLfs"].asString() == "true";
		if(!valueresultResultItem["diff"].isNull())
			resultObject.diff = valueresultResultItem["diff"].asString();
		if(!valueresultResultItem["newPath"].isNull())
			resultObject.newPath = valueresultResultItem["newPath"].asString();
		if(!valueresultResultItem["oldPath"].isNull())
			resultObject.oldPath = valueresultResultItem["oldPath"].asString();
		if(!valueresultResultItem["aMode"].isNull())
			resultObject.aMode = valueresultResultItem["aMode"].asString();
		if(!valueresultResultItem["bMode"].isNull())
			resultObject.bMode = valueresultResultItem["bMode"].asString();
		if(!valueresultResultItem["newFile"].isNull())
			resultObject.newFile = valueresultResultItem["newFile"].asString() == "true";
		if(!valueresultResultItem["renamedFile"].isNull())
			resultObject.renamedFile = valueresultResultItem["renamedFile"].asString() == "true";
		if(!valueresultResultItem["deletedFile"].isNull())
			resultObject.deletedFile = valueresultResultItem["deletedFile"].asString() == "true";
		if(!valueresultResultItem["isBinary"].isNull())
			resultObject.isBinary = valueresultResultItem["isBinary"].asString() == "true";
		result_.push_back(resultObject);
	}
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListRepositoryCommitDiffResult::ResultItem> ListRepositoryCommitDiffResult::getresult()const
{
	return result_;
}

std::string ListRepositoryCommitDiffResult::getRequestId()const
{
	return requestId_;
}

std::string ListRepositoryCommitDiffResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryCommitDiffResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryCommitDiffResult::getSuccess()const
{
	return success_;
}

