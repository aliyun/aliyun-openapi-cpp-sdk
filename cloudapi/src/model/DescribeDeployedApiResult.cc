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

#include <alibabacloud/cloudapi/model/DescribeDeployedApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeDeployedApiResult::DescribeDeployedApiResult() :
	ServiceResult()
{}

DescribeDeployedApiResult::DescribeDeployedApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeployedApiResult::~DescribeDeployedApiResult()
{}

void DescribeDeployedApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allErrorCodeSamples = value["ErrorCodeSamples"]["ErrorCodeSample"];
	for (auto value : allErrorCodeSamples)
	{
		ErrorCodeSample errorCodeSamplesObject;
		if(!value["Code"].isNull())
			errorCodeSamplesObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			errorCodeSamplesObject.message = value["Message"].asString();
		if(!value["Description"].isNull())
			errorCodeSamplesObject.description = value["Description"].asString();
		errorCodeSamples_.push_back(errorCodeSamplesObject);
	}
	auto allResultDescriptions = value["ResultDescriptions"]["ResultDescription"];
	for (auto value : allResultDescriptions)
	{
		ResultDescription resultDescriptionsObject;
		if(!value["Id"].isNull())
			resultDescriptionsObject.id = value["Id"].asString();
		if(!value["Pid"].isNull())
			resultDescriptionsObject.pid = value["Pid"].asString();
		if(!value["HasChild"].isNull())
			resultDescriptionsObject.hasChild = value["HasChild"].asString() == "true";
		if(!value["Key"].isNull())
			resultDescriptionsObject.key = value["Key"].asString();
		if(!value["Name"].isNull())
			resultDescriptionsObject.name = value["Name"].asString();
		if(!value["Mandatory"].isNull())
			resultDescriptionsObject.mandatory = value["Mandatory"].asString() == "true";
		if(!value["Type"].isNull())
			resultDescriptionsObject.type = value["Type"].asString();
		if(!value["Description"].isNull())
			resultDescriptionsObject.description = value["Description"].asString();
		resultDescriptions_.push_back(resultDescriptionsObject);
	}
	auto allSystemParameters = value["SystemParameters"]["SystemParameter"];
	for (auto value : allSystemParameters)
	{
		SystemParameter systemParametersObject;
		if(!value["ParameterName"].isNull())
			systemParametersObject.parameterName = value["ParameterName"].asString();
		if(!value["ServiceParameterName"].isNull())
			systemParametersObject.serviceParameterName = value["ServiceParameterName"].asString();
		if(!value["Location"].isNull())
			systemParametersObject.location = value["Location"].asString();
		if(!value["DemoValue"].isNull())
			systemParametersObject.demoValue = value["DemoValue"].asString();
		if(!value["Description"].isNull())
			systemParametersObject.description = value["Description"].asString();
		systemParameters_.push_back(systemParametersObject);
	}
	auto allCustomSystemParameters = value["CustomSystemParameters"]["CustomSystemParameter"];
	for (auto value : allCustomSystemParameters)
	{
		CustomSystemParameter customSystemParametersObject;
		if(!value["ParameterName"].isNull())
			customSystemParametersObject.parameterName = value["ParameterName"].asString();
		if(!value["ServiceParameterName"].isNull())
			customSystemParametersObject.serviceParameterName = value["ServiceParameterName"].asString();
		if(!value["Location"].isNull())
			customSystemParametersObject.location = value["Location"].asString();
		if(!value["DemoValue"].isNull())
			customSystemParametersObject.demoValue = value["DemoValue"].asString();
		if(!value["Description"].isNull())
			customSystemParametersObject.description = value["Description"].asString();
		customSystemParameters_.push_back(customSystemParametersObject);
	}
	auto allConstantParameters = value["ConstantParameters"]["ConstantParameter"];
	for (auto value : allConstantParameters)
	{
		ConstantParameter constantParametersObject;
		if(!value["ServiceParameterName"].isNull())
			constantParametersObject.serviceParameterName = value["ServiceParameterName"].asString();
		if(!value["ConstantValue"].isNull())
			constantParametersObject.constantValue = value["ConstantValue"].asString();
		if(!value["Location"].isNull())
			constantParametersObject.location = value["Location"].asString();
		if(!value["Description"].isNull())
			constantParametersObject.description = value["Description"].asString();
		constantParameters_.push_back(constantParametersObject);
	}
	auto allRequestParameters = value["RequestParameters"]["RequestParameter"];
	for (auto value : allRequestParameters)
	{
		RequestParameter requestParametersObject;
		if(!value["ApiParameterName"].isNull())
			requestParametersObject.apiParameterName = value["ApiParameterName"].asString();
		if(!value["Location"].isNull())
			requestParametersObject.location = value["Location"].asString();
		if(!value["ParameterType"].isNull())
			requestParametersObject.parameterType = value["ParameterType"].asString();
		if(!value["Required"].isNull())
			requestParametersObject.required = value["Required"].asString();
		if(!value["DefaultValue"].isNull())
			requestParametersObject.defaultValue = value["DefaultValue"].asString();
		if(!value["DemoValue"].isNull())
			requestParametersObject.demoValue = value["DemoValue"].asString();
		if(!value["MaxValue"].isNull())
			requestParametersObject.maxValue = std::stol(value["MaxValue"].asString());
		if(!value["MinValue"].isNull())
			requestParametersObject.minValue = std::stol(value["MinValue"].asString());
		if(!value["MaxLength"].isNull())
			requestParametersObject.maxLength = std::stol(value["MaxLength"].asString());
		if(!value["MinLength"].isNull())
			requestParametersObject.minLength = std::stol(value["MinLength"].asString());
		if(!value["RegularExpression"].isNull())
			requestParametersObject.regularExpression = value["RegularExpression"].asString();
		if(!value["JsonScheme"].isNull())
			requestParametersObject.jsonScheme = value["JsonScheme"].asString();
		if(!value["EnumValue"].isNull())
			requestParametersObject.enumValue = value["EnumValue"].asString();
		if(!value["DocShow"].isNull())
			requestParametersObject.docShow = value["DocShow"].asString();
		if(!value["DocOrder"].isNull())
			requestParametersObject.docOrder = std::stoi(value["DocOrder"].asString());
		if(!value["Description"].isNull())
			requestParametersObject.description = value["Description"].asString();
		requestParameters_.push_back(requestParametersObject);
	}
	auto allServiceParameters = value["ServiceParameters"]["ServiceParameter"];
	for (auto value : allServiceParameters)
	{
		ServiceParameter serviceParametersObject;
		if(!value["ServiceParameterName"].isNull())
			serviceParametersObject.serviceParameterName = value["ServiceParameterName"].asString();
		if(!value["Location"].isNull())
			serviceParametersObject.location = value["Location"].asString();
		if(!value["ParameterType"].isNull())
			serviceParametersObject.parameterType = value["ParameterType"].asString();
		serviceParameters_.push_back(serviceParametersObject);
	}
	auto allServiceParametersMap = value["ServiceParametersMap"]["ServiceParameterMap"];
	for (auto value : allServiceParametersMap)
	{
		ServiceParameterMap serviceParametersMapObject;
		if(!value["ServiceParameterName"].isNull())
			serviceParametersMapObject.serviceParameterName = value["ServiceParameterName"].asString();
		if(!value["RequestParameterName"].isNull())
			serviceParametersMapObject.requestParameterName = value["RequestParameterName"].asString();
		serviceParametersMap_.push_back(serviceParametersMapObject);
	}
	auto requestConfigNode = value["RequestConfig"];
	if(!requestConfigNode["RequestProtocol"].isNull())
		requestConfig_.requestProtocol = requestConfigNode["RequestProtocol"].asString();
	if(!requestConfigNode["RequestHttpMethod"].isNull())
		requestConfig_.requestHttpMethod = requestConfigNode["RequestHttpMethod"].asString();
	if(!requestConfigNode["RequestPath"].isNull())
		requestConfig_.requestPath = requestConfigNode["RequestPath"].asString();
	if(!requestConfigNode["BodyFormat"].isNull())
		requestConfig_.bodyFormat = requestConfigNode["BodyFormat"].asString();
	if(!requestConfigNode["PostBodyDescription"].isNull())
		requestConfig_.postBodyDescription = requestConfigNode["PostBodyDescription"].asString();
	if(!requestConfigNode["RequestMode"].isNull())
		requestConfig_.requestMode = requestConfigNode["RequestMode"].asString();
	if(!requestConfigNode["BodyModel"].isNull())
		requestConfig_.bodyModel = requestConfigNode["BodyModel"].asString();
	auto serviceConfigNode = value["ServiceConfig"];
	if(!serviceConfigNode["ServiceProtocol"].isNull())
		serviceConfig_.serviceProtocol = serviceConfigNode["ServiceProtocol"].asString();
	if(!serviceConfigNode["ServiceAddress"].isNull())
		serviceConfig_.serviceAddress = serviceConfigNode["ServiceAddress"].asString();
	if(!serviceConfigNode["ServiceHttpMethod"].isNull())
		serviceConfig_.serviceHttpMethod = serviceConfigNode["ServiceHttpMethod"].asString();
	if(!serviceConfigNode["ServicePath"].isNull())
		serviceConfig_.servicePath = serviceConfigNode["ServicePath"].asString();
	if(!serviceConfigNode["ServiceTimeout"].isNull())
		serviceConfig_.serviceTimeout = std::stoi(serviceConfigNode["ServiceTimeout"].asString());
	if(!serviceConfigNode["Mock"].isNull())
		serviceConfig_.mock = serviceConfigNode["Mock"].asString();
	if(!serviceConfigNode["MockResult"].isNull())
		serviceConfig_.mockResult = serviceConfigNode["MockResult"].asString();
	if(!serviceConfigNode["ServiceVpcEnable"].isNull())
		serviceConfig_.serviceVpcEnable = serviceConfigNode["ServiceVpcEnable"].asString();
	if(!serviceConfigNode["MockStatusCode"].isNull())
		serviceConfig_.mockStatusCode = std::stoi(serviceConfigNode["MockStatusCode"].asString());
	auto allMockHeaders = value["MockHeaders"]["MockHeader"];
	for (auto value : allMockHeaders)
	{
		ServiceConfig::MockHeader mockHeaderObject;
		if(!value["HeaderName"].isNull())
			mockHeaderObject.headerName = value["HeaderName"].asString();
		if(!value["HeaderValue"].isNull())
			mockHeaderObject.headerValue = value["HeaderValue"].asString();
		serviceConfig_.mockHeaders.push_back(mockHeaderObject);
	}
	auto vpcConfigNode = serviceConfigNode["VpcConfig"];
	if(!vpcConfigNode["Name"].isNull())
		serviceConfig_.vpcConfig.name = vpcConfigNode["Name"].asString();
	if(!vpcConfigNode["VpcId"].isNull())
		serviceConfig_.vpcConfig.vpcId = vpcConfigNode["VpcId"].asString();
	if(!vpcConfigNode["InstanceId"].isNull())
		serviceConfig_.vpcConfig.instanceId = vpcConfigNode["InstanceId"].asString();
	if(!vpcConfigNode["Port"].isNull())
		serviceConfig_.vpcConfig.port = std::stoi(vpcConfigNode["Port"].asString());
	auto functionComputeConfigNode = serviceConfigNode["FunctionComputeConfig"];
	if(!functionComputeConfigNode["RegionId"].isNull())
		serviceConfig_.functionComputeConfig.regionId = functionComputeConfigNode["RegionId"].asString();
	if(!functionComputeConfigNode["ServiceName"].isNull())
		serviceConfig_.functionComputeConfig.serviceName = functionComputeConfigNode["ServiceName"].asString();
	if(!functionComputeConfigNode["FunctionName"].isNull())
		serviceConfig_.functionComputeConfig.functionName = functionComputeConfigNode["FunctionName"].asString();
	if(!functionComputeConfigNode["RoleArn"].isNull())
		serviceConfig_.functionComputeConfig.roleArn = functionComputeConfigNode["RoleArn"].asString();
	auto openIdConnectConfigNode = value["OpenIdConnectConfig"];
	if(!openIdConnectConfigNode["OpenIdApiType"].isNull())
		openIdConnectConfig_.openIdApiType = openIdConnectConfigNode["OpenIdApiType"].asString();
	if(!openIdConnectConfigNode["IdTokenParamName"].isNull())
		openIdConnectConfig_.idTokenParamName = openIdConnectConfigNode["IdTokenParamName"].asString();
	if(!openIdConnectConfigNode["PublicKeyId"].isNull())
		openIdConnectConfig_.publicKeyId = openIdConnectConfigNode["PublicKeyId"].asString();
	if(!openIdConnectConfigNode["PublicKey"].isNull())
		openIdConnectConfig_.publicKey = openIdConnectConfigNode["PublicKey"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["StageName"].isNull())
		stageName_ = value["StageName"].asString();
	if(!value["ApiId"].isNull())
		apiId_ = value["ApiId"].asString();
	if(!value["ApiName"].isNull())
		apiName_ = value["ApiName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Visibility"].isNull())
		visibility_ = value["Visibility"].asString();
	if(!value["AuthType"].isNull())
		authType_ = value["AuthType"].asString();
	if(!value["ResultType"].isNull())
		resultType_ = value["ResultType"].asString();
	if(!value["ResultSample"].isNull())
		resultSample_ = value["ResultSample"].asString();
	if(!value["FailResultSample"].isNull())
		failResultSample_ = value["FailResultSample"].asString();
	if(!value["DeployedTime"].isNull())
		deployedTime_ = value["DeployedTime"].asString();
	if(!value["AllowSignatureMethod"].isNull())
		allowSignatureMethod_ = value["AllowSignatureMethod"].asString();
	if(!value["ResultBodyModel"].isNull())
		resultBodyModel_ = value["ResultBodyModel"].asString();
	if(!value["ForceNonceCheck"].isNull())
		forceNonceCheck_ = value["ForceNonceCheck"].asString() == "true";
	if(!value["DisableInternet"].isNull())
		disableInternet_ = value["DisableInternet"].asString() == "true";

}

