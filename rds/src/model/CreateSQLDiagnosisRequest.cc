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

#include <alibabacloud/rds/model/CreateSQLDiagnosisRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateSQLDiagnosisRequest::CreateSQLDiagnosisRequest() :
	RdsRequest("CreateSQLDiagnosis")
{}

CreateSQLDiagnosisRequest::~CreateSQLDiagnosisRequest()
{}

std::string CreateSQLDiagnosisRequest::getEndTime()const
{
	return endTime_;
}

void CreateSQLDiagnosisRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string CreateSQLDiagnosisRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateSQLDiagnosisRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateSQLDiagnosisRequest::getStartTime()const
{
	return startTime_;
}

void CreateSQLDiagnosisRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string CreateSQLDiagnosisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSQLDiagnosisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

