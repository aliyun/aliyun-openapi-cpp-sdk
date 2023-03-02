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

#include <alibabacloud/swas-open/model/DescribeInvocationResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeInvocationResultResult::DescribeInvocationResultResult() :
	ServiceResult()
{}

DescribeInvocationResultResult::DescribeInvocationResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInvocationResultResult::~DescribeInvocationResultResult()
{}

void DescribeInvocationResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto invocationResultNode = value["InvocationResult"];
	if(!invocationResultNode["StartTime"].isNull())
		invocationResult_.startTime = invocationResultNode["StartTime"].asString();
	if(!invocationResultNode["FinishedTime"].isNull())
		invocationResult_.finishedTime = invocationResultNode["FinishedTime"].asString();
	if(!invocationResultNode["InvocationStatus"].isNull())
		invocationResult_.invocationStatus = invocationResultNode["InvocationStatus"].asString();
	if(!invocationResultNode["ExitCode"].isNull())
		invocationResult_.exitCode = std::stol(invocationResultNode["ExitCode"].asString());
	if(!invocationResultNode["ErrorInfo"].isNull())
		invocationResult_.errorInfo = invocationResultNode["ErrorInfo"].asString();
	if(!invocationResultNode["ErrorCode"].isNull())
		invocationResult_.errorCode = invocationResultNode["ErrorCode"].asString();
	if(!invocationResultNode["InvokeId"].isNull())
		invocationResult_.invokeId = invocationResultNode["InvokeId"].asString();
	if(!invocationResultNode["InvokeRecordStatus"].isNull())
		invocationResult_.invokeRecordStatus = invocationResultNode["InvokeRecordStatus"].asString();
	if(!invocationResultNode["InvokeUser"].isNull())
		invocationResult_.invokeUser = invocationResultNode["InvokeUser"].asString();
	if(!invocationResultNode["Output"].isNull())
		invocationResult_.output = invocationResultNode["Output"].asString();
	if(!invocationResultNode["InstanceId"].isNull())
		invocationResult_.instanceId = invocationResultNode["InstanceId"].asString();

}

DescribeInvocationResultResult::InvocationResult DescribeInvocationResultResult::getInvocationResult()const
{
	return invocationResult_;
}

