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

#include <alibabacloud/itag/model/GetTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetTaskResult::GetTaskResult() :
	ServiceResult()
{}

GetTaskResult::GetTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskResult::~GetTaskResult()
{}

void GetTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TaskName"].isNull())
		result_.taskName = resultNode["TaskName"].asString();
	if(!resultNode["TaskId"].isNull())
		result_.taskId = resultNode["TaskId"].asString();
	if(!resultNode["TemplateId"].isNull())
		result_.templateId = resultNode["TemplateId"].asString();
	if(!resultNode["ProjectId"].isNull())
		result_.projectId = std::stol(resultNode["ProjectId"].asString());
	if(!resultNode["TaskType"].isNull())
		result_.taskType = resultNode["TaskType"].asString();
	if(!resultNode["TntInstId"].isNull())
		result_.tntInstId = resultNode["TntInstId"].asString();
	if(!resultNode["TntInstName"].isNull())
		result_.tntInstName = resultNode["TntInstName"].asString();
	if(!resultNode["Remark"].isNull())
		result_.remark = resultNode["Remark"].asString();
	if(!resultNode["AllowAppendData"].isNull())
		result_.allowAppendData = resultNode["AllowAppendData"].asString() == "true";
	if(!resultNode["Channel"].isNull())
		result_.channel = resultNode["Channel"].asString();
	if(!resultNode["SafetyLevel"].isNull())
		result_.safetyLevel = std::stoi(resultNode["SafetyLevel"].asString());
	if(!resultNode["RelateTaskConfig"].isNull())
		result_.relateTaskConfig = resultNode["RelateTaskConfig"].asString();
	if(!resultNode["Exif"].isNull())
		result_.exif = resultNode["Exif"].asString();
	if(!resultNode["MineConfigs"].isNull())
		result_.mineConfigs = resultNode["MineConfigs"].asString();
	if(!resultNode["VoteConfigs"].isNull())
		result_.voteConfigs = resultNode["VoteConfigs"].asString();
	if(!resultNode["RunMsg"].isNull())
		result_.runMsg = resultNode["RunMsg"].asString();
	if(!resultNode["Archived"].isNull())
		result_.archived = resultNode["Archived"].asString() == "true";
	if(!resultNode["Stage"].isNull())
		result_.stage = resultNode["Stage"].asString();
	if(!resultNode["ArchivedInfos"].isNull())
		result_.archivedInfos = resultNode["ArchivedInfos"].asString();
	if(!resultNode["AlertTime"].isNull())
		result_.alertTime = std::stoi(resultNode["AlertTime"].asString());
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto allDatasetProxyRelationsNode = resultNode["DatasetProxyRelations"]["TaskDatasetProxyRelation"];
	for (auto resultNodeDatasetProxyRelationsTaskDatasetProxyRelation : allDatasetProxyRelationsNode)
	{
		Result::TaskDatasetProxyRelation taskDatasetProxyRelationObject;
		if(!resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["DatasetId"].isNull())
			taskDatasetProxyRelationObject.datasetId = resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["DatasetId"].asString();
		if(!resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["Source"].isNull())
			taskDatasetProxyRelationObject.source = resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["Source"].asString();
		if(!resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["SourceBizId"].isNull())
			taskDatasetProxyRelationObject.sourceBizId = resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["SourceBizId"].asString();
		if(!resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["DatasetType"].isNull())
			taskDatasetProxyRelationObject.datasetType = resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["DatasetType"].asString();
		if(!resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["Exif"].isNull())
			taskDatasetProxyRelationObject.exif = resultNodeDatasetProxyRelationsTaskDatasetProxyRelation["Exif"].asString();
		result_.datasetProxyRelations.push_back(taskDatasetProxyRelationObject);
	}
	auto allAdminsNode = resultNode["Admins"]["ITagSimpleUserVO"];
	for (auto resultNodeAdminsITagSimpleUserVO : allAdminsNode)
	{
		Result::ITagSimpleUserVO iTagSimpleUserVOObject;
		if(!resultNodeAdminsITagSimpleUserVO["UserId"].isNull())
			iTagSimpleUserVOObject.userId = resultNodeAdminsITagSimpleUserVO["UserId"].asString();
		if(!resultNodeAdminsITagSimpleUserVO["UserName"].isNull())
			iTagSimpleUserVOObject.userName = resultNodeAdminsITagSimpleUserVO["UserName"].asString();
		if(!resultNodeAdminsITagSimpleUserVO["AccountType"].isNull())
			iTagSimpleUserVOObject.accountType = resultNodeAdminsITagSimpleUserVO["AccountType"].asString();
		if(!resultNodeAdminsITagSimpleUserVO["AccountNo"].isNull())
			iTagSimpleUserVOObject.accountNo = resultNodeAdminsITagSimpleUserVO["AccountNo"].asString();
		result_.admins.push_back(iTagSimpleUserVOObject);
	}
	auto allTaskWorkFlowNode = resultNode["TaskWorkFlow"]["ITagTaskWorkflowConfig"];
	for (auto resultNodeTaskWorkFlowITagTaskWorkflowConfig : allTaskWorkFlowNode)
	{
		Result::ITagTaskWorkflowConfig iTagTaskWorkflowConfigObject;
		if(!resultNodeTaskWorkFlowITagTaskWorkflowConfig["NodeName"].isNull())
			iTagTaskWorkflowConfigObject.nodeName = resultNodeTaskWorkFlowITagTaskWorkflowConfig["NodeName"].asString();
		if(!resultNodeTaskWorkFlowITagTaskWorkflowConfig["Exif"].isNull())
			iTagTaskWorkflowConfigObject.exif = resultNodeTaskWorkFlowITagTaskWorkflowConfig["Exif"].asString();
		auto allUsersNode = resultNodeTaskWorkFlowITagTaskWorkflowConfig["Users"]["ITagSimpleUserVO"];
		for (auto resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO : allUsersNode)
		{
			Result::ITagTaskWorkflowConfig::ITagSimpleUserVO1 usersObject;
			if(!resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserId"].isNull())
				usersObject.userId = resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserId"].asString();
			if(!resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserName"].isNull())
				usersObject.userName = resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserName"].asString();
			if(!resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountType"].isNull())
				usersObject.accountType = resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountType"].asString();
			if(!resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountNo"].isNull())
				usersObject.accountNo = resultNodeTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountNo"].asString();
			iTagTaskWorkflowConfigObject.users.push_back(usersObject);
		}
		auto allGroupsNode = resultNodeTaskWorkFlowITagTaskWorkflowConfig["Groups"]["ITagSimpleUserGroupVO"];
		for (auto resultNodeTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO : allGroupsNode)
		{
			Result::ITagTaskWorkflowConfig::ITagSimpleUserGroupVO groupsObject;
			if(!resultNodeTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupId"].isNull())
				groupsObject.groupId = resultNodeTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupId"].asString();
			if(!resultNodeTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupName"].isNull())
				groupsObject.groupName = resultNodeTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupName"].asString();
			iTagTaskWorkflowConfigObject.groups.push_back(groupsObject);
		}
		result_.taskWorkFlow.push_back(iTagTaskWorkflowConfigObject);
	}
	auto optionTemplateDTONode = resultNode["OptionTemplateDTO"];
	if(!optionTemplateDTONode["Id"].isNull())
		result_.optionTemplateDTO.id = optionTemplateDTONode["Id"].asString();
	if(!optionTemplateDTONode["Name"].isNull())
		result_.optionTemplateDTO.name = optionTemplateDTONode["Name"].asString();
	if(!optionTemplateDTONode["TntInstId"].isNull())
		result_.optionTemplateDTO.tntInstId = optionTemplateDTONode["TntInstId"].asString();
	if(!optionTemplateDTONode["Description"].isNull())
		result_.optionTemplateDTO.description = optionTemplateDTONode["Description"].asString();
	if(!optionTemplateDTONode["Exif"].isNull())
		result_.optionTemplateDTO.exif = optionTemplateDTONode["Exif"].asString();
	if(!optionTemplateDTONode["Status"].isNull())
		result_.optionTemplateDTO.status = std::stoi(optionTemplateDTONode["Status"].asString());
	if(!optionTemplateDTONode["SharedMode"].isNull())
		result_.optionTemplateDTO.sharedMode = optionTemplateDTONode["SharedMode"].asString();
	if(!optionTemplateDTONode["Type"].isNull())
		result_.optionTemplateDTO.type = optionTemplateDTONode["Type"].asString();
	if(!optionTemplateDTONode["Classify"].isNull())
		result_.optionTemplateDTO.classify = optionTemplateDTONode["Classify"].asString();
	if(!optionTemplateDTONode["GmtCreate"].isNull())
		result_.optionTemplateDTO.gmtCreate = optionTemplateDTONode["GmtCreate"].asString();
	if(!optionTemplateDTONode["GmtModified"].isNull())
		result_.optionTemplateDTO.gmtModified = optionTemplateDTONode["GmtModified"].asString();
	auto allQuestionConfigsNode = optionTemplateDTONode["QuestionConfigs"]["QuestionConfigDTO"];
	for (auto optionTemplateDTONodeQuestionConfigsQuestionConfigDTO : allQuestionConfigsNode)
	{
		Result::OptionTemplateDTO::QuestionConfigDTO questionConfigDTOObject;
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Id"].isNull())
			questionConfigDTOObject.id = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Id"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["MarkTitle"].isNull())
			questionConfigDTOObject.markTitle = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["MarkTitle"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].isNull())
			questionConfigDTOObject.markTitleAlias = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Type"].isNull())
			questionConfigDTOObject.type = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Type"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["MustFill"].isNull())
			questionConfigDTOObject.mustFill = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["MustFill"].asString() == "true";
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Display"].isNull())
			questionConfigDTOObject.display = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Display"].asString() == "true";
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Selected"].isNull())
			questionConfigDTOObject.selected = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Selected"].asString() == "true";
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["SelectGroup"].isNull())
			questionConfigDTOObject.selectGroup = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["SelectGroup"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["DefaultResult"].isNull())
			questionConfigDTOObject.defaultResult = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["DefaultResult"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Rule"].isNull())
			questionConfigDTOObject.rule = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Rule"].asString();
		if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Exif"].isNull())
			questionConfigDTOObject.exif = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Exif"].asString();
		auto allOptionsNode = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["Options"]["QuestionOption"];
		for (auto optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption : allOptionsNode)
		{
			Result::OptionTemplateDTO::QuestionConfigDTO::QuestionOption optionsObject;
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].isNull())
				optionsObject.label = optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].isNull())
				optionsObject.key = optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].isNull())
				optionsObject.shortcut = optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].isNull())
				optionsObject.color = optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].isNull())
				optionsObject.value = optionTemplateDTONodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].asString();
			auto allChildren5 = value["Children"]["QuestionOption"];
			for (auto value : allChildren5)
				optionsObject.children5.push_back(value.asString());
			questionConfigDTOObject.options.push_back(optionsObject);
		}
		auto allRobotConfigsNode = optionTemplateDTONodeQuestionConfigsQuestionConfigDTO["RobotConfigs"]["TemplateRobotConfig"];
		for (auto optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig : allRobotConfigsNode)
		{
			Result::OptionTemplateDTO::QuestionConfigDTO::TemplateRobotConfig robotConfigsObject;
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].isNull())
				robotConfigsObject.robotId = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].isNull())
				robotConfigsObject.questionId = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].isNull())
				robotConfigsObject.stage = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].isNull())
				robotConfigsObject.type = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].isNull())
				robotConfigsObject.resultPath = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].asString();
			if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].isNull())
				robotConfigsObject.defaultResult = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].asString();
			auto allParamsNode = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Params"]["RobotParam"];
			for (auto optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam : allParamsNode)
			{
				Result::OptionTemplateDTO::QuestionConfigDTO::TemplateRobotConfig::RobotParam paramsObject;
				if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].isNull())
					paramsObject.paramName = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].asString();
				if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].isNull())
					paramsObject.dataField = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].asString();
				if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].isNull())
					paramsObject.defaultResult = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].asString();
				if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].isNull())
					paramsObject.serviceId = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].asString();
				if(!optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].isNull())
					paramsObject.mustFill = optionTemplateDTONodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].asString() == "true";
				robotConfigsObject.params.push_back(paramsObject);
			}
			questionConfigDTOObject.robotConfigs.push_back(robotConfigsObject);
		}
		auto allChildren = value["Children"]["ITagQuestionConfigDTO"];
		for (auto value : allChildren)
			questionConfigDTOObject.children.push_back(value.asString());
		auto allPreOptions = value["PreOptions"]["String"];
		for (auto value : allPreOptions)
			questionConfigDTOObject.preOptions.push_back(value.asString());
		result_.optionTemplateDTO.questionConfigs.push_back(questionConfigDTOObject);
	}
	auto viewConfigsNode = optionTemplateDTONode["ViewConfigs"];
	auto allFieldsNode = viewConfigsNode["Fields"]["DisplayFieldDTO"];
	for (auto viewConfigsNodeFieldsDisplayFieldDTO : allFieldsNode)
	{
		Result::OptionTemplateDTO::ViewConfigs::DisplayFieldDTO displayFieldDTOObject;
		if(!viewConfigsNodeFieldsDisplayFieldDTO["FieldName"].isNull())
			displayFieldDTOObject.fieldName = viewConfigsNodeFieldsDisplayFieldDTO["FieldName"].asString();
		if(!viewConfigsNodeFieldsDisplayFieldDTO["Type"].isNull())
			displayFieldDTOObject.type = viewConfigsNodeFieldsDisplayFieldDTO["Type"].asString();
		if(!viewConfigsNodeFieldsDisplayFieldDTO["CorsProxy"].isNull())
			displayFieldDTOObject.corsProxy = viewConfigsNodeFieldsDisplayFieldDTO["CorsProxy"].asString() == "true";
		if(!viewConfigsNodeFieldsDisplayFieldDTO["Hide"].isNull())
			displayFieldDTOObject.hide = viewConfigsNodeFieldsDisplayFieldDTO["Hide"].asString() == "true";
		if(!viewConfigsNodeFieldsDisplayFieldDTO["Convertor"].isNull())
			displayFieldDTOObject.convertor = viewConfigsNodeFieldsDisplayFieldDTO["Convertor"].asString();
		if(!viewConfigsNodeFieldsDisplayFieldDTO["Plugins"].isNull())
			displayFieldDTOObject.plugins = viewConfigsNodeFieldsDisplayFieldDTO["Plugins"].asString();
		if(!viewConfigsNodeFieldsDisplayFieldDTO["FieldNames"].isNull())
			displayFieldDTOObject.fieldNames = viewConfigsNodeFieldsDisplayFieldDTO["FieldNames"].asString();
		auto visitInfoNode = value["VisitInfo"];
		auto ossConfNode = visitInfoNode["OssConf"];
		if(!ossConfNode["OssEndpoint"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.ossEndpoint = ossConfNode["OssEndpoint"].asString();
		if(!ossConfNode["OssAk"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.ossAk = ossConfNode["OssAk"].asString();
		if(!ossConfNode["OssAs"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.ossAs = ossConfNode["OssAs"].asString();
		if(!ossConfNode["OssOwner"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.ossOwner = ossConfNode["OssOwner"].asString();
		if(!ossConfNode["OssBucket"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.ossBucket = ossConfNode["OssBucket"].asString();
		if(!ossConfNode["Folder"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.folder = ossConfNode["Folder"].asString();
		if(!ossConfNode["ExpiredTime"].isNull())
			displayFieldDTOObject.visitInfo.ossConf.expiredTime = std::stol(ossConfNode["ExpiredTime"].asString());
		auto aftsConfNode = visitInfoNode["AftsConf"];
		if(!aftsConfNode["ExpiredTime"].isNull())
			displayFieldDTOObject.visitInfo.aftsConf.expiredTime = std::stoi(aftsConfNode["ExpiredTime"].asString());
		auto allRelationQuestionIds = value["RelationQuestionIds"]["String"];
		for (auto value : allRelationQuestionIds)
			displayFieldDTOObject.relationQuestionIds.push_back(value.asString());
		result_.optionTemplateDTO.viewConfigs.fields.push_back(displayFieldDTOObject);
	}
	auto creator3Node = optionTemplateDTONode["Creator"];
	if(!creator3Node["UserId"].isNull())
		result_.optionTemplateDTO.creator3.userId = creator3Node["UserId"].asString();
	if(!creator3Node["UserName"].isNull())
		result_.optionTemplateDTO.creator3.userName = creator3Node["UserName"].asString();
	if(!creator3Node["AccountType"].isNull())
		result_.optionTemplateDTO.creator3.accountType = creator3Node["AccountType"].asString();
	if(!creator3Node["AccountNo"].isNull())
		result_.optionTemplateDTO.creator3.accountNo = creator3Node["AccountNo"].asString();
	auto modifier4Node = optionTemplateDTONode["Modifier"];
	if(!modifier4Node["UserId"].isNull())
		result_.optionTemplateDTO.modifier4.userId = modifier4Node["UserId"].asString();
	if(!modifier4Node["UserName"].isNull())
		result_.optionTemplateDTO.modifier4.userName = modifier4Node["UserName"].asString();
	if(!modifier4Node["AccountType"].isNull())
		result_.optionTemplateDTO.modifier4.accountType = modifier4Node["AccountType"].asString();
	if(!modifier4Node["AccountNo"].isNull())
		result_.optionTemplateDTO.modifier4.accountNo = modifier4Node["AccountNo"].asString();
	auto robotConfigNode = optionTemplateDTONode["RobotConfig"];
	if(!robotConfigNode["Source"].isNull())
		result_.optionTemplateDTO.robotConfig.source = robotConfigNode["Source"].asString();
	auto allModelServiceConfigsNode = robotConfigNode["ModelServiceConfigs"]["ModelServiceConfig"];
	for (auto robotConfigNodeModelServiceConfigsModelServiceConfig : allModelServiceConfigsNode)
	{
		Result::OptionTemplateDTO::RobotConfig::ModelServiceConfig modelServiceConfigObject;
		if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
			modelServiceConfigObject.serviceId = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
		if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
			modelServiceConfigObject.serviceName = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
		auto allPostParamsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParamsNode)
		{
			Result::OptionTemplateDTO::RobotConfig::ModelServiceConfig::ModelServiceConfig$PostParamPair postParamsObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
				postParamsObject.key = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
				postParamsObject.value = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
			modelServiceConfigObject.postParams.push_back(postParamsObject);
		}
		auto allResultMappingsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappingsNode)
		{
			Result::OptionTemplateDTO::RobotConfig::ModelServiceConfig::ModelServiceConfig$ResultMappingPair resultMappingsObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
				resultMappingsObject.questionId = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
				resultMappingsObject.resultKey = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
				resultMappingsObject.markTitle = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
			modelServiceConfigObject.resultMappings.push_back(resultMappingsObject);
		}
		result_.optionTemplateDTO.robotConfig.modelServiceConfigs.push_back(modelServiceConfigObject);
	}
	auto effectStepNode = robotConfigNode["EffectStep"];
	if(!effectStepNode["PreProcess"].isNull())
		result_.optionTemplateDTO.robotConfig.effectStep.preProcess = effectStepNode["PreProcess"].asString() == "true";
	if(!effectStepNode["PreLabel"].isNull())
		result_.optionTemplateDTO.robotConfig.effectStep.preLabel = effectStepNode["PreLabel"].asString() == "true";
	if(!effectStepNode["Label"].isNull())
		result_.optionTemplateDTO.robotConfig.effectStep.label = effectStepNode["Label"].asString() == "true";
	auto processConfigNode = effectStepNode["ProcessConfig"];
		auto allRelateColumn = processConfigNode["RelateColumn"]["String"];
		for (auto value : allRelateColumn)
			result_.optionTemplateDTO.robotConfig.effectStep.processConfig.relateColumn.push_back(value.asString());
		auto allTags2 = optionTemplateDTONode["Tags"]["String"];
		for (auto value : allTags2)
			result_.optionTemplateDTO.tags2.push_back(value.asString());
		auto allAbandonReasons = optionTemplateDTONode["AbandonReasons"]["String"];
		for (auto value : allAbandonReasons)
			result_.optionTemplateDTO.abandonReasons.push_back(value.asString());
	auto taskTemplateConfigNode = resultNode["TaskTemplateConfig"];
	if(!taskTemplateConfigNode["Exif"].isNull())
		result_.taskTemplateConfig.exif = taskTemplateConfigNode["Exif"].asString();
	if(!taskTemplateConfigNode["TemplateOptionMap"].isNull())
		result_.taskTemplateConfig.templateOptionMap = taskTemplateConfigNode["TemplateOptionMap"].asString();
	if(!taskTemplateConfigNode["TemplateRelationId"].isNull())
		result_.taskTemplateConfig.templateRelationId = taskTemplateConfigNode["TemplateRelationId"].asString();
	if(!taskTemplateConfigNode["ResourceKey"].isNull())
		result_.taskTemplateConfig.resourceKey = taskTemplateConfigNode["ResourceKey"].asString();
	auto robotConfig6Node = taskTemplateConfigNode["RobotConfig"];
	if(!robotConfig6Node["Source"].isNull())
		result_.taskTemplateConfig.robotConfig6.source = robotConfig6Node["Source"].asString();
	auto allModelServiceConfigs8Node = robotConfig6Node["ModelServiceConfigs"]["ModelServiceConfig"];
	for (auto robotConfig6NodeModelServiceConfigsModelServiceConfig : allModelServiceConfigs8Node)
	{
		Result::TaskTemplateConfig::RobotConfig6::ModelServiceConfig9 modelServiceConfig9Object;
		if(!robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
			modelServiceConfig9Object.serviceId = robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
		if(!robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
			modelServiceConfig9Object.serviceName = robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
		auto allPostParams10Node = robotConfig6NodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
		for (auto robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParams10Node)
		{
			Result::TaskTemplateConfig::RobotConfig6::ModelServiceConfig9::ModelServiceConfig$PostParamPair12 postParams10Object;
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
				postParams10Object.key = robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
				postParams10Object.value = robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
			modelServiceConfig9Object.postParams10.push_back(postParams10Object);
		}
		auto allResultMappings11Node = robotConfig6NodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
		for (auto robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappings11Node)
		{
			Result::TaskTemplateConfig::RobotConfig6::ModelServiceConfig9::ModelServiceConfig$ResultMappingPair13 resultMappings11Object;
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
				resultMappings11Object.questionId = robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
				resultMappings11Object.resultKey = robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
				resultMappings11Object.markTitle = robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
			modelServiceConfig9Object.resultMappings11.push_back(resultMappings11Object);
		}
		result_.taskTemplateConfig.robotConfig6.modelServiceConfigs8.push_back(modelServiceConfig9Object);
	}
	auto effectStep7Node = robotConfig6Node["EffectStep"];
	if(!effectStep7Node["PreProcess"].isNull())
		result_.taskTemplateConfig.robotConfig6.effectStep7.preProcess = effectStep7Node["PreProcess"].asString() == "true";
	if(!effectStep7Node["PreLabel"].isNull())
		result_.taskTemplateConfig.robotConfig6.effectStep7.preLabel = effectStep7Node["PreLabel"].asString() == "true";
	if(!effectStep7Node["Label"].isNull())
		result_.taskTemplateConfig.robotConfig6.effectStep7.label = effectStep7Node["Label"].asString() == "true";
	auto processConfig14Node = effectStep7Node["ProcessConfig"];
		auto allRelateColumn15 = processConfig14Node["RelateColumn"]["String"];
		for (auto value : allRelateColumn15)
			result_.taskTemplateConfig.robotConfig6.effectStep7.processConfig14.relateColumn15.push_back(value.asString());
		auto allSelectQuestions = taskTemplateConfigNode["SelectQuestions"]["String"];
		for (auto value : allSelectQuestions)
			result_.taskTemplateConfig.selectQuestions.push_back(value.asString());
	auto bizInfoNode = resultNode["BizInfo"];
	if(!bizInfoNode["BizCode"].isNull())
		result_.bizInfo.bizCode = bizInfoNode["BizCode"].asString();
	if(!bizInfoNode["BizNo"].isNull())
		result_.bizInfo.bizNo = bizInfoNode["BizNo"].asString();
	if(!bizInfoNode["BizClassify"].isNull())
		result_.bizInfo.bizClassify = bizInfoNode["BizClassify"].asString();
	auto assignConfigNode = resultNode["AssignConfig"];
	if(!assignConfigNode["AssignType"].isNull())
		result_.assignConfig.assignType = assignConfigNode["AssignType"].asString();
	if(!assignConfigNode["AssignCount"].isNull())
		result_.assignConfig.assignCount = std::stoi(assignConfigNode["AssignCount"].asString());
	if(!assignConfigNode["AssignSubTaskCount"].isNull())
		result_.assignConfig.assignSubTaskCount = std::stoi(assignConfigNode["AssignSubTaskCount"].asString());
	if(!assignConfigNode["AssignField"].isNull())
		result_.assignConfig.assignField = assignConfigNode["AssignField"].asString();
	auto noticeConfigNode = resultNode["NoticeConfig"];
	if(!noticeConfigNode["DingHook"].isNull())
		result_.noticeConfig.dingHook = noticeConfigNode["DingHook"].asString();
	if(!noticeConfigNode["SubTaskAlertGap"].isNull())
		result_.noticeConfig.subTaskAlertGap = noticeConfigNode["SubTaskAlertGap"].asString();
		auto allListenActions = noticeConfigNode["ListenActions"]["String"];
		for (auto value : allListenActions)
			result_.noticeConfig.listenActions.push_back(value.asString());
	auto resultCallbackConfigNode = resultNode["ResultCallbackConfig"];
	if(!resultCallbackConfigNode["RetMsgMode"].isNull())
		result_.resultCallbackConfig.retMsgMode = resultCallbackConfigNode["RetMsgMode"].asString();
	if(!resultCallbackConfigNode["Exif"].isNull())
		result_.resultCallbackConfig.exif = resultCallbackConfigNode["Exif"].asString();
	auto creatorNode = resultNode["Creator"];
	if(!creatorNode["UserId"].isNull())
		result_.creator.userId = creatorNode["UserId"].asString();
	if(!creatorNode["UserName"].isNull())
		result_.creator.userName = creatorNode["UserName"].asString();
	if(!creatorNode["AccountType"].isNull())
		result_.creator.accountType = creatorNode["AccountType"].asString();
	if(!creatorNode["AccountNo"].isNull())
		result_.creator.accountNo = creatorNode["AccountNo"].asString();
	auto modifierNode = resultNode["Modifier"];
	if(!modifierNode["UserId"].isNull())
		result_.modifier.userId = modifierNode["UserId"].asString();
	if(!modifierNode["UserName"].isNull())
		result_.modifier.userName = modifierNode["UserName"].asString();
	if(!modifierNode["AccountType"].isNull())
		result_.modifier.accountType = modifierNode["AccountType"].asString();
	if(!modifierNode["AccountNo"].isNull())
		result_.modifier.accountNo = modifierNode["AccountNo"].asString();
		auto allWorkflowNodes = resultNode["WorkflowNodes"]["String"];
		for (auto value : allWorkflowNodes)
			result_.workflowNodes.push_back(value.asString());
		auto allTags = resultNode["Tags"]["String"];
		for (auto value : allTags)
			result_.tags.push_back(value.asString());
		auto allSupportDownloadTypes = resultNode["SupportDownloadTypes"]["SupportDownloadType"];
		for (auto value : allSupportDownloadTypes)
			result_.supportDownloadTypes.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetTaskResult::getMsg()const
{
	return msg_;
}

bool GetTaskResult::getSucc()const
{
	return succ_;
}

std::string GetTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetTaskResult::getCode()const
{
	return code_;
}

GetTaskResult::Result GetTaskResult::getResult()const
{
	return result_;
}

