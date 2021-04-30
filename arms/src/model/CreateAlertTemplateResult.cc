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

#include <alibabacloud/arms/model/CreateAlertTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateAlertTemplateResult::CreateAlertTemplateResult() :
	ServiceResult()
{}

CreateAlertTemplateResult::CreateAlertTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAlertTemplateResult::~CreateAlertTemplateResult()
{}

void CreateAlertTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alertTemplateNode = value["AlertTemplate"];
	if(!alertTemplateNode["Id"].isNull())
		alertTemplate_.id = std::stoi(alertTemplateNode["Id"].asString());
	if(!alertTemplateNode["ParentId"].isNull())
		alertTemplate_.parentId = std::stoi(alertTemplateNode["ParentId"].asString());
	if(!alertTemplateNode["Name"].isNull())
		alertTemplate_.name = alertTemplateNode["Name"].asString();
	if(!alertTemplateNode["Message"].isNull())
		alertTemplate_.message = alertTemplateNode["Message"].asString();
	if(!alertTemplateNode["AlertProvider"].isNull())
		alertTemplate_.alertProvider = alertTemplateNode["AlertProvider"].asString();
	if(!alertTemplateNode["TemplateProvider"].isNull())
		alertTemplate_.templateProvider = alertTemplateNode["TemplateProvider"].asString();
	if(!alertTemplateNode["Type"].isNull())
		alertTemplate_.type = alertTemplateNode["Type"].asString();
	if(!alertTemplateNode["Labels"].isNull())
		alertTemplate_.labels = alertTemplateNode["Labels"].asString();
	if(!alertTemplateNode["Annotations"].isNull())
		alertTemplate_.annotations = alertTemplateNode["Annotations"].asString();
	if(!alertTemplateNode["Rule"].isNull())
		alertTemplate_.rule = alertTemplateNode["Rule"].asString();
	if(!alertTemplateNode["UserId"].isNull())
		alertTemplate_.userId = alertTemplateNode["UserId"].asString();
	if(!alertTemplateNode["Status"].isNull())
		alertTemplate_.status = alertTemplateNode["Status"].asString() == "true";
	if(!alertTemplateNode["Public"].isNull())
		alertTemplate_._public = alertTemplateNode["Public"].asString() == "true";
	auto labelMatchExpressionGridNode = alertTemplateNode["LabelMatchExpressionGrid"];
	auto allLabelMatchExpressionGroupsNode = labelMatchExpressionGridNode["LabelMatchExpressionGroups"]["LabelMatchExpressionGroup"];
	for (auto labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroup : allLabelMatchExpressionGroupsNode)
	{
		AlertTemplate::LabelMatchExpressionGrid::LabelMatchExpressionGroup labelMatchExpressionGroupObject;
		auto allLabelMatchExpressionsNode = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroup["LabelMatchExpressions"]["LabelMatchExpression"];
		for (auto labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression : allLabelMatchExpressionsNode)
		{
			AlertTemplate::LabelMatchExpressionGrid::LabelMatchExpressionGroup::LabelMatchExpression labelMatchExpressionsObject;
			if(!labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Key"].isNull())
				labelMatchExpressionsObject.key = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Key"].asString();
			if(!labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Value"].isNull())
				labelMatchExpressionsObject.value = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Value"].asString();
			if(!labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Operator"].isNull())
				labelMatchExpressionsObject._operator = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Operator"].asString();
			labelMatchExpressionGroupObject.labelMatchExpressions.push_back(labelMatchExpressionsObject);
		}
		alertTemplate_.labelMatchExpressionGrid.labelMatchExpressionGroups.push_back(labelMatchExpressionGroupObject);
	}

}

CreateAlertTemplateResult::AlertTemplate CreateAlertTemplateResult::getAlertTemplate()const
{
	return alertTemplate_;
}

