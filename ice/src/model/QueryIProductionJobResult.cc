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

#include <alibabacloud/ice/model/QueryIProductionJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
	auto inputNode = value["Input"];
	if(!inputNode["Type"].isNull())
		input_.type = inputNode["Type"].asString();
	if(!inputNode["Media"].isNull())
		input_.media = inputNode["Media"].asString();
	auto outputNode = value["Output"];
	if(!outputNode["Type"].isNull())
		output_.type = outputNode["Type"].asString();
	if(!outputNode["Media"].isNull())
		output_.media = outputNode["Media"].asString();
	auto scheduleConfigNode = value["ScheduleConfig"];
	if(!scheduleConfigNode["PipelineId"].isNull())
		scheduleConfig_.pipelineId = scheduleConfigNode["PipelineId"].asString();
	if(!scheduleConfigNode["Priority"].isNull())
		scheduleConfig_.priority = std::stoi(scheduleConfigNode["Priority"].asString());
	auto allOutputFiles = value["OutputFiles"]["OutputFile"];
	for (const auto &item : allOutputFiles)
		outputFiles_.push_back(item.asString());
	auto allOutputUrls = value["OutputUrls"]["OutputUrl"];
	for (const auto &item : allOutputUrls)
		outputUrls_.push_back(item.asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["FunctionName"].isNull())
		functionName_ = value["FunctionName"].asString();
	if(!value["TemplateId"].isNull())
		templateId_ = value["TemplateId"].asString();
	if(!value["JobParams"].isNull())
		jobParams_ = value["JobParams"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();
	if(!value["Result"].isNull())
		result_ = value["Result"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string QueryIProductionJobResult::getStatus()const
{
	return status_;
}

std::vector<std::string> QueryIProductionJobResult::getOutputUrls()const
{
	return outputUrls_;
}

std::string QueryIProductionJobResult::getUserData()const
{
	return userData_;
}

std::string QueryIProductionJobResult::getCreateTime()const
{
	return createTime_;
}

std::string QueryIProductionJobResult::getName()const
{
	return name_;
}

std::string QueryIProductionJobResult::getResult()const
{
	return result_;
}

QueryIProductionJobResult::ScheduleConfig QueryIProductionJobResult::getScheduleConfig()const
{
	return scheduleConfig_;
}

std::string QueryIProductionJobResult::getFunctionName()const
{
	return functionName_;
}

QueryIProductionJobResult::Input QueryIProductionJobResult::getInput()const
{
	return input_;
}

std::string QueryIProductionJobResult::getFinishTime()const
{
	return finishTime_;
}

std::vector<std::string> QueryIProductionJobResult::getOutputFiles()const
{
	return outputFiles_;
}

QueryIProductionJobResult::Output QueryIProductionJobResult::getOutput()const
{
	return output_;
}

std::string QueryIProductionJobResult::getJobId()const
{
	return jobId_;
}

std::string QueryIProductionJobResult::getTemplateId()const
{
	return templateId_;
}

std::string QueryIProductionJobResult::getJobParams()const
{
	return jobParams_;
}

