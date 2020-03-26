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

#include <alibabacloud/outboundbot/model/DescribeTagHitsSummaryRequest.h>

using AlibabaCloud::OutboundBot::Model::DescribeTagHitsSummaryRequest;

DescribeTagHitsSummaryRequest::DescribeTagHitsSummaryRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "DescribeTagHitsSummary")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTagHitsSummaryRequest::~DescribeTagHitsSummaryRequest()
{}

std::string DescribeTagHitsSummaryRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeTagHitsSummaryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeTagHitsSummaryRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void DescribeTagHitsSummaryRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

