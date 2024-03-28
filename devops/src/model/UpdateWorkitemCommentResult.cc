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

#include <alibabacloud/devops/model/UpdateWorkitemCommentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateWorkitemCommentResult::UpdateWorkitemCommentResult() :
	ServiceResult()
{}

UpdateWorkitemCommentResult::UpdateWorkitemCommentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateWorkitemCommentResult::~UpdateWorkitemCommentResult()
{}

void UpdateWorkitemCommentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto commentNode = value["comment"];
	if(!commentNode["id"].isNull())
		comment_.id = commentNode["id"].asString();
	if(!commentNode["content"].isNull())
		comment_.content = commentNode["content"].asString();
	if(!commentNode["targetType"].isNull())
		comment_.targetType = commentNode["targetType"].asString();
	if(!commentNode["targetIdentifier"].isNull())
		comment_.targetIdentifier = commentNode["targetIdentifier"].asString();
	if(!commentNode["parentId"].isNull())
		comment_.parentId = std::stol(commentNode["parentId"].asString());
	if(!commentNode["createTime"].isNull())
		comment_.createTime = std::stol(commentNode["createTime"].asString());
	if(!commentNode["modifiedTime"].isNull())
		comment_.modifiedTime = std::stol(commentNode["modifiedTime"].asString());
	if(!commentNode["isTop"].isNull())
		comment_.isTop = commentNode["isTop"].asString() == "true";
	if(!commentNode["topTime"].isNull())
		comment_.topTime = std::stol(commentNode["topTime"].asString());
	if(!commentNode["formatType"].isNull())
		comment_.formatType = commentNode["formatType"].asString();
	auto userNode = commentNode["user"];
	if(!userNode["account"].isNull())
		comment_.user.account = userNode["account"].asString();
	if(!userNode["identifier"].isNull())
		comment_.user.identifier = userNode["identifier"].asString();
	if(!userNode["realName"].isNull())
		comment_.user.realName = userNode["realName"].asString();
	if(!userNode["nickName"].isNull())
		comment_.user.nickName = userNode["nickName"].asString();
	if(!userNode["avatar"].isNull())
		comment_.user.avatar = userNode["avatar"].asString();
	if(!userNode["displayName"].isNull())
		comment_.user.displayName = userNode["displayName"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();

}

UpdateWorkitemCommentResult::Comment UpdateWorkitemCommentResult::getComment()const
{
	return comment_;
}

std::string UpdateWorkitemCommentResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateWorkitemCommentResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string UpdateWorkitemCommentResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateWorkitemCommentResult::getSuccess()const
{
	return success_;
}

