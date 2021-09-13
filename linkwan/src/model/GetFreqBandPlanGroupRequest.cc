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

#include <alibabacloud/linkwan/model/GetFreqBandPlanGroupRequest.h>

using AlibabaCloud::LinkWAN::Model::GetFreqBandPlanGroupRequest;

GetFreqBandPlanGroupRequest::GetFreqBandPlanGroupRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetFreqBandPlanGroup")
{
	setMethod(HttpRequest::Method::Post);
}

GetFreqBandPlanGroupRequest::~GetFreqBandPlanGroupRequest()
{}

long GetFreqBandPlanGroupRequest::getGroupId()const
{
	return groupId_;
}

void GetFreqBandPlanGroupRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string GetFreqBandPlanGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetFreqBandPlanGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetFreqBandPlanGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetFreqBandPlanGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

