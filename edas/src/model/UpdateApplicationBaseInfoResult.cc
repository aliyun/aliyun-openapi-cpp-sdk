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

#include <alibabacloud/edas/model/UpdateApplicationBaseInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

UpdateApplicationBaseInfoResult::UpdateApplicationBaseInfoResult() :
	ServiceResult()
{}

UpdateApplicationBaseInfoResult::UpdateApplicationBaseInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateApplicationBaseInfoResult::~UpdateApplicationBaseInfoResult()
{}

void UpdateApplicationBaseInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applcationNode = value["Applcation"];
	if(!applcationNode["AppId"].isNull())
		applcation_.appId = applcationNode["AppId"].asString();
	if(!applcationNode["Name"].isNull())
		applcation_.name = applcationNode["Name"].asString();
	if(!applcationNode["RegionId"].isNull())
		applcation_.regionId = applcationNode["RegionId"].asString();
	if(!applcationNode["Description"].isNull())
		applcation_.description = applcationNode["Description"].asString();
	if(!applcationNode["Owner"].isNull())
		applcation_.owner = applcationNode["Owner"].asString();
	if(!applcationNode["InstanceCount"].isNull())
		applcation_.instanceCount = std::stoi(applcationNode["InstanceCount"].asString());
	if(!applcationNode["RunningInstanceCount"].isNull())
		applcation_.runningInstanceCount = std::stoi(applcationNode["RunningInstanceCount"].asString());
	if(!applcationNode["Port"].isNull())
		applcation_.port = std::stoi(applcationNode["Port"].asString());
	if(!applcationNode["UserId"].isNull())
		applcation_.userId = applcationNode["UserId"].asString();
	if(!applcationNode["SlbId"].isNull())
		applcation_.slbId = applcationNode["SlbId"].asString();
	if(!applcationNode["SlbIp"].isNull())
		applcation_.slbIp = applcationNode["SlbIp"].asString();
	if(!applcationNode["SlbPort"].isNull())
		applcation_.slbPort = std::stoi(applcationNode["SlbPort"].asString());
	if(!applcationNode["ExtSlbId"].isNull())
		applcation_.extSlbId = applcationNode["ExtSlbId"].asString();
	if(!applcationNode["ExtSlbIp"].isNull())
		applcation_.extSlbIp = applcationNode["ExtSlbIp"].asString();
	if(!applcationNode["SlbName"].isNull())
		applcation_.slbName = applcationNode["SlbName"].asString();
	if(!applcationNode["ExtSlbName"].isNull())
		applcation_.extSlbName = applcationNode["ExtSlbName"].asString();
	if(!applcationNode["ApplicationType"].isNull())
		applcation_.applicationType = applcationNode["ApplicationType"].asString();
	if(!applcationNode["ClusterType"].isNull())
		applcation_.clusterType = std::stoi(applcationNode["ClusterType"].asString());
	if(!applcationNode["ClusterId"].isNull())
		applcation_.clusterId = applcationNode["ClusterId"].asString();
	if(!applcationNode["Dockerize"].isNull())
		applcation_.dockerize = applcationNode["Dockerize"].asString() == "true";
	if(!applcationNode["Cpu"].isNull())
		applcation_.cpu = std::stoi(applcationNode["Cpu"].asString());
	if(!applcationNode["Memory"].isNull())
		applcation_.memory = std::stoi(applcationNode["Memory"].asString());
	if(!applcationNode["HealthCheckUrl"].isNull())
		applcation_.healthCheckUrl = applcationNode["HealthCheckUrl"].asString();
	if(!applcationNode["BuildPackageId"].isNull())
		applcation_.buildPackageId = std::stol(applcationNode["BuildPackageId"].asString());
	if(!applcationNode["CreateTime"].isNull())
		applcation_.createTime = std::stol(applcationNode["CreateTime"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateApplicationBaseInfoResult::getMessage()const
{
	return message_;
}

UpdateApplicationBaseInfoResult::Applcation UpdateApplicationBaseInfoResult::getApplcation()const
{
	return applcation_;
}

int UpdateApplicationBaseInfoResult::getCode()const
{
	return code_;
}

