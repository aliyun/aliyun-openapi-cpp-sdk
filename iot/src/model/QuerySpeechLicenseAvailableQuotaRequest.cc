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

#include <alibabacloud/iot/model/QuerySpeechLicenseAvailableQuotaRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechLicenseAvailableQuotaRequest;

QuerySpeechLicenseAvailableQuotaRequest::QuerySpeechLicenseAvailableQuotaRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechLicenseAvailableQuota")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechLicenseAvailableQuotaRequest::~QuerySpeechLicenseAvailableQuotaRequest()
{}

std::string QuerySpeechLicenseAvailableQuotaRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechLicenseAvailableQuotaRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string QuerySpeechLicenseAvailableQuotaRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechLicenseAvailableQuotaRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechLicenseAvailableQuotaRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechLicenseAvailableQuotaRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

