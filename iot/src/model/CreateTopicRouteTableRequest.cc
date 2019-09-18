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

#include <alibabacloud/iot/model/CreateTopicRouteTableRequest.h>

using AlibabaCloud::Iot::Model::CreateTopicRouteTableRequest;

CreateTopicRouteTableRequest::CreateTopicRouteTableRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateTopicRouteTable")
{}

CreateTopicRouteTableRequest::~CreateTopicRouteTableRequest()
{}

std::vector<std::string> CreateTopicRouteTableRequest::getDstTopic()const
{
	return dstTopic_;
}

void CreateTopicRouteTableRequest::setDstTopic(const std::vector<std::string>& dstTopic)
{
	dstTopic_ = dstTopic;
	for(int i = 0; i!= dstTopic.size(); i++)
		setCoreParameter("DstTopic."+ std::to_string(i), dstTopic.at(i));
}

std::string CreateTopicRouteTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTopicRouteTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateTopicRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void CreateTopicRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateTopicRouteTableRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateTopicRouteTableRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateTopicRouteTableRequest::getSrcTopic()const
{
	return srcTopic_;
}

void CreateTopicRouteTableRequest::setSrcTopic(const std::string& srcTopic)
{
	srcTopic_ = srcTopic;
	setCoreParameter("SrcTopic", srcTopic);
}

