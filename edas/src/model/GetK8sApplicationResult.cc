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

#include <alibabacloud/edas/model/GetK8sApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetK8sApplicationResult::GetK8sApplicationResult() :
	ServiceResult()
{}

GetK8sApplicationResult::GetK8sApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetK8sApplicationResult::~GetK8sApplicationResult()
{}

void GetK8sApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applcationNode = value["Applcation"];
	if(!applcationNode["AppId"].isNull())
		applcation_.appId = applcationNode["AppId"].asString();
	auto allDeployGroupsNode = applcationNode["DeployGroups"]["DeployGroup"];
	for (auto applcationNodeDeployGroupsDeployGroup : allDeployGroupsNode)
	{
		Applcation::DeployGroup deployGroupObject;
		auto allComponentsNode = applcationNodeDeployGroupsDeployGroup["Components"]["ComponentsItem"];
		for (auto applcationNodeDeployGroupsDeployGroupComponentsComponentsItem : allComponentsNode)
		{
			Applcation::DeployGroup::ComponentsItem componentsObject;
			if(!applcationNodeDeployGroupsDeployGroupComponentsComponentsItem["ComponentId"].isNull())
				componentsObject.componentId = applcationNodeDeployGroupsDeployGroupComponentsComponentsItem["ComponentId"].asString();
			if(!applcationNodeDeployGroupsDeployGroupComponentsComponentsItem["ComponentKey"].isNull())
				componentsObject.componentKey = applcationNodeDeployGroupsDeployGroupComponentsComponentsItem["ComponentKey"].asString();
			if(!applcationNodeDeployGroupsDeployGroupComponentsComponentsItem["Type"].isNull())
				componentsObject.type = applcationNodeDeployGroupsDeployGroupComponentsComponentsItem["Type"].asString();
			deployGroupObject.components.push_back(componentsObject);
		}
		applcation_.deployGroups.push_back(deployGroupObject);
	}
	auto imageInfoNode = applcationNode["ImageInfo"];
	if(!imageInfoNode["ImageUrl"].isNull())
		applcation_.imageInfo.imageUrl = imageInfoNode["ImageUrl"].asString();
	if(!imageInfoNode["RepoName"].isNull())
		applcation_.imageInfo.repoName = imageInfoNode["RepoName"].asString();
	if(!imageInfoNode["RegionId"].isNull())
		applcation_.imageInfo.regionId = imageInfoNode["RegionId"].asString();
	if(!imageInfoNode["RepoId"].isNull())
		applcation_.imageInfo.repoId = imageInfoNode["RepoId"].asString();
	if(!imageInfoNode["RepoNamespace"].isNull())
		applcation_.imageInfo.repoNamespace = imageInfoNode["RepoNamespace"].asString();
	if(!imageInfoNode["RepoOriginType"].isNull())
		applcation_.imageInfo.repoOriginType = imageInfoNode["RepoOriginType"].asString();
	if(!imageInfoNode["Tag"].isNull())
		applcation_.imageInfo.tag = imageInfoNode["Tag"].asString();
	auto appNode = applcationNode["App"];
	if(!appNode["ApplicationType"].isNull())
		applcation_.app.applicationType = appNode["ApplicationType"].asString();
	if(!appNode["Cmd"].isNull())
		applcation_.app.cmd = appNode["Cmd"].asString();
	if(!appNode["DeployType"].isNull())
		applcation_.app.deployType = appNode["DeployType"].asString();
	if(!appNode["EdasContainerVersion"].isNull())
		applcation_.app.edasContainerVersion = appNode["EdasContainerVersion"].asString();
	if(!appNode["BuildpackId"].isNull())
		applcation_.app.buildpackId = std::stoi(appNode["BuildpackId"].asString());
	if(!appNode["TomcatVersion"].isNull())
		applcation_.app.tomcatVersion = appNode["TomcatVersion"].asString();
	if(!appNode["InstancesBeforeScaling"].isNull())
		applcation_.app.instancesBeforeScaling = std::stoi(appNode["InstancesBeforeScaling"].asString());
	if(!appNode["AppId"].isNull())
		applcation_.app.appId = appNode["AppId"].asString();
	if(!appNode["ApplicationName"].isNull())
		applcation_.app.applicationName = appNode["ApplicationName"].asString();
	if(!appNode["ClusterId"].isNull())
		applcation_.app.clusterId = appNode["ClusterId"].asString();
	if(!appNode["Instances"].isNull())
		applcation_.app.instances = std::stoi(appNode["Instances"].asString());
	if(!appNode["CsClusterId"].isNull())
		applcation_.app.csClusterId = appNode["CsClusterId"].asString();
	if(!appNode["LimitCpuM"].isNull())
		applcation_.app.limitCpuM = std::stoi(appNode["LimitCpuM"].asString());
	if(!appNode["RequestCpuM"].isNull())
		applcation_.app.requestCpuM = std::stoi(appNode["RequestCpuM"].asString());
	if(!appNode["LimitMem"].isNull())
		applcation_.app.limitMem = std::stoi(appNode["LimitMem"].asString());
	if(!appNode["RequestMem"].isNull())
		applcation_.app.requestMem = std::stoi(appNode["RequestMem"].asString());
	if(!appNode["K8sNamespace"].isNull())
		applcation_.app.k8sNamespace = appNode["K8sNamespace"].asString();
	if(!appNode["RegionId"].isNull())
		applcation_.app.regionId = appNode["RegionId"].asString();
	auto allEnvListNode = appNode["EnvList"]["Env"];
	for (auto appNodeEnvListEnv : allEnvListNode)
	{
		Applcation::App::Env envObject;
		if(!appNodeEnvListEnv["Name"].isNull())
			envObject.name = appNodeEnvListEnv["Name"].asString();
		if(!appNodeEnvListEnv["Value"].isNull())
			envObject.value = appNodeEnvListEnv["Value"].asString();
		applcation_.app.envList.push_back(envObject);
	}
		auto allCmdArgs = appNode["CmdArgs"]["CmdArg"];
		for (auto value : allCmdArgs)
			applcation_.app.cmdArgs.push_back(value.asString());
	auto confNode = applcationNode["Conf"];
	if(!confNode["JarStartArgs"].isNull())
		applcation_.conf.jarStartArgs = confNode["JarStartArgs"].asString();
	if(!confNode["JarStartOptions"].isNull())
		applcation_.conf.jarStartOptions = confNode["JarStartOptions"].asString();
	if(!confNode["K8sCmd"].isNull())
		applcation_.conf.k8sCmd = confNode["K8sCmd"].asString();
	if(!confNode["K8sCmdArgs"].isNull())
		applcation_.conf.k8sCmdArgs = confNode["K8sCmdArgs"].asString();
	if(!confNode["K8sLocalvolumeInfo"].isNull())
		applcation_.conf.k8sLocalvolumeInfo = confNode["K8sLocalvolumeInfo"].asString();
	if(!confNode["K8sNasInfo"].isNull())
		applcation_.conf.k8sNasInfo = confNode["K8sNasInfo"].asString();
	if(!confNode["K8sVolumeInfo"].isNull())
		applcation_.conf.k8sVolumeInfo = confNode["K8sVolumeInfo"].asString();
	if(!confNode["Liveness"].isNull())
		applcation_.conf.liveness = confNode["Liveness"].asString();
	if(!confNode["PostStart"].isNull())
		applcation_.conf.postStart = confNode["PostStart"].asString();
	if(!confNode["PreStop"].isNull())
		applcation_.conf.preStop = confNode["PreStop"].asString();
	if(!confNode["Readiness"].isNull())
		applcation_.conf.readiness = confNode["Readiness"].asString();
	if(!confNode["RuntimeClassName"].isNull())
		applcation_.conf.runtimeClassName = confNode["RuntimeClassName"].asString();
	if(!confNode["DeployAcrossZones"].isNull())
		applcation_.conf.deployAcrossZones = confNode["DeployAcrossZones"].asString();
	if(!confNode["AhasEnabled"].isNull())
		applcation_.conf.ahasEnabled = confNode["AhasEnabled"].asString() == "true";
	if(!confNode["DeployAcrossNodes"].isNull())
		applcation_.conf.deployAcrossNodes = confNode["DeployAcrossNodes"].asString();
	auto latestVersionNode = applcationNode["LatestVersion"];
	if(!latestVersionNode["PackageVersion"].isNull())
		applcation_.latestVersion.packageVersion = latestVersionNode["PackageVersion"].asString();
	if(!latestVersionNode["Url"].isNull())
		applcation_.latestVersion.url = latestVersionNode["Url"].asString();
	if(!latestVersionNode["WarUrl"].isNull())
		applcation_.latestVersion.warUrl = latestVersionNode["WarUrl"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetK8sApplicationResult::getMessage()const
{
	return message_;
}

GetK8sApplicationResult::Applcation GetK8sApplicationResult::getApplcation()const
{
	return applcation_;
}

int GetK8sApplicationResult::getCode()const
{
	return code_;
}

