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

#include <alibabacloud/mts/model/CheckResourceRequest.h>

using AlibabaCloud::Mts::Model::CheckResourceRequest;

CheckResourceRequest::CheckResourceRequest() :
	RpcServiceRequest("mts", "2014-06-18", "CheckResource")
{}

CheckResourceRequest::~CheckResourceRequest()
{}

std::string CheckResourceRequest::getCountry()const
{
	return country_;
}

void CheckResourceRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

long CheckResourceRequest::getHid()const
{
	return hid_;
}

void CheckResourceRequest::setHid(long hid)
{
	hid_ = hid;
	setCoreParameter("Hid", std::to_string(hid));
}

long CheckResourceRequest::getLevel()const
{
	return level_;
}

void CheckResourceRequest::setLevel(long level)
{
	level_ = level;
	setCoreParameter("Level", std::to_string(level));
}

std::string CheckResourceRequest::getInvoker()const
{
	return invoker_;
}

void CheckResourceRequest::setInvoker(const std::string& invoker)
{
	invoker_ = invoker;
	setCoreParameter("Invoker", invoker);
}

std::string CheckResourceRequest::getMessage()const
{
	return message_;
}

void CheckResourceRequest::setMessage(const std::string& message)
{
	message_ = message;
	setCoreParameter("Message", message);
}

std::string CheckResourceRequest::getUrl()const
{
	return url_;
}

void CheckResourceRequest::setUrl(const std::string& url)
{
	url_ = url;
	setCoreParameter("Url", url);
}

bool CheckResourceRequest::getSuccess()const
{
	return success_;
}

void CheckResourceRequest::setSuccess(bool success)
{
	success_ = success;
	setCoreParameter("Success", success ? "true" : "false");
}

bool CheckResourceRequest::getInterrupt()const
{
	return interrupt_;
}

void CheckResourceRequest::setInterrupt(bool interrupt)
{
	interrupt_ = interrupt;
	setCoreParameter("Interrupt", interrupt ? "true" : "false");
}

std::string CheckResourceRequest::getGmtWakeup()const
{
	return gmtWakeup_;
}

void CheckResourceRequest::setGmtWakeup(const std::string& gmtWakeup)
{
	gmtWakeup_ = gmtWakeup;
	setCoreParameter("GmtWakeup", gmtWakeup);
}

std::string CheckResourceRequest::getPk()const
{
	return pk_;
}

void CheckResourceRequest::setPk(const std::string& pk)
{
	pk_ = pk;
	setCoreParameter("Pk", pk);
}

std::string CheckResourceRequest::getBid()const
{
	return bid_;
}

void CheckResourceRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setCoreParameter("Bid", bid);
}

std::string CheckResourceRequest::getPrompt()const
{
	return prompt_;
}

void CheckResourceRequest::setPrompt(const std::string& prompt)
{
	prompt_ = prompt;
	setCoreParameter("Prompt", prompt);
}

std::string CheckResourceRequest::getTaskExtraData()const
{
	return taskExtraData_;
}

void CheckResourceRequest::setTaskExtraData(const std::string& taskExtraData)
{
	taskExtraData_ = taskExtraData;
	setCoreParameter("TaskExtraData", taskExtraData);
}

std::string CheckResourceRequest::getTaskIdentifier()const
{
	return taskIdentifier_;
}

void CheckResourceRequest::setTaskIdentifier(const std::string& taskIdentifier)
{
	taskIdentifier_ = taskIdentifier;
	setCoreParameter("TaskIdentifier", taskIdentifier);
}

