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

#include <alibabacloud/cloudapi/model/DescribeApiDocResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiDocResult::DescribeApiDocResult() :
	ServiceResult()
{}

DescribeApiDocResult::DescribeApiDocResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiDocResult::~DescribeApiDocResult()
{}

void DescribeApiDocResult::parse(const std::string &payload)
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
	if(!value["ForceNonceCheck"].isNull())
		forceNonceCheck_ = value["ForceNonceCheck"].asString() == "true";
	if(!value["DisableInternet"].isNull())
		disableInternet_ = value["DisableInternet"].asString() == "true";

}

std::string DescribeApiDocResult::getGroupName()const
{
	return groupName_;
}

DescribeApiDocResult::RequestConfig DescribeApiDocResult::getRequestConfig()const
{
	return requestConfig_;
}

std::string DescribeApiDocResult::getDescription()const
{
	return description_;
}

std::string DescribeApiDocResult::getResultSample()const
{
	return resultSample_;
}

bool DescribeApiDocResult::getDisableInternet()const
{
	return disableInternet_;
}

std::string DescribeApiDocResult::getStageName()const
{
	return stageName_;
}

std::string DescribeApiDocResult::getApiName()const
{
	return apiName_;
}

bool DescribeApiDocResult::getForceNonceCheck()const
{
	return forceNonceCheck_;
}

std::string DescribeApiDocResult::getResultType()const
{
	return resultType_;
}

std::string DescribeApiDocResult::getFailResultSample()const
{
	return failResultSample_;
}

std::vector<DescribeApiDocResult::ErrorCodeSample> DescribeApiDocResult::getErrorCodeSamples()const
{
	return errorCodeSamples_;
}

std::vector<DescribeApiDocResult::RequestParameter> DescribeApiDocResult::getRequestParameters()const
{
	return requestParameters_;
}

std::string DescribeApiDocResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeApiDocResult::getDeployedTime()const
{
	return deployedTime_;
}

std::vector<DescribeApiDocResult::ResultDescription> DescribeApiDocResult::getResultDescriptions()const
{
	return resultDescriptions_;
}

std::string DescribeApiDocResult::getVisibility()const
{
	return visibility_;
}

std::string DescribeApiDocResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeApiDocResult::getAuthType()const
{
	return authType_;
}

std::string DescribeApiDocResult::getApiId()const
{
	return apiId_;
}

