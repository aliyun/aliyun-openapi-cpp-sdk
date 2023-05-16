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

#include <alibabacloud/computenest/model/ContinueDeployServiceInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

ContinueDeployServiceInstanceResult::ContinueDeployServiceInstanceResult() :
	ServiceResult()
{}

ContinueDeployServiceInstanceResult::ContinueDeployServiceInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ContinueDeployServiceInstanceResult::~ContinueDeployServiceInstanceResult()
{}

void ContinueDeployServiceInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dryRunResultNode = value["DryRunResult"];
		auto allParametersNotAllowedToBeModified = dryRunResultNode["ParametersNotAllowedToBeModified"]["parameterNotAllowedToBeModified"];
		for (auto value : allParametersNotAllowedToBeModified)
			dryRunResult_.parametersNotAllowedToBeModified.push_back(value.asString());
		auto allParametersConditionallyAllowedToBeModified = dryRunResultNode["ParametersConditionallyAllowedToBeModified"]["parameterConditionallyAllowedToBeModified"];
		for (auto value : allParametersConditionallyAllowedToBeModified)
			dryRunResult_.parametersConditionallyAllowedToBeModified.push_back(value.asString());
		auto allParametersAllowedToBeModified = dryRunResultNode["ParametersAllowedToBeModified"]["parameterAllowedToBeModified"];
		for (auto value : allParametersAllowedToBeModified)
			dryRunResult_.parametersAllowedToBeModified.push_back(value.asString());
	if(!value["ServiceInstanceId"].isNull())
		serviceInstanceId_ = value["ServiceInstanceId"].asString();

}

std::string ContinueDeployServiceInstanceResult::getServiceInstanceId()const
{
	return serviceInstanceId_;
}

ContinueDeployServiceInstanceResult::DryRunResult ContinueDeployServiceInstanceResult::getDryRunResult()const
{
	return dryRunResult_;
}

