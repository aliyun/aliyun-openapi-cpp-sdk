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

#include <alibabacloud/rds/model/LoginDBInstancefromCloudDBARequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

LoginDBInstancefromCloudDBARequest::LoginDBInstancefromCloudDBARequest() :
	RdsRequest("LoginDBInstancefromCloudDBA")
{}

LoginDBInstancefromCloudDBARequest::~LoginDBInstancefromCloudDBARequest()
{}

std::string LoginDBInstancefromCloudDBARequest::getServiceRequestParam()const
{
	return serviceRequestParam_;
}

void LoginDBInstancefromCloudDBARequest::setServiceRequestParam(const std::string& serviceRequestParam)
{
	serviceRequestParam_ = serviceRequestParam;
	setParameter("ServiceRequestParam", serviceRequestParam);
}

std::string LoginDBInstancefromCloudDBARequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void LoginDBInstancefromCloudDBARequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string LoginDBInstancefromCloudDBARequest::getServiceRequestType()const
{
	return serviceRequestType_;
}

void LoginDBInstancefromCloudDBARequest::setServiceRequestType(const std::string& serviceRequestType)
{
	serviceRequestType_ = serviceRequestType;
	setParameter("ServiceRequestType", serviceRequestType);
}

std::string LoginDBInstancefromCloudDBARequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void LoginDBInstancefromCloudDBARequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

