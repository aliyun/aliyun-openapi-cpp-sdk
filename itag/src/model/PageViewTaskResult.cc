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

#include <alibabacloud/itag/model/PageViewTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewTaskResult::PageViewTaskResult() :
	ServiceResult()
{}

PageViewTaskResult::PageViewTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewTaskResult::~PageViewTaskResult()
{}

void PageViewTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stol(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stol(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ITagTaskDTO"];
	for (auto resultNodeListITagTaskDTO : allListNode)
	{
		Result::ITagTaskDTO iTagTaskDTOObject;
		if(!resultNodeListITagTaskDTO["TaskName"].isNull())
			iTagTaskDTOObject.taskName = resultNodeListITagTaskDTO["TaskName"].asString();
		if(!resultNodeListITagTaskDTO["TaskId"].isNull())
			iTagTaskDTOObject.taskId = resultNodeListITagTaskDTO["TaskId"].asString();
		if(!resultNodeListITagTaskDTO["TemplateId"].isNull())
			iTagTaskDTOObject.templateId = resultNodeListITagTaskDTO["TemplateId"].asString();
		if(!resultNodeListITagTaskDTO["ProjectId"].isNull())
			iTagTaskDTOObject.projectId = std::stol(resultNodeListITagTaskDTO["ProjectId"].asString());
		if(!resultNodeListITagTaskDTO["TaskType"].isNull())
			iTagTaskDTOObject.taskType = resultNodeListITagTaskDTO["TaskType"].asString();
		if(!resultNodeListITagTaskDTO["TntInstId"].isNull())
			iTagTaskDTOObject.tntInstId = resultNodeListITagTaskDTO["TntInstId"].asString();
		if(!resultNodeListITagTaskDTO["TntInstName"].isNull())
			iTagTaskDTOObject.tntInstName = resultNodeListITagTaskDTO["TntInstName"].asString();
		if(!resultNodeListITagTaskDTO["Remark"].isNull())
			iTagTaskDTOObject.remark = resultNodeListITagTaskDTO["Remark"].asString();
		if(!resultNodeListITagTaskDTO["AllowAppendData"].isNull())
			iTagTaskDTOObject.allowAppendData = resultNodeListITagTaskDTO["AllowAppendData"].asString() == "true";
		if(!resultNodeListITagTaskDTO["Channel"].isNull())
			iTagTaskDTOObject.channel = resultNodeListITagTaskDTO["Channel"].asString();
		if(!resultNodeListITagTaskDTO["SafetyLevel"].isNull())
			iTagTaskDTOObject.safetyLevel = std::stoi(resultNodeListITagTaskDTO["SafetyLevel"].asString());
		if(!resultNodeListITagTaskDTO["RelateTaskConfig"].isNull())
			iTagTaskDTOObject.relateTaskConfig = resultNodeListITagTaskDTO["RelateTaskConfig"].asString();
		if(!resultNodeListITagTaskDTO["Exif"].isNull())
			iTagTaskDTOObject.exif = resultNodeListITagTaskDTO["Exif"].asString();
		if(!resultNodeListITagTaskDTO["MineConfigs"].isNull())
			iTagTaskDTOObject.mineConfigs = resultNodeListITagTaskDTO["MineConfigs"].asString();
		if(!resultNodeListITagTaskDTO["VoteConfigs"].isNull())
			iTagTaskDTOObject.voteConfigs = resultNodeListITagTaskDTO["VoteConfigs"].asString();
		if(!resultNodeListITagTaskDTO["RunMsg"].isNull())
			iTagTaskDTOObject.runMsg = resultNodeListITagTaskDTO["RunMsg"].asString();
		if(!resultNodeListITagTaskDTO["Archived"].isNull())
			iTagTaskDTOObject.archived = resultNodeListITagTaskDTO["Archived"].asString() == "true";
		if(!resultNodeListITagTaskDTO["Stage"].isNull())
			iTagTaskDTOObject.stage = resultNodeListITagTaskDTO["Stage"].asString();
		if(!resultNodeListITagTaskDTO["ArchivedInfos"].isNull())
			iTagTaskDTOObject.archivedInfos = resultNodeListITagTaskDTO["ArchivedInfos"].asString();
		if(!resultNodeListITagTaskDTO["AlertTime"].isNull())
			iTagTaskDTOObject.alertTime = std::stoi(resultNodeListITagTaskDTO["AlertTime"].asString());
		if(!resultNodeListITagTaskDTO["Status"].isNull())
			iTagTaskDTOObject.status = std::stoi(resultNodeListITagTaskDTO["Status"].asString());
		if(!resultNodeListITagTaskDTO["GmtCreate"].isNull())
			iTagTaskDTOObject.gmtCreate = resultNodeListITagTaskDTO["GmtCreate"].asString();
		if(!resultNodeListITagTaskDTO["GmtModified"].isNull())
			iTagTaskDTOObject.gmtModified = resultNodeListITagTaskDTO["GmtModified"].asString();
		auto allDatasetProxyRelationsNode = resultNodeListITagTaskDTO["DatasetProxyRelations"]["TaskDatasetProxyRelation"];
		for (auto resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation : allDatasetProxyRelationsNode)
		{
			Result::ITagTaskDTO::TaskDatasetProxyRelation datasetProxyRelationsObject;
			if(!resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["DatasetId"].isNull())
				datasetProxyRelationsObject.datasetId = resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["DatasetId"].asString();
			if(!resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["Source"].isNull())
				datasetProxyRelationsObject.source = resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["Source"].asString();
			if(!resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["SourceBizId"].isNull())
				datasetProxyRelationsObject.sourceBizId = resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["SourceBizId"].asString();
			if(!resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["DatasetType"].isNull())
				datasetProxyRelationsObject.datasetType = resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["DatasetType"].asString();
			if(!resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["Exif"].isNull())
				datasetProxyRelationsObject.exif = resultNodeListITagTaskDTODatasetProxyRelationsTaskDatasetProxyRelation["Exif"].asString();
			iTagTaskDTOObject.datasetProxyRelations.push_back(datasetProxyRelationsObject);
		}
		auto allAdminsNode = resultNodeListITagTaskDTO["Admins"]["ITagSimpleUserVO"];
		for (auto resultNodeListITagTaskDTOAdminsITagSimpleUserVO : allAdminsNode)
		{
			Result::ITagTaskDTO::ITagSimpleUserVO adminsObject;
			if(!resultNodeListITagTaskDTOAdminsITagSimpleUserVO["UserId"].isNull())
				adminsObject.userId = resultNodeListITagTaskDTOAdminsITagSimpleUserVO["UserId"].asString();
			if(!resultNodeListITagTaskDTOAdminsITagSimpleUserVO["UserName"].isNull())
				adminsObject.userName = resultNodeListITagTaskDTOAdminsITagSimpleUserVO["UserName"].asString();
			if(!resultNodeListITagTaskDTOAdminsITagSimpleUserVO["AccountType"].isNull())
				adminsObject.accountType = resultNodeListITagTaskDTOAdminsITagSimpleUserVO["AccountType"].asString();
			if(!resultNodeListITagTaskDTOAdminsITagSimpleUserVO["AccountNo"].isNull())
				adminsObject.accountNo = resultNodeListITagTaskDTOAdminsITagSimpleUserVO["AccountNo"].asString();
			iTagTaskDTOObject.admins.push_back(adminsObject);
		}
		auto allTaskWorkFlowNode = resultNodeListITagTaskDTO["TaskWorkFlow"]["ITagTaskWorkflowConfig"];
		for (auto resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig : allTaskWorkFlowNode)
		{
			Result::ITagTaskDTO::ITagTaskWorkflowConfig taskWorkFlowObject;
			if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig["NodeName"].isNull())
				taskWorkFlowObject.nodeName = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig["NodeName"].asString();
			if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig["Exif"].isNull())
				taskWorkFlowObject.exif = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig["Exif"].asString();
			auto allUsersNode = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig["Users"]["ITagSimpleUserVO"];
			for (auto resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO : allUsersNode)
			{
				Result::ITagTaskDTO::ITagTaskWorkflowConfig::ITagSimpleUserVO1 usersObject;
				if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserId"].isNull())
					usersObject.userId = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserId"].asString();
				if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserName"].isNull())
					usersObject.userName = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["UserName"].asString();
				if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountType"].isNull())
					usersObject.accountType = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountType"].asString();
				if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountNo"].isNull())
					usersObject.accountNo = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigUsersITagSimpleUserVO["AccountNo"].asString();
				taskWorkFlowObject.users.push_back(usersObject);
			}
			auto allGroupsNode = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfig["Groups"]["ITagSimpleUserGroupVO"];
			for (auto resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO : allGroupsNode)
			{
				Result::ITagTaskDTO::ITagTaskWorkflowConfig::ITagSimpleUserGroupVO groupsObject;
				if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupId"].isNull())
					groupsObject.groupId = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupId"].asString();
				if(!resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupName"].isNull())
					groupsObject.groupName = resultNodeListITagTaskDTOTaskWorkFlowITagTaskWorkflowConfigGroupsITagSimpleUserGroupVO["GroupName"].asString();
				taskWorkFlowObject.groups.push_back(groupsObject);
			}
			iTagTaskDTOObject.taskWorkFlow.push_back(taskWorkFlowObject);
		}
		auto optionTemplateDTONode = value["OptionTemplateDTO"];
		if(!optionTemplateDTONode["Id"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.id = optionTemplateDTONode["Id"].asString();
		if(!optionTemplateDTONode["Name"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.name = optionTemplateDTONode["Name"].asString();
		if(!optionTemplateDTONode["TntInstId"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.tntInstId = optionTemplateDTONode["TntInstId"].asString();
		if(!optionTemplateDTONode["Description"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.description = optionTemplateDTONode["Description"].asString();
		if(!optionTemplateDTONode["Exif"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.exif = optionTemplateDTONode["Exif"].asString();
		if(!optionTemplateDTONode["Status"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.status = std::stoi(optionTemplateDTONode["Status"].asString());
		if(!optionTemplateDTONode["SharedMode"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.sharedMode = optionTemplateDTONode["SharedMode"].asString();
		if(!optionTemplateDTONode["Type"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.type = optionTemplateDTONode["Type"].asString();
		if(!optionTemplateDTONode["Classify"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.classify = optionTemplateDTONode["Classify"].asString();
		if(!optionTemplateDTONode["GmtCreate"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.gmtCreate = optionTemplateDTONode["GmtCreate"].asString();
		if(!optionTemplateDTONode["GmtModified"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.gmtModified = optionTemplateDTONode["GmtModified"].asString();
		auto allQuestionConfigsNode = optionTemplateDTONode["QuestionConfigs"]["QuestionConfigDTO"];
		for (auto optionTemplateDTONodeQuestionConfigsQuestionConfigDTO : allQuestionConfigsNode)
		{
			Result::ITagTaskDTO::OptionTemplateDTO::QuestionConfigDTO questionConfigDTOObject;
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
				Result::ITagTaskDTO::OptionTemplateDTO::QuestionConfigDTO::QuestionOption optionsObject;
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
				Result::ITagTaskDTO::OptionTemplateDTO::QuestionConfigDTO::TemplateRobotConfig robotConfigsObject;
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
					Result::ITagTaskDTO::OptionTemplateDTO::QuestionConfigDTO::TemplateRobotConfig::RobotParam paramsObject;
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
			iTagTaskDTOObject.optionTemplateDTO.questionConfigs.push_back(questionConfigDTOObject);
		}
		auto viewConfigsNode = optionTemplateDTONode["ViewConfigs"];
		auto allFieldsNode = viewConfigsNode["Fields"]["DisplayFieldDTO"];
		for (auto viewConfigsNodeFieldsDisplayFieldDTO : allFieldsNode)
		{
			Result::ITagTaskDTO::OptionTemplateDTO::ViewConfigs::DisplayFieldDTO displayFieldDTOObject;
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
			iTagTaskDTOObject.optionTemplateDTO.viewConfigs.fields.push_back(displayFieldDTOObject);
		}
		auto creator3Node = optionTemplateDTONode["Creator"];
		if(!creator3Node["UserId"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.creator3.userId = creator3Node["UserId"].asString();
		if(!creator3Node["UserName"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.creator3.userName = creator3Node["UserName"].asString();
		if(!creator3Node["AccountType"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.creator3.accountType = creator3Node["AccountType"].asString();
		if(!creator3Node["AccountNo"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.creator3.accountNo = creator3Node["AccountNo"].asString();
		auto modifier4Node = optionTemplateDTONode["Modifier"];
		if(!modifier4Node["UserId"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.modifier4.userId = modifier4Node["UserId"].asString();
		if(!modifier4Node["UserName"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.modifier4.userName = modifier4Node["UserName"].asString();
		if(!modifier4Node["AccountType"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.modifier4.accountType = modifier4Node["AccountType"].asString();
		if(!modifier4Node["AccountNo"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.modifier4.accountNo = modifier4Node["AccountNo"].asString();
		auto robotConfigNode = optionTemplateDTONode["RobotConfig"];
		if(!robotConfigNode["Source"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.robotConfig.source = robotConfigNode["Source"].asString();
		auto allModelServiceConfigsNode = robotConfigNode["ModelServiceConfigs"]["ModelServiceConfig"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfig : allModelServiceConfigsNode)
		{
			Result::ITagTaskDTO::OptionTemplateDTO::RobotConfig::ModelServiceConfig modelServiceConfigObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
				modelServiceConfigObject.serviceId = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
				modelServiceConfigObject.serviceName = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
			auto allPostParamsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
			for (auto robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParamsNode)
			{
				Result::ITagTaskDTO::OptionTemplateDTO::RobotConfig::ModelServiceConfig::ModelServiceConfig$PostParamPair postParamsObject;
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
					postParamsObject.key = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
					postParamsObject.value = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
				modelServiceConfigObject.postParams.push_back(postParamsObject);
			}
			auto allResultMappingsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
			for (auto robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappingsNode)
			{
				Result::ITagTaskDTO::OptionTemplateDTO::RobotConfig::ModelServiceConfig::ModelServiceConfig$ResultMappingPair resultMappingsObject;
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
					resultMappingsObject.questionId = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
					resultMappingsObject.resultKey = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
					resultMappingsObject.markTitle = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
				modelServiceConfigObject.resultMappings.push_back(resultMappingsObject);
			}
			iTagTaskDTOObject.optionTemplateDTO.robotConfig.modelServiceConfigs.push_back(modelServiceConfigObject);
		}
		auto effectStepNode = robotConfigNode["EffectStep"];
		if(!effectStepNode["PreProcess"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.robotConfig.effectStep.preProcess = effectStepNode["PreProcess"].asString() == "true";
		if(!effectStepNode["PreLabel"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.robotConfig.effectStep.preLabel = effectStepNode["PreLabel"].asString() == "true";
		if(!effectStepNode["Label"].isNull())
			iTagTaskDTOObject.optionTemplateDTO.robotConfig.effectStep.label = effectStepNode["Label"].asString() == "true";
		auto processConfigNode = effectStepNode["ProcessConfig"];
			auto allRelateColumn = processConfigNode["RelateColumn"]["String"];
			for (auto value : allRelateColumn)
				iTagTaskDTOObject.optionTemplateDTO.robotConfig.effectStep.processConfig.relateColumn.push_back(value.asString());
			auto allTags2 = optionTemplateDTONode["Tags"]["String"];
			for (auto value : allTags2)
				iTagTaskDTOObject.optionTemplateDTO.tags2.push_back(value.asString());
			auto allAbandonReasons = optionTemplateDTONode["AbandonReasons"]["String"];
			for (auto value : allAbandonReasons)
				iTagTaskDTOObject.optionTemplateDTO.abandonReasons.push_back(value.asString());
		auto taskTemplateConfigNode = value["TaskTemplateConfig"];
		if(!taskTemplateConfigNode["Exif"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.exif = taskTemplateConfigNode["Exif"].asString();
		if(!taskTemplateConfigNode["TemplateOptionMap"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.templateOptionMap = taskTemplateConfigNode["TemplateOptionMap"].asString();
		if(!taskTemplateConfigNode["TemplateRelationId"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.templateRelationId = taskTemplateConfigNode["TemplateRelationId"].asString();
		if(!taskTemplateConfigNode["ResourceKey"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.resourceKey = taskTemplateConfigNode["ResourceKey"].asString();
		auto robotConfig6Node = taskTemplateConfigNode["RobotConfig"];
		if(!robotConfig6Node["Source"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.robotConfig6.source = robotConfig6Node["Source"].asString();
		auto allModelServiceConfigs8Node = robotConfig6Node["ModelServiceConfigs"]["ModelServiceConfig"];
		for (auto robotConfig6NodeModelServiceConfigsModelServiceConfig : allModelServiceConfigs8Node)
		{
			Result::ITagTaskDTO::TaskTemplateConfig::RobotConfig6::ModelServiceConfig9 modelServiceConfig9Object;
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
				modelServiceConfig9Object.serviceId = robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
			if(!robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
				modelServiceConfig9Object.serviceName = robotConfig6NodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
			auto allPostParams10Node = robotConfig6NodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
			for (auto robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParams10Node)
			{
				Result::ITagTaskDTO::TaskTemplateConfig::RobotConfig6::ModelServiceConfig9::ModelServiceConfig$PostParamPair12 postParams10Object;
				if(!robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
					postParams10Object.key = robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
				if(!robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
					postParams10Object.value = robotConfig6NodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
				modelServiceConfig9Object.postParams10.push_back(postParams10Object);
			}
			auto allResultMappings11Node = robotConfig6NodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
			for (auto robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappings11Node)
			{
				Result::ITagTaskDTO::TaskTemplateConfig::RobotConfig6::ModelServiceConfig9::ModelServiceConfig$ResultMappingPair13 resultMappings11Object;
				if(!robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
					resultMappings11Object.questionId = robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
				if(!robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
					resultMappings11Object.resultKey = robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
				if(!robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
					resultMappings11Object.markTitle = robotConfig6NodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
				modelServiceConfig9Object.resultMappings11.push_back(resultMappings11Object);
			}
			iTagTaskDTOObject.taskTemplateConfig.robotConfig6.modelServiceConfigs8.push_back(modelServiceConfig9Object);
		}
		auto effectStep7Node = robotConfig6Node["EffectStep"];
		if(!effectStep7Node["PreProcess"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.robotConfig6.effectStep7.preProcess = effectStep7Node["PreProcess"].asString() == "true";
		if(!effectStep7Node["PreLabel"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.robotConfig6.effectStep7.preLabel = effectStep7Node["PreLabel"].asString() == "true";
		if(!effectStep7Node["Label"].isNull())
			iTagTaskDTOObject.taskTemplateConfig.robotConfig6.effectStep7.label = effectStep7Node["Label"].asString() == "true";
		auto processConfig14Node = effectStep7Node["ProcessConfig"];
			auto allRelateColumn15 = processConfig14Node["RelateColumn"]["String"];
			for (auto value : allRelateColumn15)
				iTagTaskDTOObject.taskTemplateConfig.robotConfig6.effectStep7.processConfig14.relateColumn15.push_back(value.asString());
			auto allSelectQuestions = taskTemplateConfigNode["SelectQuestions"]["String"];
			for (auto value : allSelectQuestions)
				iTagTaskDTOObject.taskTemplateConfig.selectQuestions.push_back(value.asString());
		auto bizInfoNode = value["BizInfo"];
		if(!bizInfoNode["BizCode"].isNull())
			iTagTaskDTOObject.bizInfo.bizCode = bizInfoNode["BizCode"].asString();
		if(!bizInfoNode["BizNo"].isNull())
			iTagTaskDTOObject.bizInfo.bizNo = bizInfoNode["BizNo"].asString();
		if(!bizInfoNode["BizClassify"].isNull())
			iTagTaskDTOObject.bizInfo.bizClassify = bizInfoNode["BizClassify"].asString();
		auto assignConfigNode = value["AssignConfig"];
		if(!assignConfigNode["AssignType"].isNull())
			iTagTaskDTOObject.assignConfig.assignType = assignConfigNode["AssignType"].asString();
		if(!assignConfigNode["AssignCount"].isNull())
			iTagTaskDTOObject.assignConfig.assignCount = std::stoi(assignConfigNode["AssignCount"].asString());
		if(!assignConfigNode["AssignSubTaskCount"].isNull())
			iTagTaskDTOObject.assignConfig.assignSubTaskCount = std::stoi(assignConfigNode["AssignSubTaskCount"].asString());
		if(!assignConfigNode["AssignField"].isNull())
			iTagTaskDTOObject.assignConfig.assignField = assignConfigNode["AssignField"].asString();
		auto noticeConfigNode = value["NoticeConfig"];
		if(!noticeConfigNode["DingHook"].isNull())
			iTagTaskDTOObject.noticeConfig.dingHook = noticeConfigNode["DingHook"].asString();
		if(!noticeConfigNode["SubTaskAlertGap"].isNull())
			iTagTaskDTOObject.noticeConfig.subTaskAlertGap = noticeConfigNode["SubTaskAlertGap"].asString();
			auto allListenActions = noticeConfigNode["ListenActions"]["String"];
			for (auto value : allListenActions)
				iTagTaskDTOObject.noticeConfig.listenActions.push_back(value.asString());
		auto resultCallbackConfigNode = value["ResultCallbackConfig"];
		if(!resultCallbackConfigNode["RetMsgMode"].isNull())
			iTagTaskDTOObject.resultCallbackConfig.retMsgMode = resultCallbackConfigNode["RetMsgMode"].asString();
		if(!resultCallbackConfigNode["Exif"].isNull())
			iTagTaskDTOObject.resultCallbackConfig.exif = resultCallbackConfigNode["Exif"].asString();
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			iTagTaskDTOObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			iTagTaskDTOObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			iTagTaskDTOObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			iTagTaskDTOObject.creator.accountNo = creatorNode["AccountNo"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			iTagTaskDTOObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			iTagTaskDTOObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			iTagTaskDTOObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			iTagTaskDTOObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		auto allWorkflowNodes = value["WorkflowNodes"]["String"];
		for (auto value : allWorkflowNodes)
			iTagTaskDTOObject.workflowNodes.push_back(value.asString());
		auto allTags = value["Tags"]["String"];
		for (auto value : allTags)
			iTagTaskDTOObject.tags.push_back(value.asString());
		auto allSupportDownloadTypes = value["SupportDownloadTypes"]["SupportDownloadType"];
		for (auto value : allSupportDownloadTypes)
			iTagTaskDTOObject.supportDownloadTypes.push_back(value.asString());
		result_.list.push_back(iTagTaskDTOObject);
	}
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

std::string PageViewTaskResult::getMsg()const
{
	return msg_;
}

bool PageViewTaskResult::getSucc()const
{
	return succ_;
}

std::string PageViewTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewTaskResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewTaskResult::getCode()const
{
	return code_;
}

PageViewTaskResult::Result PageViewTaskResult::getResult()const
{
	return result_;
}

