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

#include <alibabacloud/computenest/model/GetServiceTemplateParameterConstraintsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

GetServiceTemplateParameterConstraintsResult::GetServiceTemplateParameterConstraintsResult() :
	ServiceResult()
{}

GetServiceTemplateParameterConstraintsResult::GetServiceTemplateParameterConstraintsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceTemplateParameterConstraintsResult::~GetServiceTemplateParameterConstraintsResult()
{}

void GetServiceTemplateParameterConstraintsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParameterConstraintsNode = value["ParameterConstraints"]["ParameterConstraintsItem"];
	for (auto valueParameterConstraintsParameterConstraintsItem : allParameterConstraintsNode)
	{
		ParameterConstraintsItem parameterConstraintsObject;
		if(!valueParameterConstraintsParameterConstraintsItem["Type"].isNull())
			parameterConstraintsObject.type = valueParameterConstraintsParameterConstraintsItem["Type"].asString();
		if(!valueParameterConstraintsParameterConstraintsItem["ParameterKey"].isNull())
			parameterConstraintsObject.parameterKey = valueParameterConstraintsParameterConstraintsItem["ParameterKey"].asString();
		if(!valueParameterConstraintsParameterConstraintsItem["Behavior"].isNull())
			parameterConstraintsObject.behavior = valueParameterConstraintsParameterConstraintsItem["Behavior"].asString();
		if(!valueParameterConstraintsParameterConstraintsItem["BehaviorReason"].isNull())
			parameterConstraintsObject.behaviorReason = valueParameterConstraintsParameterConstraintsItem["BehaviorReason"].asString();
		auto allOriginalConstraintsNode = valueParameterConstraintsParameterConstraintsItem["OriginalConstraints"]["OriginalConstraintsItem"];
		for (auto valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem : allOriginalConstraintsNode)
		{
			ParameterConstraintsItem::OriginalConstraintsItem originalConstraintsObject;
			if(!valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem["PropertyName"].isNull())
				originalConstraintsObject.propertyName = valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem["PropertyName"].asString();
			if(!valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem["ResourceName"].isNull())
				originalConstraintsObject.resourceName = valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem["ResourceName"].asString();
			if(!valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem["ResourceType"].isNull())
				originalConstraintsObject.resourceType = valueParameterConstraintsParameterConstraintsItemOriginalConstraintsOriginalConstraintsItem["ResourceType"].asString();
			auto allAllowedValues1 = value["AllowedValues"]["AllowedValues"];
			for (auto value : allAllowedValues1)
				originalConstraintsObject.allowedValues1.push_back(value.asString());
			parameterConstraintsObject.originalConstraints.push_back(originalConstraintsObject);
		}
		auto allQueryErrorsNode = valueParameterConstraintsParameterConstraintsItem["QueryErrors"]["QueryErrorsItem"];
		for (auto valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem : allQueryErrorsNode)
		{
			ParameterConstraintsItem::QueryErrorsItem queryErrorsObject;
			if(!valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem["ErrorMessage"].isNull())
				queryErrorsObject.errorMessage = valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem["ErrorMessage"].asString();
			if(!valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem["ResourceName"].isNull())
				queryErrorsObject.resourceName = valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem["ResourceName"].asString();
			if(!valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem["ResourceType"].isNull())
				queryErrorsObject.resourceType = valueParameterConstraintsParameterConstraintsItemQueryErrorsQueryErrorsItem["ResourceType"].asString();
			parameterConstraintsObject.queryErrors.push_back(queryErrorsObject);
		}
		auto allAllowedValues = value["AllowedValues"]["AllowedValues"];
		for (auto value : allAllowedValues)
			parameterConstraintsObject.allowedValues.push_back(value.asString());
		auto allAssociationParameterNames = value["AssociationParameterNames"]["AssociationParameterNames"];
		for (auto value : allAssociationParameterNames)
			parameterConstraintsObject.associationParameterNames.push_back(value.asString());
		parameterConstraints_.push_back(parameterConstraintsObject);
	}
	auto allFamilyConstraints = value["FamilyConstraints"]["PamilyConstraints"];
	for (const auto &item : allFamilyConstraints)
		familyConstraints_.push_back(item.asString());

}

std::vector<GetServiceTemplateParameterConstraintsResult::ParameterConstraintsItem> GetServiceTemplateParameterConstraintsResult::getParameterConstraints()const
{
	return parameterConstraints_;
}

std::vector<std::string> GetServiceTemplateParameterConstraintsResult::getFamilyConstraints()const
{
	return familyConstraints_;
}

