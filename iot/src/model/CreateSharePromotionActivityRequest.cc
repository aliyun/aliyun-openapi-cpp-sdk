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

#include <alibabacloud/iot/model/CreateSharePromotionActivityRequest.h>

using AlibabaCloud::Iot::Model::CreateSharePromotionActivityRequest;

CreateSharePromotionActivityRequest::CreateSharePromotionActivityRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSharePromotionActivity")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSharePromotionActivityRequest::~CreateSharePromotionActivityRequest()
{}

long CreateSharePromotionActivityRequest::getStartTime()const
{
	return startTime_;
}

void CreateSharePromotionActivityRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

std::string CreateSharePromotionActivityRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSharePromotionActivityRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

long CreateSharePromotionActivityRequest::getEndTime()const
{
	return endTime_;
}

void CreateSharePromotionActivityRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

std::string CreateSharePromotionActivityRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSharePromotionActivityRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSharePromotionActivityRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSharePromotionActivityRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateSharePromotionActivityRequest::getSharePromotionActivityName()const
{
	return sharePromotionActivityName_;
}

void CreateSharePromotionActivityRequest::setSharePromotionActivityName(const std::string& sharePromotionActivityName)
{
	sharePromotionActivityName_ = sharePromotionActivityName;
	setBodyParameter("SharePromotionActivityName", sharePromotionActivityName);
}

