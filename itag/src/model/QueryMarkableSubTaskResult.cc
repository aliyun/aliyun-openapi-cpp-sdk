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

#include <alibabacloud/itag/model/QueryMarkableSubTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

QueryMarkableSubTaskResult::QueryMarkableSubTaskResult() :
	ServiceResult()
{}

QueryMarkableSubTaskResult::QueryMarkableSubTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMarkableSubTaskResult::~QueryMarkableSubTaskResult()
{}

void QueryMarkableSubTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allMarkItemListNode = resultNode["MarkItemList"]["MarkItemListItem"];
	for (auto resultNodeMarkItemListMarkItemListItem : allMarkItemListNode)
	{
		Result::MarkItemListItem markItemListItemObject;
		if(!resultNodeMarkItemListMarkItemListItem["MarkItemId"].isNull())
			markItemListItemObject.markItemId = resultNodeMarkItemListMarkItemListItem["MarkItemId"].asString();
		if(!resultNodeMarkItemListMarkItemListItem["DataId"].isNull())
			markItemListItemObject.dataId = resultNodeMarkItemListMarkItemListItem["DataId"].asString();
		if(!resultNodeMarkItemListMarkItemListItem["DatasetId"].isNull())
			markItemListItemObject.datasetId = resultNodeMarkItemListMarkItemListItem["DatasetId"].asString();
		if(!resultNodeMarkItemListMarkItemListItem["State"].isNull())
			markItemListItemObject.state = resultNodeMarkItemListMarkItemListItem["State"].asString();
		if(!resultNodeMarkItemListMarkItemListItem["Mine"].isNull())
			markItemListItemObject.mine = std::stol(resultNodeMarkItemListMarkItemListItem["Mine"].asString());
		if(!resultNodeMarkItemListMarkItemListItem["RejectFlag"].isNull())
			markItemListItemObject.rejectFlag = std::stol(resultNodeMarkItemListMarkItemListItem["RejectFlag"].asString());
		if(!resultNodeMarkItemListMarkItemListItem["FixedFlag"].isNull())
			markItemListItemObject.fixedFlag = std::stol(resultNodeMarkItemListMarkItemListItem["FixedFlag"].asString());
		if(!resultNodeMarkItemListMarkItemListItem["AbandonFlag"].isNull())
			markItemListItemObject.abandonFlag = std::stol(resultNodeMarkItemListMarkItemListItem["AbandonFlag"].asString());
		if(!resultNodeMarkItemListMarkItemListItem["Weight"].isNull())
			markItemListItemObject.weight = std::stol(resultNodeMarkItemListMarkItemListItem["Weight"].asString());
		if(!resultNodeMarkItemListMarkItemListItem["DataMeta"].isNull())
			markItemListItemObject.dataMeta = resultNodeMarkItemListMarkItemListItem["DataMeta"].asString();
		auto allMarkResultListNode = resultNodeMarkItemListMarkItemListItem["MarkResultList"]["MarkResultListItem"];
		for (auto resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem : allMarkResultListNode)
		{
			Result::MarkItemListItem::MarkResultListItem markResultListObject;
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["UserMarkResultId"].isNull())
				markResultListObject.userMarkResultId = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["UserMarkResultId"].asString();
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["MarkResultId"].isNull())
				markResultListObject.markResultId = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["MarkResultId"].asString();
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["MarkTitle"].isNull())
				markResultListObject.markTitle = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["MarkTitle"].asString();
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["MarkResult"].isNull())
				markResultListObject.markResult = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["MarkResult"].asString();
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["QuestionId"].isNull())
				markResultListObject.questionId = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["QuestionId"].asString();
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["ResultType"].isNull())
				markResultListObject.resultType = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["ResultType"].asString();
			if(!resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["Version"].isNull())
				markResultListObject.version = resultNodeMarkItemListMarkItemListItemMarkResultListMarkResultListItem["Version"].asString();
			markItemListItemObject.markResultList.push_back(markResultListObject);
		}
		result_.markItemList.push_back(markItemListItemObject);
	}
	auto taskInfoNode = resultNode["TaskInfo"];
	if(!taskInfoNode["TaskName"].isNull())
		result_.taskInfo.taskName = taskInfoNode["TaskName"].asString();
	if(!taskInfoNode["TaskId"].isNull())
		result_.taskInfo.taskId = taskInfoNode["TaskId"].asString();
	if(!taskInfoNode["TaskType"].isNull())
		result_.taskInfo.taskType = taskInfoNode["TaskType"].asString();
	if(!taskInfoNode["Channel"].isNull())
		result_.taskInfo.channel = taskInfoNode["Channel"].asString();
	if(!taskInfoNode["SafetyLevel"].isNull())
		result_.taskInfo.safetyLevel = std::stol(taskInfoNode["SafetyLevel"].asString());
	auto bizInfoNode = taskInfoNode["BizInfo"];
	if(!bizInfoNode["BizCode"].isNull())
		result_.taskInfo.bizInfo.bizCode = bizInfoNode["BizCode"].asString();
	if(!bizInfoNode["BizNo"].isNull())
		result_.taskInfo.bizInfo.bizNo = bizInfoNode["BizNo"].asString();
	if(!bizInfoNode["BizClassify"].isNull())
		result_.taskInfo.bizInfo.bizClassify = bizInfoNode["BizClassify"].asString();
	auto subTaskNode = resultNode["SubTask"];
	if(!subTaskNode["SubTaskId"].isNull())
		result_.subTask.subTaskId = subTaskNode["SubTaskId"].asString();
	auto subUserTaskNode = resultNode["SubUserTask"];
	if(!subUserTaskNode["UserSubTaskId"].isNull())
		result_.subUserTask.userSubTaskId = subUserTaskNode["UserSubTaskId"].asString();
	if(!subUserTaskNode["SubTaskId"].isNull())
		result_.subUserTask.subTaskId = subUserTaskNode["SubTaskId"].asString();
	if(!subUserTaskNode["WorkNode"].isNull())
		result_.subUserTask.workNode = subUserTaskNode["WorkNode"].asString();
	if(!subUserTaskNode["State"].isNull())
		result_.subUserTask.state = subUserTaskNode["State"].asString();
	if(!subUserTaskNode["VoteIdx"].isNull())
		result_.subUserTask.voteIdx = std::stol(subUserTaskNode["VoteIdx"].asString());
	if(!subUserTaskNode["LastUserSubTaskId"].isNull())
		result_.subUserTask.lastUserSubTaskId = subUserTaskNode["LastUserSubTaskId"].asString();
	if(!subUserTaskNode["OperateFlag"].isNull())
		result_.subUserTask.operateFlag = subUserTaskNode["OperateFlag"].asString();
	if(!subUserTaskNode["RejectFlag"].isNull())
		result_.subUserTask.rejectFlag = std::stol(subUserTaskNode["RejectFlag"].asString());
	if(!subUserTaskNode["RejectRemark"].isNull())
		result_.subUserTask.rejectRemark = subUserTaskNode["RejectRemark"].asString();
	if(!subUserTaskNode["GmtTimeout"].isNull())
		result_.subUserTask.gmtTimeout = subUserTaskNode["GmtTimeout"].asString();
	if(!subUserTaskNode["ExternalBizNo"].isNull())
		result_.subUserTask.externalBizNo = subUserTaskNode["ExternalBizNo"].asString();
	auto handlerNode = subUserTaskNode["Handler"];
	if(!handlerNode["UserId"].isNull())
		result_.subUserTask.handler.userId = handlerNode["UserId"].asString();
	if(!handlerNode["UserName"].isNull())
		result_.subUserTask.handler.userName = handlerNode["UserName"].asString();
	if(!handlerNode["AccountType"].isNull())
		result_.subUserTask.handler.accountType = handlerNode["AccountType"].asString();
	if(!handlerNode["AccountNo"].isNull())
		result_.subUserTask.handler.accountNo = handlerNode["AccountNo"].asString();
	auto optionTemplateNode = resultNode["OptionTemplate"];
	if(!optionTemplateNode["GmtCreate"].isNull())
		result_.optionTemplate.gmtCreate = optionTemplateNode["GmtCreate"].asString();
	if(!optionTemplateNode["GmtModified"].isNull())
		result_.optionTemplate.gmtModified = optionTemplateNode["GmtModified"].asString();
	if(!optionTemplateNode["Id"].isNull())
		result_.optionTemplate.id = optionTemplateNode["Id"].asString();
	if(!optionTemplateNode["Name"].isNull())
		result_.optionTemplate.name = optionTemplateNode["Name"].asString();
	if(!optionTemplateNode["TntInstId"].isNull())
		result_.optionTemplate.tntInstId = optionTemplateNode["TntInstId"].asString();
	if(!optionTemplateNode["Description"].isNull())
		result_.optionTemplate.description = optionTemplateNode["Description"].asString();
	if(!optionTemplateNode["Exif"].isNull())
		result_.optionTemplate.exif = optionTemplateNode["Exif"].asString();
	if(!optionTemplateNode["Status"].isNull())
		result_.optionTemplate.status = std::stol(optionTemplateNode["Status"].asString());
	if(!optionTemplateNode["SharedMode"].isNull())
		result_.optionTemplate.sharedMode = optionTemplateNode["SharedMode"].asString();
	if(!optionTemplateNode["Type"].isNull())
		result_.optionTemplate.type = optionTemplateNode["Type"].asString();
	if(!optionTemplateNode["Classify"].isNull())
		result_.optionTemplate.classify = optionTemplateNode["Classify"].asString();
	auto allQuestionConfigsNode = optionTemplateNode["QuestionConfigs"]["QuestionConfigsItem"];
	for (auto optionTemplateNodeQuestionConfigsQuestionConfigsItem : allQuestionConfigsNode)
	{
		Result::OptionTemplate::QuestionConfigsItem questionConfigsItemObject;
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["Id"].isNull())
			questionConfigsItemObject.id = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Id"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["MarkTitle"].isNull())
			questionConfigsItemObject.markTitle = optionTemplateNodeQuestionConfigsQuestionConfigsItem["MarkTitle"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["MarkTitleAlias"].isNull())
			questionConfigsItemObject.markTitleAlias = optionTemplateNodeQuestionConfigsQuestionConfigsItem["MarkTitleAlias"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["Type"].isNull())
			questionConfigsItemObject.type = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Type"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["MustFill"].isNull())
			questionConfigsItemObject.mustFill = optionTemplateNodeQuestionConfigsQuestionConfigsItem["MustFill"].asString() == "true";
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["Display"].isNull())
			questionConfigsItemObject.display = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Display"].asString() == "true";
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["Selected"].isNull())
			questionConfigsItemObject.selected = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Selected"].asString() == "true";
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["SelectGroup"].isNull())
			questionConfigsItemObject.selectGroup = optionTemplateNodeQuestionConfigsQuestionConfigsItem["SelectGroup"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["DefaultResult"].isNull())
			questionConfigsItemObject.defaultResult = optionTemplateNodeQuestionConfigsQuestionConfigsItem["DefaultResult"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["Rule"].isNull())
			questionConfigsItemObject.rule = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Rule"].asString();
		if(!optionTemplateNodeQuestionConfigsQuestionConfigsItem["Exif"].isNull())
			questionConfigsItemObject.exif = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Exif"].asString();
		auto allOptionsNode = optionTemplateNodeQuestionConfigsQuestionConfigsItem["Options"]["QuestionOption"];
		for (auto optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption : allOptionsNode)
		{
			Result::OptionTemplate::QuestionConfigsItem::QuestionOption optionsObject;
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Label"].isNull())
				optionsObject.label = optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Label"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Key"].isNull())
				optionsObject.key = optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Key"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Shortcut"].isNull())
				optionsObject.shortcut = optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Shortcut"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Color"].isNull())
				optionsObject.color = optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Color"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Value"].isNull())
				optionsObject.value = optionTemplateNodeQuestionConfigsQuestionConfigsItemOptionsQuestionOption["Value"].asString();
			auto allChildren1 = value["Children"]["QuestionOption"];
			for (auto value : allChildren1)
				optionsObject.children1.push_back(value.asString());
			questionConfigsItemObject.options.push_back(optionsObject);
		}
		auto allRobotConfigsNode = optionTemplateNodeQuestionConfigsQuestionConfigsItem["RobotConfigs"]["TemplateRobotConfig"];
		for (auto optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig : allRobotConfigsNode)
		{
			Result::OptionTemplate::QuestionConfigsItem::TemplateRobotConfig robotConfigsObject;
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["RobotId"].isNull())
				robotConfigsObject.robotId = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["RobotId"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["QuestionId"].isNull())
				robotConfigsObject.questionId = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["QuestionId"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["Stage"].isNull())
				robotConfigsObject.stage = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["Stage"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["Type"].isNull())
				robotConfigsObject.type = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["Type"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["ResultPath"].isNull())
				robotConfigsObject.resultPath = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["ResultPath"].asString();
			if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["DefaultResult"].isNull())
				robotConfigsObject.defaultResult = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["DefaultResult"].asString();
			auto allParamsNode = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfig["Params"]["RobotParam"];
			for (auto optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam : allParamsNode)
			{
				Result::OptionTemplate::QuestionConfigsItem::TemplateRobotConfig::RobotParam paramsObject;
				if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].isNull())
					paramsObject.paramName = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].isNull())
					paramsObject.dataField = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].isNull())
					paramsObject.defaultResult = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].isNull())
					paramsObject.serviceId = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].asString();
				if(!optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].isNull())
					paramsObject.mustFill = optionTemplateNodeQuestionConfigsQuestionConfigsItemRobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].asString() == "true";
				robotConfigsObject.params.push_back(paramsObject);
			}
			questionConfigsItemObject.robotConfigs.push_back(robotConfigsObject);
		}
		auto allChildren = value["Children"]["ITagQuestionConfigDTO"];
		for (auto value : allChildren)
			questionConfigsItemObject.children.push_back(value.asString());
		auto allPreOptions = value["PreOptions"]["String"];
		for (auto value : allPreOptions)
			questionConfigsItemObject.preOptions.push_back(value.asString());
		result_.optionTemplate.questionConfigs.push_back(questionConfigsItemObject);
	}
	auto viewConfigsNode = optionTemplateNode["ViewConfigs"];
	auto allFieldsNode = viewConfigsNode["Fields"]["FieldsItem"];
	for (auto viewConfigsNodeFieldsFieldsItem : allFieldsNode)
	{
		Result::OptionTemplate::ViewConfigs::FieldsItem fieldsItemObject;
		if(!viewConfigsNodeFieldsFieldsItem["FieldName"].isNull())
			fieldsItemObject.fieldName = viewConfigsNodeFieldsFieldsItem["FieldName"].asString();
		if(!viewConfigsNodeFieldsFieldsItem["Type"].isNull())
			fieldsItemObject.type = viewConfigsNodeFieldsFieldsItem["Type"].asString();
		if(!viewConfigsNodeFieldsFieldsItem["CorsProxy"].isNull())
			fieldsItemObject.corsProxy = viewConfigsNodeFieldsFieldsItem["CorsProxy"].asString() == "true";
		if(!viewConfigsNodeFieldsFieldsItem["Hide"].isNull())
			fieldsItemObject.hide = viewConfigsNodeFieldsFieldsItem["Hide"].asString() == "true";
		if(!viewConfigsNodeFieldsFieldsItem["Convertor"].isNull())
			fieldsItemObject.convertor = viewConfigsNodeFieldsFieldsItem["Convertor"].asString();
		if(!viewConfigsNodeFieldsFieldsItem["VisitInfo"].isNull())
			fieldsItemObject.visitInfo = viewConfigsNodeFieldsFieldsItem["VisitInfo"].asString();
		if(!viewConfigsNodeFieldsFieldsItem["Plugins"].isNull())
			fieldsItemObject.plugins = viewConfigsNodeFieldsFieldsItem["Plugins"].asString();
		auto allRelationQuestionIds = value["RelationQuestionIds"]["RelationQuestionIds"];
		for (auto value : allRelationQuestionIds)
			fieldsItemObject.relationQuestionIds.push_back(value.asString());
		result_.optionTemplate.viewConfigs.fields.push_back(fieldsItemObject);
	}
		auto allTags = optionTemplateNode["Tags"]["Tags"];
		for (auto value : allTags)
			result_.optionTemplate.tags.push_back(value.asString());
		auto allAbandonReasons = optionTemplateNode["AbandonReasons"]["AbandonReasons"];
		for (auto value : allAbandonReasons)
			result_.optionTemplate.abandonReasons.push_back(value.asString());
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

std::string QueryMarkableSubTaskResult::getMsg()const
{
	return msg_;
}

bool QueryMarkableSubTaskResult::getSucc()const
{
	return succ_;
}

std::string QueryMarkableSubTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryMarkableSubTaskResult::getErrInfo()const
{
	return errInfo_;
}

std::string QueryMarkableSubTaskResult::getCode()const
{
	return code_;
}

QueryMarkableSubTaskResult::Result QueryMarkableSubTaskResult::getResult()const
{
	return result_;
}

