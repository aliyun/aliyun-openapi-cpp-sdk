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

#include <alibabacloud/sae/model/ListNamespacedConfigMapsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListNamespacedConfigMapsResult::ListNamespacedConfigMapsResult() :
	ServiceResult()
{}

ListNamespacedConfigMapsResult::ListNamespacedConfigMapsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNamespacedConfigMapsResult::~ListNamespacedConfigMapsResult()
{}

void ListNamespacedConfigMapsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allConfigMapsNode = dataNode["ConfigMaps"]["ConfigMap"];
	for (auto dataNodeConfigMapsConfigMap : allConfigMapsNode)
	{
		Data::ConfigMap configMapObject;
		if(!dataNodeConfigMapsConfigMap["UpdateTime"].isNull())
			configMapObject.updateTime = std::stol(dataNodeConfigMapsConfigMap["UpdateTime"].asString());
		if(!dataNodeConfigMapsConfigMap["Data"].isNull())
			configMapObject.data = dataNodeConfigMapsConfigMap["Data"].asString();
		if(!dataNodeConfigMapsConfigMap["NamespaceId"].isNull())
			configMapObject.namespaceId = dataNodeConfigMapsConfigMap["NamespaceId"].asString();
		if(!dataNodeConfigMapsConfigMap["Description"].isNull())
			configMapObject.description = dataNodeConfigMapsConfigMap["Description"].asString();
		if(!dataNodeConfigMapsConfigMap["CreateTime"].isNull())
			configMapObject.createTime = std::stol(dataNodeConfigMapsConfigMap["CreateTime"].asString());
		if(!dataNodeConfigMapsConfigMap["ConfigMapId"].isNull())
			configMapObject.configMapId = std::stol(dataNodeConfigMapsConfigMap["ConfigMapId"].asString());
		if(!dataNodeConfigMapsConfigMap["Name"].isNull())
			configMapObject.name = dataNodeConfigMapsConfigMap["Name"].asString();
		auto allRelateAppsNode = dataNodeConfigMapsConfigMap["RelateApps"]["RelateApp"];
		for (auto dataNodeConfigMapsConfigMapRelateAppsRelateApp : allRelateAppsNode)
		{
			Data::ConfigMap::RelateApp relateAppsObject;
			if(!dataNodeConfigMapsConfigMapRelateAppsRelateApp["AppName"].isNull())
				relateAppsObject.appName = dataNodeConfigMapsConfigMapRelateAppsRelateApp["AppName"].asString();
			if(!dataNodeConfigMapsConfigMapRelateAppsRelateApp["AppId"].isNull())
				relateAppsObject.appId = dataNodeConfigMapsConfigMapRelateAppsRelateApp["AppId"].asString();
			configMapObject.relateApps.push_back(relateAppsObject);
		}
		data_.configMaps.push_back(configMapObject);
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

std::string ListNamespacedConfigMapsResult::getMessage()const
{
	return message_;
}

std::string ListNamespacedConfigMapsResult::getTraceId()const
{
	return traceId_;
}

ListNamespacedConfigMapsResult::Data ListNamespacedConfigMapsResult::getData()const
{
	return data_;
}

std::string ListNamespacedConfigMapsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListNamespacedConfigMapsResult::getCode()const
{
	return code_;
}

bool ListNamespacedConfigMapsResult::getSuccess()const
{
	return success_;
}

