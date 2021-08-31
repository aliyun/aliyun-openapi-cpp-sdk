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

#include <alibabacloud/edas/model/GetApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetApplicationResult::GetApplicationResult() :
	ServiceResult()
{}

GetApplicationResult::GetApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationResult::~GetApplicationResult()
{}

void GetApplicationResult::parse(const std::string &payload)
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
	if(!applcationNode["NameSpace"].isNull())
		applcation_._nameSpace = applcationNode["NameSpace"].asString();
	if(!applcationNode["SlbInfo"].isNull())
		applcation_.slbInfo = applcationNode["SlbInfo"].asString();
	if(!applcationNode["Email"].isNull())
		applcation_.email = applcationNode["Email"].asString();
	auto applicationNode = value["Application"];
	if(!applicationNode["AppId"].isNull())
		application_.appId = applicationNode["AppId"].asString();
	if(!applicationNode["Name"].isNull())
		application_.name = applicationNode["Name"].asString();
	if(!applicationNode["RegionId"].isNull())
		application_.regionId = applicationNode["RegionId"].asString();
	if(!applicationNode["Description"].isNull())
		application_.description = applicationNode["Description"].asString();
	if(!applicationNode["Owner"].isNull())
		application_.owner = applicationNode["Owner"].asString();
	if(!applicationNode["InstanceCount"].isNull())
		application_.instanceCount = std::stoi(applicationNode["InstanceCount"].asString());
	if(!applicationNode["RunningInstanceCount"].isNull())
		application_.runningInstanceCount = std::stoi(applicationNode["RunningInstanceCount"].asString());
	if(!applicationNode["Port"].isNull())
		application_.port = std::stoi(applicationNode["Port"].asString());
	if(!applicationNode["UserId"].isNull())
		application_.userId = applicationNode["UserId"].asString();
	if(!applicationNode["SlbId"].isNull())
		application_.slbId = applicationNode["SlbId"].asString();
	if(!applicationNode["SlbIp"].isNull())
		application_.slbIp = applicationNode["SlbIp"].asString();
	if(!applicationNode["SlbPort"].isNull())
		application_.slbPort = std::stoi(applicationNode["SlbPort"].asString());
	if(!applicationNode["ExtSlbId"].isNull())
		application_.extSlbId = applicationNode["ExtSlbId"].asString();
	if(!applicationNode["ExtSlbIp"].isNull())
		application_.extSlbIp = applicationNode["ExtSlbIp"].asString();
	if(!applicationNode["SlbName"].isNull())
		application_.slbName = applicationNode["SlbName"].asString();
	if(!applicationNode["ExtSlbName"].isNull())
		application_.extSlbName = applicationNode["ExtSlbName"].asString();
	if(!applicationNode["ApplicationType"].isNull())
		application_.applicationType = applicationNode["ApplicationType"].asString();
	if(!applicationNode["ClusterType"].isNull())
		application_.clusterType = applicationNode["ClusterType"].asString();
	if(!applicationNode["ClusterId"].isNull())
		application_.clusterId = applicationNode["ClusterId"].asString();
	if(!applicationNode["Dockerize"].isNull())
		application_.dockerize = applicationNode["Dockerize"].asString() == "true";
	if(!applicationNode["Cpu"].isNull())
		application_.cpu = std::stoi(applicationNode["Cpu"].asString());
	if(!applicationNode["Memory"].isNull())
		application_.memory = std::stoi(applicationNode["Memory"].asString());
	if(!applicationNode["HealthCheckUrl"].isNull())
		application_.healthCheckUrl = applicationNode["HealthCheckUrl"].asString();
	if(!applicationNode["BuildPackageId"].isNull())
		application_.buildPackageId = std::stol(applicationNode["BuildPackageId"].asString());
	if(!applicationNode["CreateTime"].isNull())
		application_.createTime = std::stol(applicationNode["CreateTime"].asString());
	if(!applicationNode["NameSpace"].isNull())
		application_._nameSpace = applicationNode["NameSpace"].asString();
	if(!applicationNode["SlbInfo"].isNull())
		application_.slbInfo = applicationNode["SlbInfo"].asString();
	if(!applicationNode["Email"].isNull())
		application_.email = applicationNode["Email"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetApplicationResult::getMessage()const
{
	return message_;
}

GetApplicationResult::Applcation GetApplicationResult::getApplcation()const
{
	return applcation_;
}

GetApplicationResult::Application GetApplicationResult::getApplication()const
{
	return application_;
}

int GetApplicationResult::getCode()const
{
	return code_;
}

