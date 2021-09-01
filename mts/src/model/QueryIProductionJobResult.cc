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

#include <alibabacloud/mts/model/QueryIProductionJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryIProductionJobResult::QueryIProductionJobResult() :
	ServiceResult()
{}

QueryIProductionJobResult::QueryIProductionJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIProductionJobResult::~QueryIProductionJobResult()
{}

void QueryIProductionJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FunctionName"].isNull())
		functionName_ = value["FunctionName"].asString();
	if(!value["Input"].isNull())
		input_ = value["Input"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["Output"].isNull())
		output_ = value["Output"].asString();
	if(!value["PipelineId"].isNull())
		pipelineId_ = value["PipelineId"].asString();
	if(!value["JobParams"].isNull())
		jobParams_ = value["JobParams"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["Result"].isNull())
		result_ = value["Result"].asString();

}

std::string QueryIProductionJobResult::getFunctionName()const
{
	return functionName_;
}

std::string QueryIProductionJobResult::getInput()const
{
	return input_;
}

std::string QueryIProductionJobResult::getUserData()const
{
	return userData_;
}

std::string QueryIProductionJobResult::getState()const
{
	return state_;
}

std::string QueryIProductionJobResult::getOutput()const
{
	return output_;
}

std::string QueryIProductionJobResult::getPipelineId()const
{
	return pipelineId_;
}

std::string QueryIProductionJobResult::getJobParams()const
{
	return jobParams_;
}

std::string QueryIProductionJobResult::getJobId()const
{
	return jobId_;
}

std::string QueryIProductionJobResult::getResult()const
{
	return result_;
}

