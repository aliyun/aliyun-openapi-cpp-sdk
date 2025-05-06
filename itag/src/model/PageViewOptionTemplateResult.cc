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

#include <alibabacloud/itag/model/PageViewOptionTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewOptionTemplateResult::PageViewOptionTemplateResult() :
	ServiceResult()
{}

PageViewOptionTemplateResult::PageViewOptionTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewOptionTemplateResult::~PageViewOptionTemplateResult()
{}

void PageViewOptionTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["Id"].isNull())
			listItemObject.id = resultNodeListListItem["Id"].asString();
		if(!resultNodeListListItem["Name"].isNull())
			listItemObject.name = resultNodeListListItem["Name"].asString();
		if(!resultNodeListListItem["TntInstId"].isNull())
			listItemObject.tntInstId = resultNodeListListItem["TntInstId"].asString();
		if(!resultNodeListListItem["Description"].isNull())
			listItemObject.description = resultNodeListListItem["Description"].asString();
		if(!resultNodeListListItem["Exif"].isNull())
			listItemObject.exif = resultNodeListListItem["Exif"].asString();
		if(!resultNodeListListItem["Status"].isNull())
			listItemObject.status = std::stoi(resultNodeListListItem["Status"].asString());
		if(!resultNodeListListItem["SharedMode"].isNull())
			listItemObject.sharedMode = resultNodeListListItem["SharedMode"].asString();
		if(!resultNodeListListItem["Type"].isNull())
			listItemObject.type = resultNodeListListItem["Type"].asString();
		if(!resultNodeListListItem["Classify"].isNull())
			listItemObject.classify = resultNodeListListItem["Classify"].asString();
		if(!resultNodeListListItem["GmtCreate"].isNull())
			listItemObject.gmtCreate = resultNodeListListItem["GmtCreate"].asString();
		if(!resultNodeListListItem["GmtModified"].isNull())
			listItemObject.gmtModified = resultNodeListListItem["GmtModified"].asString();
		auto allQuestionConfigsNode = resultNodeListListItem["QuestionConfigs"]["QuestionConfigDTO"];
		for (auto resultNodeListListItemQuestionConfigsQuestionConfigDTO : allQuestionConfigsNode)
		{
			Result::ListItem::QuestionConfigDTO questionConfigsObject;
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["Id"].isNull())
				questionConfigsObject.id = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Id"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["MarkTitle"].isNull())
				questionConfigsObject.markTitle = resultNodeListListItemQuestionConfigsQuestionConfigDTO["MarkTitle"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].isNull())
				questionConfigsObject.markTitleAlias = resultNodeListListItemQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["Type"].isNull())
				questionConfigsObject.type = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Type"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["MustFill"].isNull())
				questionConfigsObject.mustFill = resultNodeListListItemQuestionConfigsQuestionConfigDTO["MustFill"].asString() == "true";
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["Display"].isNull())
				questionConfigsObject.display = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Display"].asString() == "true";
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["Selected"].isNull())
				questionConfigsObject.selected = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Selected"].asString() == "true";
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["SelectGroup"].isNull())
				questionConfigsObject.selectGroup = resultNodeListListItemQuestionConfigsQuestionConfigDTO["SelectGroup"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["DefaultResult"].isNull())
				questionConfigsObject.defaultResult = resultNodeListListItemQuestionConfigsQuestionConfigDTO["DefaultResult"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["Rule"].isNull())
				questionConfigsObject.rule = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Rule"].asString();
			if(!resultNodeListListItemQuestionConfigsQuestionConfigDTO["Exif"].isNull())
				questionConfigsObject.exif = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Exif"].asString();
			auto allOptionsNode = resultNodeListListItemQuestionConfigsQuestionConfigDTO["Options"]["QuestionOption"];
			for (auto resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption : allOptionsNode)
			{
				Result::ListItem::QuestionConfigDTO::QuestionOption optionsObject;
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].isNull())
					optionsObject.label = resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].isNull())
					optionsObject.key = resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].isNull())
					optionsObject.shortcut = resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].isNull())
					optionsObject.color = resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].isNull())
					optionsObject.value = resultNodeListListItemQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].asString();
				auto allChildren1 = value["Children"]["QuestionOption"];
				for (auto value : allChildren1)
					optionsObject.children1.push_back(value.asString());
				questionConfigsObject.options.push_back(optionsObject);
			}
			auto allRobotConfigsNode = resultNodeListListItemQuestionConfigsQuestionConfigDTO["RobotConfigs"]["TemplateRobotConfig"];
			for (auto resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig : allRobotConfigsNode)
			{
				Result::ListItem::QuestionConfigDTO::TemplateRobotConfig robotConfigsObject;
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].isNull())
					robotConfigsObject.robotId = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].isNull())
					robotConfigsObject.questionId = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].isNull())
					robotConfigsObject.stage = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].isNull())
					robotConfigsObject.type = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].isNull())
					robotConfigsObject.resultPath = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].asString();
				if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].isNull())
					robotConfigsObject.defaultResult = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].asString();
				auto allParamsNode = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Params"]["RobotParam"];
				for (auto resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam : allParamsNode)
				{
					Result::ListItem::QuestionConfigDTO::TemplateRobotConfig::RobotParam paramsObject;
					if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].isNull())
						paramsObject.paramName = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].asString();
					if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].isNull())
						paramsObject.dataField = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].asString();
					if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].isNull())
						paramsObject.defaultResult = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].asString();
					if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].isNull())
						paramsObject.serviceId = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].asString();
					if(!resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].isNull())
						paramsObject.mustFill = resultNodeListListItemQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].asString() == "true";
					robotConfigsObject.params.push_back(paramsObject);
				}
				questionConfigsObject.robotConfigs.push_back(robotConfigsObject);
			}
			auto allChildren = value["Children"]["ITagQuestionConfigDTO"];
			for (auto value : allChildren)
				questionConfigsObject.children.push_back(value.asString());
			auto allPreOptions = value["PreOptions"]["String"];
			for (auto value : allPreOptions)
				questionConfigsObject.preOptions.push_back(value.asString());
			listItemObject.questionConfigs.push_back(questionConfigsObject);
		}
		auto viewConfigsNode = value["ViewConfigs"];
		auto allFieldsNode = viewConfigsNode["Fields"]["DisplayFieldDTO"];
		for (auto viewConfigsNodeFieldsDisplayFieldDTO : allFieldsNode)
		{
			Result::ListItem::ViewConfigs::DisplayFieldDTO displayFieldDTOObject;
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
			listItemObject.viewConfigs.fields.push_back(displayFieldDTOObject);
		}
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			listItemObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			listItemObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			listItemObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			listItemObject.creator.accountNo = creatorNode["AccountNo"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			listItemObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			listItemObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			listItemObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			listItemObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		auto robotConfigNode = value["RobotConfig"];
		if(!robotConfigNode["Source"].isNull())
			listItemObject.robotConfig.source = robotConfigNode["Source"].asString();
		auto allModelServiceConfigsNode = robotConfigNode["ModelServiceConfigs"]["ModelServiceConfig"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfig : allModelServiceConfigsNode)
		{
			Result::ListItem::RobotConfig::ModelServiceConfig modelServiceConfigObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
				modelServiceConfigObject.serviceId = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
				modelServiceConfigObject.serviceName = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
			auto allPostParamsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
			for (auto robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParamsNode)
			{
				Result::ListItem::RobotConfig::ModelServiceConfig::ModelServiceConfig$PostParamPair postParamsObject;
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
					postParamsObject.key = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
					postParamsObject.value = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
				modelServiceConfigObject.postParams.push_back(postParamsObject);
			}
			auto allResultMappingsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
			for (auto robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappingsNode)
			{
				Result::ListItem::RobotConfig::ModelServiceConfig::ModelServiceConfig$ResultMappingPair resultMappingsObject;
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
					resultMappingsObject.questionId = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
					resultMappingsObject.resultKey = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
				if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
					resultMappingsObject.markTitle = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
				modelServiceConfigObject.resultMappings.push_back(resultMappingsObject);
			}
			listItemObject.robotConfig.modelServiceConfigs.push_back(modelServiceConfigObject);
		}
		auto effectStepNode = robotConfigNode["EffectStep"];
		if(!effectStepNode["PreProcess"].isNull())
			listItemObject.robotConfig.effectStep.preProcess = effectStepNode["PreProcess"].asString() == "true";
		if(!effectStepNode["PreLabel"].isNull())
			listItemObject.robotConfig.effectStep.preLabel = effectStepNode["PreLabel"].asString() == "true";
		if(!effectStepNode["Label"].isNull())
			listItemObject.robotConfig.effectStep.label = effectStepNode["Label"].asString() == "true";
		auto processConfigNode = effectStepNode["ProcessConfig"];
			auto allRelateColumn = processConfigNode["RelateColumn"]["String"];
			for (auto value : allRelateColumn)
				listItemObject.robotConfig.effectStep.processConfig.relateColumn.push_back(value.asString());
		auto allTags = value["Tags"]["String"];
		for (auto value : allTags)
			listItemObject.tags.push_back(value.asString());
		auto allAbandonReasons = value["AbandonReasons"]["String"];
		for (auto value : allAbandonReasons)
			listItemObject.abandonReasons.push_back(value.asString());
		result_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string PageViewOptionTemplateResult::getMsg()const
{
	return msg_;
}

bool PageViewOptionTemplateResult::getSucc()const
{
	return succ_;
}

std::string PageViewOptionTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewOptionTemplateResult::getErrInfo()const
{
	return errInfo_;
}

int PageViewOptionTemplateResult::getCode()const
{
	return code_;
}

PageViewOptionTemplateResult::Result PageViewOptionTemplateResult::getResult()const
{
	return result_;
}

