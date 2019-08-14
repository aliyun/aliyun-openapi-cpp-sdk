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

#include <alibabacloud/rds/model/RequestServiceOfCloudDBExpertRequest.h>

using AlibabaCloud::Rds::Model::RequestServiceOfCloudDBExpertRequest;

RequestServiceOfCloudDBExpertRequest::RequestServiceOfCloudDBExpertRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RequestServiceOfCloudDBExpert")
{}

RequestServiceOfCloudDBExpertRequest::~RequestServiceOfCloudDBExpertRequest()
{}

std::string RequestServiceOfCloudDBExpertRequest::getServiceRequestParam()const
{
	return serviceRequestParam_;
}

void RequestServiceOfCloudDBExpertRequest::setServiceRequestParam(const std::string& serviceRequestParam)
{
	serviceRequestParam_ = serviceRequestParam;
	setCoreParameter("ServiceRequestParam", serviceRequestParam);
}

std::string RequestServiceOfCloudDBExpertRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RequestServiceOfCloudDBExpertRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string RequestServiceOfCloudDBExpertRequest::getServiceRequestType()const
{
	return serviceRequestType_;
}

void RequestServiceOfCloudDBExpertRequest::setServiceRequestType(const std::string& serviceRequestType)
{
	serviceRequestType_ = serviceRequestType;
	setCoreParameter("ServiceRequestType", serviceRequestType);
}

std::string RequestServiceOfCloudDBExpertRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RequestServiceOfCloudDBExpertRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

