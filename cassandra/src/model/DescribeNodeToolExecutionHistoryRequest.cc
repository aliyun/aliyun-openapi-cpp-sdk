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

#include <alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoryRequest.h>

using AlibabaCloud::Cassandra::Model::DescribeNodeToolExecutionHistoryRequest;

DescribeNodeToolExecutionHistoryRequest::DescribeNodeToolExecutionHistoryRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DescribeNodeToolExecutionHistory")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNodeToolExecutionHistoryRequest::~DescribeNodeToolExecutionHistoryRequest()
{}

std::string DescribeNodeToolExecutionHistoryRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeNodeToolExecutionHistoryRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeNodeToolExecutionHistoryRequest::getJobId()const
{
	return jobId_;
}

void DescribeNodeToolExecutionHistoryRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DescribeNodeToolExecutionHistoryRequest::getDcId()const
{
	return dcId_;
}

void DescribeNodeToolExecutionHistoryRequest::setDcId(const std::string& dcId)
{
	dcId_ = dcId;
	setParameter("DcId", dcId);
}

