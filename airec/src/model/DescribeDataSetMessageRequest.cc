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

#include <alibabacloud/airec/model/DescribeDataSetMessageRequest.h>

using AlibabaCloud::Airec::Model::DescribeDataSetMessageRequest;

DescribeDataSetMessageRequest::DescribeDataSetMessageRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/dataSets/[versionId]/messages");
	setMethod(HttpRequest::Method::Get);
}

DescribeDataSetMessageRequest::~DescribeDataSetMessageRequest()
{}

std::string DescribeDataSetMessageRequest::getVersionId()const
{
	return versionId_;
}

void DescribeDataSetMessageRequest::setVersionId(const std::string& versionId)
{
	versionId_ = versionId;
	setParameter("VersionId", versionId);
}

std::string DescribeDataSetMessageRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDataSetMessageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

