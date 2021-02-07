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

#include <alibabacloud/codeup/model/ListMergeRequestCommentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListMergeRequestCommentsResult::ListMergeRequestCommentsResult() :
	ServiceResult()
{}

ListMergeRequestCommentsResult::ListMergeRequestCommentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMergeRequestCommentsResult::~ListMergeRequestCommentsResult()
{}

void ListMergeRequestCommentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Closed"].isNull())
			resultObject.closed = std::stoi(valueResultResultItem["Closed"].asString());
		if(!valueResultResultItem["CreatedAt"].isNull())
			resultObject.createdAt = valueResultResultItem["CreatedAt"].asString();
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["IsDraft"].isNull())
			resultObject.isDraft = valueResultResultItem["IsDraft"].asString() == "true";
		if(!valueResultResultItem["Line"].isNull())
			resultObject.line = std::stol(valueResultResultItem["Line"].asString());
		if(!valueResultResultItem["Note"].isNull())
			resultObject.note = valueResultResultItem["Note"].asString();
		if(!valueResultResultItem["OutDated"].isNull())
			resultObject.outDated = valueResultResultItem["OutDated"].asString() == "true";
		if(!valueResultResultItem["ParentNoteId"].isNull())
			resultObject.parentNoteId = std::stol(valueResultResultItem["ParentNoteId"].asString());
		if(!valueResultResultItem["Path"].isNull())
			resultObject.path = valueResultResultItem["Path"].asString();
		if(!valueResultResultItem["ProjectId"].isNull())
			resultObject.projectId = std::stol(valueResultResultItem["ProjectId"].asString());
		if(!valueResultResultItem["RangeContext"].isNull())
			resultObject.rangeContext = valueResultResultItem["RangeContext"].asString();
		if(!valueResultResultItem["Side"].isNull())
			resultObject.side = valueResultResultItem["Side"].asString();
		if(!valueResultResultItem["UpdatedAt"].isNull())
			resultObject.updatedAt = valueResultResultItem["UpdatedAt"].asString();
		auto authorNode = value["Author"];
		if(!authorNode["AvatarUrl"].isNull())
			resultObject.author.avatarUrl = authorNode["AvatarUrl"].asString();
		if(!authorNode["Email"].isNull())
			resultObject.author.email = authorNode["Email"].asString();
		if(!authorNode["ExternUserId"].isNull())
			resultObject.author.externUserId = authorNode["ExternUserId"].asString();
		if(!authorNode["Id"].isNull())
			resultObject.author.id = std::stol(authorNode["Id"].asString());
		if(!authorNode["Name"].isNull())
			resultObject.author.name = authorNode["Name"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListMergeRequestCommentsResult::getTotal()const
{
	return total_;
}

std::string ListMergeRequestCommentsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMergeRequestCommentsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMergeRequestCommentsResult::getSuccess()const
{
	return success_;
}

std::vector<ListMergeRequestCommentsResult::ResultItem> ListMergeRequestCommentsResult::getResult()const
{
	return result_;
}

