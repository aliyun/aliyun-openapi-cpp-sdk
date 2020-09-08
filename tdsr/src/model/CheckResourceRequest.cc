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

#include <alibabacloud/tdsr/model/CheckResourceRequest.h>

using AlibabaCloud::Tdsr::Model::CheckResourceRequest;

CheckResourceRequest::CheckResourceRequest() :
	RpcServiceRequest("tdsr", "2020-01-01", "CheckResource")
{
	setMethod(HttpRequest::Method::Post);
}

CheckResourceRequest::~CheckResourceRequest()
{}

std::string CheckResourceRequest::getCountry()const
{
	return country_;
}

void CheckResourceRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

long CheckResourceRequest::getHid()const
{
	return hid_;
}

void CheckResourceRequest::setHid(long hid)
{
	hid_ = hid;
	setParameter("Hid", std::to_string(hid));
}

long CheckResourceRequest::getLevel()const
{
	return level_;
}

void CheckResourceRequest::setLevel(long level)
{
	level_ = level;
	setParameter("Level", std::to_string(level));
}

std::string CheckResourceRequest::getInvoker()const
{
	return invoker_;
}

void CheckResourceRequest::setInvoker(const std::string& invoker)
{
	invoker_ = invoker;
	setParameter("Invoker", invoker);
}

std::string CheckResourceRequest::getMessage()const
{
	return message_;
}

void CheckResourceRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string CheckResourceRequest::getUrl()const
{
	return url_;
}

void CheckResourceRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

bool CheckResourceRequest::getSuccess()const
{
	return success_;
}

void CheckResourceRequest::setSuccess(bool success)
{
	success_ = success;
	setParameter("Success", success ? "true" : "false");
}

bool CheckResourceRequest::getInterrupt()const
{
	return interrupt_;
}

void CheckResourceRequest::setInterrupt(bool interrupt)
{
	interrupt_ = interrupt;
	setParameter("Interrupt", interrupt ? "true" : "false");
}

std::string CheckResourceRequest::getGmtWakeup()const
{
	return gmtWakeup_;
}

void CheckResourceRequest::setGmtWakeup(const std::string& gmtWakeup)
{
	gmtWakeup_ = gmtWakeup;
	setParameter("GmtWakeup", gmtWakeup);
}

std::string CheckResourceRequest::getPk()const
{
	return pk_;
}

void CheckResourceRequest::setPk(const std::string& pk)
{
	pk_ = pk;
	setParameter("Pk", pk);
}

std::string CheckResourceRequest::getBid()const
{
	return bid_;
}

void CheckResourceRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setParameter("Bid", bid);
}

std::string CheckResourceRequest::getPrompt()const
{
	return prompt_;
}

void CheckResourceRequest::setPrompt(const std::string& prompt)
{
	prompt_ = prompt;
	setParameter("Prompt", prompt);
}

std::string CheckResourceRequest::getTaskExtraData()const
{
	return taskExtraData_;
}

void CheckResourceRequest::setTaskExtraData(const std::string& taskExtraData)
{
	taskExtraData_ = taskExtraData;
	setParameter("TaskExtraData", taskExtraData);
}

std::string CheckResourceRequest::getTaskIdentifier()const
{
	return taskIdentifier_;
}

void CheckResourceRequest::setTaskIdentifier(const std::string& taskIdentifier)
{
	taskIdentifier_ = taskIdentifier;
	setParameter("TaskIdentifier", taskIdentifier);
}