std::string DescribeDeployedApiResult::getGroupName()const
{
	return groupName_;
}

std::string DescribeDeployedApiResult::getDescription()const
{
	return description_;
}

bool DescribeDeployedApiResult::getForceNonceCheck()const
{
	return forceNonceCheck_;
}

std::string DescribeDeployedApiResult::getAllowSignatureMethod()const
{
	return allowSignatureMethod_;
}

std::vector<DescribeDeployedApiResult::ErrorCodeSample> DescribeDeployedApiResult::getErrorCodeSamples()const
{
	return errorCodeSamples_;
}

std::vector<DescribeDeployedApiResult::RequestParameter> DescribeDeployedApiResult::getRequestParameters()const
{
	return requestParameters_;
}

std::vector<DescribeDeployedApiResult::ServiceParameterMap> DescribeDeployedApiResult::getServiceParametersMap()const
{
	return serviceParametersMap_;
}

std::string DescribeDeployedApiResult::getResultBodyModel()const
{
	return resultBodyModel_;
}

DescribeDeployedApiResult::ServiceConfig DescribeDeployedApiResult::getServiceConfig()const
{
	return serviceConfig_;
}

std::vector<DescribeDeployedApiResult::ConstantParameter> DescribeDeployedApiResult::getConstantParameters()const
{
	return constantParameters_;
}

