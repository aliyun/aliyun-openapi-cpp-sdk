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

#include <alibabacloud/devops/model/GetWorkitemCommentListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkitemCommentListResult::GetWorkitemCommentListResult() :
	ServiceResult()
{}

GetWorkitemCommentListResult::GetWorkitemCommentListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkitemCommentListResult::~GetWorkitemCommentListResult()
{}

void GetWorkitemCommentListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allcommentListNode = value["commentList"]["result"];
	for (auto valuecommentListresult : allcommentListNode)
	{
		Result commentListObject;
		if(!valuecommentListresult["id"].isNull())
			commentListObject.id = std::stol(valuecommentListresult["id"].asString());
		if(!valuecommentListresult["content"].isNull())
			commentListObject.content = valuecommentListresult["content"].asString();
		if(!valuecommentListresult["targetType"].isNull())
			commentListObject.targetType = valuecommentListresult["targetType"].asString();
		if(!valuecommentListresult["targetIdentifier"].isNull())
			commentListObject.targetIdentifier = valuecommentListresult["targetIdentifier"].asString();
		if(!valuecommentListresult["parentId"].isNull())
			commentListObject.parentId = std::stol(valuecommentListresult["parentId"].asString());
		if(!valuecommentListresult["createTime"].isNull())
			commentListObject.createTime = std::stol(valuecommentListresult["createTime"].asString());
		if(!valuecommentListresult["modifiedTime"].isNull())
			commentListObject.modifiedTime = std::stol(valuecommentListresult["modifiedTime"].asString());
		if(!valuecommentListresult["isTop"].isNull())
			commentListObject.isTop = valuecommentListresult["isTop"].asString() == "true";
		if(!valuecommentListresult["topTime"].isNull())
			commentListObject.topTime = std::stol(valuecommentListresult["topTime"].asString());
		if(!valuecommentListresult["formatType"].isNull())
			commentListObject.formatType = valuecommentListresult["formatType"].asString();
		auto userNode = value["user"];
		if(!userNode["account"].isNull())
			commentListObject.user.account = userNode["account"].asString();
		if(!userNode["identifier"].isNull())
			commentListObject.user.identifier = userNode["identifier"].asString();
		if(!userNode["realName"].isNull())
			commentListObject.user.realName = userNode["realName"].asString();
		if(!userNode["nickName"].isNull())
			commentListObject.user.nickName = userNode["nickName"].asString();
		if(!userNode["avatar"].isNull())
			commentListObject.user.avatar = userNode["avatar"].asString();
		commentList_.push_back(commentListObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();

}

std::vector<GetWorkitemCommentListResult::Result> GetWorkitemCommentListResult::getcommentList()const
{
	return commentList_;
}

std::string GetWorkitemCommentListResult::getRequestId()const
{
	return requestId_;
}

std::string GetWorkitemCommentListResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetWorkitemCommentListResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkitemCommentListResult::getSuccess()const
{
	return success_;
}

