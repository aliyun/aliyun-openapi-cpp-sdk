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

#include <alibabacloud/iqa/model/GetPredictResultRequest.h>

using AlibabaCloud::Iqa::Model::GetPredictResultRequest;

GetPredictResultRequest::GetPredictResultRequest() :
	RpcServiceRequest("iqa", "2019-08-13", "GetPredictResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetPredictResultRequest::~GetPredictResultRequest()
{}

int GetPredictResultRequest::getTopK()const
{
	return topK_;
}

void GetPredictResultRequest::setTopK(int topK)
{
	topK_ = topK;
	setParameter("TopK", std::to_string(topK));
}

std::string GetPredictResultRequest::getTraceTag()const
{
	return traceTag_;
}

void GetPredictResultRequest::setTraceTag(const std::string& traceTag)
{
	traceTag_ = traceTag;
	setParameter("TraceTag", traceTag);
}

std::string GetPredictResultRequest::getQuestion()const
{
	return question_;
}

void GetPredictResultRequest::setQuestion(const std::string& question)
{
	question_ = question;
	setBodyParameter("Question", question);
}

std::string GetPredictResultRequest::getProjectId()const
{
	return projectId_;
}

void GetPredictResultRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

