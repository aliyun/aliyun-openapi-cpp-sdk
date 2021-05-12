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

#include <alibabacloud/codeup/model/ListRepositoryCommitDiffResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

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
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["AMode"].isNull())
			resultObject.aMode = valueResultResultItem["AMode"].asString();
		if(!valueResultResultItem["BMode"].isNull())
			resultObject.bMode = valueResultResultItem["BMode"].asString();
		if(!valueResultResultItem["DeletedFile"].isNull())
			resultObject.deletedFile = valueResultResultItem["DeletedFile"].asString() == "true";
		if(!valueResultResultItem["Diff"].isNull())
			resultObject.diff = valueResultResultItem["Diff"].asString();
		if(!valueResultResultItem["IsBinary"].isNull())
			resultObject.isBinary = valueResultResultItem["IsBinary"].asString() == "true";
		if(!valueResultResultItem["IsNewLfs"].isNull())
			resultObject.isNewLfs = valueResultResultItem["IsNewLfs"].asString() == "true";
		if(!valueResultResultItem["IsOldLfs"].isNull())
			resultObject.isOldLfs = valueResultResultItem["IsOldLfs"].asString() == "true";
		if(!valueResultResultItem["NewFile"].isNull())
			resultObject.newFile = valueResultResultItem["NewFile"].asString() == "true";
		if(!valueResultResultItem["NewId"].isNull())
			resultObject.newId = valueResultResultItem["NewId"].asString();
		if(!valueResultResultItem["NewPath"].isNull())
			resultObject.newPath = valueResultResultItem["NewPath"].asString();
		if(!valueResultResultItem["OldId"].isNull())
			resultObject.oldId = valueResultResultItem["OldId"].asString();
		if(!valueResultResultItem["OldPath"].isNull())
			resultObject.oldPath = valueResultResultItem["OldPath"].asString();
		if(!valueResultResultItem["RenamedFile"].isNull())
			resultObject.renamedFile = valueResultResultItem["RenamedFile"].asString() == "true";
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

std::vector<ListRepositoryCommitDiffResult::ResultItem> ListRepositoryCommitDiffResult::getResult()const
{
	return result_;
}

