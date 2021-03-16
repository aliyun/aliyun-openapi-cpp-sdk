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

#include <alibabacloud/reid_cloud/model/DescribeHeatMapRequest.h>

using AlibabaCloud::Reid_cloud::Model::DescribeHeatMapRequest;

DescribeHeatMapRequest::DescribeHeatMapRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "DescribeHeatMap")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHeatMapRequest::~DescribeHeatMapRequest()
{}

std::string DescribeHeatMapRequest::getDate()const
{
	return date_;
}

void DescribeHeatMapRequest::setDate(const std::string& date)
{
	date_ = date;
	setBodyParameter("Date", date);
}

long DescribeHeatMapRequest::getStoreId()const
{
	return storeId_;
}

void DescribeHeatMapRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long DescribeHeatMapRequest::getEmapId()const
{
	return emapId_;
}

void DescribeHeatMapRequest::setEmapId(long emapId)
{
	emapId_ = emapId;
	setBodyParameter("EmapId", std::to_string(emapId));
}

