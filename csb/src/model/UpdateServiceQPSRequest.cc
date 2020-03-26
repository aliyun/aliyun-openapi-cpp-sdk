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

#include <alibabacloud/csb/model/UpdateServiceQPSRequest.h>

using AlibabaCloud::CSB::Model::UpdateServiceQPSRequest;

UpdateServiceQPSRequest::UpdateServiceQPSRequest() :
	RpcServiceRequest("csb", "2017-11-18", "UpdateServiceQPS")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateServiceQPSRequest::~UpdateServiceQPSRequest()
{}

std::string UpdateServiceQPSRequest::getQps()const
{
	return qps_;
}

void UpdateServiceQPSRequest::setQps(const std::string& qps)
{
	qps_ = qps;
	setParameter("Qps", qps);
}

long UpdateServiceQPSRequest::getServiceId()const
{
	return serviceId_;
}

void UpdateServiceQPSRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", std::to_string(serviceId));
}

