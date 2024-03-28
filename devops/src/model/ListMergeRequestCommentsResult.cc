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

#include <alibabacloud/devops/model/ListMergeRequestCommentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

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
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["commentBizId"].isNull())
			resultObject.commentBizId = valueresultresultItem["commentBizId"].asString();
		if(!valueresultresultItem["commentType"].isNull())
			resultObject.commentType = valueresultresultItem["commentType"].asString();
		if(!valueresultresultItem["state"].isNull())
			resultObject.state = valueresultresultItem["state"].asString();
		if(!valueresultresultItem["resolved"].isNull())
			resultObject.resolved = valueresultresultItem["resolved"].asString() == "true";
		if(!valueresultresultItem["deleted"].isNull())
			resultObject.deleted = valueresultresultItem["deleted"].asString() == "true";
		if(!valueresultresultItem["commentTime"].isNull())
			resultObject.commentTime = valueresultresultItem["commentTime"].asString();
		if(!valueresultresultItem["lastEditTime"].isNull())
			resultObject.lastEditTime = valueresultresultItem["lastEditTime"].asString();
		if(!valueresultresultItem["content"].isNull())
			resultObject.content = valueresultresultItem["content"].asString();
		if(!valueresultresultItem["lineNumber"].isNull())
			resultObject.lineNumber = valueresultresultItem["lineNumber"].asString();
		if(!valueresultresultItem["filePath"].isNull())
			resultObject.filePath = valueresultresultItem["filePath"].asString();
		if(!valueresultresultItem["parentCommentBizId"].isNull())
			resultObject.parentCommentBizId = valueresultresultItem["parentCommentBizId"].asString();
		if(!valueresultresultItem["rootCommentBizId"].isNull())
			resultObject.rootCommentBizId = valueresultresultItem["rootCommentBizId"].asString();
		auto allchildCommentsNode = valueresultresultItem["childComments"]["child_comments_list"];
		for (auto valueresultresultItemchildCommentschild_comments_list : allchildCommentsNode)
		{
			ResultItem::Child_comments_list childCommentsObject;
			if(!valueresultresultItemchildCommentschild_comments_list["commentBizId"].isNull())
				childCommentsObject.commentBizId = valueresultresultItemchildCommentschild_comments_list["commentBizId"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["commentType"].isNull())
				childCommentsObject.commentType = valueresultresultItemchildCommentschild_comments_list["commentType"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["state"].isNull())
				childCommentsObject.state = valueresultresultItemchildCommentschild_comments_list["state"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["resolved"].isNull())
				childCommentsObject.resolved = valueresultresultItemchildCommentschild_comments_list["resolved"].asString() == "true";
			if(!valueresultresultItemchildCommentschild_comments_list["deleted"].isNull())
				childCommentsObject.deleted = valueresultresultItemchildCommentschild_comments_list["deleted"].asString() == "true";
			if(!valueresultresultItemchildCommentschild_comments_list["commentTime"].isNull())
				childCommentsObject.commentTime = valueresultresultItemchildCommentschild_comments_list["commentTime"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["lastEditTime"].isNull())
				childCommentsObject.lastEditTime = valueresultresultItemchildCommentschild_comments_list["lastEditTime"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["content"].isNull())
				childCommentsObject.content = valueresultresultItemchildCommentschild_comments_list["content"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["lineNumber"].isNull())
				childCommentsObject.lineNumber = valueresultresultItemchildCommentschild_comments_list["lineNumber"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["filePath"].isNull())
				childCommentsObject.filePath = valueresultresultItemchildCommentschild_comments_list["filePath"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["parentCommentBizId"].isNull())
				childCommentsObject.parentCommentBizId = valueresultresultItemchildCommentschild_comments_list["parentCommentBizId"].asString();
			if(!valueresultresultItemchildCommentschild_comments_list["rootCommentBizId"].isNull())
				childCommentsObject.rootCommentBizId = valueresultresultItemchildCommentschild_comments_list["rootCommentBizId"].asString();
			auto allfinalChildCommentsNode = valueresultresultItemchildCommentschild_comments_list["finalChildComments"]["child_comments_list_child"];
			for (auto valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child : allfinalChildCommentsNode)
			{
				ResultItem::Child_comments_list::Child_comments_list_child finalChildCommentsObject;
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["commentBizId"].isNull())
					finalChildCommentsObject.commentBizId = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["commentBizId"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["commentType"].isNull())
					finalChildCommentsObject.commentType = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["commentType"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["state"].isNull())
					finalChildCommentsObject.state = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["state"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["resolved"].isNull())
					finalChildCommentsObject.resolved = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["resolved"].asString() == "true";
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["deleted"].isNull())
					finalChildCommentsObject.deleted = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["deleted"].asString() == "true";
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["commentTime"].isNull())
					finalChildCommentsObject.commentTime = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["commentTime"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["lastEditTime"].isNull())
					finalChildCommentsObject.lastEditTime = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["lastEditTime"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["content"].isNull())
					finalChildCommentsObject.content = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["content"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["lineNumber"].isNull())
					finalChildCommentsObject.lineNumber = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["lineNumber"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["filePath"].isNull())
					finalChildCommentsObject.filePath = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["filePath"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["parentCommentBizId"].isNull())
					finalChildCommentsObject.parentCommentBizId = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["parentCommentBizId"].asString();
				if(!valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["rootCommentBizId"].isNull())
					finalChildCommentsObject.rootCommentBizId = valueresultresultItemchildCommentschild_comments_listfinalChildCommentschild_comments_list_child["rootCommentBizId"].asString();
				auto author3Node = value["author"];
				if(!author3Node["aliyunPk"].isNull())
					finalChildCommentsObject.author3.aliyunPk = author3Node["aliyunPk"].asString();
				if(!author3Node["name"].isNull())
					finalChildCommentsObject.author3.name = author3Node["name"].asString();
				if(!author3Node["username"].isNull())
					finalChildCommentsObject.author3.username = author3Node["username"].asString();
				if(!author3Node["state"].isNull())
					finalChildCommentsObject.author3.state = author3Node["state"].asString();
				if(!author3Node["avatarUrl"].isNull())
					finalChildCommentsObject.author3.avatarUrl = author3Node["avatarUrl"].asString();
				if(!author3Node["email"].isNull())
					finalChildCommentsObject.author3.email = author3Node["email"].asString();
				if(!author3Node["id"].isNull())
					finalChildCommentsObject.author3.id = std::stol(author3Node["id"].asString());
				auto relatedPatchSet4Node = value["relatedPatchSet"];
				if(!relatedPatchSet4Node["patchSetNo"].isNull())
					finalChildCommentsObject.relatedPatchSet4.patchSetNo = relatedPatchSet4Node["patchSetNo"].asString();
				if(!relatedPatchSet4Node["patchSetBizId"].isNull())
					finalChildCommentsObject.relatedPatchSet4.patchSetBizId = relatedPatchSet4Node["patchSetBizId"].asString();
				if(!relatedPatchSet4Node["patchSetName"].isNull())
					finalChildCommentsObject.relatedPatchSet4.patchSetName = relatedPatchSet4Node["patchSetName"].asString();
				if(!relatedPatchSet4Node["commitId"].isNull())
					finalChildCommentsObject.relatedPatchSet4.commitId = relatedPatchSet4Node["commitId"].asString();
				if(!relatedPatchSet4Node["shortId"].isNull())
					finalChildCommentsObject.relatedPatchSet4.shortId = relatedPatchSet4Node["shortId"].asString();
				if(!relatedPatchSet4Node["relatedMergeItemType"].isNull())
					finalChildCommentsObject.relatedPatchSet4.relatedMergeItemType = relatedPatchSet4Node["relatedMergeItemType"].asString();
				if(!relatedPatchSet4Node["createdAt"].isNull())
					finalChildCommentsObject.relatedPatchSet4.createdAt = relatedPatchSet4Node["createdAt"].asString();
				childCommentsObject.finalChildComments.push_back(finalChildCommentsObject);
			}
			auto author1Node = value["author"];
			if(!author1Node["aliyunPk"].isNull())
				childCommentsObject.author1.aliyunPk = author1Node["aliyunPk"].asString();
			if(!author1Node["name"].isNull())
				childCommentsObject.author1.name = author1Node["name"].asString();
			if(!author1Node["username"].isNull())
				childCommentsObject.author1.username = author1Node["username"].asString();
			if(!author1Node["state"].isNull())
				childCommentsObject.author1.state = author1Node["state"].asString();
			if(!author1Node["avatarUrl"].isNull())
				childCommentsObject.author1.avatarUrl = author1Node["avatarUrl"].asString();
			if(!author1Node["email"].isNull())
				childCommentsObject.author1.email = author1Node["email"].asString();
			if(!author1Node["id"].isNull())
				childCommentsObject.author1.id = std::stol(author1Node["id"].asString());
			auto relatedPatchSet2Node = value["relatedPatchSet"];
			if(!relatedPatchSet2Node["patchSetNo"].isNull())
				childCommentsObject.relatedPatchSet2.patchSetNo = relatedPatchSet2Node["patchSetNo"].asString();
			if(!relatedPatchSet2Node["patchSetBizId"].isNull())
				childCommentsObject.relatedPatchSet2.patchSetBizId = relatedPatchSet2Node["patchSetBizId"].asString();
			if(!relatedPatchSet2Node["patchSetName"].isNull())
				childCommentsObject.relatedPatchSet2.patchSetName = relatedPatchSet2Node["patchSetName"].asString();
			if(!relatedPatchSet2Node["commitId"].isNull())
				childCommentsObject.relatedPatchSet2.commitId = relatedPatchSet2Node["commitId"].asString();
			if(!relatedPatchSet2Node["shortId"].isNull())
				childCommentsObject.relatedPatchSet2.shortId = relatedPatchSet2Node["shortId"].asString();
			if(!relatedPatchSet2Node["relatedMergeItemType"].isNull())
				childCommentsObject.relatedPatchSet2.relatedMergeItemType = relatedPatchSet2Node["relatedMergeItemType"].asString();
			if(!relatedPatchSet2Node["createdAt"].isNull())
				childCommentsObject.relatedPatchSet2.createdAt = relatedPatchSet2Node["createdAt"].asString();
			resultObject.childComments.push_back(childCommentsObject);
		}
		auto authorNode = value["author"];
		if(!authorNode["aliyunPk"].isNull())
			resultObject.author.aliyunPk = authorNode["aliyunPk"].asString();
		if(!authorNode["name"].isNull())
			resultObject.author.name = authorNode["name"].asString();
		if(!authorNode["username"].isNull())
			resultObject.author.username = authorNode["username"].asString();
		if(!authorNode["state"].isNull())
			resultObject.author.state = authorNode["state"].asString();
		if(!authorNode["avatarUrl"].isNull())
			resultObject.author.avatarUrl = authorNode["avatarUrl"].asString();
		if(!authorNode["email"].isNull())
			resultObject.author.email = authorNode["email"].asString();
		if(!authorNode["id"].isNull())
			resultObject.author.id = std::stol(authorNode["id"].asString());
		auto relatedPatchSetNode = value["relatedPatchSet"];
		if(!relatedPatchSetNode["patchSetNo"].isNull())
			resultObject.relatedPatchSet.patchSetNo = relatedPatchSetNode["patchSetNo"].asString();
		if(!relatedPatchSetNode["patchSetBizId"].isNull())
			resultObject.relatedPatchSet.patchSetBizId = relatedPatchSetNode["patchSetBizId"].asString();
		if(!relatedPatchSetNode["patchSetName"].isNull())
			resultObject.relatedPatchSet.patchSetName = relatedPatchSetNode["patchSetName"].asString();
		if(!relatedPatchSetNode["commitId"].isNull())
			resultObject.relatedPatchSet.commitId = relatedPatchSetNode["commitId"].asString();
		if(!relatedPatchSetNode["shortId"].isNull())
			resultObject.relatedPatchSet.shortId = relatedPatchSetNode["shortId"].asString();
		if(!relatedPatchSetNode["relatedMergeItemType"].isNull())
			resultObject.relatedPatchSet.relatedMergeItemType = relatedPatchSetNode["relatedMergeItemType"].asString();
		if(!relatedPatchSetNode["createdAt"].isNull())
			resultObject.relatedPatchSet.createdAt = relatedPatchSetNode["createdAt"].asString();
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

std::vector<ListMergeRequestCommentsResult::ResultItem> ListMergeRequestCommentsResult::getresult()const
{
	return result_;
}

std::string ListMergeRequestCommentsResult::getRequestId()const
{
	return requestId_;
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

