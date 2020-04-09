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

#include <alibabacloud/retailcloud/model/BatchAddServersRequest.h>

using AlibabaCloud::Retailcloud::Model::BatchAddServersRequest;

BatchAddServersRequest::BatchAddServersRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "BatchAddServers")
{
	setMethod(HttpRequest::Method::Post);
}

BatchAddServersRequest::~BatchAddServersRequest()
{}

std::string BatchAddServersRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchAddServersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string BatchAddServersRequest::getRegionId()const
{
	return regionId_;
}

void BatchAddServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string BatchAddServersRequest::getVpcId()const
{
	return vpcId_;
}

void BatchAddServersRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string BatchAddServersRequest::getSign()const
{
	return sign_;
}

void BatchAddServersRequest::setSign(const std::string& sign)
{
	sign_ = sign;
	setParameter("Sign", sign);
}

