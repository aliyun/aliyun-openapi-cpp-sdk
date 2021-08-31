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

#include <alibabacloud/edas/model/GetGrayEnvironmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetGrayEnvironmentsResult::GetGrayEnvironmentsResult() :
	ServiceResult()
{}

GetGrayEnvironmentsResult::GetGrayEnvironmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGrayEnvironmentsResult::~GetGrayEnvironmentsResult()
{}

void GetGrayEnvironmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EnvList"];
	for (auto valueDataEnvList : allDataNode)
	{
		EnvList dataObject;
		if(!valueDataEnvList["AccountId"].isNull())
			dataObject.accountId = valueDataEnvList["AccountId"].asString();
		if(!valueDataEnvList["PointcutId"].isNull())
			dataObject.pointcutId = std::stol(valueDataEnvList["PointcutId"].asString());
		if(!valueDataEnvList["RegionId"].isNull())
			dataObject.regionId = valueDataEnvList["RegionId"].asString();
		if(!valueDataEnvList["TenantId"].isNull())
			dataObject.tenantId = valueDataEnvList["TenantId"].asString();
		auto metadataNode = value["Metadata"];
		if(!metadataNode["Labels"].isNull())
			dataObject.metadata.labels = metadataNode["Labels"].asString();
		if(!metadataNode["Annotations"].isNull())
			dataObject.metadata.annotations = metadataNode["Annotations"].asString();
		if(!metadataNode["Name"].isNull())
			dataObject.metadata.name = metadataNode["Name"].asString();
		if(!metadataNode["Namespace"].isNull())
			dataObject.metadata._namespace = metadataNode["Namespace"].asString();
		auto specNode = value["Spec"];
		if(!specNode["Enable"].isNull())
			dataObject.spec.enable = specNode["Enable"].asString() == "true";
		if(!specNode["ShowName"].isNull())
			dataObject.spec.showName = specNode["ShowName"].asString();
		if(!specNode["Single"].isNull())
			dataObject.spec.single = specNode["Single"].asString() == "true";
		if(!specNode["Tag"].isNull())
			dataObject.spec.tag = specNode["Tag"].asString();
		if(!specNode["Selector"].isNull())
			dataObject.spec.selector = specNode["Selector"].asString();
		auto allScopesNode = specNode["Scopes"]["ScopesItem"];
		for (auto specNodeScopesScopesItem : allScopesNode)
		{
			EnvList::Spec::ScopesItem scopesItemObject;
			if(!specNodeScopesScopesItem["Id"].isNull())
				scopesItemObject.id = std::stol(specNodeScopesScopesItem["Id"].asString());
			if(!specNodeScopesScopesItem["Key"].isNull())
				scopesItemObject.key = specNodeScopesScopesItem["Key"].asString();
			if(!specNodeScopesScopesItem["Value"].isNull())
				scopesItemObject.value = specNodeScopesScopesItem["Value"].asString();
			if(!specNodeScopesScopesItem["Extra"].isNull())
				scopesItemObject.extra = specNodeScopesScopesItem["Extra"].asString();
			auto valueFromNode = value["ValueFrom"];
			if(!valueFromNode["RefName"].isNull())
				scopesItemObject.valueFrom.refName = valueFromNode["RefName"].asString();
			if(!valueFromNode["RefValue"].isNull())
				scopesItemObject.valueFrom.refValue = valueFromNode["RefValue"].asString();
			dataObject.spec.scopes.push_back(scopesItemObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetGrayEnvironmentsResult::getMessage()const
{
	return message_;
}

std::vector<GetGrayEnvironmentsResult::EnvList> GetGrayEnvironmentsResult::getData()const
{
	return data_;
}

int GetGrayEnvironmentsResult::getCode()const
{
	return code_;
}

