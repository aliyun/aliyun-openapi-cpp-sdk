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

#include <alibabacloud/sae/model/DescribeApplicationConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationConfigResult::DescribeApplicationConfigResult() :
	ServiceResult()
{}

DescribeApplicationConfigResult::DescribeApplicationConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationConfigResult::~DescribeApplicationConfigResult()
{}

void DescribeApplicationConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["Readiness"].isNull())
		data_.readiness = dataNode["Readiness"].asString();
	if(!dataNode["SecurityGroupId"].isNull())
		data_.securityGroupId = dataNode["SecurityGroupId"].asString();
	if(!dataNode["BatchWaitTime"].isNull())
		data_.batchWaitTime = std::stoi(dataNode["BatchWaitTime"].asString());
	if(!dataNode["Jdk"].isNull())
		data_.jdk = dataNode["Jdk"].asString();
	if(!dataNode["ImageUrl"].isNull())
		data_.imageUrl = dataNode["ImageUrl"].asString();
	if(!dataNode["SlsConfigs"].isNull())
		data_.slsConfigs = dataNode["SlsConfigs"].asString();
	if(!dataNode["Liveness"].isNull())
		data_.liveness = dataNode["Liveness"].asString();
	if(!dataNode["PackageUrl"].isNull())
		data_.packageUrl = dataNode["PackageUrl"].asString();
	if(!dataNode["PackageType"].isNull())
		data_.packageType = dataNode["PackageType"].asString();
	if(!dataNode["PackageRuntimeCustomBuild"].isNull())
		data_.packageRuntimeCustomBuild = dataNode["PackageRuntimeCustomBuild"].asString();
	if(!dataNode["PreStop"].isNull())
		data_.preStop = dataNode["PreStop"].asString();
	if(!dataNode["PackageVersion"].isNull())
		data_.packageVersion = dataNode["PackageVersion"].asString();
	if(!dataNode["JarStartArgs"].isNull())
		data_.jarStartArgs = dataNode["JarStartArgs"].asString();
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["JarStartOptions"].isNull())
		data_.jarStartOptions = dataNode["JarStartOptions"].asString();
	if(!dataNode["Replicas"].isNull())
		data_.replicas = std::stoi(dataNode["Replicas"].asString());
	if(!dataNode["UpdateStrategy"].isNull())
		data_.updateStrategy = dataNode["UpdateStrategy"].asString();
	if(!dataNode["MinReadyInstances"].isNull())
		data_.minReadyInstances = std::stoi(dataNode["MinReadyInstances"].asString());
	if(!dataNode["MinReadyInstanceRatio"].isNull())
		data_.minReadyInstanceRatio = std::stoi(dataNode["MinReadyInstanceRatio"].asString());
	if(!dataNode["Memory"].isNull())
		data_.memory = std::stoi(dataNode["Memory"].asString());
	if(!dataNode["Php"].isNull())
		data_.php = dataNode["Php"].asString();
	if(!dataNode["PhpConfig"].isNull())
		data_.phpConfig = dataNode["PhpConfig"].asString();
	if(!dataNode["PhpConfigLocation"].isNull())
		data_.phpConfigLocation = dataNode["PhpConfigLocation"].asString();
	if(!dataNode["PhpExtensions"].isNull())
		data_.phpExtensions = dataNode["PhpExtensions"].asString();
	if(!dataNode["PhpPECLExtensions"].isNull())
		data_.phpPECLExtensions = dataNode["PhpPECLExtensions"].asString();
	if(!dataNode["PostStart"].isNull())
		data_.postStart = dataNode["PostStart"].asString();
	if(!dataNode["TerminationGracePeriodSeconds"].isNull())
		data_.terminationGracePeriodSeconds = std::stoi(dataNode["TerminationGracePeriodSeconds"].asString());
	if(!dataNode["CommandArgs"].isNull())
		data_.commandArgs = dataNode["CommandArgs"].asString();
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["MountHost"].isNull())
		data_.mountHost = dataNode["MountHost"].asString();
	if(!dataNode["TomcatConfig"].isNull())
		data_.tomcatConfig = dataNode["TomcatConfig"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["VSwitchId"].isNull())
		data_.vSwitchId = dataNode["VSwitchId"].asString();
	if(!dataNode["Cpu"].isNull())
		data_.cpu = std::stoi(dataNode["Cpu"].asString());
	if(!dataNode["Envs"].isNull())
		data_.envs = dataNode["Envs"].asString();
	if(!dataNode["EnableAhas"].isNull())
		data_.enableAhas = dataNode["EnableAhas"].asString();
	if(!dataNode["CustomHostAlias"].isNull())
		data_.customHostAlias = dataNode["CustomHostAlias"].asString();
	if(!dataNode["WebContainer"].isNull())
		data_.webContainer = dataNode["WebContainer"].asString();
	if(!dataNode["Command"].isNull())
		data_.command = dataNode["Command"].asString();
	if(!dataNode["WarStartOptions"].isNull())
		data_.warStartOptions = dataNode["WarStartOptions"].asString();
	if(!dataNode["PhpArmsConfigLocation"].isNull())
		data_.phpArmsConfigLocation = dataNode["PhpArmsConfigLocation"].asString();
	if(!dataNode["NasId"].isNull())
		data_.nasId = dataNode["NasId"].asString();
	if(!dataNode["OssAkId"].isNull())
		data_.ossAkId = dataNode["OssAkId"].asString();
	if(!dataNode["OssAkSecret"].isNull())
		data_.ossAkSecret = dataNode["OssAkSecret"].asString();
	if(!dataNode["EdasContainerVersion"].isNull())
		data_.edasContainerVersion = dataNode["EdasContainerVersion"].asString();
	if(!dataNode["Timezone"].isNull())
		data_.timezone = dataNode["Timezone"].asString();
	if(!dataNode["AppDescription"].isNull())
		data_.appDescription = dataNode["AppDescription"].asString();
	if(!dataNode["EnableGreyTagRoute"].isNull())
		data_.enableGreyTagRoute = dataNode["EnableGreyTagRoute"].asString() == "true";
	if(!dataNode["MseApplicationId"].isNull())
		data_.mseApplicationId = dataNode["MseApplicationId"].asString();
	if(!dataNode["AcrInstanceId"].isNull())
		data_.acrInstanceId = dataNode["AcrInstanceId"].asString();
	if(!dataNode["AcrAssumeRoleArn"].isNull())
		data_.acrAssumeRoleArn = dataNode["AcrAssumeRoleArn"].asString();
	if(!dataNode["ImagePullSecrets"].isNull())
		data_.imagePullSecrets = dataNode["ImagePullSecrets"].asString();
	if(!dataNode["EnableImageAccl"].isNull())
		data_.enableImageAccl = dataNode["EnableImageAccl"].asString() == "true";
	if(!dataNode["AssociateEip"].isNull())
		data_.associateEip = dataNode["AssociateEip"].asString() == "true";
	if(!dataNode["KafkaConfigs"].isNull())
		data_.kafkaConfigs = dataNode["KafkaConfigs"].asString();
	if(!dataNode["ProgrammingLanguage"].isNull())
		data_.programmingLanguage = dataNode["ProgrammingLanguage"].asString();
	if(!dataNode["PvtzDiscovery"].isNull())
		data_.pvtzDiscovery = dataNode["PvtzDiscovery"].asString();
	if(!dataNode["MicroRegistration"].isNull())
		data_.microRegistration = dataNode["MicroRegistration"].asString();
	if(!dataNode["NasConfigs"].isNull())
		data_.nasConfigs = dataNode["NasConfigs"].asString();
	if(!dataNode["Python"].isNull())
		data_.python = dataNode["Python"].asString();
	if(!dataNode["PythonModules"].isNull())
		data_.pythonModules = dataNode["PythonModules"].asString();
	if(!dataNode["MseApplicationName"].isNull())
		data_.mseApplicationName = dataNode["MseApplicationName"].asString();
	if(!dataNode["SaeVersion"].isNull())
		data_.saeVersion = dataNode["SaeVersion"].asString();
	if(!dataNode["AppSource"].isNull())
		data_.appSource = dataNode["AppSource"].asString();
	auto allConfigMapMountDescNode = dataNode["ConfigMapMountDesc"]["ConfigMapMountDescItem"];
	for (auto dataNodeConfigMapMountDescConfigMapMountDescItem : allConfigMapMountDescNode)
	{
		Data::ConfigMapMountDescItem configMapMountDescItemObject;
		if(!dataNodeConfigMapMountDescConfigMapMountDescItem["Key"].isNull())
			configMapMountDescItemObject.key = dataNodeConfigMapMountDescConfigMapMountDescItem["Key"].asString();
		if(!dataNodeConfigMapMountDescConfigMapMountDescItem["ConfigMapName"].isNull())
			configMapMountDescItemObject.configMapName = dataNodeConfigMapMountDescConfigMapMountDescItem["ConfigMapName"].asString();
		if(!dataNodeConfigMapMountDescConfigMapMountDescItem["MountPath"].isNull())
			configMapMountDescItemObject.mountPath = dataNodeConfigMapMountDescConfigMapMountDescItem["MountPath"].asString();
		if(!dataNodeConfigMapMountDescConfigMapMountDescItem["ConfigMapId"].isNull())
			configMapMountDescItemObject.configMapId = std::stol(dataNodeConfigMapMountDescConfigMapMountDescItem["ConfigMapId"].asString());
		data_.configMapMountDesc.push_back(configMapMountDescItemObject);
	}
	auto allTagsNode = dataNode["Tags"]["Tag"];
	for (auto dataNodeTagsTag : allTagsNode)
	{
		Data::Tag tagObject;
		if(!dataNodeTagsTag["Key"].isNull())
			tagObject.key = dataNodeTagsTag["Key"].asString();
		if(!dataNodeTagsTag["Value"].isNull())
			tagObject.value = dataNodeTagsTag["Value"].asString();
		data_.tags.push_back(tagObject);
	}
	auto allMountDescNode = dataNode["MountDesc"]["MountDescItem"];
	for (auto dataNodeMountDescMountDescItem : allMountDescNode)
	{
		Data::MountDescItem mountDescItemObject;
		if(!dataNodeMountDescMountDescItem["MountPath"].isNull())
			mountDescItemObject.mountPath = dataNodeMountDescMountDescItem["MountPath"].asString();
		if(!dataNodeMountDescMountDescItem["NasPath"].isNull())
			mountDescItemObject.nasPath = dataNodeMountDescMountDescItem["NasPath"].asString();
		data_.mountDesc.push_back(mountDescItemObject);
	}
	auto allOssMountDescsNode = dataNode["OssMountDescs"]["ossMountDesc"];
	for (auto dataNodeOssMountDescsossMountDesc : allOssMountDescsNode)
	{
		Data::OssMountDesc ossMountDescObject;
		if(!dataNodeOssMountDescsossMountDesc["bucketName"].isNull())
			ossMountDescObject.bucketName = dataNodeOssMountDescsossMountDesc["bucketName"].asString();
		if(!dataNodeOssMountDescsossMountDesc["bucketPath"].isNull())
			ossMountDescObject.bucketPath = dataNodeOssMountDescsossMountDesc["bucketPath"].asString();
		if(!dataNodeOssMountDescsossMountDesc["mountPath"].isNull())
			ossMountDescObject.mountPath = dataNodeOssMountDescsossMountDesc["mountPath"].asString();
		if(!dataNodeOssMountDescsossMountDesc["readOnly"].isNull())
			ossMountDescObject.readOnly = dataNodeOssMountDescsossMountDesc["readOnly"].asString() == "true";
		data_.ossMountDescs.push_back(ossMountDescObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeApplicationConfigResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationConfigResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationConfigResult::Data DescribeApplicationConfigResult::getData()const
{
	return data_;
}

std::string DescribeApplicationConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationConfigResult::getCode()const
{
	return code_;
}

bool DescribeApplicationConfigResult::getSuccess()const
{
	return success_;
}

