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

#include <alibabacloud/aliyuncvc/model/CreateUserEvaluationsRequest.h>

using AlibabaCloud::Aliyuncvc::Model::CreateUserEvaluationsRequest;

CreateUserEvaluationsRequest::CreateUserEvaluationsRequest() :
	RpcServiceRequest("aliyuncvc", "2019-09-19", "CreateUserEvaluations")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserEvaluationsRequest::~CreateUserEvaluationsRequest()
{}

std::string CreateUserEvaluationsRequest::getMemo()const
{
	return memo_;
}

void CreateUserEvaluationsRequest::setMemo(const std::string& memo)
{
	memo_ = memo;
	setCoreParameter("Memo", memo);
}

std::string CreateUserEvaluationsRequest::getDescription()const
{
	return description_;
}

void CreateUserEvaluationsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateUserEvaluationsRequest::getCreateDate()const
{
	return createDate_;
}

void CreateUserEvaluationsRequest::setCreateDate(long createDate)
{
	createDate_ = createDate;
	setCoreParameter("CreateDate", std::to_string(createDate));
}

std::string CreateUserEvaluationsRequest::getMemberUUID()const
{
	return memberUUID_;
}

void CreateUserEvaluationsRequest::setMemberUUID(const std::string& memberUUID)
{
	memberUUID_ = memberUUID;
	setCoreParameter("MemberUUID", memberUUID);
}

std::string CreateUserEvaluationsRequest::getUserId()const
{
	return userId_;
}

void CreateUserEvaluationsRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string CreateUserEvaluationsRequest::getEvaluation()const
{
	return evaluation_;
}

void CreateUserEvaluationsRequest::setEvaluation(const std::string& evaluation)
{
	evaluation_ = evaluation;
	setCoreParameter("Evaluation", evaluation);
}

std::string CreateUserEvaluationsRequest::getScore()const
{
	return score_;
}

void CreateUserEvaluationsRequest::setScore(const std::string& score)
{
	score_ = score;
	setCoreParameter("Score", score);
}

std::string CreateUserEvaluationsRequest::getMeetingUUID()const
{
	return meetingUUID_;
}

void CreateUserEvaluationsRequest::setMeetingUUID(const std::string& meetingUUID)
{
	meetingUUID_ = meetingUUID;
	setCoreParameter("MeetingUUID", meetingUUID);
}

std::string CreateUserEvaluationsRequest::getAppId()const
{
	return appId_;
}

void CreateUserEvaluationsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

