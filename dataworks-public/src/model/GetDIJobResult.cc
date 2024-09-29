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

#include <alibabacloud/dataworks-public/model/GetDIJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDIJobResult::GetDIJobResult() :
	ServiceResult()
{}

GetDIJobResult::GetDIJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDIJobResult::~GetDIJobResult()
{}

void GetDIJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["DIJobId"].isNull())
		data_.dIJobId = std::stol(dataNode["DIJobId"].asString());
	if(!dataNode["JobName"].isNull())
		data_.jobName = dataNode["JobName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["MigrationType"].isNull())
		data_.migrationType = dataNode["MigrationType"].asString();
	if(!dataNode["SourceDataSourceType"].isNull())
		data_.sourceDataSourceType = dataNode["SourceDataSourceType"].asString();
	if(!dataNode["DestinationDataSourceType"].isNull())
		data_.destinationDataSourceType = dataNode["DestinationDataSourceType"].asString();
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = std::stol(dataNode["CreatedTime"].asString());
	if(!dataNode["CreatedUid"].isNull())
		data_.createdUid = dataNode["CreatedUid"].asString();
	if(!dataNode["UpdatedTime"].isNull())
		data_.updatedTime = std::stol(dataNode["UpdatedTime"].asString());
	if(!dataNode["UpdatedUid"].isNull())
		data_.updatedUid = dataNode["UpdatedUid"].asString();
	if(!dataNode["StartedTime"].isNull())
		data_.startedTime = std::stol(dataNode["StartedTime"].asString());
	if(!dataNode["StartedUid"].isNull())
		data_.startedUid = dataNode["StartedUid"].asString();
	if(!dataNode["JobStatus"].isNull())
		data_.jobStatus = dataNode["JobStatus"].asString();
	if(!dataNode["ErrorMessage"].isNull())
		data_.errorMessage = dataNode["ErrorMessage"].asString();
	if(!dataNode["RunStats"].isNull())
		data_.runStats = dataNode["RunStats"].asString();
	auto allSourceDataSourceSettingsNode = dataNode["SourceDataSourceSettings"]["SourceDataSourceSetting"];
	for (auto dataNodeSourceDataSourceSettingsSourceDataSourceSetting : allSourceDataSourceSettingsNode)
	{
		Data::SourceDataSourceSetting sourceDataSourceSettingObject;
		if(!dataNodeSourceDataSourceSettingsSourceDataSourceSetting["DataSourceName"].isNull())
			sourceDataSourceSettingObject.dataSourceName = dataNodeSourceDataSourceSettingsSourceDataSourceSetting["DataSourceName"].asString();
		if(!dataNodeSourceDataSourceSettingsSourceDataSourceSetting["DataSourceProperties"].isNull())
			sourceDataSourceSettingObject.dataSourceProperties = dataNodeSourceDataSourceSettingsSourceDataSourceSetting["DataSourceProperties"].asString();
		data_.sourceDataSourceSettings.push_back(sourceDataSourceSettingObject);
	}
	auto allDestinationDataSourceSettingsNode = dataNode["DestinationDataSourceSettings"]["DestinationDataSourceSetting"];
	for (auto dataNodeDestinationDataSourceSettingsDestinationDataSourceSetting : allDestinationDataSourceSettingsNode)
	{
		Data::DestinationDataSourceSetting destinationDataSourceSettingObject;
		if(!dataNodeDestinationDataSourceSettingsDestinationDataSourceSetting["DataSourceName"].isNull())
			destinationDataSourceSettingObject.dataSourceName = dataNodeDestinationDataSourceSettingsDestinationDataSourceSetting["DataSourceName"].asString();
		if(!dataNodeDestinationDataSourceSettingsDestinationDataSourceSetting["DataSourceProperties"].isNull())
			destinationDataSourceSettingObject.dataSourceProperties = dataNodeDestinationDataSourceSettingsDestinationDataSourceSetting["DataSourceProperties"].asString();
		data_.destinationDataSourceSettings.push_back(destinationDataSourceSettingObject);
	}
	auto allTransformationRulesNode = dataNode["TransformationRules"]["TransformationRule"];
	for (auto dataNodeTransformationRulesTransformationRule : allTransformationRulesNode)
	{
		Data::TransformationRule transformationRuleObject;
		if(!dataNodeTransformationRulesTransformationRule["RuleActionType"].isNull())
			transformationRuleObject.ruleActionType = dataNodeTransformationRulesTransformationRule["RuleActionType"].asString();
		if(!dataNodeTransformationRulesTransformationRule["RuleExpression"].isNull())
			transformationRuleObject.ruleExpression = dataNodeTransformationRulesTransformationRule["RuleExpression"].asString();
		if(!dataNodeTransformationRulesTransformationRule["RuleName"].isNull())
			transformationRuleObject.ruleName = dataNodeTransformationRulesTransformationRule["RuleName"].asString();
		if(!dataNodeTransformationRulesTransformationRule["RuleTargetType"].isNull())
			transformationRuleObject.ruleTargetType = dataNodeTransformationRulesTransformationRule["RuleTargetType"].asString();
		data_.transformationRules.push_back(transformationRuleObject);
	}
	auto allTableMappingsNode = dataNode["TableMappings"]["TableMapping"];
	for (auto dataNodeTableMappingsTableMapping : allTableMappingsNode)
	{
		Data::TableMapping tableMappingObject;
		auto allSourceObjectSelectionRulesNode = dataNodeTableMappingsTableMapping["SourceObjectSelectionRules"]["SourceObjectSelectionRule"];
		for (auto dataNodeTableMappingsTableMappingSourceObjectSelectionRulesSourceObjectSelectionRule : allSourceObjectSelectionRulesNode)
		{
			Data::TableMapping::SourceObjectSelectionRule sourceObjectSelectionRulesObject;
			if(!dataNodeTableMappingsTableMappingSourceObjectSelectionRulesSourceObjectSelectionRule["Expression"].isNull())
				sourceObjectSelectionRulesObject.expression = dataNodeTableMappingsTableMappingSourceObjectSelectionRulesSourceObjectSelectionRule["Expression"].asString();
			if(!dataNodeTableMappingsTableMappingSourceObjectSelectionRulesSourceObjectSelectionRule["ObjectType"].isNull())
				sourceObjectSelectionRulesObject.objectType = dataNodeTableMappingsTableMappingSourceObjectSelectionRulesSourceObjectSelectionRule["ObjectType"].asString();
			tableMappingObject.sourceObjectSelectionRules.push_back(sourceObjectSelectionRulesObject);
		}
		auto allTransformationRules1Node = dataNodeTableMappingsTableMapping["TransformationRules"]["TransformationRule"];
		for (auto dataNodeTableMappingsTableMappingTransformationRulesTransformationRule : allTransformationRules1Node)
		{
			Data::TableMapping::TransformationRule2 transformationRules1Object;
			if(!dataNodeTableMappingsTableMappingTransformationRulesTransformationRule["RuleActionType"].isNull())
				transformationRules1Object.ruleActionType = dataNodeTableMappingsTableMappingTransformationRulesTransformationRule["RuleActionType"].asString();
			if(!dataNodeTableMappingsTableMappingTransformationRulesTransformationRule["RuleName"].isNull())
				transformationRules1Object.ruleName = dataNodeTableMappingsTableMappingTransformationRulesTransformationRule["RuleName"].asString();
			if(!dataNodeTableMappingsTableMappingTransformationRulesTransformationRule["RuleTargetType"].isNull())
				transformationRules1Object.ruleTargetType = dataNodeTableMappingsTableMappingTransformationRulesTransformationRule["RuleTargetType"].asString();
			tableMappingObject.transformationRules1.push_back(transformationRules1Object);
		}
		data_.tableMappings.push_back(tableMappingObject);
	}
	auto resourceSettingsNode = dataNode["ResourceSettings"];
	if(!resourceSettingsNode["RequestedCu"].isNull())
		data_.resourceSettings.requestedCu = std::stof(resourceSettingsNode["RequestedCu"].asString());
	auto offlineResourceSettingsNode = resourceSettingsNode["OfflineResourceSettings"];
	if(!offlineResourceSettingsNode["ResourceGroupIdentifier"].isNull())
		data_.resourceSettings.offlineResourceSettings.resourceGroupIdentifier = offlineResourceSettingsNode["ResourceGroupIdentifier"].asString();
	auto realtimeResourceSettingsNode = resourceSettingsNode["RealtimeResourceSettings"];
	if(!realtimeResourceSettingsNode["ResourceGroupIdentifier"].isNull())
		data_.resourceSettings.realtimeResourceSettings.resourceGroupIdentifier = realtimeResourceSettingsNode["ResourceGroupIdentifier"].asString();
	auto jobSettingsNode = dataNode["JobSettings"];
	if(!jobSettingsNode["ChannelSettings"].isNull())
		data_.jobSettings.channelSettings = jobSettingsNode["ChannelSettings"].asString();
	auto allColumnDataTypeSettingsNode = jobSettingsNode["ColumnDataTypeSettings"]["ColumnDataTypeSetting"];
	for (auto jobSettingsNodeColumnDataTypeSettingsColumnDataTypeSetting : allColumnDataTypeSettingsNode)
	{
		Data::JobSettings::ColumnDataTypeSetting columnDataTypeSettingObject;
		if(!jobSettingsNodeColumnDataTypeSettingsColumnDataTypeSetting["SourceDataType"].isNull())
			columnDataTypeSettingObject.sourceDataType = jobSettingsNodeColumnDataTypeSettingsColumnDataTypeSetting["SourceDataType"].asString();
		if(!jobSettingsNodeColumnDataTypeSettingsColumnDataTypeSetting["DestinationDataType"].isNull())
			columnDataTypeSettingObject.destinationDataType = jobSettingsNodeColumnDataTypeSettingsColumnDataTypeSetting["DestinationDataType"].asString();
		data_.jobSettings.columnDataTypeSettings.push_back(columnDataTypeSettingObject);
	}
	auto allDdlHandlingSettingsNode = jobSettingsNode["DdlHandlingSettings"]["DdlHandlingSetting"];
	for (auto jobSettingsNodeDdlHandlingSettingsDdlHandlingSetting : allDdlHandlingSettingsNode)
	{
		Data::JobSettings::DdlHandlingSetting ddlHandlingSettingObject;
		if(!jobSettingsNodeDdlHandlingSettingsDdlHandlingSetting["Action"].isNull())
			ddlHandlingSettingObject.action = jobSettingsNodeDdlHandlingSettingsDdlHandlingSetting["Action"].asString();
		if(!jobSettingsNodeDdlHandlingSettingsDdlHandlingSetting["Type"].isNull())
			ddlHandlingSettingObject.type = jobSettingsNodeDdlHandlingSettingsDdlHandlingSetting["Type"].asString();
		data_.jobSettings.ddlHandlingSettings.push_back(ddlHandlingSettingObject);
	}
	auto allRuntimeSettingsNode = jobSettingsNode["RuntimeSettings"]["RuntimeSetting"];
	for (auto jobSettingsNodeRuntimeSettingsRuntimeSetting : allRuntimeSettingsNode)
	{
		Data::JobSettings::RuntimeSetting runtimeSettingObject;
		if(!jobSettingsNodeRuntimeSettingsRuntimeSetting["Name"].isNull())
			runtimeSettingObject.name = jobSettingsNodeRuntimeSettingsRuntimeSetting["Name"].asString();
		if(!jobSettingsNodeRuntimeSettingsRuntimeSetting["Value"].isNull())
			runtimeSettingObject.value = jobSettingsNodeRuntimeSettingsRuntimeSetting["Value"].asString();
		data_.jobSettings.runtimeSettings.push_back(runtimeSettingObject);
	}
	auto cycleScheduleSettingsNode = jobSettingsNode["CycleScheduleSettings"];
	if(!cycleScheduleSettingsNode["CycleMigrationType"].isNull())
		data_.jobSettings.cycleScheduleSettings.cycleMigrationType = cycleScheduleSettingsNode["CycleMigrationType"].asString();
	if(!cycleScheduleSettingsNode["ScheduleParameters"].isNull())
		data_.jobSettings.cycleScheduleSettings.scheduleParameters = cycleScheduleSettingsNode["ScheduleParameters"].asString();

}

GetDIJobResult::Data GetDIJobResult::getData()const
{
	return data_;
}

