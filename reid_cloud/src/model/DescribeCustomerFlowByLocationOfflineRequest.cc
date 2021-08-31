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

#include <alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationOfflineRequest.h>

using AlibabaCloud::Reid_cloud::Model::DescribeCustomerFlowByLocationOfflineRequest;

DescribeCustomerFlowByLocationOfflineRequest::DescribeCustomerFlowByLocationOfflineRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "DescribeCustomerFlowByLocationOffline")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCustomerFlowByLocationOfflineRequest::~DescribeCustomerFlowByLocationOfflineRequest()
{}

std::string DescribeCustomerFlowByLocationOfflineRequest::getStartDate()const
{
	return startDate_;
}

void DescribeCustomerFlowByLocationOfflineRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

long DescribeCustomerFlowByLocationOfflineRequest::getStoreId()const
{
	return storeId_;
}

void DescribeCustomerFlowByLocationOfflineRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

