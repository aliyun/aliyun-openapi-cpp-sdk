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

#include <alibabacloud/companyreg/model/SubmitSolutionRequest.h>

using AlibabaCloud::Companyreg::Model::SubmitSolutionRequest;

SubmitSolutionRequest::SubmitSolutionRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "SubmitSolution")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSolutionRequest::~SubmitSolutionRequest()
{}

std::string SubmitSolutionRequest::getBizType()const
{
	return bizType_;
}

void SubmitSolutionRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string SubmitSolutionRequest::getSolution()const
{
	return solution_;
}

void SubmitSolutionRequest::setSolution(const std::string& solution)
{
	solution_ = solution;
	setParameter("Solution", solution);
}

std::string SubmitSolutionRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void SubmitSolutionRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setParameter("IntentionBizId", intentionBizId);
}

std::string SubmitSolutionRequest::getUserId()const
{
	return userId_;
}

void SubmitSolutionRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

