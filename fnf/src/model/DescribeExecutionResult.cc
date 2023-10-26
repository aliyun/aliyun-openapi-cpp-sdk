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

#include <alibabacloud/fnf/model/DescribeExecutionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

DescribeExecutionResult::DescribeExecutionResult() :
	ServiceResult()
{}

DescribeExecutionResult::DescribeExecutionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExecutionResult::~DescribeExecutionResult()
{}

void DescribeExecutionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StoppedTime"].isNull())
		stoppedTime_ = value["StoppedTime"].asString();
	if(!value["StartedTime"].isNull())
		startedTime_ = value["StartedTime"].asString();
	if(!value["FlowDefinition"].isNull())
		flowDefinition_ = value["FlowDefinition"].asString();
	if(!value["ExternalInputUri"].isNull())
		externalInputUri_ = value["ExternalInputUri"].asString();
	if(!value["Output"].isNull())
		output_ = value["Output"].asString();
	if(!value["FlowName"].isNull())
		flowName_ = value["FlowName"].asString();
	if(!value["ExternalOutputUri"].isNull())
		externalOutputUri_ = value["ExternalOutputUri"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Input"].isNull())
		input_ = value["Input"].asString();

}

std::string DescribeExecutionResult::getStatus()const
{
	return status_;
}

std::string DescribeExecutionResult::getInput()const
{
	return input_;
}

std::string DescribeExecutionResult::getStoppedTime()const
{
	return stoppedTime_;
}

std::string DescribeExecutionResult::getFlowName()const
{
	return flowName_;
}

std::string DescribeExecutionResult::getOutput()const
{
	return output_;
}

std::string DescribeExecutionResult::getExternalOutputUri()const
{
	return externalOutputUri_;
}

std::string DescribeExecutionResult::getStartedTime()const
{
	return startedTime_;
}

std::string DescribeExecutionResult::getExternalInputUri()const
{
	return externalInputUri_;
}

std::string DescribeExecutionResult::getFlowDefinition()const
{
	return flowDefinition_;
}

std::string DescribeExecutionResult::getName()const
{
	return name_;
}

