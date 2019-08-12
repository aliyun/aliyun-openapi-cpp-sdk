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

#include <alibabacloud/emr/model/DescribeETLJobStageOutputSchemaRequest.h>

using AlibabaCloud::Emr::Model::DescribeETLJobStageOutputSchemaRequest;

DescribeETLJobStageOutputSchemaRequest::DescribeETLJobStageOutputSchemaRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeETLJobStageOutputSchema")
{}

DescribeETLJobStageOutputSchemaRequest::~DescribeETLJobStageOutputSchemaRequest()
{}

std::string DescribeETLJobStageOutputSchemaRequest::getStageName()const
{
	return stageName_;
}

void DescribeETLJobStageOutputSchemaRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", std::to_string(stageName));
}

long DescribeETLJobStageOutputSchemaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeETLJobStageOutputSchemaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeETLJobStageOutputSchemaRequest::getRegionId()const
{
	return regionId_;
}

void DescribeETLJobStageOutputSchemaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeETLJobStageOutputSchemaRequest::getEtlJobId()const
{
	return etlJobId_;
}

void DescribeETLJobStageOutputSchemaRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", std::to_string(etlJobId));
}

std::string DescribeETLJobStageOutputSchemaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeETLJobStageOutputSchemaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

