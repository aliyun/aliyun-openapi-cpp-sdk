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
	auto allErrorCodeSamplesNode = value["ErrorCodeSamples"]["ErrorCodeSample"];
	for (auto valueErrorCodeSamplesErrorCodeSample : allErrorCodeSamplesNode)
	{
		ErrorCodeSample errorCodeSamplesObject;
		if(!valueErrorCodeSamplesErrorCodeSample["Code"].isNull())
			errorCodeSamplesObject.code = valueErrorCodeSamplesErrorCodeSample["Code"].asString();
		if(!valueErrorCodeSamplesErrorCodeSample["Message"].isNull())
			errorCodeSamplesObject.message = valueErrorCodeSamplesErrorCodeSample["Message"].asString();
		if(!valueErrorCodeSamplesErrorCodeSample["Description"].isNull())
			errorCodeSamplesObject.description = valueErrorCodeSamplesErrorCodeSample["Description"].asString();
		errorCodeSamples_.push_back(errorCodeSamplesObject);
	}
	auto allResultDescriptionsNode = value["ResultDescriptions"]["ResultDescription"];
	for (auto valueResultDescriptionsResultDescription : allResultDescriptionsNode)
	{
		ResultDescription resultDescriptionsObject;
		if(!valueResultDescriptionsResultDescription["Type"].isNull())
			resultDescriptionsObject.type = valueResultDescriptionsResultDescription["Type"].asString();
		if(!valueResultDescriptionsResultDescription["Key"].isNull())
			resultDescriptionsObject.key = valueResultDescriptionsResultDescription["Key"].asString();
		if(!valueResultDescriptionsResultDescription["HasChild"].isNull())
			resultDescriptionsObject.hasChild = valueResultDescriptionsResultDescription["HasChild"].asString() == "true";
		if(!valueResultDescriptionsResultDescription["Description"].isNull())
			resultDescriptionsObject.description = valueResultDescriptionsResultDescription["Description"].asString();
		if(!valueResultDescriptionsResultDescription["Pid"].isNull())
			resultDescriptionsObject.pid = valueResultDescriptionsResultDescription["Pid"].asString();
		if(!valueResultDescriptionsResultDescription["Mandatory"].isNull())
			resultDescriptionsObject.mandatory = valueResultDescriptionsResultDescription["Mandatory"].asString() == "true";
		if(!valueResultDescriptionsResultDescription["Name"].isNull())
			resultDescriptionsObject.name = valueResultDescriptionsResultDescription["Name"].asString();
		if(!valueResultDescriptionsResultDescription["Id"].isNull())
			resultDescriptionsObject.id = valueResultDescriptionsResultDescription["Id"].asString();
		resultDescriptions_.push_back(resultDescriptionsObject);
	}
	auto allSystemParametersNode = value["SystemParameters"]["SystemParameter"];
	for (auto valueSystemParametersSystemParameter : allSystemParametersNode)
	{
		SystemParameter systemParametersObject;
		if(!valueSystemParametersSystemParameter["DemoValue"].isNull())
			systemParametersObject.demoValue = valueSystemParametersSystemParameter["DemoValue"].asString();
		if(!valueSystemParametersSystemParameter["Description"].isNull())
			systemParametersObject.description = valueSystemParametersSystemParameter["Description"].asString();
		if(!valueSystemParametersSystemParameter["ParameterName"].isNull())
			systemParametersObject.parameterName = valueSystemParametersSystemParameter["ParameterName"].asString();
		if(!valueSystemParametersSystemParameter["Location"].isNull())
			systemParametersObject.location = valueSystemParametersSystemParameter["Location"].asString();
		if(!valueSystemParametersSystemParameter["ServiceParameterName"].isNull())
			systemParametersObject.serviceParameterName = valueSystemParametersSystemParameter["ServiceParameterName"].asString();
		systemParameters_.push_back(systemParametersObject);
	}
	auto allCustomSystemParametersNode = value["CustomSystemParameters"]["CustomSystemParameter"];
	for (auto valueCustomSystemParametersCustomSystemParameter : allCustomSystemParametersNode)
	{
		CustomSystemParameter customSystemParametersObject;
		if(!valueCustomSystemParametersCustomSystemParameter["DemoValue"].isNull())
			customSystemParametersObject.demoValue = valueCustomSystemParametersCustomSystemParameter["DemoValue"].asString();
		if(!valueCustomSystemParametersCustomSystemParameter["Description"].isNull())
			customSystemParametersObject.description = valueCustomSystemParametersCustomSystemParameter["Description"].asString();
		if(!valueCustomSystemParametersCustomSystemParameter["ParameterName"].isNull())
			customSystemParametersObject.parameterName = valueCustomSystemParametersCustomSystemParameter["ParameterName"].asString();
		if(!valueCustomSystemParametersCustomSystemParameter["Location"].isNull())
			customSystemParametersObject.location = valueCustomSystemParametersCustomSystemParameter["Location"].asString();
		if(!valueCustomSystemParametersCustomSystemParameter["ServiceParameterName"].isNull())
			customSystemParametersObject.serviceParameterName = valueCustomSystemParametersCustomSystemParameter["ServiceParameterName"].asString();
		customSystemParameters_.push_back(customSystemParametersObject);
	}
	auto allConstantParametersNode = value["ConstantParameters"]["ConstantParameter"];
	for (auto valueConstantParametersConstantParameter : allConstantParametersNode)
	{
		ConstantParameter constantParametersObject;
		if(!valueConstantParametersConstantParameter["Description"].isNull())
			constantParametersObject.description = valueConstantParametersConstantParameter["Description"].asString();
		if(!valueConstantParametersConstantParameter["Location"].isNull())
			constantParametersObject.location = valueConstantParametersConstantParameter["Location"].asString();
		if(!valueConstantParametersConstantParameter["ServiceParameterName"].isNull())
			constantParametersObject.serviceParameterName = valueConstantParametersConstantParameter["ServiceParameterName"].asString();
		if(!valueConstantParametersConstantParameter["ConstantValue"].isNull())
			constantParametersObject.constantValue = valueConstantParametersConstantParameter["ConstantValue"].asString();
		constantParameters_.push_back(constantParametersObject);
	}
	auto allRequestParametersNode = value["RequestParameters"]["RequestParameter"];
	for (auto valueRequestParametersRequestParameter : allRequestParametersNode)
	{
		RequestParameter requestParametersObject;
		if(!valueRequestParametersRequestParameter["JsonScheme"].isNull())
			requestParametersObject.jsonScheme = valueRequestParametersRequestParameter["JsonScheme"].asString();
		if(!valueRequestParametersRequestParameter["MaxValue"].isNull())
			requestParametersObject.maxValue = std::stol(valueRequestParametersRequestParameter["MaxValue"].asString());
		if(!valueRequestParametersRequestParameter["ArrayItemsType"].isNull())
			requestParametersObject.arrayItemsType = valueRequestParametersRequestParameter["ArrayItemsType"].asString();
		if(!valueRequestParametersRequestParameter["MinValue"].isNull())
			requestParametersObject.minValue = std::stol(valueRequestParametersRequestParameter["MinValue"].asString());
		if(!valueRequestParametersRequestParameter["DocShow"].isNull())
			requestParametersObject.docShow = valueRequestParametersRequestParameter["DocShow"].asString();
		if(!valueRequestParametersRequestParameter["MaxLength"].isNull())
			requestParametersObject.maxLength = std::stol(valueRequestParametersRequestParameter["MaxLength"].asString());
		if(!valueRequestParametersRequestParameter["DefaultValue"].isNull())
			requestParametersObject.defaultValue = valueRequestParametersRequestParameter["DefaultValue"].asString();
		if(!valueRequestParametersRequestParameter["ApiParameterName"].isNull())
			requestParametersObject.apiParameterName = valueRequestParametersRequestParameter["ApiParameterName"].asString();
		if(!valueRequestParametersRequestParameter["EnumValue"].isNull())
			requestParametersObject.enumValue = valueRequestParametersRequestParameter["EnumValue"].asString();
		if(!valueRequestParametersRequestParameter["DemoValue"].isNull())
			requestParametersObject.demoValue = valueRequestParametersRequestParameter["DemoValue"].asString();
		if(!valueRequestParametersRequestParameter["Required"].isNull())
			requestParametersObject.required = valueRequestParametersRequestParameter["Required"].asString();
		if(!valueRequestParametersRequestParameter["Description"].isNull())
			requestParametersObject.description = valueRequestParametersRequestParameter["Description"].asString();
		if(!valueRequestParametersRequestParameter["ParameterType"].isNull())
			requestParametersObject.parameterType = valueRequestParametersRequestParameter["ParameterType"].asString();
		if(!valueRequestParametersRequestParameter["RegularExpression"].isNull())
			requestParametersObject.regularExpression = valueRequestParametersRequestParameter["RegularExpression"].asString();
		if(!valueRequestParametersRequestParameter["MinLength"].isNull())
			requestParametersObject.minLength = std::stol(valueRequestParametersRequestParameter["MinLength"].asString());
		if(!valueRequestParametersRequestParameter["DocOrder"].isNull())
			requestParametersObject.docOrder = std::stoi(valueRequestParametersRequestParameter["DocOrder"].asString());
		if(!valueRequestParametersRequestParameter["Location"].isNull())
			requestParametersObject.location = valueRequestParametersRequestParameter["Location"].asString();
		requestParameters_.push_back(requestParametersObject);
	}
	auto allServiceParametersNode = value["ServiceParameters"]["ServiceParameter"];
	for (auto valueServiceParametersServiceParameter : allServiceParametersNode)
	{
		ServiceParameter serviceParametersObject;
		if(!valueServiceParametersServiceParameter["Location"].isNull())
			serviceParametersObject.location = valueServiceParametersServiceParameter["Location"].asString();
		if(!valueServiceParametersServiceParameter["ParameterType"].isNull())
			serviceParametersObject.parameterType = valueServiceParametersServiceParameter["ParameterType"].asString();
		if(!valueServiceParametersServiceParameter["ServiceParameterName"].isNull())
			serviceParametersObject.serviceParameterName = valueServiceParametersServiceParameter["ServiceParameterName"].asString();
		serviceParameters_.push_back(serviceParametersObject);
	}
	auto allServiceParametersMapNode = value["ServiceParametersMap"]["ServiceParameterMap"];
	for (auto valueServiceParametersMapServiceParameterMap : allServiceParametersMapNode)
	{
		ServiceParameterMap serviceParametersMapObject;
		if(!valueServiceParametersMapServiceParameterMap["RequestParameterName"].isNull())
			serviceParametersMapObject.requestParameterName = valueServiceParametersMapServiceParameterMap["RequestParameterName"].asString();
		if(!valueServiceParametersMapServiceParameterMap["ServiceParameterName"].isNull())
			serviceParametersMapObject.serviceParameterName = valueServiceParametersMapServiceParameterMap["ServiceParameterName"].asString();
		serviceParametersMap_.push_back(serviceParametersMapObject);
	}
	auto requestConfigNode = value["RequestConfig"];
	if(!requestConfigNode["BodyModel"].isNull())
		requestConfig_.bodyModel = requestConfigNode["BodyModel"].asString();
	if(!requestConfigNode["RequestPath"].isNull())
		requestConfig_.requestPath = requestConfigNode["RequestPath"].asString();
	if(!requestConfigNode["RequestHttpMethod"].isNull())
		requestConfig_.requestHttpMethod = requestConfigNode["RequestHttpMethod"].asString();
	if(!requestConfigNode["BodyFormat"].isNull())
		requestConfig_.bodyFormat = requestConfigNode["BodyFormat"].asString();
	if(!requestConfigNode["RequestMode"].isNull())
		requestConfig_.requestMode = requestConfigNode["RequestMode"].asString();
	if(!requestConfigNode["PostBodyDescription"].isNull())
		requestConfig_.postBodyDescription = requestConfigNode["PostBodyDescription"].asString();
	if(!requestConfigNode["RequestProtocol"].isNull())
		requestConfig_.requestProtocol = requestConfigNode["RequestProtocol"].asString();
	auto serviceConfigNode = value["ServiceConfig"];
	if(!serviceConfigNode["VpcId"].isNull())
		serviceConfig_.vpcId = serviceConfigNode["VpcId"].asString();
	if(!serviceConfigNode["MockStatusCode"].isNull())
		serviceConfig_.mockStatusCode = std::stoi(serviceConfigNode["MockStatusCode"].asString());
	if(!serviceConfigNode["ServicePath"].isNull())
		serviceConfig_.servicePath = serviceConfigNode["ServicePath"].asString();
	if(!serviceConfigNode["Mock"].isNull())
		serviceConfig_.mock = serviceConfigNode["Mock"].asString();
	if(!serviceConfigNode["ServiceAddress"].isNull())
		serviceConfig_.serviceAddress = serviceConfigNode["ServiceAddress"].asString();
	if(!serviceConfigNode["ServiceVpcEnable"].isNull())
		serviceConfig_.serviceVpcEnable = serviceConfigNode["ServiceVpcEnable"].asString();
	if(!serviceConfigNode["MockResult"].isNull())
		serviceConfig_.mockResult = serviceConfigNode["MockResult"].asString();
	if(!serviceConfigNode["ServiceHttpMethod"].isNull())
		serviceConfig_.serviceHttpMethod = serviceConfigNode["ServiceHttpMethod"].asString();
	if(!serviceConfigNode["ServiceProtocol"].isNull())
		serviceConfig_.serviceProtocol = serviceConfigNode["ServiceProtocol"].asString();
	if(!serviceConfigNode["ServiceTimeout"].isNull())
		serviceConfig_.serviceTimeout = std::stoi(serviceConfigNode["ServiceTimeout"].asString());
	auto allMockHeadersNode = serviceConfigNode["MockHeaders"]["MockHeader"];
	for (auto serviceConfigNodeMockHeadersMockHeader : allMockHeadersNode)
	{
		ServiceConfig::MockHeader mockHeaderObject;
		if(!serviceConfigNodeMockHeadersMockHeader["HeaderValue"].isNull())
			mockHeaderObject.headerValue = serviceConfigNodeMockHeadersMockHeader["HeaderValue"].asString();
		if(!serviceConfigNodeMockHeadersMockHeader["HeaderName"].isNull())
			mockHeaderObject.headerName = serviceConfigNodeMockHeadersMockHeader["HeaderName"].asString();
		serviceConfig_.mockHeaders.push_back(mockHeaderObject);
	}
	auto vpcConfigNode = serviceConfigNode["VpcConfig"];
	if(!vpcConfigNode["VpcId"].isNull())
		serviceConfig_.vpcConfig.vpcId = vpcConfigNode["VpcId"].asString();
	if(!vpcConfigNode["InstanceId"].isNull())
		serviceConfig_.vpcConfig.instanceId = vpcConfigNode["InstanceId"].asString();
	if(!vpcConfigNode["Port"].isNull())
		serviceConfig_.vpcConfig.port = std::stoi(vpcConfigNode["Port"].asString());
	if(!vpcConfigNode["Name"].isNull())
		serviceConfig_.vpcConfig.name = vpcConfigNode["Name"].asString();
	auto functionComputeConfigNode = serviceConfigNode["FunctionComputeConfig"];
	if(!functionComputeConfigNode["FcType"].isNull())
		serviceConfig_.functionComputeConfig.fcType = functionComputeConfigNode["FcType"].asString();
	if(!functionComputeConfigNode["RoleArn"].isNull())
		serviceConfig_.functionComputeConfig.roleArn = functionComputeConfigNode["RoleArn"].asString();
	if(!functionComputeConfigNode["Method"].isNull())
		serviceConfig_.functionComputeConfig.method = functionComputeConfigNode["Method"].asString();
	if(!functionComputeConfigNode["FcBaseUrl"].isNull())
		serviceConfig_.functionComputeConfig.fcBaseUrl = functionComputeConfigNode["FcBaseUrl"].asString();
	if(!functionComputeConfigNode["ContentTypeValue"].isNull())
		serviceConfig_.functionComputeConfig.contentTypeValue = functionComputeConfigNode["ContentTypeValue"].asString();
	if(!functionComputeConfigNode["RegionId"].isNull())
		serviceConfig_.functionComputeConfig.regionId = functionComputeConfigNode["RegionId"].asString();
	if(!functionComputeConfigNode["OnlyBusinessPath"].isNull())
		serviceConfig_.functionComputeConfig.onlyBusinessPath = functionComputeConfigNode["OnlyBusinessPath"].asString() == "true";
	if(!functionComputeConfigNode["FunctionName"].isNull())
		serviceConfig_.functionComputeConfig.functionName = functionComputeConfigNode["FunctionName"].asString();
	if(!functionComputeConfigNode["ContentTypeCatagory"].isNull())
		serviceConfig_.functionComputeConfig.contentTypeCatagory = functionComputeConfigNode["ContentTypeCatagory"].asString();
	if(!functionComputeConfigNode["Path"].isNull())
		serviceConfig_.functionComputeConfig.path = functionComputeConfigNode["Path"].asString();
	if(!functionComputeConfigNode["ServiceName"].isNull())
		serviceConfig_.functionComputeConfig.serviceName = functionComputeConfigNode["ServiceName"].asString();
	if(!functionComputeConfigNode["Qualifier"].isNull())
		serviceConfig_.functionComputeConfig.qualifier = functionComputeConfigNode["Qualifier"].asString();
	auto openIdConnectConfigNode = value["OpenIdConnectConfig"];
	if(!openIdConnectConfigNode["OpenIdApiType"].isNull())
		openIdConnectConfig_.openIdApiType = openIdConnectConfigNode["OpenIdApiType"].asString();
	if(!openIdConnectConfigNode["IdTokenParamName"].isNull())
		openIdConnectConfig_.idTokenParamName = openIdConnectConfigNode["IdTokenParamName"].asString();
	if(!openIdConnectConfigNode["PublicKeyId"].isNull())
		openIdConnectConfig_.publicKeyId = openIdConnectConfigNode["PublicKeyId"].asString();
	if(!openIdConnectConfigNode["PublicKey"].isNull())
		openIdConnectConfig_.publicKey = openIdConnectConfigNode["PublicKey"].asString();
	if(!value["ApiId"].isNull())
		apiId_ = value["ApiId"].asString();
	if(!value["ResultType"].isNull())
		resultType_ = value["ResultType"].asString();
	if(!value["DisableInternet"].isNull())
		disableInternet_ = value["DisableInternet"].asString() == "true";
	if(!value["ResultBodyModel"].isNull())
		resultBodyModel_ = value["ResultBodyModel"].asString();
	if(!value["ResultSample"].isNull())
		resultSample_ = value["ResultSample"].asString();
	if(!value["AllowSignatureMethod"].isNull())
		allowSignatureMethod_ = value["AllowSignatureMethod"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ForceNonceCheck"].isNull())
		forceNonceCheck_ = value["ForceNonceCheck"].asString() == "true";
	if(!value["Visibility"].isNull())
		visibility_ = value["Visibility"].asString();
	if(!value["FailResultSample"].isNull())
		failResultSample_ = value["FailResultSample"].asString();
	if(!value["AuthType"].isNull())
		authType_ = value["AuthType"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["DeployedTime"].isNull())
		deployedTime_ = value["DeployedTime"].asString();
	if(!value["StageName"].isNull())
		stageName_ = value["StageName"].asString();
	if(!value["ApiName"].isNull())
		apiName_ = value["ApiName"].asString();

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

