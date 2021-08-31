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

#include <alibabacloud/edas/model/ToggleGrayIngressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ToggleGrayIngressResult::ToggleGrayIngressResult() :
	ServiceResult()
{}

ToggleGrayIngressResult::ToggleGrayIngressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ToggleGrayIngressResult::~ToggleGrayIngressResult()
{}

void ToggleGrayIngressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PointcutId"].isNull())
		data_.pointcutId = std::stol(dataNode["PointcutId"].asString());
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	auto specNode = dataNode["Spec"];
	if(!specNode["ShowName"].isNull())
		data_.spec.showName = specNode["ShowName"].asString();
	if(!specNode["Tag"].isNull())
		data_.spec.tag = specNode["Tag"].asString();
	if(!specNode["Enable"].isNull())
		data_.spec.enable = specNode["Enable"].asString() == "true";
	if(!specNode["Selector"].isNull())
		data_.spec.selector = specNode["Selector"].asString();
	auto allScopesNode = specNode["Scopes"]["ScopesItem"];
	for (auto specNodeScopesScopesItem : allScopesNode)
	{
		Data::Spec::ScopesItem scopesItemObject;
		if(!specNodeScopesScopesItem["Id"].isNull())
			scopesItemObject.id = std::stol(specNodeScopesScopesItem["Id"].asString());
		if(!specNodeScopesScopesItem["Key"].isNull())
			scopesItemObject.key = specNodeScopesScopesItem["Key"].asString();
		if(!specNodeScopesScopesItem["Value"].isNull())
			scopesItemObject.value = specNodeScopesScopesItem["Value"].asString();
		auto valueFromNode = value["ValueFrom"];
		if(!valueFromNode["RefName"].isNull())
			scopesItemObject.valueFrom.refName = valueFromNode["RefName"].asString();
		if(!valueFromNode["RefValue"].isNull())
			scopesItemObject.valueFrom.refValue = valueFromNode["RefValue"].asString();
		data_.spec.scopes.push_back(scopesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = std::stoi(value["Message"].asString());

}

int ToggleGrayIngressResult::getMessage()const
{
	return message_;
}

ToggleGrayIngressResult::Data ToggleGrayIngressResult::getData()const
{
	return data_;
}

int ToggleGrayIngressResult::getCode()const
{
	return code_;
}

