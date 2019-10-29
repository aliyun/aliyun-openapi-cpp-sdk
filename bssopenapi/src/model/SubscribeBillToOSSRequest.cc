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

#include <alibabacloud/bssopenapi/model/SubscribeBillToOSSRequest.h>

using AlibabaCloud::BssOpenApi::Model::SubscribeBillToOSSRequest;

SubscribeBillToOSSRequest::SubscribeBillToOSSRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SubscribeBillToOSS")
{
	setMethod(HttpRequest::Method::Post);
}

SubscribeBillToOSSRequest::~SubscribeBillToOSSRequest()
{}

long SubscribeBillToOSSRequest::getBucketOwnerId()const
{
	return bucketOwnerId_;
}

void SubscribeBillToOSSRequest::setBucketOwnerId(long bucketOwnerId)
{
	bucketOwnerId_ = bucketOwnerId;
	setCoreParameter("BucketOwnerId", std::to_string(bucketOwnerId));
}

std::string SubscribeBillToOSSRequest::getSubscribeType()const
{
	return subscribeType_;
}

void SubscribeBillToOSSRequest::setSubscribeType(const std::string& subscribeType)
{
	subscribeType_ = subscribeType;
	setCoreParameter("SubscribeType", subscribeType);
}

std::string SubscribeBillToOSSRequest::getSubscribeBucket()const
{
	return subscribeBucket_;
}

void SubscribeBillToOSSRequest::setSubscribeBucket(const std::string& subscribeBucket)
{
	subscribeBucket_ = subscribeBucket;
	setCoreParameter("SubscribeBucket", subscribeBucket);
}

std::string SubscribeBillToOSSRequest::getMultAccountRelSubscribe()const
{
	return multAccountRelSubscribe_;
}

void SubscribeBillToOSSRequest::setMultAccountRelSubscribe(const std::string& multAccountRelSubscribe)
{
	multAccountRelSubscribe_ = multAccountRelSubscribe;
	setCoreParameter("MultAccountRelSubscribe", multAccountRelSubscribe);
}

