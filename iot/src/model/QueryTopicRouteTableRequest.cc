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

#include <alibabacloud/iot/model/QueryTopicRouteTableRequest.h>

using AlibabaCloud::Iot::Model::QueryTopicRouteTableRequest;

QueryTopicRouteTableRequest::QueryTopicRouteTableRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryTopicRouteTable")
{}

QueryTopicRouteTableRequest::~QueryTopicRouteTableRequest()
{}

std::string QueryTopicRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void QueryTopicRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string QueryTopicRouteTableRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryTopicRouteTableRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

std::string QueryTopicRouteTableRequest::getTopic()const
{
	return topic_;
}

void QueryTopicRouteTableRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", std::to_string(topic));
}

std::string QueryTopicRouteTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTopicRouteTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

