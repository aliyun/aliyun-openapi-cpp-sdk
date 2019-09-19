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

#include <alibabacloud/cas/model/DescribeDeploymentDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeDeploymentDetailResult::DescribeDeploymentDetailResult() :
	ServiceResult()
{}

DescribeDeploymentDetailResult::DescribeDeploymentDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeploymentDetailResult::~DescribeDeploymentDetailResult()
{}

void DescribeDeploymentDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeploymentDetailNode = value["DeploymentDetail"]["Deployment"];
	for (auto valueDeploymentDetailDeployment : allDeploymentDetailNode)
	{
		Deployment deploymentDetailObject;
		if(!valueDeploymentDetailDeployment["CloudProduct"].isNull())
			deploymentDetailObject.cloudProduct = valueDeploymentDetailDeployment["CloudProduct"].asString();
		if(!valueDeploymentDetailDeployment["Domain"].isNull())
			deploymentDetailObject.domain = valueDeploymentDetailDeployment["Domain"].asString();
		if(!valueDeploymentDetailDeployment["Region"].isNull())
			deploymentDetailObject.region = valueDeploymentDetailDeployment["Region"].asString();
		if(!valueDeploymentDetailDeployment["DeployTime"].isNull())
			deploymentDetailObject.deployTime = std::stol(valueDeploymentDetailDeployment["DeployTime"].asString());
		if(!valueDeploymentDetailDeployment["Id"].isNull())
			deploymentDetailObject.id = std::stol(valueDeploymentDetailDeployment["Id"].asString());
		deploymentDetail_.push_back(deploymentDetailObject);
	}

}

std::vector<DescribeDeploymentDetailResult::Deployment> DescribeDeploymentDetailResult::getDeploymentDetail()const
{
	return deploymentDetail_;
}

