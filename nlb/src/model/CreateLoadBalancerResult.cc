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

#include <alibabacloud/nlb/model/CreateLoadBalancerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

CreateLoadBalancerResult::CreateLoadBalancerResult() :
	ServiceResult()
{}

CreateLoadBalancerResult::CreateLoadBalancerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateLoadBalancerResult::~CreateLoadBalancerResult()
{}

void CreateLoadBalancerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["LoadbalancerId"].isNull())
		loadbalancerId_ = value["LoadbalancerId"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

std::string CreateLoadBalancerResult::getMessage()const
{
	return message_;
}

int CreateLoadBalancerResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateLoadBalancerResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string CreateLoadBalancerResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string CreateLoadBalancerResult::getLoadbalancerId()const
{
	return loadbalancerId_;
}

long CreateLoadBalancerResult::getOrderId()const
{
	return orderId_;
}

std::string CreateLoadBalancerResult::getCode()const
{
	return code_;
}

bool CreateLoadBalancerResult::getSuccess()const
{
	return success_;
}

std::string CreateLoadBalancerResult::getJobId()const
{
	return jobId_;
}

