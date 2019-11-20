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

#include <alibabacloud/iot/model/QueryEdgeInstanceGatewayRequest.h>

using AlibabaCloud::Iot::Model::QueryEdgeInstanceGatewayRequest;

QueryEdgeInstanceGatewayRequest::QueryEdgeInstanceGatewayRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryEdgeInstanceGateway")
{
	setMethod(HttpRequest::Method::Post);
}

QueryEdgeInstanceGatewayRequest::~QueryEdgeInstanceGatewayRequest()
{}

std::string QueryEdgeInstanceGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryEdgeInstanceGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryEdgeInstanceGatewayRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryEdgeInstanceGatewayRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryEdgeInstanceGatewayRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryEdgeInstanceGatewayRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

