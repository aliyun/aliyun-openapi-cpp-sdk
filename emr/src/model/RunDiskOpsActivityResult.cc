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

#include <alibabacloud/emr/model/RunDiskOpsActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

RunDiskOpsActivityResult::RunDiskOpsActivityResult() :
	ServiceResult()
{}

RunDiskOpsActivityResult::RunDiskOpsActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RunDiskOpsActivityResult::~RunDiskOpsActivityResult()
{}

void RunDiskOpsActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ClusterType"].isNull())
		clusterType_ = value["ClusterType"].asString();
	if(!value["CurrentActivity"].isNull())
		currentActivity_ = value["CurrentActivity"].asString();
	if(!value["ActivityState"].isNull())
		activityState_ = value["ActivityState"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["NeedReboot"].isNull())
		needReboot_ = value["NeedReboot"].asString() == "true";

}

std::string RunDiskOpsActivityResult::getActivityState()const
{
	return activityState_;
}

std::string RunDiskOpsActivityResult::getCurrentActivity()const
{
	return currentActivity_;
}

std::string RunDiskOpsActivityResult::getClusterType()const
{
	return clusterType_;
}

bool RunDiskOpsActivityResult::getNeedReboot()const
{
	return needReboot_;
}

std::string RunDiskOpsActivityResult::getErrorMessage()const
{
	return errorMessage_;
}

