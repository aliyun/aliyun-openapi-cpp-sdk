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

#include <alibabacloud/iqa/model/DescribeProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iqa;
using namespace AlibabaCloud::Iqa::Model;

DescribeProjectResult::DescribeProjectResult() :
	ServiceResult()
{}

DescribeProjectResult::DescribeProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProjectResult::~DescribeProjectResult()
{}

void DescribeProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ProjectType"].isNull())
		projectType_ = value["ProjectType"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["DeployTime"].isNull())
		deployTime_ = std::stol(value["DeployTime"].asString());
	if(!value["ModelId"].isNull())
		modelId_ = value["ModelId"].asString();
	if(!value["ModelName"].isNull())
		modelName_ = value["ModelName"].asString();
	if(!value["QuestionCount"].isNull())
		questionCount_ = std::stoi(value["QuestionCount"].asString());
	if(!value["DataStatus"].isNull())
		dataStatus_ = value["DataStatus"].asString();
	if(!value["TestServiceStatus"].isNull())
		testServiceStatus_ = value["TestServiceStatus"].asString();
	if(!value["OnlineServiceStatus"].isNull())
		onlineServiceStatus_ = value["OnlineServiceStatus"].asString();
	if(!value["DeployAvailable"].isNull())
		deployAvailable_ = value["DeployAvailable"].asString();

}

int DescribeProjectResult::getQuestionCount()const
{
	return questionCount_;
}

std::string DescribeProjectResult::getModelName()const
{
	return modelName_;
}

std::string DescribeProjectResult::getDeployAvailable()const
{
	return deployAvailable_;
}

std::string DescribeProjectResult::getProjectName()const
{
	return projectName_;
}

long DescribeProjectResult::getDeployTime()const
{
	return deployTime_;
}

std::string DescribeProjectResult::getProjectType()const
{
	return projectType_;
}

long DescribeProjectResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeProjectResult::getProjectId()const
{
	return projectId_;
}

std::string DescribeProjectResult::getDataStatus()const
{
	return dataStatus_;
}

std::string DescribeProjectResult::getModelId()const
{
	return modelId_;
}

std::string DescribeProjectResult::getOnlineServiceStatus()const
{
	return onlineServiceStatus_;
}

std::string DescribeProjectResult::getTestServiceStatus()const
{
	return testServiceStatus_;
}

