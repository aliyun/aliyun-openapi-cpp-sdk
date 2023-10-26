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

#include <alibabacloud/cloudapi/model/DescribeBackendInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeBackendInfoResult::DescribeBackendInfoResult() :
	ServiceResult()
{}

DescribeBackendInfoResult::DescribeBackendInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackendInfoResult::~DescribeBackendInfoResult()
{}

void DescribeBackendInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backendInfoNode = value["BackendInfo"];
	if(!backendInfoNode["BackendName"].isNull())
		backendInfo_.backendName = backendInfoNode["BackendName"].asString();
	if(!backendInfoNode["BackendType"].isNull())
		backendInfo_.backendType = backendInfoNode["BackendType"].asString();
	if(!backendInfoNode["ModifiedTime"].isNull())
		backendInfo_.modifiedTime = backendInfoNode["ModifiedTime"].asString();
	if(!backendInfoNode["Description"].isNull())
		backendInfo_.description = backendInfoNode["Description"].asString();
	if(!backendInfoNode["CreatedTime"].isNull())
		backendInfo_.createdTime = backendInfoNode["CreatedTime"].asString();
	if(!backendInfoNode["BackendId"].isNull())
		backendInfo_.backendId = backendInfoNode["BackendId"].asString();
	auto allBackendModelsNode = backendInfoNode["BackendModels"]["BackendModel"];
	for (auto backendInfoNodeBackendModelsBackendModel : allBackendModelsNode)
	{
		BackendInfo::BackendModel backendModelObject;
		if(!backendInfoNodeBackendModelsBackendModel["BackendModelId"].isNull())
			backendModelObject.backendModelId = backendInfoNodeBackendModelsBackendModel["BackendModelId"].asString();
		if(!backendInfoNodeBackendModelsBackendModel["StageModeId"].isNull())
			backendModelObject.stageModeId = backendInfoNodeBackendModelsBackendModel["StageModeId"].asString();
		if(!backendInfoNodeBackendModelsBackendModel["Description"].isNull())
			backendModelObject.description = backendInfoNodeBackendModelsBackendModel["Description"].asString();
		if(!backendInfoNodeBackendModelsBackendModel["GmtCreate"].isNull())
			backendModelObject.gmtCreate = backendInfoNodeBackendModelsBackendModel["GmtCreate"].asString();
		if(!backendInfoNodeBackendModelsBackendModel["GmtModified"].isNull())
			backendModelObject.gmtModified = backendInfoNodeBackendModelsBackendModel["GmtModified"].asString();
		if(!backendInfoNodeBackendModelsBackendModel["StageName"].isNull())
			backendModelObject.stageName = backendInfoNodeBackendModelsBackendModel["StageName"].asString();
		auto backendConfigNode = value["BackendConfig"];
		if(!backendConfigNode["ServiceAddress"].isNull())
			backendModelObject.backendConfig.serviceAddress = backendConfigNode["ServiceAddress"].asString();
		if(!backendConfigNode["HttpTargetHostName"].isNull())
			backendModelObject.backendConfig.httpTargetHostName = backendConfigNode["HttpTargetHostName"].asString();
		if(!backendConfigNode["Type"].isNull())
			backendModelObject.backendConfig.type = backendConfigNode["Type"].asString();
		if(!backendConfigNode["ServiceTimeout"].isNull())
			backendModelObject.backendConfig.serviceTimeout = std::stoi(backendConfigNode["ServiceTimeout"].asString());
		auto vpcConfigNode = backendConfigNode["VpcConfig"];
		if(!vpcConfigNode["VpcId"].isNull())
			backendModelObject.backendConfig.vpcConfig.vpcId = vpcConfigNode["VpcId"].asString();
		if(!vpcConfigNode["InstanceId"].isNull())
			backendModelObject.backendConfig.vpcConfig.instanceId = vpcConfigNode["InstanceId"].asString();
		if(!vpcConfigNode["Port"].isNull())
			backendModelObject.backendConfig.vpcConfig.port = std::stol(vpcConfigNode["Port"].asString());
		if(!vpcConfigNode["VpcAccessId"].isNull())
			backendModelObject.backendConfig.vpcConfig.vpcAccessId = vpcConfigNode["VpcAccessId"].asString();
		if(!vpcConfigNode["Name"].isNull())
			backendModelObject.backendConfig.vpcConfig.name = vpcConfigNode["Name"].asString();
		if(!vpcConfigNode["VpcScheme"].isNull())
			backendModelObject.backendConfig.vpcConfig.vpcScheme = vpcConfigNode["VpcScheme"].asString();
		if(!vpcConfigNode["VpcTargetHostName"].isNull())
			backendModelObject.backendConfig.vpcConfig.vpcTargetHostName = vpcConfigNode["VpcTargetHostName"].asString();
		auto functionComputeConfigNode = backendConfigNode["FunctionComputeConfig"];
		if(!functionComputeConfigNode["FcType"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.fcType = functionComputeConfigNode["FcType"].asString();
		if(!functionComputeConfigNode["FcRegionId"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.fcRegionId = functionComputeConfigNode["FcRegionId"].asString();
		if(!functionComputeConfigNode["ServiceName"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.serviceName = functionComputeConfigNode["ServiceName"].asString();
		if(!functionComputeConfigNode["FunctionName"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.functionName = functionComputeConfigNode["FunctionName"].asString();
		if(!functionComputeConfigNode["RoleArn"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.roleArn = functionComputeConfigNode["RoleArn"].asString();
		if(!functionComputeConfigNode["Qualifier"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.qualifier = functionComputeConfigNode["Qualifier"].asString();
		if(!functionComputeConfigNode["FcBaseUrl"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.fcBaseUrl = functionComputeConfigNode["FcBaseUrl"].asString();
		if(!functionComputeConfigNode["OnlyBusinessPath"].isNull())
			backendModelObject.backendConfig.functionComputeConfig.onlyBusinessPath = functionComputeConfigNode["OnlyBusinessPath"].asString() == "true";
		auto ossConfigNode = backendConfigNode["OssConfig"];
		if(!ossConfigNode["OssRegionId"].isNull())
			backendModelObject.backendConfig.ossConfig.ossRegionId = ossConfigNode["OssRegionId"].asString();
		if(!ossConfigNode["BucketName"].isNull())
			backendModelObject.backendConfig.ossConfig.bucketName = ossConfigNode["BucketName"].asString();
		auto eventBridgeConfigNode = backendConfigNode["EventBridgeConfig"];
		if(!eventBridgeConfigNode["EventBridgeRegionId"].isNull())
			backendModelObject.backendConfig.eventBridgeConfig.eventBridgeRegionId = eventBridgeConfigNode["EventBridgeRegionId"].asString();
		if(!eventBridgeConfigNode["EventSource"].isNull())
			backendModelObject.backendConfig.eventBridgeConfig.eventSource = eventBridgeConfigNode["EventSource"].asString();
		if(!eventBridgeConfigNode["EventBus"].isNull())
			backendModelObject.backendConfig.eventBridgeConfig.eventBus = eventBridgeConfigNode["EventBus"].asString();
		if(!eventBridgeConfigNode["RoleArn"].isNull())
			backendModelObject.backendConfig.eventBridgeConfig.roleArn = eventBridgeConfigNode["RoleArn"].asString();
		auto mockConfigNode = backendConfigNode["MockConfig"];
		if(!mockConfigNode["MockResult"].isNull())
			backendModelObject.backendConfig.mockConfig.mockResult = mockConfigNode["MockResult"].asString();
		if(!mockConfigNode["MockStatusCode"].isNull())
			backendModelObject.backendConfig.mockConfig.mockStatusCode = mockConfigNode["MockStatusCode"].asString();
		auto allMockHeadersNode = mockConfigNode["MockHeaders"]["MockHeader"];
		for (auto mockConfigNodeMockHeadersMockHeader : allMockHeadersNode)
		{
			BackendInfo::BackendModel::BackendConfig::MockConfig::MockHeader mockHeaderObject;
			if(!mockConfigNodeMockHeadersMockHeader["HeaderName"].isNull())
				mockHeaderObject.headerName = mockConfigNodeMockHeadersMockHeader["HeaderName"].asString();
			if(!mockConfigNodeMockHeadersMockHeader["HeaderValue"].isNull())
				mockHeaderObject.headerValue = mockConfigNodeMockHeadersMockHeader["HeaderValue"].asString();
			backendModelObject.backendConfig.mockConfig.mockHeaders.push_back(mockHeaderObject);
		}
		auto discoveryConfigNode = backendConfigNode["DiscoveryConfig"];
		if(!discoveryConfigNode["RcType"].isNull())
			backendModelObject.backendConfig.discoveryConfig.rcType = discoveryConfigNode["RcType"].asString();
		auto nacosConfigNode = discoveryConfigNode["NacosConfig"];
		if(!nacosConfigNode["ServerAddress"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.serverAddress = nacosConfigNode["ServerAddress"].asString();
		if(!nacosConfigNode["Namespace"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig._namespace = nacosConfigNode["Namespace"].asString();
		if(!nacosConfigNode["GroupName"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.groupName = nacosConfigNode["GroupName"].asString();
		if(!nacosConfigNode["ServiceName"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.serviceName = nacosConfigNode["ServiceName"].asString();
		if(!nacosConfigNode["Clusters"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.clusters = nacosConfigNode["Clusters"].asString();
		if(!nacosConfigNode["AuthType"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.authType = nacosConfigNode["AuthType"].asString();
		if(!nacosConfigNode["UserName"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.userName = nacosConfigNode["UserName"].asString();
		if(!nacosConfigNode["Password"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.password = nacosConfigNode["Password"].asString();
		if(!nacosConfigNode["AccessKey"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.accessKey = nacosConfigNode["AccessKey"].asString();
		if(!nacosConfigNode["SecretKey"].isNull())
			backendModelObject.backendConfig.discoveryConfig.nacosConfig.secretKey = nacosConfigNode["SecretKey"].asString();
		backendInfo_.backendModels.push_back(backendModelObject);
	}

}

DescribeBackendInfoResult::BackendInfo DescribeBackendInfoResult::getBackendInfo()const
{
	return backendInfo_;
}

