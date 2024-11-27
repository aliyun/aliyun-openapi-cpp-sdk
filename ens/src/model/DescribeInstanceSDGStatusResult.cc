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

#include <alibabacloud/ens/model/DescribeInstanceSDGStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeInstanceSDGStatusResult::DescribeInstanceSDGStatusResult() :
	ServiceResult()
{}

DescribeInstanceSDGStatusResult::DescribeInstanceSDGStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSDGStatusResult::~DescribeInstanceSDGStatusResult()
{}

void DescribeInstanceSDGStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeploymentStatusNode = value["DeploymentStatus"]["DeploymentStatusItem"];
	for (auto valueDeploymentStatusDeploymentStatusItem : allDeploymentStatusNode)
	{
		DeploymentStatusItem deploymentStatusObject;
		if(!valueDeploymentStatusDeploymentStatusItem["InstanceId"].isNull())
			deploymentStatusObject.instanceId = valueDeploymentStatusDeploymentStatusItem["InstanceId"].asString();
		if(!valueDeploymentStatusDeploymentStatusItem["SDGId"].isNull())
			deploymentStatusObject.sDGId = valueDeploymentStatusDeploymentStatusItem["SDGId"].asString();
		if(!valueDeploymentStatusDeploymentStatusItem["MountType"].isNull())
			deploymentStatusObject.mountType = valueDeploymentStatusDeploymentStatusItem["MountType"].asString();
		if(!valueDeploymentStatusDeploymentStatusItem["EnsRegionId"].isNull())
			deploymentStatusObject.ensRegionId = valueDeploymentStatusDeploymentStatusItem["EnsRegionId"].asString();
		if(!valueDeploymentStatusDeploymentStatusItem["Status"].isNull())
			deploymentStatusObject.status = valueDeploymentStatusDeploymentStatusItem["Status"].asString();
		if(!valueDeploymentStatusDeploymentStatusItem["Phase"].isNull())
			deploymentStatusObject.phase = valueDeploymentStatusDeploymentStatusItem["Phase"].asString();
		if(!valueDeploymentStatusDeploymentStatusItem["UpdateTime"].isNull())
			deploymentStatusObject.updateTime = valueDeploymentStatusDeploymentStatusItem["UpdateTime"].asString();
		deploymentStatus_.push_back(deploymentStatusObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string DescribeInstanceSDGStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeInstanceSDGStatusResult::getPageSize()const
{
	return pageSize_;
}

long DescribeInstanceSDGStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceSDGStatusResult::DeploymentStatusItem> DescribeInstanceSDGStatusResult::getDeploymentStatus()const
{
	return deploymentStatus_;
}

