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

#include <alibabacloud/afs/model/SetEarlyWarningRequest.h>

using AlibabaCloud::Afs::Model::SetEarlyWarningRequest;

SetEarlyWarningRequest::SetEarlyWarningRequest() :
	RpcServiceRequest("afs", "2018-01-12", "SetEarlyWarning")
{}

SetEarlyWarningRequest::~SetEarlyWarningRequest()
{}

std::string SetEarlyWarningRequest::getTimeEnd()const
{
	return timeEnd_;
}

void SetEarlyWarningRequest::setTimeEnd(const std::string& timeEnd)
{
	timeEnd_ = timeEnd;
	setCoreParameter("TimeEnd", std::to_string(timeEnd));
}

bool SetEarlyWarningRequest::getWarnOpen()const
{
	return warnOpen_;
}

void SetEarlyWarningRequest::setWarnOpen(bool warnOpen)
{
	warnOpen_ = warnOpen;
	setCoreParameter("WarnOpen", warnOpen ? "true" : "false");
}

std::string SetEarlyWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void SetEarlyWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string SetEarlyWarningRequest::getChannel()const
{
	return channel_;
}

void SetEarlyWarningRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", std::to_string(channel));
}

std::string SetEarlyWarningRequest::getTitle()const
{
	return title_;
}

void SetEarlyWarningRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

bool SetEarlyWarningRequest::getTimeOpen()const
{
	return timeOpen_;
}

void SetEarlyWarningRequest::setTimeOpen(bool timeOpen)
{
	timeOpen_ = timeOpen;
	setCoreParameter("TimeOpen", timeOpen ? "true" : "false");
}

std::string SetEarlyWarningRequest::getTimeBegin()const
{
	return timeBegin_;
}

void SetEarlyWarningRequest::setTimeBegin(const std::string& timeBegin)
{
	timeBegin_ = timeBegin;
	setCoreParameter("TimeBegin", std::to_string(timeBegin));
}

std::string SetEarlyWarningRequest::getFrequency()const
{
	return frequency_;
}

void SetEarlyWarningRequest::setFrequency(const std::string& frequency)
{
	frequency_ = frequency;
	setCoreParameter("Frequency", std::to_string(frequency));
}

