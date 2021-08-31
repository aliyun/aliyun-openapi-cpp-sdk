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

#include <alibabacloud/edas/model/QueryApplicationStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QueryApplicationStatusResult::QueryApplicationStatusResult() :
	ServiceResult()
{}

QueryApplicationStatusResult::QueryApplicationStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryApplicationStatusResult::~QueryApplicationStatusResult()
{}

void QueryApplicationStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appInfoNode = value["AppInfo"];
	auto allEcuListNode = appInfoNode["EcuList"]["Ecu"];
	for (auto appInfoNodeEcuListEcu : allEcuListNode)
	{
		AppInfo::Ecu ecuObject;
		if(!appInfoNodeEcuListEcu["EcuId"].isNull())
			ecuObject.ecuId = appInfoNodeEcuListEcu["EcuId"].asString();
		if(!appInfoNodeEcuListEcu["Online"].isNull())
			ecuObject.online = appInfoNodeEcuListEcu["Online"].asString() == "true";
		if(!appInfoNodeEcuListEcu["DockerEnv"].isNull())
			ecuObject.dockerEnv = appInfoNodeEcuListEcu["DockerEnv"].asString() == "true";
		if(!appInfoNodeEcuListEcu["CreateTime"].isNull())
			ecuObject.createTime = std::stol(appInfoNodeEcuListEcu["CreateTime"].asString());
		if(!appInfoNodeEcuListEcu["UpdateTime"].isNull())
			ecuObject.updateTime = std::stol(appInfoNodeEcuListEcu["UpdateTime"].asString());
		if(!appInfoNodeEcuListEcu["IpAddr"].isNull())
			ecuObject.ipAddr = appInfoNodeEcuListEcu["IpAddr"].asString();
		if(!appInfoNodeEcuListEcu["HeartbeatTime"].isNull())
			ecuObject.heartbeatTime = std::stol(appInfoNodeEcuListEcu["HeartbeatTime"].asString());
		if(!appInfoNodeEcuListEcu["UserId"].isNull())
			ecuObject.userId = appInfoNodeEcuListEcu["UserId"].asString();
		if(!appInfoNodeEcuListEcu["GroupId"].isNull())
			ecuObject.groupId = appInfoNodeEcuListEcu["GroupId"].asString();
		if(!appInfoNodeEcuListEcu["Name"].isNull())
			ecuObject.name = appInfoNodeEcuListEcu["Name"].asString();
		if(!appInfoNodeEcuListEcu["ZoneId"].isNull())
			ecuObject.zoneId = appInfoNodeEcuListEcu["ZoneId"].asString();
		if(!appInfoNodeEcuListEcu["RegionId"].isNull())
			ecuObject.regionId = appInfoNodeEcuListEcu["RegionId"].asString();
		if(!appInfoNodeEcuListEcu["InstanceId"].isNull())
			ecuObject.instanceId = appInfoNodeEcuListEcu["InstanceId"].asString();
		if(!appInfoNodeEcuListEcu["VpcId"].isNull())
			ecuObject.vpcId = appInfoNodeEcuListEcu["VpcId"].asString();
		if(!appInfoNodeEcuListEcu["RegionId"].isNull())
			ecuObject.regionId1 = appInfoNodeEcuListEcu["RegionId"].asString();
		if(!appInfoNodeEcuListEcu["AvailableCpu"].isNull())
			ecuObject.availableCpu = std::stoi(appInfoNodeEcuListEcu["AvailableCpu"].asString());
		if(!appInfoNodeEcuListEcu["AvailableMem"].isNull())
			ecuObject.availableMem = std::stoi(appInfoNodeEcuListEcu["AvailableMem"].asString());
		appInfo_.ecuList.push_back(ecuObject);
	}
	auto allEccListNode = appInfoNode["EccList"]["Ecc"];
	for (auto appInfoNodeEccListEcc : allEccListNode)
	{
		AppInfo::Ecc eccObject;
		if(!appInfoNodeEccListEcc["EccId"].isNull())
			eccObject.eccId = appInfoNodeEccListEcc["EccId"].asString();
		if(!appInfoNodeEccListEcc["EcuId"].isNull())
			eccObject.ecuId = appInfoNodeEccListEcc["EcuId"].asString();
		if(!appInfoNodeEccListEcc["AppId"].isNull())
			eccObject.appId = appInfoNodeEccListEcc["AppId"].asString();
		if(!appInfoNodeEccListEcc["AppState"].isNull())
			eccObject.appState = std::stoi(appInfoNodeEccListEcc["AppState"].asString());
		if(!appInfoNodeEccListEcc["TaskState"].isNull())
			eccObject.taskState = std::stoi(appInfoNodeEccListEcc["TaskState"].asString());
		if(!appInfoNodeEccListEcc["CreateTime"].isNull())
			eccObject.createTime = std::stol(appInfoNodeEccListEcc["CreateTime"].asString());
		if(!appInfoNodeEccListEcc["UpdateTime"].isNull())
			eccObject.updateTime = std::stol(appInfoNodeEccListEcc["UpdateTime"].asString());
		if(!appInfoNodeEccListEcc["Ip"].isNull())
			eccObject.ip = appInfoNodeEccListEcc["Ip"].asString();
		if(!appInfoNodeEccListEcc["VpcId"].isNull())
			eccObject.vpcId = appInfoNodeEccListEcc["VpcId"].asString();
		if(!appInfoNodeEccListEcc["GroupId"].isNull())
			eccObject.groupId = appInfoNodeEccListEcc["GroupId"].asString();
		if(!appInfoNodeEccListEcc["ContainerStatus"].isNull())
			eccObject.containerStatus = appInfoNodeEccListEcc["ContainerStatus"].asString();
		appInfo_.eccList.push_back(eccObject);
	}
	auto allGroupListNode = appInfoNode["GroupList"]["Group"];
	for (auto appInfoNodeGroupListGroup : allGroupListNode)
	{
		AppInfo::Group groupObject;
		if(!appInfoNodeGroupListGroup["GroupId"].isNull())
			groupObject.groupId = appInfoNodeGroupListGroup["GroupId"].asString();
		if(!appInfoNodeGroupListGroup["GroupName"].isNull())
			groupObject.groupName = appInfoNodeGroupListGroup["GroupName"].asString();
		if(!appInfoNodeGroupListGroup["AppId"].isNull())
			groupObject.appId = appInfoNodeGroupListGroup["AppId"].asString();
		if(!appInfoNodeGroupListGroup["PackageVersionId"].isNull())
			groupObject.packageVersionId = appInfoNodeGroupListGroup["PackageVersionId"].asString();
		if(!appInfoNodeGroupListGroup["AppVersionId"].isNull())
			groupObject.appVersionId = appInfoNodeGroupListGroup["AppVersionId"].asString();
		if(!appInfoNodeGroupListGroup["GroupType"].isNull())
			groupObject.groupType = std::stoi(appInfoNodeGroupListGroup["GroupType"].asString());
		if(!appInfoNodeGroupListGroup["ClusterId"].isNull())
			groupObject.clusterId = appInfoNodeGroupListGroup["ClusterId"].asString();
		if(!appInfoNodeGroupListGroup["CreateTime"].isNull())
			groupObject.createTime = std::stol(appInfoNodeGroupListGroup["CreateTime"].asString());
		if(!appInfoNodeGroupListGroup["UpdateTime"].isNull())
			groupObject.updateTime = std::stol(appInfoNodeGroupListGroup["UpdateTime"].asString());
		appInfo_.groupList.push_back(groupObject);
	}
	auto allDeployRecordListNode = appInfoNode["DeployRecordList"]["DeployRecord"];
	for (auto appInfoNodeDeployRecordListDeployRecord : allDeployRecordListNode)
	{
		AppInfo::DeployRecord deployRecordObject;
		if(!appInfoNodeDeployRecordListDeployRecord["DeployRecordId"].isNull())
			deployRecordObject.deployRecordId = appInfoNodeDeployRecordListDeployRecord["DeployRecordId"].asString();
		if(!appInfoNodeDeployRecordListDeployRecord["EccId"].isNull())
			deployRecordObject.eccId = appInfoNodeDeployRecordListDeployRecord["EccId"].asString();
		if(!appInfoNodeDeployRecordListDeployRecord["EcuId"].isNull())
			deployRecordObject.ecuId = appInfoNodeDeployRecordListDeployRecord["EcuId"].asString();
		if(!appInfoNodeDeployRecordListDeployRecord["PackageVersionId"].isNull())
			deployRecordObject.packageVersionId = appInfoNodeDeployRecordListDeployRecord["PackageVersionId"].asString();
		if(!appInfoNodeDeployRecordListDeployRecord["PackageMd5"].isNull())
			deployRecordObject.packageMd5 = appInfoNodeDeployRecordListDeployRecord["PackageMd5"].asString();
		if(!appInfoNodeDeployRecordListDeployRecord["CreateTime"].isNull())
			deployRecordObject.createTime = std::stol(appInfoNodeDeployRecordListDeployRecord["CreateTime"].asString());
		appInfo_.deployRecordList.push_back(deployRecordObject);
	}
	auto applicationNode = appInfoNode["Application"];
	if(!applicationNode["ApplicationId"].isNull())
		appInfo_.application.applicationId = applicationNode["ApplicationId"].asString();
	if(!applicationNode["BuildPackageId"].isNull())
		appInfo_.application.buildPackageId = std::stoi(applicationNode["BuildPackageId"].asString());
	if(!applicationNode["ClusterId"].isNull())
		appInfo_.application.clusterId = applicationNode["ClusterId"].asString();
	if(!applicationNode["Cpu"].isNull())
		appInfo_.application.cpu = std::stoi(applicationNode["Cpu"].asString());
	if(!applicationNode["CreateTime"].isNull())
		appInfo_.application.createTime = std::stol(applicationNode["CreateTime"].asString());
	if(!applicationNode["Dockerize"].isNull())
		appInfo_.application.dockerize = applicationNode["Dockerize"].asString() == "true";
	if(!applicationNode["Email"].isNull())
		appInfo_.application.email = applicationNode["Email"].asString();
	if(!applicationNode["HealthCheckUrl"].isNull())
		appInfo_.application.healthCheckUrl = applicationNode["HealthCheckUrl"].asString();
	if(!applicationNode["InstanceCount"].isNull())
		appInfo_.application.instanceCount = std::stoi(applicationNode["InstanceCount"].asString());
	if(!applicationNode["LaunchTime"].isNull())
		appInfo_.application.launchTime = std::stol(applicationNode["LaunchTime"].asString());
	if(!applicationNode["Memory"].isNull())
		appInfo_.application.memory = std::stoi(applicationNode["Memory"].asString());
	if(!applicationNode["Name"].isNull())
		appInfo_.application.name = applicationNode["Name"].asString();
	if(!applicationNode["Owner"].isNull())
		appInfo_.application.owner = applicationNode["Owner"].asString();
	if(!applicationNode["Phone"].isNull())
		appInfo_.application.phone = applicationNode["Phone"].asString();
	if(!applicationNode["Port"].isNull())
		appInfo_.application.port = std::stoi(applicationNode["Port"].asString());
	if(!applicationNode["RegionId"].isNull())
		appInfo_.application.regionId = applicationNode["RegionId"].asString();
	if(!applicationNode["RunningInstanceCount"].isNull())
		appInfo_.application.runningInstanceCount = std::stoi(applicationNode["RunningInstanceCount"].asString());
	if(!applicationNode["UserId"].isNull())
		appInfo_.application.userId = applicationNode["UserId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryApplicationStatusResult::getMessage()const
{
	return message_;
}

int QueryApplicationStatusResult::getCode()const
{
	return code_;
}

QueryApplicationStatusResult::AppInfo QueryApplicationStatusResult::getAppInfo()const
{
	return appInfo_;
}

