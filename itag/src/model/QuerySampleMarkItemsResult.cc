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

#include <alibabacloud/itag/model/QuerySampleMarkItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

QuerySampleMarkItemsResult::QuerySampleMarkItemsResult() :
	ServiceResult()
{}

QuerySampleMarkItemsResult::QuerySampleMarkItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySampleMarkItemsResult::~QuerySampleMarkItemsResult()
{}

void QuerySampleMarkItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto iTagSamplingStatsDTONode = resultNode["ITagSamplingStatsDTO"];
	if(!iTagSamplingStatsDTONode["HasNonCompleteTask"].isNull())
		result_.iTagSamplingStatsDTO.hasNonCompleteTask = std::stoi(iTagSamplingStatsDTONode["HasNonCompleteTask"].asString());
	if(!iTagSamplingStatsDTONode["SampleRecordId"].isNull())
		result_.iTagSamplingStatsDTO.sampleRecordId = iTagSamplingStatsDTONode["SampleRecordId"].asString();
	if(!iTagSamplingStatsDTONode["NeedPolling"].isNull())
		result_.iTagSamplingStatsDTO.needPolling = iTagSamplingStatsDTONode["NeedPolling"].asString() == "true";
	if(!iTagSamplingStatsDTONode["TotalMarkItemCount"].isNull())
		result_.iTagSamplingStatsDTO.totalMarkItemCount = iTagSamplingStatsDTONode["TotalMarkItemCount"].asString();
	auto iTagMarkableWorkTaskDTONode = iTagSamplingStatsDTONode["ITagMarkableWorkTaskDTO"];
	auto allMarkItemListNode = iTagMarkableWorkTaskDTONode["MarkItemList"]["ITagSimpleUserMarkItemDTO"];
	for (auto iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO : allMarkItemListNode)
	{
		Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::ITagSimpleUserMarkItemDTO iTagSimpleUserMarkItemDTOObject;
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["UserMarkItemId"].isNull())
			iTagSimpleUserMarkItemDTOObject.userMarkItemId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["UserMarkItemId"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["FeedbackRemark"].isNull())
			iTagSimpleUserMarkItemDTOObject.feedbackRemark = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["FeedbackRemark"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["FeedbackFlag"].isNull())
			iTagSimpleUserMarkItemDTOObject.feedbackFlag = std::stoi(iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["FeedbackFlag"].asString());
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["Operator"].isNull())
			iTagSimpleUserMarkItemDTOObject._operator = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["Operator"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["MarkItemId"].isNull())
			iTagSimpleUserMarkItemDTOObject.markItemId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["MarkItemId"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["DataId"].isNull())
			iTagSimpleUserMarkItemDTOObject.dataId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["DataId"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["DatasetId"].isNull())
			iTagSimpleUserMarkItemDTOObject.datasetId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["DatasetId"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["State"].isNull())
			iTagSimpleUserMarkItemDTOObject.state = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["State"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["Mine"].isNull())
			iTagSimpleUserMarkItemDTOObject.mine = std::stoi(iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["Mine"].asString());
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["SubTaskId"].isNull())
			iTagSimpleUserMarkItemDTOObject.subTaskId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["SubTaskId"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["RejectFlag"].isNull())
			iTagSimpleUserMarkItemDTOObject.rejectFlag = std::stoi(iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["RejectFlag"].asString());
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["FixedFlag"].isNull())
			iTagSimpleUserMarkItemDTOObject.fixedFlag = std::stoi(iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["FixedFlag"].asString());
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["AbandonFlag"].isNull())
			iTagSimpleUserMarkItemDTOObject.abandonFlag = std::stoi(iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["AbandonFlag"].asString());
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["AbandonRemark"].isNull())
			iTagSimpleUserMarkItemDTOObject.abandonRemark = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["AbandonRemark"].asString();
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["Weight"].isNull())
			iTagSimpleUserMarkItemDTOObject.weight = std::stoi(iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["Weight"].asString());
		if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["DataMeta"].isNull())
			iTagSimpleUserMarkItemDTOObject.dataMeta = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["DataMeta"].asString();
		auto allMarkResultListNode = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTO["MarkResultList"]["ITagSimpleUserMarkResultDTO"];
		for (auto iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO : allMarkResultListNode)
		{
			Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::ITagSimpleUserMarkItemDTO::ITagSimpleUserMarkResultDTO markResultListObject;
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResultId"].isNull())
				markResultListObject.markResultId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResultId"].asString();
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkTitle"].isNull())
				markResultListObject.markTitle = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkTitle"].asString();
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResult"].isNull())
				markResultListObject.markResult = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResult"].asString();
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["QuestionId"].isNull())
				markResultListObject.questionId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["QuestionId"].asString();
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["ResultType"].isNull())
				markResultListObject.resultType = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["ResultType"].asString();
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["Version"].isNull())
				markResultListObject.version = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["Version"].asString();
			if(!iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["UserMarkResultId"].isNull())
				markResultListObject.userMarkResultId = iTagMarkableWorkTaskDTONodeMarkItemListITagSimpleUserMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["UserMarkResultId"].asString();
			iTagSimpleUserMarkItemDTOObject.markResultList.push_back(markResultListObject);
		}
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.markItemList.push_back(iTagSimpleUserMarkItemDTOObject);
	}
	auto taskInfoNode = iTagMarkableWorkTaskDTONode["TaskInfo"];
	if(!taskInfoNode["TaskName"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.taskName = taskInfoNode["TaskName"].asString();
	if(!taskInfoNode["TaskId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.taskId = taskInfoNode["TaskId"].asString();
	if(!taskInfoNode["TaskType"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.taskType = taskInfoNode["TaskType"].asString();
	if(!taskInfoNode["Channel"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.channel = taskInfoNode["Channel"].asString();
	if(!taskInfoNode["SafetyLevel"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.safetyLevel = std::stoi(taskInfoNode["SafetyLevel"].asString());
	auto bizInfoNode = taskInfoNode["BizInfo"];
	if(!bizInfoNode["BizCode"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.bizInfo.bizCode = bizInfoNode["BizCode"].asString();
	if(!bizInfoNode["BizNo"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.bizInfo.bizNo = bizInfoNode["BizNo"].asString();
	if(!bizInfoNode["BizClassify"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.taskInfo.bizInfo.bizClassify = bizInfoNode["BizClassify"].asString();
	auto subTaskNode = iTagMarkableWorkTaskDTONode["SubTask"];
	if(!subTaskNode["SubTaskId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subTask.subTaskId = subTaskNode["SubTaskId"].asString();
	if(!subTaskNode["TaskId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subTask.taskId = subTaskNode["TaskId"].asString();
	auto handlerNode = subTaskNode["Handler"];
	if(!handlerNode["UserId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subTask.handler.userId = handlerNode["UserId"].asString();
	if(!handlerNode["UserName"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subTask.handler.userName = handlerNode["UserName"].asString();
	if(!handlerNode["AccountType"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subTask.handler.accountType = handlerNode["AccountType"].asString();
	if(!handlerNode["AccountNo"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subTask.handler.accountNo = handlerNode["AccountNo"].asString();
	auto subUserTaskNode = iTagMarkableWorkTaskDTONode["SubUserTask"];
	if(!subUserTaskNode["UserSubTaskId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.userSubTaskId = subUserTaskNode["UserSubTaskId"].asString();
	if(!subUserTaskNode["SubTaskId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.subTaskId = subUserTaskNode["SubTaskId"].asString();
	if(!subUserTaskNode["WorkNode"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.workNode = subUserTaskNode["WorkNode"].asString();
	if(!subUserTaskNode["State"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.state = subUserTaskNode["State"].asString();
	if(!subUserTaskNode["VoteIdx"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.voteIdx = std::stoi(subUserTaskNode["VoteIdx"].asString());
	if(!subUserTaskNode["LastUserSubTaskId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.lastUserSubTaskId = subUserTaskNode["LastUserSubTaskId"].asString();
	if(!subUserTaskNode["OperateFlag"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.operateFlag = subUserTaskNode["OperateFlag"].asString();
	if(!subUserTaskNode["RejectFlag"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.rejectFlag = std::stoi(subUserTaskNode["RejectFlag"].asString());
	if(!subUserTaskNode["RejectRemark"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.rejectRemark = subUserTaskNode["RejectRemark"].asString();
	if(!subUserTaskNode["GmtTimeout"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.gmtTimeout = subUserTaskNode["GmtTimeout"].asString();
	if(!subUserTaskNode["ExternalBizNo"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.externalBizNo = subUserTaskNode["ExternalBizNo"].asString();
	auto handler1Node = subUserTaskNode["Handler"];
	if(!handler1Node["UserId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.handler1.userId = handler1Node["UserId"].asString();
	if(!handler1Node["UserName"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.handler1.userName = handler1Node["UserName"].asString();
	if(!handler1Node["AccountType"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.handler1.accountType = handler1Node["AccountType"].asString();
	if(!handler1Node["AccountNo"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.subUserTask.handler1.accountNo = handler1Node["AccountNo"].asString();
	auto optionTemplateNode = iTagMarkableWorkTaskDTONode["OptionTemplate"];
	if(!optionTemplateNode["Id"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.id = optionTemplateNode["Id"].asString();
	if(!optionTemplateNode["Name"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.name = optionTemplateNode["Name"].asString();
	if(!optionTemplateNode["TntInstId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.tntInstId = optionTemplateNode["TntInstId"].asString();
	if(!optionTemplateNode["Description"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.description = optionTemplateNode["Description"].asString();
	if(!optionTemplateNode["Exif"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.exif = optionTemplateNode["Exif"].asString();
	if(!optionTemplateNode["Status"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.status = std::stoi(optionTemplateNode["Status"].asString());
	if(!optionTemplateNode["SharedMode"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.sharedMode = optionTemplateNode["SharedMode"].asString();
	if(!optionTemplateNode["Type"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.type = optionTemplateNode["Type"].asString();
	if(!optionTemplateNode["Classify"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.classify = optionTemplateNode["Classify"].asString();
	if(!optionTemplateNode["GmtCreate"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.gmtCreate = optionTemplateNode["GmtCreate"].asString();
	if(!optionTemplateNode["GmtModified"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.gmtModified = optionTemplateNode["GmtModified"].asString();
	auto allQuestionConfigsNode = optionTemplateNode["QuestionConfigs"]["QuestionConfigDTO"];
	for (auto optionTemplateNodeQuestionConfigsQuestionConfigDTO : allQuestionConfigsNode)
	{
		Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::QuestionConfigDTO questionConfigDTOObject;
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["Id"].isNull())
			questionConfigDTOObject.id = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Id"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["MarkTitle"].isNull())
			questionConfigDTOObject.markTitle = optionTemplateNodeQuestionConfigsQuestionConfigDTO["MarkTitle"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].isNull())
			questionConfigDTOObject.markTitleAlias = optionTemplateNodeQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["Type"].isNull())
			questionConfigDTOObject.type = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Type"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["MustFill"].isNull())
			questionConfigDTOObject.mustFill = optionTemplateNodeQuestionConfigsQuestionConfigDTO["MustFill"].asString() == "true";
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["Display"].isNull())
			questionConfigDTOObject.display = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Display"].asString() == "true";
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["Selected"].isNull())
			questionConfigDTOObject.selected = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Selected"].asString() == "true";
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["SelectGroup"].isNull())
			questionConfigDTOObject.selectGroup = optionTemplateNodeQuestionConfigsQuestionConfigDTO["SelectGroup"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["DefaultResult"].isNull())
			questionConfigDTOObject.defaultResult = optionTemplateNodeQuestionConfigsQuestionConfigDTO["DefaultResult"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["Rule"].isNull())
			questionConfigDTOObject.rule = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Rule"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigDTO["Exif"].isNull())
			questionConfigDTOObject.exif = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Exif"].asString();
		auto allOptionsNode = optionTemplateNodeQuestionConfigsQuestionConfigDTO["Options"]["QuestionOption"];
		for (auto optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption : allOptionsNode)
		{
			Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::QuestionConfigDTO::QuestionOption optionsObject;
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].isNull())
				optionsObject.label = optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].isNull())
				optionsObject.key = optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].isNull())
				optionsObject.shortcut = optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].isNull())
				optionsObject.color = optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].isNull())
				optionsObject.value = optionTemplateNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].asString();
			auto allChildren2 = value["Children"]["QuestionOption"];
			for (auto value : allChildren2)
				optionsObject.children2.push_back(value.asString());
			questionConfigDTOObject.options.push_back(optionsObject);
		}
		auto allRobotConfigsNode = optionTemplateNodeQuestionConfigsQuestionConfigDTO["RobotConfigs"]["TemplateRobotConfig"];
		for (auto optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig : allRobotConfigsNode)
		{
			Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::QuestionConfigDTO::TemplateRobotConfig robotConfigsObject;
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].isNull())
				robotConfigsObject.robotId = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].isNull())
				robotConfigsObject.questionId = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].isNull())
				robotConfigsObject.stage = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].isNull())
				robotConfigsObject.type = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].isNull())
				robotConfigsObject.resultPath = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].isNull())
				robotConfigsObject.defaultResult = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].asString();
			auto allParamsNode = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Params"]["RobotParam"];
			for (auto optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam : allParamsNode)
			{
				Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::QuestionConfigDTO::TemplateRobotConfig::RobotParam paramsObject;
				if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].isNull())
					paramsObject.paramName = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].isNull())
					paramsObject.dataField = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].isNull())
					paramsObject.defaultResult = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].isNull())
					paramsObject.serviceId = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].isNull())
					paramsObject.mustFill = optionTemplateNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].asString() == "true";
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
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.questionConfigs.push_back(questionConfigDTOObject);
	}
	auto viewConfigsNode = optionTemplateNode["ViewConfigs"];
	auto allFieldsNode = viewConfigsNode["Fields"]["DisplayFieldDTO"];
	for (auto viewConfigsNodeFieldsDisplayFieldDTO : allFieldsNode)
	{
		Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::ViewConfigs::DisplayFieldDTO displayFieldDTOObject;
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
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.viewConfigs.fields.push_back(displayFieldDTOObject);
	}
	auto creatorNode = optionTemplateNode["Creator"];
	if(!creatorNode["UserId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.creator.userId = creatorNode["UserId"].asString();
	if(!creatorNode["UserName"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.creator.userName = creatorNode["UserName"].asString();
	if(!creatorNode["AccountType"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.creator.accountType = creatorNode["AccountType"].asString();
	if(!creatorNode["AccountNo"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.creator.accountNo = creatorNode["AccountNo"].asString();
	auto modifierNode = optionTemplateNode["Modifier"];
	if(!modifierNode["UserId"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.modifier.userId = modifierNode["UserId"].asString();
	if(!modifierNode["UserName"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.modifier.userName = modifierNode["UserName"].asString();
	if(!modifierNode["AccountType"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.modifier.accountType = modifierNode["AccountType"].asString();
	if(!modifierNode["AccountNo"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.modifier.accountNo = modifierNode["AccountNo"].asString();
	auto robotConfigNode = optionTemplateNode["RobotConfig"];
	if(!robotConfigNode["Source"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.robotConfig.source = robotConfigNode["Source"].asString();
	auto allModelServiceConfigsNode = robotConfigNode["ModelServiceConfigs"]["ModelServiceConfig"];
	for (auto robotConfigNodeModelServiceConfigsModelServiceConfig : allModelServiceConfigsNode)
	{
		Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::RobotConfig::ModelServiceConfig modelServiceConfigObject;
		if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
			modelServiceConfigObject.serviceId = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
		if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
			modelServiceConfigObject.serviceName = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
		auto allPostParamsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParamsNode)
		{
			Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::RobotConfig::ModelServiceConfig::ModelServiceConfig$PostParamPair postParamsObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
				postParamsObject.key = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
				postParamsObject.value = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
			modelServiceConfigObject.postParams.push_back(postParamsObject);
		}
		auto allResultMappingsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappingsNode)
		{
			Result::ITagSamplingStatsDTO::ITagMarkableWorkTaskDTO::OptionTemplate::RobotConfig::ModelServiceConfig::ModelServiceConfig$ResultMappingPair resultMappingsObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
				resultMappingsObject.questionId = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
				resultMappingsObject.resultKey = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
				resultMappingsObject.markTitle = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
			modelServiceConfigObject.resultMappings.push_back(resultMappingsObject);
		}
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.robotConfig.modelServiceConfigs.push_back(modelServiceConfigObject);
	}
	auto effectStepNode = robotConfigNode["EffectStep"];
	if(!effectStepNode["PreProcess"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.robotConfig.effectStep.preProcess = effectStepNode["PreProcess"].asString() == "true";
	if(!effectStepNode["PreLabel"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.robotConfig.effectStep.preLabel = effectStepNode["PreLabel"].asString() == "true";
	if(!effectStepNode["Label"].isNull())
		result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.robotConfig.effectStep.label = effectStepNode["Label"].asString() == "true";
	auto processConfigNode = effectStepNode["ProcessConfig"];
		auto allRelateColumn = processConfigNode["RelateColumn"]["String"];
		for (auto value : allRelateColumn)
			result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.robotConfig.effectStep.processConfig.relateColumn.push_back(value.asString());
		auto allTags = optionTemplateNode["Tags"]["String"];
		for (auto value : allTags)
			result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.tags.push_back(value.asString());
		auto allAbandonReasons = optionTemplateNode["AbandonReasons"]["String"];
		for (auto value : allAbandonReasons)
			result_.iTagSamplingStatsDTO.iTagMarkableWorkTaskDTO.optionTemplate.abandonReasons.push_back(value.asString());
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

std::string QuerySampleMarkItemsResult::getMsg()const
{
	return msg_;
}

bool QuerySampleMarkItemsResult::getSucc()const
{
	return succ_;
}

std::string QuerySampleMarkItemsResult::getErrorCode()const
{
	return errorCode_;
}

std::string QuerySampleMarkItemsResult::getErrInfo()const
{
	return errInfo_;
}

std::string QuerySampleMarkItemsResult::getCode()const
{
	return code_;
}

QuerySampleMarkItemsResult::Result QuerySampleMarkItemsResult::getResult()const
{
	return result_;
}

