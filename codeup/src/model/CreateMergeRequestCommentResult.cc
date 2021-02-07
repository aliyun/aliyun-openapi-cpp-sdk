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

#include <alibabacloud/codeup/model/CreateMergeRequestCommentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

CreateMergeRequestCommentResult::CreateMergeRequestCommentResult() :
	ServiceResult()
{}

CreateMergeRequestCommentResult::CreateMergeRequestCommentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMergeRequestCommentResult::~CreateMergeRequestCommentResult()
{}

void CreateMergeRequestCommentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["Note"].isNull())
		result_.note = resultNode["Note"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["UpdatedAt"].isNull())
		result_.updatedAt = resultNode["UpdatedAt"].asString();
	if(!resultNode["ProjectId"].isNull())
		result_.projectId = std::stol(resultNode["ProjectId"].asString());
	if(!resultNode["IsDraft"].isNull())
		result_.isDraft = resultNode["IsDraft"].asString() == "true";
	if(!resultNode["ParentNoteId"].isNull())
		result_.parentNoteId = std::stol(resultNode["ParentNoteId"].asString());
	if(!resultNode["Line"].isNull())
		result_.line = std::stol(resultNode["Line"].asString());
	if(!resultNode["Side"].isNull())
		result_.side = resultNode["Side"].asString();
	if(!resultNode["Path"].isNull())
		result_.path = resultNode["Path"].asString();
	if(!resultNode["RangeContext"].isNull())
		result_.rangeContext = resultNode["RangeContext"].asString();
	if(!resultNode["OutDated"].isNull())
		result_.outDated = resultNode["OutDated"].asString() == "true";
	if(!resultNode["Closed"].isNull())
		result_.closed = std::stoi(resultNode["Closed"].asString());
	auto authorNode = resultNode["Author"];
	if(!authorNode["Id"].isNull())
		result_.author.id = std::stol(authorNode["Id"].asString());
	if(!authorNode["AvatarUrl"].isNull())
		result_.author.avatarUrl = authorNode["AvatarUrl"].asString();
	if(!authorNode["ExternUserId"].isNull())
		result_.author.externUserId = authorNode["ExternUserId"].asString();
	if(!authorNode["Name"].isNull())
		result_.author.name = authorNode["Name"].asString();
	if(!authorNode["Email"].isNull())
		result_.author.email = authorNode["Email"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateMergeRequestCommentResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateMergeRequestCommentResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateMergeRequestCommentResult::getSuccess()const
{
	return success_;
}

CreateMergeRequestCommentResult::Result CreateMergeRequestCommentResult::getResult()const
{
	return result_;
}

