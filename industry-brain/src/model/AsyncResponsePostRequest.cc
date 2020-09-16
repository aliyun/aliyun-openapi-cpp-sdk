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

#include <alibabacloud/industry-brain/model/AsyncResponsePostRequest.h>

using AlibabaCloud::Industry_brain::Model::AsyncResponsePostRequest;

AsyncResponsePostRequest::AsyncResponsePostRequest() :
	RpcServiceRequest("industry-brain", "2019-06-29", "AsyncResponsePost")
{
	setMethod(HttpRequest::Method::Post);
}

AsyncResponsePostRequest::~AsyncResponsePostRequest()
{}

std::string AsyncResponsePostRequest::getData()const
{
	return data_;
}

void AsyncResponsePostRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string AsyncResponsePostRequest::getContext()const
{
	return context_;
}

void AsyncResponsePostRequest::setContext(const std::string& context)
{
	context_ = context;
	setParameter("Context", context);
}

float AsyncResponsePostRequest::getProgress()const
{
	return progress_;
}

void AsyncResponsePostRequest::setProgress(float progress)
{
	progress_ = progress;
	setParameter("Progress", std::to_string(progress));
}

std::string AsyncResponsePostRequest::getMessage()const
{
	return message_;
}

void AsyncResponsePostRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string AsyncResponsePostRequest::getTaskId()const
{
	return taskId_;
}

void AsyncResponsePostRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string AsyncResponsePostRequest::getStatus()const
{
	return status_;
}

void AsyncResponsePostRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

