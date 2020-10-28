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

#include <alibabacloud/drds/model/SubmitSwitchTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitSwitchTaskRequest;

SubmitSwitchTaskRequest::SubmitSwitchTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitSwitchTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSwitchTaskRequest::~SubmitSwitchTaskRequest()
{}

std::string SubmitSwitchTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitSwitchTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitSwitchTaskRequest::getExpandType()const
{
	return expandType_;
}

void SubmitSwitchTaskRequest::setExpandType(const std::string& expandType)
{
	expandType_ = expandType;
	setParameter("ExpandType", expandType);
}

std::string SubmitSwitchTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSwitchTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitSwitchTaskRequest::getJobId()const
{
	return jobId_;
}

void SubmitSwitchTaskRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string SubmitSwitchTaskRequest::getDbName()const
{
	return dbName_;
}

void SubmitSwitchTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string SubmitSwitchTaskRequest::getParentJobId()const
{
	return parentJobId_;
}

void SubmitSwitchTaskRequest::setParentJobId(const std::string& parentJobId)
{
	parentJobId_ = parentJobId;
	setParameter("ParentJobId", parentJobId);
}

