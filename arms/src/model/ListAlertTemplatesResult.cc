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

#include <alibabacloud/arms/model/ListAlertTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListAlertTemplatesResult::ListAlertTemplatesResult() :
	ServiceResult()
{}

ListAlertTemplatesResult::ListAlertTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertTemplatesResult::~ListAlertTemplatesResult()
{}

void ListAlertTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertTemplatesNode = value["AlertTemplates"]["AlertTemplate"];
	for (auto valueAlertTemplatesAlertTemplate : allAlertTemplatesNode)
	{
		AlertTemplate alertTemplatesObject;
		if(!valueAlertTemplatesAlertTemplate["Id"].isNull())
			alertTemplatesObject.id = std::stoi(valueAlertTemplatesAlertTemplate["Id"].asString());
		if(!valueAlertTemplatesAlertTemplate["ParentId"].isNull())
			alertTemplatesObject.parentId = std::stoi(valueAlertTemplatesAlertTemplate["ParentId"].asString());
		if(!valueAlertTemplatesAlertTemplate["Name"].isNull())
			alertTemplatesObject.name = valueAlertTemplatesAlertTemplate["Name"].asString();
		if(!valueAlertTemplatesAlertTemplate["Message"].isNull())
			alertTemplatesObject.message = valueAlertTemplatesAlertTemplate["Message"].asString();
		if(!valueAlertTemplatesAlertTemplate["AlertProvider"].isNull())
			alertTemplatesObject.alertProvider = valueAlertTemplatesAlertTemplate["AlertProvider"].asString();
		if(!valueAlertTemplatesAlertTemplate["TemplateProvider"].isNull())
			alertTemplatesObject.templateProvider = valueAlertTemplatesAlertTemplate["TemplateProvider"].asString();
		if(!valueAlertTemplatesAlertTemplate["Type"].isNull())
			alertTemplatesObject.type = valueAlertTemplatesAlertTemplate["Type"].asString();
		if(!valueAlertTemplatesAlertTemplate["Labels"].isNull())
			alertTemplatesObject.labels = valueAlertTemplatesAlertTemplate["Labels"].asString();
		if(!valueAlertTemplatesAlertTemplate["Annotations"].isNull())
			alertTemplatesObject.annotations = valueAlertTemplatesAlertTemplate["Annotations"].asString();
		if(!valueAlertTemplatesAlertTemplate["Rule"].isNull())
			alertTemplatesObject.rule = valueAlertTemplatesAlertTemplate["Rule"].asString();
		if(!valueAlertTemplatesAlertTemplate["UserId"].isNull())
			alertTemplatesObject.userId = valueAlertTemplatesAlertTemplate["UserId"].asString();
		if(!valueAlertTemplatesAlertTemplate["Status"].isNull())
			alertTemplatesObject.status = valueAlertTemplatesAlertTemplate["Status"].asString() == "true";
		if(!valueAlertTemplatesAlertTemplate["Public"].isNull())
			alertTemplatesObject._public = valueAlertTemplatesAlertTemplate["Public"].asString() == "true";
		auto labelMatchExpressionGridNode = value["LabelMatchExpressionGrid"];
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
			alertTemplatesObject.labelMatchExpressionGrid.labelMatchExpressionGroups.push_back(labelMatchExpressionGroupObject);
		}
		alertTemplates_.push_back(alertTemplatesObject);
	}

}

std::vector<ListAlertTemplatesResult::AlertTemplate> ListAlertTemplatesResult::getAlertTemplates()const
{
	return alertTemplates_;
}

