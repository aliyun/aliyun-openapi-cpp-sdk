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

#include <alibabacloud/market/model/CreateCommodityRequest.h>

using AlibabaCloud::Market::Model::CreateCommodityRequest;

CreateCommodityRequest::CreateCommodityRequest() :
	RpcServiceRequest("market", "2015-11-01", "CreateCommodity")
{}

CreateCommodityRequest::~CreateCommodityRequest()
{}

std::string CreateCommodityRequest::getApplicationId()const
{
	return applicationId_;
}

void CreateCommodityRequest::setApplicationId(const std::string& applicationId)
{
	applicationId_ = applicationId;
	setCoreParameter("ApplicationId", applicationId);
}

std::string CreateCommodityRequest::getContent()const
{
	return content_;
}

void CreateCommodityRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", content);
}

