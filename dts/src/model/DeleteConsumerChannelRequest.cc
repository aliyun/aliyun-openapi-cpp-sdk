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

#include <alibabacloud/dts/model/DeleteConsumerChannelRequest.h>

using AlibabaCloud::Dts::Model::DeleteConsumerChannelRequest;

DeleteConsumerChannelRequest::DeleteConsumerChannelRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DeleteConsumerChannel")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteConsumerChannelRequest::~DeleteConsumerChannelRequest()
{}

std::string DeleteConsumerChannelRequest::getConsumerGroupId()const
{
	return consumerGroupId_;
}

void DeleteConsumerChannelRequest::setConsumerGroupId(const std::string& consumerGroupId)
{
	consumerGroupId_ = consumerGroupId;
	setParameter("ConsumerGroupId", consumerGroupId);
}

std::string DeleteConsumerChannelRequest::getRegionId()const
{
	return regionId_;
}

void DeleteConsumerChannelRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteConsumerChannelRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void DeleteConsumerChannelRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string DeleteConsumerChannelRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void DeleteConsumerChannelRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

