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

#include <alibabacloud/iot/model/QuerySharePromotionActivityAuditResultRequest.h>

using AlibabaCloud::Iot::Model::QuerySharePromotionActivityAuditResultRequest;

QuerySharePromotionActivityAuditResultRequest::QuerySharePromotionActivityAuditResultRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySharePromotionActivityAuditResult")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySharePromotionActivityAuditResultRequest::~QuerySharePromotionActivityAuditResultRequest()
{}

std::string QuerySharePromotionActivityAuditResultRequest::getSharePromotionActivityId()const
{
	return sharePromotionActivityId_;
}

void QuerySharePromotionActivityAuditResultRequest::setSharePromotionActivityId(const std::string& sharePromotionActivityId)
{
	sharePromotionActivityId_ = sharePromotionActivityId;
	setBodyParameter("SharePromotionActivityId", sharePromotionActivityId);
}

std::string QuerySharePromotionActivityAuditResultRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySharePromotionActivityAuditResultRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string QuerySharePromotionActivityAuditResultRequest::getShareTaskCode()const
{
	return shareTaskCode_;
}

void QuerySharePromotionActivityAuditResultRequest::setShareTaskCode(const std::string& shareTaskCode)
{
	shareTaskCode_ = shareTaskCode;
	setBodyParameter("ShareTaskCode", shareTaskCode);
}

std::string QuerySharePromotionActivityAuditResultRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySharePromotionActivityAuditResultRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySharePromotionActivityAuditResultRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySharePromotionActivityAuditResultRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

