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

#include <alibabacloud/dts/model/SkipPreCheckRequest.h>

using AlibabaCloud::Dts::Model::SkipPreCheckRequest;

SkipPreCheckRequest::SkipPreCheckRequest() :
	RpcServiceRequest("dts", "2020-01-01", "SkipPreCheck")
{
	setMethod(HttpRequest::Method::Post);
}

SkipPreCheckRequest::~SkipPreCheckRequest()
{}

std::string SkipPreCheckRequest::getSkipPreCheckItems()const
{
	return skipPreCheckItems_;
}

void SkipPreCheckRequest::setSkipPreCheckItems(const std::string& skipPreCheckItems)
{
	skipPreCheckItems_ = skipPreCheckItems;
	setParameter("SkipPreCheckItems", skipPreCheckItems);
}

bool SkipPreCheckRequest::getSkip()const
{
	return skip_;
}

void SkipPreCheckRequest::setSkip(bool skip)
{
	skip_ = skip;
	setParameter("Skip", skip ? "true" : "false");
}

std::string SkipPreCheckRequest::getJobId()const
{
	return jobId_;
}

void SkipPreCheckRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string SkipPreCheckRequest::getSkipPreCheckNames()const
{
	return skipPreCheckNames_;
}

void SkipPreCheckRequest::setSkipPreCheckNames(const std::string& skipPreCheckNames)
{
	skipPreCheckNames_ = skipPreCheckNames;
	setParameter("SkipPreCheckNames", skipPreCheckNames);
}

