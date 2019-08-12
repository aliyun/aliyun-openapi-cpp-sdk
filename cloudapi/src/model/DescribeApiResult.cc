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

#include <alibabacloud/cloudapi/model/DescribeApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiResult::DescribeApiResult() :
	ServiceResult()
{}

DescribeApiResult::DescribeApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiResult::~DescribeApiResult()
{}

void DescribeApiResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
		if(!value["Model"].isNull())
			errorCodeSamplesObject.model = value["Model"].asString();
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
	auto allDeployedInfos = value["DeployedInfos"]["DeployedInfo"];
	for (auto value : allDeployedInfos)
	{
		DeployedInfo deployedInfosObject;
		if(!value["StageName"].isNull())
			deployedInfosObject.stageName = value["StageName"].asString();
		if(!value["EffectiveVersion"].isNull())
			deployedInfosObject.effectiveVersion = value["EffectiveVersion"].asString();
		if(!value["DeployedStatus"].isNull())
			deployedInfosObject.deployedStatus = value["DeployedStatus"].asString();
		deployedInfos_.push_back(deployedInfosObject);
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
	if(!serviceConfigNode["ContentTypeCatagory"].isNull())
		serviceConfig_.contentTypeCatagory = serviceConfigNode["ContentTypeCatagory"].asString();
	if(!serviceConfigNode["ContentTypeValue"].isNull())
		serviceConfig_.contentTypeValue = serviceConfigNode["ContentTypeValue"].asString();
	if(!serviceConfigNode["Mock"].isNull())
		serviceConfig_.mock = serviceConfigNode["Mock"].asString();
	if(!serviceConfigNode["MockResult"].isNull())
		serviceConfig_.mockResult = serviceConfigNode["MockResult"].asString();
	if(!serviceConfigNode["ServiceVpcEnable"].isNull())
		serviceConfig_.serviceVpcEnable = serviceConfigNode["ServiceVpcEnable"].asString();
	if(!serviceConfigNode["AoneAppName"].isNull())
		serviceConfig_.aoneAppName = serviceConfigNode["AoneAppName"].asString();
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
	if(!value["ApiId"].isNull())
		apiId_ = value["ApiId"].asString();
	if(!value["ApiName"].isNull())
		apiName_ = value["ApiName"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
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
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Mock"].isNull())
		mock_ = value["Mock"].asString();
	if(!value["MockResult"].isNull())
		mockResult_ = value["MockResult"].asString();
	if(!value["AllowSignatureMethod"].isNull())
		allowSignatureMethod_ = value["AllowSignatureMethod"].asString();
	if(!value["WebSocketApiType"].isNull())
		webSocketApiType_ = value["WebSocketApiType"].asString();
	if(!value["ResultBodyModel"].isNull())
		resultBodyModel_ = value["ResultBodyModel"].asString();
	if(!value["ForceNonceCheck"].isNull())
		forceNonceCheck_ = value["ForceNonceCheck"].asString() == "true";
	if(!value["DisableInternet"].isNull())
		disableInternet_ = value["DisableInternet"].asString() == "true";

}

std::string DescribeApiResult::getGroupName()const
{
	return groupName_;
}

std::string DescribeApiResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeApiResult::getDescription()const
{
	return description_;
}

std::vector<DescribeApiResult::DeployedInfo> DescribeApiResult::getDeployedInfos()const
{
	return deployedInfos_;
}

bool DescribeApiResult::getForceNonceCheck()const
{
	return forceNonceCheck_;
}

std::string DescribeApiResult::getAllowSignatureMethod()const
{
	return allowSignatureMethod_;
}

std::vector<DescribeApiResult::ErrorCodeSample> DescribeApiResult::getErrorCodeSamples()const
{
	return errorCodeSamples_;
}

std::string DescribeApiResult::getMock()const
{
	return mock_;
}

std::vector<DescribeApiResult::RequestParameter> DescribeApiResult::getRequestParameters()const
{
	return requestParameters_;
}

std::vector<DescribeApiResult::ServiceParameterMap> DescribeApiResult::getServiceParametersMap()const
{
	return serviceParametersMap_;
}

std::string DescribeApiResult::getResultBodyModel()const
{
	return resultBodyModel_;
}

std::string DescribeApiResult::getModifiedTime()const
{
	return modifiedTime_;
}

DescribeApiResult::ServiceConfig DescribeApiResult::getServiceConfig()const
{
	return serviceConfig_;
}

std::vector<DescribeApiResult::ConstantParameter> DescribeApiResult::getConstantParameters()const
{
	return constantParameters_;
}

std::string DescribeApiResult::getWebSocketApiType()const
{
	return webSocketApiType_;
}

std::vector<DescribeApiResult::ResultDescription> DescribeApiResult::getResultDescriptions()const
{
	return resultDescriptions_;
}

DescribeApiResult::OpenIdConnectConfig DescribeApiResult::getOpenIdConnectConfig()const
{
	return openIdConnectConfig_;
}

std::string DescribeApiResult::getAuthType()const
{
	return authType_;
}

DescribeApiResult::RequestConfig DescribeApiResult::getRequestConfig()const
{
	return requestConfig_;
}

std::string DescribeApiResult::getResultSample()const
{
	return resultSample_;
}

std::string DescribeApiResult::getMockResult()const
{
	return mockResult_;
}

bool DescribeApiResult::getDisableInternet()const
{
	return disableInternet_;
}

std::string DescribeApiResult::getApiName()const
{
	return apiName_;
}

std::string DescribeApiResult::getResultType()const
{
	return resultType_;
}

std::string DescribeApiResult::getFailResultSample()const
{
	return failResultSample_;
}

std::vector<DescribeApiResult::CustomSystemParameter> DescribeApiResult::getCustomSystemParameters()const
{
	return customSystemParameters_;
}

std::string DescribeApiResult::getGroupId()const
{
	return groupId_;
}

std::vector<DescribeApiResult::SystemParameter> DescribeApiResult::getSystemParameters()const
{
	return systemParameters_;
}

std::string DescribeApiResult::getVisibility()const
{
	return visibility_;
}

std::vector<DescribeApiResult::ServiceParameter> DescribeApiResult::getServiceParameters()const
{
	return serviceParameters_;
}

std::string DescribeApiResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeApiResult::getApiId()const
{
	return apiId_;
}

