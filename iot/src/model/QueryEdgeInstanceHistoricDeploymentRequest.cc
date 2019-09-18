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

#include <alibabacloud/iot/model/QueryEdgeInstanceHistoricDeploymentRequest.h>

using AlibabaCloud::Iot::Model::QueryEdgeInstanceHistoricDeploymentRequest;

QueryEdgeInstanceHistoricDeploymentRequest::QueryEdgeInstanceHistoricDeploymentRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryEdgeInstanceHistoricDeployment")
{}

QueryEdgeInstanceHistoricDeploymentRequest::~QueryEdgeInstanceHistoricDeploymentRequest()
{}

long QueryEdgeInstanceHistoricDeploymentRequest::getEndTime()const
{
	return endTime_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

int QueryEdgeInstanceHistoricDeploymentRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long QueryEdgeInstanceHistoricDeploymentRequest::getStartTime()const
{
	return startTime_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryEdgeInstanceHistoricDeploymentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryEdgeInstanceHistoricDeploymentRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryEdgeInstanceHistoricDeploymentRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryEdgeInstanceHistoricDeploymentRequest::getPageSize()const
{
	return pageSize_;
}

void QueryEdgeInstanceHistoricDeploymentRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