std::vector<DescribeDeployedApiResult::ResultDescription> DescribeDeployedApiResult::getResultDescriptions()const
{
	return resultDescriptions_;
}

DescribeDeployedApiResult::OpenIdConnectConfig DescribeDeployedApiResult::getOpenIdConnectConfig()const
{
	return openIdConnectConfig_;
}

std::string DescribeDeployedApiResult::getAuthType()const
{
	return authType_;
}

DescribeDeployedApiResult::RequestConfig DescribeDeployedApiResult::getRequestConfig()const
{
	return requestConfig_;
}

std::string DescribeDeployedApiResult::getResultSample()const
{
	return resultSample_;
}

bool DescribeDeployedApiResult::getDisableInternet()const
{
	return disableInternet_;
}

std::string DescribeDeployedApiResult::getStageName()const
{
	return stageName_;
}

std::string DescribeDeployedApiResult::getApiName()const
{
	return apiName_;
}

std::string DescribeDeployedApiResult::getResultType()const
{
	return resultType_;
}

std::string DescribeDeployedApiResult::getFailResultSample()const
{
	return failResultSample_;
}

std::vector<DescribeDeployedApiResult::CustomSystemParameter> DescribeDeployedApiResult::getCustomSystemParameters()const
{
	return customSystemParameters_;
}

std::string DescribeDeployedApiResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeDeployedApiResult::getDeployedTime()const
{
	return deployedTime_;
}

std::vector<DescribeDeployedApiResult::SystemParameter> DescribeDeployedApiResult::getSystemParameters()const
{
	return systemParameters_;
}

std::string DescribeDeployedApiResult::getVisibility()const
{
	return visibility_;
}

std::vector<DescribeDeployedApiResult::ServiceParameter> DescribeDeployedApiResult::getServiceParameters()const
{
	return serviceParameters_;
}

std::string DescribeDeployedApiResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDeployedApiResult::getApiId()const
{
	return apiId_;
}

