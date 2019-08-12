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

#include <alibabacloud/emr/model/ListJobExecutionPlanParamsRequest.h>

using AlibabaCloud::Emr::Model::ListJobExecutionPlanParamsRequest;

ListJobExecutionPlanParamsRequest::ListJobExecutionPlanParamsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListJobExecutionPlanParams")
{}

ListJobExecutionPlanParamsRequest::~ListJobExecutionPlanParamsRequest()
{}

long ListJobExecutionPlanParamsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListJobExecutionPlanParamsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListJobExecutionPlanParamsRequest::getRelateId()const
{
	return relateId_;
}

void ListJobExecutionPlanParamsRequest::setRelateId(const std::string& relateId)
{
	relateId_ = relateId;
	setCoreParameter("RelateId", std::to_string(relateId));
}

std::string ListJobExecutionPlanParamsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobExecutionPlanParamsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ListJobExecutionPlanParamsRequest::getParamBizType()const
{
	return paramBizType_;
}

void ListJobExecutionPlanParamsRequest::setParamBizType(const std::string& paramBizType)
{
	paramBizType_ = paramBizType;
	setCoreParameter("ParamBizType", std::to_string(paramBizType));
}

