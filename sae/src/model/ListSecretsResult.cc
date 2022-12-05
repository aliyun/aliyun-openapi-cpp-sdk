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

#include <alibabacloud/sae/model/ListSecretsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListSecretsResult::ListSecretsResult() :
	ServiceResult()
{}

ListSecretsResult::ListSecretsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecretsResult::~ListSecretsResult()
{}

void ListSecretsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allSecretsNode = dataNode["Secrets"]["Secret"];
	for (auto dataNodeSecretsSecret : allSecretsNode)
	{
		Data::Secret secretObject;
		if(!dataNodeSecretsSecret["NamespaceId"].isNull())
			secretObject.namespaceId = dataNodeSecretsSecret["NamespaceId"].asString();
		if(!dataNodeSecretsSecret["SecretId"].isNull())
			secretObject.secretId = std::stol(dataNodeSecretsSecret["SecretId"].asString());
		if(!dataNodeSecretsSecret["SecretName"].isNull())
			secretObject.secretName = dataNodeSecretsSecret["SecretName"].asString();
		if(!dataNodeSecretsSecret["SecretType"].isNull())
			secretObject.secretType = dataNodeSecretsSecret["SecretType"].asString();
		if(!dataNodeSecretsSecret["SecretData"].isNull())
			secretObject.secretData = dataNodeSecretsSecret["SecretData"].asString();
		if(!dataNodeSecretsSecret["CreateTime"].isNull())
			secretObject.createTime = std::stol(dataNodeSecretsSecret["CreateTime"].asString());
		if(!dataNodeSecretsSecret["UpdateTime"].isNull())
			secretObject.updateTime = std::stol(dataNodeSecretsSecret["UpdateTime"].asString());
		auto allRelateAppsNode = dataNodeSecretsSecret["RelateApps"]["RelateApp"];
		for (auto dataNodeSecretsSecretRelateAppsRelateApp : allRelateAppsNode)
		{
			Data::Secret::RelateApp relateAppsObject;
			if(!dataNodeSecretsSecretRelateAppsRelateApp["AppName"].isNull())
				relateAppsObject.appName = dataNodeSecretsSecretRelateAppsRelateApp["AppName"].asString();
			if(!dataNodeSecretsSecretRelateAppsRelateApp["AppId"].isNull())
				relateAppsObject.appId = dataNodeSecretsSecretRelateAppsRelateApp["AppId"].asString();
			secretObject.relateApps.push_back(relateAppsObject);
		}
		data_.secrets.push_back(secretObject);
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

std::string ListSecretsResult::getMessage()const
{
	return message_;
}

std::string ListSecretsResult::getTraceId()const
{
	return traceId_;
}

ListSecretsResult::Data ListSecretsResult::getData()const
{
	return data_;
}

std::string ListSecretsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSecretsResult::getCode()const
{
	return code_;
}

bool ListSecretsResult::getSuccess()const
{
	return success_;
}

