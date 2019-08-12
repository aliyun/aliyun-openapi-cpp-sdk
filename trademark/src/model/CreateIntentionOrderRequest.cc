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

#include <alibabacloud/trademark/model/CreateIntentionOrderRequest.h>

using AlibabaCloud::Trademark::Model::CreateIntentionOrderRequest;

CreateIntentionOrderRequest::CreateIntentionOrderRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "CreateIntentionOrder")
{}

CreateIntentionOrderRequest::~CreateIntentionOrderRequest()
{}

std::string CreateIntentionOrderRequest::getChannel()const
{
	return channel_;
}

void CreateIntentionOrderRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

std::string CreateIntentionOrderRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void CreateIntentionOrderRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setCoreParameter("IntentionBizId", intentionBizId);
}

