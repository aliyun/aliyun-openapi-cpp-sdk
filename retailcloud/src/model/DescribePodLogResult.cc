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

#include <alibabacloud/retailcloud/model/DescribePodLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribePodLogResult::DescribePodLogResult() :
	ServiceResult()
{}

DescribePodLogResult::DescribePodLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePodLogResult::~DescribePodLogResult()
{}

void DescribePodLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["DeployOrderName"].isNull())
		result_.deployOrderName = resultNode["DeployOrderName"].asString();
	if(!resultNode["EnvTypeName"].isNull())
		result_.envTypeName = resultNode["EnvTypeName"].asString();
	auto allDeployStepListNode = resultNode["DeployStepList"]["DeployLogStepRC"];
	for (auto resultNodeDeployStepListDeployLogStepRC : allDeployStepListNode)
	{
		Result::DeployLogStepRC deployLogStepRCObject;
		if(!resultNodeDeployStepListDeployLogStepRC["StepName"].isNull())
			deployLogStepRCObject.stepName = resultNodeDeployStepListDeployLogStepRC["StepName"].asString();
		if(!resultNodeDeployStepListDeployLogStepRC["StepCode"].isNull())
			deployLogStepRCObject.stepCode = resultNodeDeployStepListDeployLogStepRC["StepCode"].asString();
		if(!resultNodeDeployStepListDeployLogStepRC["StepLog"].isNull())
			deployLogStepRCObject.stepLog = resultNodeDeployStepListDeployLogStepRC["StepLog"].asString();
		if(!resultNodeDeployStepListDeployLogStepRC["Status"].isNull())
			deployLogStepRCObject.status = resultNodeDeployStepListDeployLogStepRC["Status"].asString();
		result_.deployStepList.push_back(deployLogStepRCObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribePodLogResult::getErrMsg()const
{
	return errMsg_;
}

int DescribePodLogResult::getCode()const
{
	return code_;
}

bool DescribePodLogResult::getSuccess()const
{
	return success_;
}

DescribePodLogResult::Result DescribePodLogResult::getResult()const
{
	return result_;
}

