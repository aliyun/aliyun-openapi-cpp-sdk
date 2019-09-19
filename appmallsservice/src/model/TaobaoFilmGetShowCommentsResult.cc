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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetShowCommentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetShowCommentsResult::TaobaoFilmGetShowCommentsResult() :
	ServiceResult()
{}

TaobaoFilmGetShowCommentsResult::TaobaoFilmGetShowCommentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetShowCommentsResult::~TaobaoFilmGetShowCommentsResult()
{}

void TaobaoFilmGetShowCommentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommentListNode = value["CommentList"]["CommentListItem"];
	for (auto valueCommentListCommentListItem : allCommentListNode)
	{
		CommentListItem commentListObject;
		if(!valueCommentListCommentListItem["CommentTime"].isNull())
			commentListObject.commentTime = valueCommentListCommentListItem["CommentTime"].asString();
		if(!valueCommentListCommentListItem["Content"].isNull())
			commentListObject.content = valueCommentListCommentListItem["Content"].asString();
		if(!valueCommentListCommentListItem["FavorCount"].isNull())
			commentListObject.favorCount = std::stol(valueCommentListCommentListItem["FavorCount"].asString());
		if(!valueCommentListCommentListItem["Id"].isNull())
			commentListObject.id = std::stol(valueCommentListCommentListItem["Id"].asString());
		if(!valueCommentListCommentListItem["NickName"].isNull())
			commentListObject.nickName = valueCommentListCommentListItem["NickName"].asString();
		if(!valueCommentListCommentListItem["Remark"].isNull())
			commentListObject.remark = std::stol(valueCommentListCommentListItem["Remark"].asString());
		if(!valueCommentListCommentListItem["ShowId"].isNull())
			commentListObject.showId = std::stol(valueCommentListCommentListItem["ShowId"].asString());
		if(!valueCommentListCommentListItem["Subject"].isNull())
			commentListObject.subject = valueCommentListCommentListItem["Subject"].asString();
		commentList_.push_back(commentListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["SubCode"].isNull())
		subCode_ = value["SubCode"].asString();
	if(!value["SubMsg"].isNull())
		subMsg_ = value["SubMsg"].asString();
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();

}

std::string TaobaoFilmGetShowCommentsResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmGetShowCommentsResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmGetShowCommentsResult::getLogsId()const
{
	return logsId_;
}

std::vector<TaobaoFilmGetShowCommentsResult::CommentListItem> TaobaoFilmGetShowCommentsResult::getCommentList()const
{
	return commentList_;
}

std::string TaobaoFilmGetShowCommentsResult::getErrorCode()const
{
	return errorCode_;
}

long TaobaoFilmGetShowCommentsResult::getCount()const
{
	return count_;
}

std::string TaobaoFilmGetShowCommentsResult::getSubCode()const
{
	return subCode_;
}

