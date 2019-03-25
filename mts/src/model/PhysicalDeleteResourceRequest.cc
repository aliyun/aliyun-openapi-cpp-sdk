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

#include <alibabacloud/mts/model/PhysicalDeleteResourceRequest.h>

using AlibabaCloud::Mts::Model::PhysicalDeleteResourceRequest;

PhysicalDeleteResourceRequest::PhysicalDeleteResourceRequest() :
	RpcServiceRequest("mts", "2014-06-18", "PhysicalDeleteResource")
{}

PhysicalDeleteResourceRequest::~PhysicalDeleteResourceRequest()
{}

std::string PhysicalDeleteResourceRequest::getCountry()const
{
	return country_;
}

void PhysicalDeleteResourceRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

long PhysicalDeleteResourceRequest::getHid()const
{
	return hid_;
}

void PhysicalDeleteResourceRequest::setHid(long hid)
{
	hid_ = hid;
	setParameter("Hid", std::to_string(hid));
}

bool PhysicalDeleteResourceRequest::getSuccess()const
{
	return success_;
}

void PhysicalDeleteResourceRequest::setSuccess(bool success)
{
	success_ = success;
	setParameter("Success", success ? "true" : "false");
}

bool PhysicalDeleteResourceRequest::getInterrupt()const
{
	return interrupt_;
}

void PhysicalDeleteResourceRequest::setInterrupt(bool interrupt)
{
	interrupt_ = interrupt;
	setParameter("Interrupt", interrupt ? "true" : "false");
}

std::string PhysicalDeleteResourceRequest::getGmtWakeup()const
{
	return gmtWakeup_;
}

void PhysicalDeleteResourceRequest::setGmtWakeup(const std::string& gmtWakeup)
{
	gmtWakeup_ = gmtWakeup;
	setParameter("GmtWakeup", gmtWakeup);
}

std::string PhysicalDeleteResourceRequest::getPk()const
{
	return pk_;
}

void PhysicalDeleteResourceRequest::setPk(const std::string& pk)
{
	pk_ = pk;
	setParameter("Pk", pk);
}

std::string PhysicalDeleteResourceRequest::getInvoker()const
{
	return invoker_;
}

void PhysicalDeleteResourceRequest::setInvoker(const std::string& invoker)
{
	invoker_ = invoker;
	setParameter("Invoker", invoker);
}

std::string PhysicalDeleteResourceRequest::getBid()const
{
	return bid_;
}

void PhysicalDeleteResourceRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setParameter("Bid", bid);
}

std::string PhysicalDeleteResourceRequest::getMessage()const
{
	return message_;
}

void PhysicalDeleteResourceRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string PhysicalDeleteResourceRequest::getTaskExtraData()const
{
	return taskExtraData_;
}

void PhysicalDeleteResourceRequest::setTaskExtraData(const std::string& taskExtraData)
{
	taskExtraData_ = taskExtraData;
	setParameter("TaskExtraData", taskExtraData);
}

std::string PhysicalDeleteResourceRequest::getTaskIdentifier()const
{
	return taskIdentifier_;
}

void PhysicalDeleteResourceRequest::setTaskIdentifier(const std::string& taskIdentifier)
{
	taskIdentifier_ = taskIdentifier;
	setParameter("TaskIdentifier", taskIdentifier);
}

