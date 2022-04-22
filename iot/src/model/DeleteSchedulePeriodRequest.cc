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

#include <alibabacloud/iot/model/DeleteSchedulePeriodRequest.h>

using AlibabaCloud::Iot::Model::DeleteSchedulePeriodRequest;

DeleteSchedulePeriodRequest::DeleteSchedulePeriodRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteSchedulePeriod")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSchedulePeriodRequest::~DeleteSchedulePeriodRequest()
{}

std::string DeleteSchedulePeriodRequest::getPeriodCode()const
{
	return periodCode_;
}

void DeleteSchedulePeriodRequest::setPeriodCode(const std::string& periodCode)
{
	periodCode_ = periodCode;
	setBodyParameter("PeriodCode", periodCode);
}

std::string DeleteSchedulePeriodRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteSchedulePeriodRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteSchedulePeriodRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteSchedulePeriodRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteSchedulePeriodRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteSchedulePeriodRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

