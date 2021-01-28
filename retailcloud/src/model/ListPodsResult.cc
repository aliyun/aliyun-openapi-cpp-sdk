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

#include <alibabacloud/retailcloud/model/ListPodsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListPodsResult::ListPodsResult() :
	ServiceResult()
{}

ListPodsResult::ListPodsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPodsResult::~ListPodsResult()
{}

void ListPodsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PodDetail"];
	for (auto valueDataPodDetail : allDataNode)
	{
		PodDetail dataObject;
		if(!valueDataPodDetail["AppInstanceId"].isNull())
			dataObject.appInstanceId = valueDataPodDetail["AppInstanceId"].asString();
		if(!valueDataPodDetail["DeployOrderId"].isNull())
			dataObject.deployOrderId = std::stol(valueDataPodDetail["DeployOrderId"].asString());
		if(!valueDataPodDetail["DeployPartitionNum"].isNull())
			dataObject.deployPartitionNum = std::stoi(valueDataPodDetail["DeployPartitionNum"].asString());
		if(!valueDataPodDetail["GroupName"].isNull())
			dataObject.groupName = valueDataPodDetail["GroupName"].asString();
		if(!valueDataPodDetail["HostIp"].isNull())
			dataObject.hostIp = valueDataPodDetail["HostIp"].asString();
		if(!valueDataPodDetail["HostName"].isNull())
			dataObject.hostName = valueDataPodDetail["HostName"].asString();
		if(!valueDataPodDetail["PodIp"].isNull())
			dataObject.podIp = valueDataPodDetail["PodIp"].asString();
		if(!valueDataPodDetail["Region"].isNull())
			dataObject.region = valueDataPodDetail["Region"].asString();
		if(!valueDataPodDetail["Result"].isNull())
			dataObject.result = std::stoi(valueDataPodDetail["Result"].asString());
		if(!valueDataPodDetail["ResultName"].isNull())
			dataObject.resultName = valueDataPodDetail["ResultName"].asString();
		if(!valueDataPodDetail["StartTime"].isNull())
			dataObject.startTime = valueDataPodDetail["StartTime"].asString();
		if(!valueDataPodDetail["Status"].isNull())
			dataObject.status = std::stoi(valueDataPodDetail["Status"].asString());
		if(!valueDataPodDetail["StatusName"].isNull())
			dataObject.statusName = valueDataPodDetail["StatusName"].asString();
		if(!valueDataPodDetail["UpdateTime"].isNull())
			dataObject.updateTime = valueDataPodDetail["UpdateTime"].asString();
		auto allDeployStepsNode = valueDataPodDetail["DeploySteps"]["DeployStep"];
		for (auto valueDataPodDetailDeployStepsDeployStep : allDeployStepsNode)
		{
			PodDetail::DeployStep deployStepsObject;
			if(!valueDataPodDetailDeployStepsDeployStep["Status"].isNull())
				deployStepsObject.status = valueDataPodDetailDeployStepsDeployStep["Status"].asString();
			if(!valueDataPodDetailDeployStepsDeployStep["StepCode"].isNull())
				deployStepsObject.stepCode = valueDataPodDetailDeployStepsDeployStep["StepCode"].asString();
			if(!valueDataPodDetailDeployStepsDeployStep["StepName"].isNull())
				deployStepsObject.stepName = valueDataPodDetailDeployStepsDeployStep["StepName"].asString();
			dataObject.deploySteps.push_back(deployStepsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListPodsResult::getTotalCount()const
{
	return totalCount_;
}

int ListPodsResult::getPageSize()const
{
	return pageSize_;
}

int ListPodsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListPodsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListPodsResult::PodDetail> ListPodsResult::getData()const
{
	return data_;
}

int ListPodsResult::getCode()const
{
	return code_;
}

