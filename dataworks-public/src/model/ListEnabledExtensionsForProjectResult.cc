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

#include <alibabacloud/dataworks-public/model/ListEnabledExtensionsForProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListEnabledExtensionsForProjectResult::ListEnabledExtensionsForProjectResult() :
	ServiceResult()
{}

ListEnabledExtensionsForProjectResult::ListEnabledExtensionsForProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnabledExtensionsForProjectResult::~ListEnabledExtensionsForProjectResult()
{}

void ListEnabledExtensionsForProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExtensionsNode = value["Extensions"]["ExtensionsItem"];
	for (auto valueExtensionsExtensionsItem : allExtensionsNode)
	{
		ExtensionsItem extensionsObject;
		if(!valueExtensionsExtensionsItem["ExtensionCode"].isNull())
			extensionsObject.extensionCode = valueExtensionsExtensionsItem["ExtensionCode"].asString();
		if(!valueExtensionsExtensionsItem["ExtensionName"].isNull())
			extensionsObject.extensionName = valueExtensionsExtensionsItem["ExtensionName"].asString();
		if(!valueExtensionsExtensionsItem["TenantId"].isNull())
			extensionsObject.tenantId = std::stol(valueExtensionsExtensionsItem["TenantId"].asString());
		if(!valueExtensionsExtensionsItem["CreateUser"].isNull())
			extensionsObject.createUser = valueExtensionsExtensionsItem["CreateUser"].asString();
		if(!valueExtensionsExtensionsItem["ModifyUser"].isNull())
			extensionsObject.modifyUser = valueExtensionsExtensionsItem["ModifyUser"].asString();
		if(!valueExtensionsExtensionsItem["ExtensionDesc"].isNull())
			extensionsObject.extensionDesc = valueExtensionsExtensionsItem["ExtensionDesc"].asString();
		if(!valueExtensionsExtensionsItem["Owner"].isNull())
			extensionsObject.owner = valueExtensionsExtensionsItem["Owner"].asString();
		if(!valueExtensionsExtensionsItem["ParameterSetting"].isNull())
			extensionsObject.parameterSetting = valueExtensionsExtensionsItem["ParameterSetting"].asString();
		extensions_.push_back(extensionsObject);
	}

}

std::vector<ListEnabledExtensionsForProjectResult::ExtensionsItem> ListEnabledExtensionsForProjectResult::getExtensions()const
{
	return extensions_;
}

