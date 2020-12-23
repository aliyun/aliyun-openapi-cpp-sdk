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

#include <alibabacloud/hbase/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::HBase::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyBackupPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest()
{}

std::string ModifyBackupPolicyRequest::getPreferredBackupEndTimeUTC()const
{
	return preferredBackupEndTimeUTC_;
}

void ModifyBackupPolicyRequest::setPreferredBackupEndTimeUTC(const std::string& preferredBackupEndTimeUTC)
{
	preferredBackupEndTimeUTC_ = preferredBackupEndTimeUTC;
	setParameter("PreferredBackupEndTimeUTC", preferredBackupEndTimeUTC);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupStartTimeUTC()const
{
	return preferredBackupStartTimeUTC_;
}

void ModifyBackupPolicyRequest::setPreferredBackupStartTimeUTC(const std::string& preferredBackupStartTimeUTC)
{
	preferredBackupStartTimeUTC_ = preferredBackupStartTimeUTC;
	setParameter("PreferredBackupStartTimeUTC", preferredBackupStartTimeUTC);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string& preferredBackupPeriod)
{
	preferredBackupPeriod_ = preferredBackupPeriod;
	setParameter("PreferredBackupPeriod", preferredBackupPeriod);
}

std::string ModifyBackupPolicyRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyBackupPolicyRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setParameter("PreferredBackupTime", preferredBackupTime);
}

