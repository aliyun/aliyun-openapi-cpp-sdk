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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCommentList = value["CommentList"]["CommentListItem"];
	for (auto value : allCommentList)
	{
		CommentListItem commentListObject;
		if(!value["CommentTime"].isNull())
			commentListObject.commentTime = value["CommentTime"].asString();
		if(!value["Content"].isNull())
			commentListObject.content = value["Content"].asString();
		if(!value["FavorCount"].isNull())
			commentListObject.favorCount = std::stol(value["FavorCount"].asString());
		if(!value["Id"].isNull())
			commentListObject.id = std::stol(value["Id"].asString());
		if(!value["NickName"].isNull())
			commentListObject.nickName = value["NickName"].asString();
		if(!value["Remark"].isNull())
			commentListObject.remark = std::stol(value["Remark"].asString());
		if(!value["ShowId"].isNull())
			commentListObject.showId = std::stol(value["ShowId"].asString());
		if(!value["Subject"].isNull())
			commentListObject.subject = value["Subject"].asString();
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

