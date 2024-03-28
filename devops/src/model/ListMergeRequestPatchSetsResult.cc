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

#include <alibabacloud/devops/model/ListMergeRequestPatchSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListMergeRequestPatchSetsResult::ListMergeRequestPatchSetsResult() :
	ServiceResult()
{}

ListMergeRequestPatchSetsResult::ListMergeRequestPatchSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMergeRequestPatchSetsResult::~ListMergeRequestPatchSetsResult()
{}

void ListMergeRequestPatchSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["patchSetNo"].isNull())
			resultObject.patchSetNo = std::stol(valueresultresultItem["patchSetNo"].asString());
		if(!valueresultresultItem["patchSetBizId"].isNull())
			resultObject.patchSetBizId = valueresultresultItem["patchSetBizId"].asString();
		if(!valueresultresultItem["patchSetName"].isNull())
			resultObject.patchSetName = valueresultresultItem["patchSetName"].asString();
		if(!valueresultresultItem["commitId"].isNull())
			resultObject.commitId = valueresultresultItem["commitId"].asString();
		if(!valueresultresultItem["shortCommitId"].isNull())
			resultObject.shortCommitId = valueresultresultItem["shortCommitId"].asString();
		if(!valueresultresultItem["relatedMergeItemType"].isNull())
			resultObject.relatedMergeItemType = valueresultresultItem["relatedMergeItemType"].asString();
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::vector<ListMergeRequestPatchSetsResult::ResultItem> ListMergeRequestPatchSetsResult::getresult()const
{
	return result_;
}

std::string ListMergeRequestPatchSetsResult::getRequestId()const
{
	return requestId_;
}

std::string ListMergeRequestPatchSetsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMergeRequestPatchSetsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMergeRequestPatchSetsResult::getSuccess()const
{
	return success_;
}

