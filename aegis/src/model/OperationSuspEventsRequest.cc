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

#include <alibabacloud/aegis/model/OperationSuspEventsRequest.h>

using AlibabaCloud::Aegis::Model::OperationSuspEventsRequest;

OperationSuspEventsRequest::OperationSuspEventsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "OperationSuspEvents")
{}

OperationSuspEventsRequest::~OperationSuspEventsRequest()
{}

std::string OperationSuspEventsRequest::getSuspiciousEventIds()const
{
	return suspiciousEventIds_;
}

void OperationSuspEventsRequest::setSuspiciousEventIds(const std::string& suspiciousEventIds)
{
	suspiciousEventIds_ = suspiciousEventIds;
	setCoreParameter("SuspiciousEventIds", suspiciousEventIds);
}

std::string OperationSuspEventsRequest::getSubOperation()const
{
	return subOperation_;
}

void OperationSuspEventsRequest::setSubOperation(const std::string& subOperation)
{
	subOperation_ = subOperation;
	setCoreParameter("SubOperation", subOperation);
}

std::string OperationSuspEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void OperationSuspEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string OperationSuspEventsRequest::getWarnType()const
{
	return warnType_;
}

void OperationSuspEventsRequest::setWarnType(const std::string& warnType)
{
	warnType_ = warnType;
	setCoreParameter("WarnType", warnType);
}

std::string OperationSuspEventsRequest::getFrom()const
{
	return from_;
}

void OperationSuspEventsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string OperationSuspEventsRequest::getOperation()const
{
	return operation_;
}

void OperationSuspEventsRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setCoreParameter("Operation", operation);
}

