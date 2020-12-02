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

#include <alibabacloud/idrsservice/model/GetDetectEvaluationRequest.h>

using AlibabaCloud::Idrsservice::Model::GetDetectEvaluationRequest;

GetDetectEvaluationRequest::GetDetectEvaluationRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "GetDetectEvaluation")
{
	setMethod(HttpRequest::Method::Post);
}

GetDetectEvaluationRequest::~GetDetectEvaluationRequest()
{}

std::string GetDetectEvaluationRequest::getEndTime()const
{
	return endTime_;
}

void GetDetectEvaluationRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string GetDetectEvaluationRequest::getStartTime()const
{
	return startTime_;
}

void GetDetectEvaluationRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

