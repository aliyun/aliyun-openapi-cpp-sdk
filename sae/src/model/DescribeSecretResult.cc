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

#include <alibabacloud/sae/model/DescribeSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeSecretResult::DescribeSecretResult() :
	ServiceResult()
{}

DescribeSecretResult::DescribeSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecretResult::~DescribeSecretResult()
{}

void DescribeSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["SecretId"].isNull())
		data_.secretId = std::stol(dataNode["SecretId"].asString());
	if(!dataNode["SecretName"].isNull())
		data_.secretName = dataNode["SecretName"].asString();
	if(!dataNode["SecretType"].isNull())
		data_.secretType = dataNode["SecretType"].asString();
	if(!dataNode["SecretData"].isNull())
		data_.secretData = dataNode["SecretData"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	auto allRelateAppsNode = dataNode["RelateApps"]["RelateApp"];
	for (auto dataNodeRelateAppsRelateApp : allRelateAppsNode)
	{
		Data::RelateApp relateAppObject;
		if(!dataNodeRelateAppsRelateApp["AppId"].isNull())
			relateAppObject.appId = dataNodeRelateAppsRelateApp["AppId"].asString();
		if(!dataNodeRelateAppsRelateApp["AppName"].isNull())
			relateAppObject.appName = dataNodeRelateAppsRelateApp["AppName"].asString();
		data_.relateApps.push_back(relateAppObject);
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

std::string DescribeSecretResult::getMessage()const
{
	return message_;
}

std::string DescribeSecretResult::getTraceId()const
{
	return traceId_;
}

DescribeSecretResult::Data DescribeSecretResult::getData()const
{
	return data_;
}

std::string DescribeSecretResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeSecretResult::getCode()const
{
	return code_;
}

bool DescribeSecretResult::getSuccess()const
{
	return success_;
}

