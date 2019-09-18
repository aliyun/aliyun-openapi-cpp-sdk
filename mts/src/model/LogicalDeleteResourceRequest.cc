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

#include <alibabacloud/mts/model/LogicalDeleteResourceRequest.h>

using AlibabaCloud::Mts::Model::LogicalDeleteResourceRequest;

LogicalDeleteResourceRequest::LogicalDeleteResourceRequest() :
	RpcServiceRequest("mts", "2014-06-18", "LogicalDeleteResource")
{}

LogicalDeleteResourceRequest::~LogicalDeleteResourceRequest()
{}

std::string LogicalDeleteResourceRequest::getCountry()const
{
	return country_;
}

void LogicalDeleteResourceRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

long LogicalDeleteResourceRequest::getHid()const
{
	return hid_;
}

void LogicalDeleteResourceRequest::setHid(long hid)
{
	hid_ = hid;
	setCoreParameter("Hid", std::to_string(hid));
}

std::string LogicalDeleteResourceRequest::getInvoker()const
{
	return invoker_;
}

void LogicalDeleteResourceRequest::setInvoker(const std::string& invoker)
{
	invoker_ = invoker;
	setCoreParameter("Invoker", invoker);
}

std::string LogicalDeleteResourceRequest::getMessage()const
{
	return message_;
}

void LogicalDeleteResourceRequest::setMessage(const std::string& message)
{
	message_ = message;
	setCoreParameter("Message", message);
}

bool LogicalDeleteResourceRequest::getSuccess()const
{
	return success_;
}

void LogicalDeleteResourceRequest::setSuccess(bool success)
{
	success_ = success;
	setCoreParameter("Success", success ? "true" : "false");
}

bool LogicalDeleteResourceRequest::getInterrupt()const
{
	return interrupt_;
}

void LogicalDeleteResourceRequest::setInterrupt(bool interrupt)
{
	interrupt_ = interrupt;
	setCoreParameter("Interrupt", interrupt ? "true" : "false");
}

std::string LogicalDeleteResourceRequest::getGmtWakeup()const
{
	return gmtWakeup_;
}

void LogicalDeleteResourceRequest::setGmtWakeup(const std::string& gmtWakeup)
{
	gmtWakeup_ = gmtWakeup;
	setCoreParameter("GmtWakeup", gmtWakeup);
}

std::string LogicalDeleteResourceRequest::getPk()const
{
	return pk_;
}

void LogicalDeleteResourceRequest::setPk(const std::string& pk)
{
	pk_ = pk;
	setCoreParameter("Pk", pk);
}

std::string LogicalDeleteResourceRequest::getBid()const
{
	return bid_;
}

void LogicalDeleteResourceRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setCoreParameter("Bid", bid);
}

std::string LogicalDeleteResourceRequest::getTaskExtraData()const
{
	return taskExtraData_;
}

void LogicalDeleteResourceRequest::setTaskExtraData(const std::string& taskExtraData)
{
	taskExtraData_ = taskExtraData;
	setCoreParameter("TaskExtraData", taskExtraData);
}

std::string LogicalDeleteResourceRequest::getTaskIdentifier()const
{
	return taskIdentifier_;
}

void LogicalDeleteResourceRequest::setTaskIdentifier(const std::string& taskIdentifier)
{
	taskIdentifier_ = taskIdentifier;
	setCoreParameter("TaskIdentifier", taskIdentifier);
}

