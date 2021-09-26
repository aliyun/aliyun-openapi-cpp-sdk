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

#include <alibabacloud/sddp/model/BatchDeleteDataLimitRequest.h>

using AlibabaCloud::Sddp::Model::BatchDeleteDataLimitRequest;

BatchDeleteDataLimitRequest::BatchDeleteDataLimitRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "BatchDeleteDataLimit")
{
	setMethod(HttpRequest::Method::Post);
}

BatchDeleteDataLimitRequest::~BatchDeleteDataLimitRequest()
{}

long BatchDeleteDataLimitRequest::getResourceType()const
{
	return resourceType_;
}

void BatchDeleteDataLimitRequest::setResourceType(long resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", std::to_string(resourceType));
}

std::string BatchDeleteDataLimitRequest::getSourceIp()const
{
	return sourceIp_;
}

void BatchDeleteDataLimitRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string BatchDeleteDataLimitRequest::getDataLimitList()const
{
	return dataLimitList_;
}

void BatchDeleteDataLimitRequest::setDataLimitList(const std::string& dataLimitList)
{
	dataLimitList_ = dataLimitList;
	setParameter("DataLimitList", dataLimitList);
}

