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

#include <alibabacloud/iot/model/CountSpeechBroadcastHourRequest.h>

using AlibabaCloud::Iot::Model::CountSpeechBroadcastHourRequest;

CountSpeechBroadcastHourRequest::CountSpeechBroadcastHourRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CountSpeechBroadcastHour")
{
	setMethod(HttpRequest::Method::Post);
}

CountSpeechBroadcastHourRequest::~CountSpeechBroadcastHourRequest()
{}

std::string CountSpeechBroadcastHourRequest::getQueryDateTimeHour()const
{
	return queryDateTimeHour_;
}

void CountSpeechBroadcastHourRequest::setQueryDateTimeHour(const std::string& queryDateTimeHour)
{
	queryDateTimeHour_ = queryDateTimeHour;
	setParameter("QueryDateTimeHour", queryDateTimeHour);
}

std::string CountSpeechBroadcastHourRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CountSpeechBroadcastHourRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CountSpeechBroadcastHourRequest::getShareTaskCode()const
{
	return shareTaskCode_;
}

void CountSpeechBroadcastHourRequest::setShareTaskCode(const std::string& shareTaskCode)
{
	shareTaskCode_ = shareTaskCode;
	setBodyParameter("ShareTaskCode", shareTaskCode);
}

std::string CountSpeechBroadcastHourRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountSpeechBroadcastHourRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountSpeechBroadcastHourRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountSpeechBroadcastHourRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

