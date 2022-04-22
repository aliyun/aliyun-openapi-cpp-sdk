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

#include <alibabacloud/iot/model/QuerySchedulePeriodListRequest.h>

using AlibabaCloud::Iot::Model::QuerySchedulePeriodListRequest;

QuerySchedulePeriodListRequest::QuerySchedulePeriodListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySchedulePeriodList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySchedulePeriodListRequest::~QuerySchedulePeriodListRequest()
{}

std::string QuerySchedulePeriodListRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void QuerySchedulePeriodListRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

int QuerySchedulePeriodListRequest::getPageId()const
{
	return pageId_;
}

void QuerySchedulePeriodListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySchedulePeriodListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySchedulePeriodListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySchedulePeriodListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySchedulePeriodListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySchedulePeriodListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySchedulePeriodListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySchedulePeriodListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySchedulePeriodListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

