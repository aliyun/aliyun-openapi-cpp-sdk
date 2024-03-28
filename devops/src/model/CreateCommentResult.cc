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

#include <alibabacloud/devops/model/CreateCommentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateCommentResult::CreateCommentResult() :
	ServiceResult()
{}

CreateCommentResult::CreateCommentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCommentResult::~CreateCommentResult()
{}

void CreateCommentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["commentBizId"].isNull())
		result_.commentBizId = resultNode["commentBizId"].asString();
	if(!resultNode["commentType"].isNull())
		result_.commentType = resultNode["commentType"].asString();
	if(!resultNode["state"].isNull())
		result_.state = resultNode["state"].asString();
	if(!resultNode["resolved"].isNull())
		result_.resolved = resultNode["resolved"].asString() == "true";
	if(!resultNode["deleted"].isNull())
		result_.deleted = resultNode["deleted"].asString() == "true";
	if(!resultNode["commentTime"].isNull())
		result_.commentTime = resultNode["commentTime"].asString();
	if(!resultNode["lastEditTime"].isNull())
		result_.lastEditTime = resultNode["lastEditTime"].asString();
	if(!resultNode["content"].isNull())
		result_.content = resultNode["content"].asString();
	if(!resultNode["lineNumber"].isNull())
		result_.lineNumber = resultNode["lineNumber"].asString();
	if(!resultNode["filePath"].isNull())
		result_.filePath = resultNode["filePath"].asString();
	if(!resultNode["parentCommentBizId"].isNull())
		result_.parentCommentBizId = resultNode["parentCommentBizId"].asString();
	if(!resultNode["rootCommentBizId"].isNull())
		result_.rootCommentBizId = resultNode["rootCommentBizId"].asString();
	auto authorNode = resultNode["author"];
	if(!authorNode["aliyunPk"].isNull())
		result_.author.aliyunPk = authorNode["aliyunPk"].asString();
	if(!authorNode["name"].isNull())
		result_.author.name = authorNode["name"].asString();
	if(!authorNode["username"].isNull())
		result_.author.username = authorNode["username"].asString();
	if(!authorNode["state"].isNull())
		result_.author.state = authorNode["state"].asString();
	if(!authorNode["avatarUrl"].isNull())
		result_.author.avatarUrl = authorNode["avatarUrl"].asString();
	if(!authorNode["email"].isNull())
		result_.author.email = authorNode["email"].asString();
	if(!authorNode["id"].isNull())
		result_.author.id = std::stol(authorNode["id"].asString());
	auto relatedPatchSetNode = resultNode["relatedPatchSet"];
	if(!relatedPatchSetNode["patchSetNo"].isNull())
		result_.relatedPatchSet.patchSetNo = relatedPatchSetNode["patchSetNo"].asString();
	if(!relatedPatchSetNode["patchSetBizId"].isNull())
		result_.relatedPatchSet.patchSetBizId = relatedPatchSetNode["patchSetBizId"].asString();
	if(!relatedPatchSetNode["patchSetName"].isNull())
		result_.relatedPatchSet.patchSetName = relatedPatchSetNode["patchSetName"].asString();
	if(!relatedPatchSetNode["commitId"].isNull())
		result_.relatedPatchSet.commitId = relatedPatchSetNode["commitId"].asString();
	if(!relatedPatchSetNode["shortId"].isNull())
		result_.relatedPatchSet.shortId = relatedPatchSetNode["shortId"].asString();
	if(!relatedPatchSetNode["relatedMergeItemType"].isNull())
		result_.relatedPatchSet.relatedMergeItemType = relatedPatchSetNode["relatedMergeItemType"].asString();
	if(!relatedPatchSetNode["createdAt"].isNull())
		result_.relatedPatchSet.createdAt = relatedPatchSetNode["createdAt"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::string CreateCommentResult::getRequestId()const
{
	return requestId_;
}

std::string CreateCommentResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateCommentResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateCommentResult::getSuccess()const
{
	return success_;
}

CreateCommentResult::Result CreateCommentResult::getResult()const
{
	return result_;
}

