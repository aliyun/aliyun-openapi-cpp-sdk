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

#include <alibabacloud/itag/model/GetOptionTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetOptionTemplateResult::GetOptionTemplateResult() :
	ServiceResult()
{}

GetOptionTemplateResult::GetOptionTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOptionTemplateResult::~GetOptionTemplateResult()
{}

void GetOptionTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = resultNode["Id"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["TntInstId"].isNull())
		result_.tntInstId = resultNode["TntInstId"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["Exif"].isNull())
		result_.exif = resultNode["Exif"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());
	if(!resultNode["SharedMode"].isNull())
		result_.sharedMode = resultNode["SharedMode"].asString();
	if(!resultNode["Type"].isNull())
		result_.type = resultNode["Type"].asString();
	if(!resultNode["Classify"].isNull())
		result_.classify = resultNode["Classify"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto allQuestionConfigsNode = resultNode["QuestionConfigs"]["QuestionConfigDTO"];
	for (auto resultNodeQuestionConfigsQuestionConfigDTO : allQuestionConfigsNode)
	{
		Result::QuestionConfigDTO questionConfigDTOObject;
		if(!resultNodeQuestionConfigsQuestionConfigDTO["Id"].isNull())
			questionConfigDTOObject.id = resultNodeQuestionConfigsQuestionConfigDTO["Id"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["MarkTitle"].isNull())
			questionConfigDTOObject.markTitle = resultNodeQuestionConfigsQuestionConfigDTO["MarkTitle"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].isNull())
			questionConfigDTOObject.markTitleAlias = resultNodeQuestionConfigsQuestionConfigDTO["MarkTitleAlias"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["Type"].isNull())
			questionConfigDTOObject.type = resultNodeQuestionConfigsQuestionConfigDTO["Type"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["MustFill"].isNull())
			questionConfigDTOObject.mustFill = resultNodeQuestionConfigsQuestionConfigDTO["MustFill"].asString() == "true";
		if(!resultNodeQuestionConfigsQuestionConfigDTO["Display"].isNull())
			questionConfigDTOObject.display = resultNodeQuestionConfigsQuestionConfigDTO["Display"].asString() == "true";
		if(!resultNodeQuestionConfigsQuestionConfigDTO["Selected"].isNull())
			questionConfigDTOObject.selected = resultNodeQuestionConfigsQuestionConfigDTO["Selected"].asString() == "true";
		if(!resultNodeQuestionConfigsQuestionConfigDTO["SelectGroup"].isNull())
			questionConfigDTOObject.selectGroup = resultNodeQuestionConfigsQuestionConfigDTO["SelectGroup"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["DefaultResult"].isNull())
			questionConfigDTOObject.defaultResult = resultNodeQuestionConfigsQuestionConfigDTO["DefaultResult"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["Rule"].isNull())
			questionConfigDTOObject.rule = resultNodeQuestionConfigsQuestionConfigDTO["Rule"].asString();
		if(!resultNodeQuestionConfigsQuestionConfigDTO["Exif"].isNull())
			questionConfigDTOObject.exif = resultNodeQuestionConfigsQuestionConfigDTO["Exif"].asString();
		auto allOptionsNode = resultNodeQuestionConfigsQuestionConfigDTO["Options"]["QuestionOption"];
		for (auto resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption : allOptionsNode)
		{
			Result::QuestionConfigDTO::QuestionOption optionsObject;
			if(!resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].isNull())
				optionsObject.label = resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Label"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].isNull())
				optionsObject.key = resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Key"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].isNull())
				optionsObject.shortcut = resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Shortcut"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].isNull())
				optionsObject.color = resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Color"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].isNull())
				optionsObject.value = resultNodeQuestionConfigsQuestionConfigDTOOptionsQuestionOption["Value"].asString();
			auto allChildren1 = value["Children"]["QuestionOption"];
			for (auto value : allChildren1)
				optionsObject.children1.push_back(value.asString());
			questionConfigDTOObject.options.push_back(optionsObject);
		}
		auto allRobotConfigsNode = resultNodeQuestionConfigsQuestionConfigDTO["RobotConfigs"]["TemplateRobotConfig"];
		for (auto resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig : allRobotConfigsNode)
		{
			Result::QuestionConfigDTO::TemplateRobotConfig robotConfigsObject;
			if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].isNull())
				robotConfigsObject.robotId = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["RobotId"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].isNull())
				robotConfigsObject.questionId = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["QuestionId"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].isNull())
				robotConfigsObject.stage = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Stage"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].isNull())
				robotConfigsObject.type = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Type"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].isNull())
				robotConfigsObject.resultPath = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["ResultPath"].asString();
			if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].isNull())
				robotConfigsObject.defaultResult = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["DefaultResult"].asString();
			auto allParamsNode = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfig["Params"]["RobotParam"];
			for (auto resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam : allParamsNode)
			{
				Result::QuestionConfigDTO::TemplateRobotConfig::RobotParam paramsObject;
				if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].isNull())
					paramsObject.paramName = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ParamName"].asString();
				if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].isNull())
					paramsObject.dataField = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DataField"].asString();
				if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].isNull())
					paramsObject.defaultResult = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["DefaultResult"].asString();
				if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].isNull())
					paramsObject.serviceId = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["ServiceId"].asString();
				if(!resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].isNull())
					paramsObject.mustFill = resultNodeQuestionConfigsQuestionConfigDTORobotConfigsTemplateRobotConfigParamsRobotParam["MustFill"].asString() == "true";
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
		result_.questionConfigs.push_back(questionConfigDTOObject);
	}
	auto viewConfigsNode = resultNode["ViewConfigs"];
	auto allFieldsNode = viewConfigsNode["Fields"]["DisplayFieldDTO"];
	for (auto viewConfigsNodeFieldsDisplayFieldDTO : allFieldsNode)
	{
		Result::ViewConfigs::DisplayFieldDTO displayFieldDTOObject;
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
		result_.viewConfigs.fields.push_back(displayFieldDTOObject);
	}
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
	auto robotConfigNode = resultNode["RobotConfig"];
	if(!robotConfigNode["Source"].isNull())
		result_.robotConfig.source = robotConfigNode["Source"].asString();
	auto allModelServiceConfigsNode = robotConfigNode["ModelServiceConfigs"]["ModelServiceConfig"];
	for (auto robotConfigNodeModelServiceConfigsModelServiceConfig : allModelServiceConfigsNode)
	{
		Result::RobotConfig::ModelServiceConfig modelServiceConfigObject;
		if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].isNull())
			modelServiceConfigObject.serviceId = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceId"].asString();
		if(!robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].isNull())
			modelServiceConfigObject.serviceName = robotConfigNodeModelServiceConfigsModelServiceConfig["ServiceName"].asString();
		auto allPostParamsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["PostParams"]["ModelServiceConfig$PostParamPair"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair : allPostParamsNode)
		{
			Result::RobotConfig::ModelServiceConfig::ModelServiceConfig$PostParamPair postParamsObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].isNull())
				postParamsObject.key = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Key"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].isNull())
				postParamsObject.value = robotConfigNodeModelServiceConfigsModelServiceConfigPostParamsModelServiceConfig$PostParamPair["Value"].asString();
			modelServiceConfigObject.postParams.push_back(postParamsObject);
		}
		auto allResultMappingsNode = robotConfigNodeModelServiceConfigsModelServiceConfig["ResultMappings"]["ModelServiceConfig$ResultMappingPair"];
		for (auto robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair : allResultMappingsNode)
		{
			Result::RobotConfig::ModelServiceConfig::ModelServiceConfig$ResultMappingPair resultMappingsObject;
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].isNull())
				resultMappingsObject.questionId = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["QuestionId"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].isNull())
				resultMappingsObject.resultKey = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["ResultKey"].asString();
			if(!robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].isNull())
				resultMappingsObject.markTitle = robotConfigNodeModelServiceConfigsModelServiceConfigResultMappingsModelServiceConfig$ResultMappingPair["MarkTitle"].asString();
			modelServiceConfigObject.resultMappings.push_back(resultMappingsObject);
		}
		result_.robotConfig.modelServiceConfigs.push_back(modelServiceConfigObject);
	}
	auto effectStepNode = robotConfigNode["EffectStep"];
	if(!effectStepNode["PreProcess"].isNull())
		result_.robotConfig.effectStep.preProcess = effectStepNode["PreProcess"].asString() == "true";
	if(!effectStepNode["PreLabel"].isNull())
		result_.robotConfig.effectStep.preLabel = effectStepNode["PreLabel"].asString() == "true";
	if(!effectStepNode["Label"].isNull())
		result_.robotConfig.effectStep.label = effectStepNode["Label"].asString() == "true";
	auto processConfigNode = effectStepNode["ProcessConfig"];
		auto allRelateColumn = processConfigNode["RelateColumn"]["String"];
		for (auto value : allRelateColumn)
			result_.robotConfig.effectStep.processConfig.relateColumn.push_back(value.asString());
		auto allTags = resultNode["Tags"]["String"];
		for (auto value : allTags)
			result_.tags.push_back(value.asString());
		auto allAbandonReasons = resultNode["AbandonReasons"]["String"];
		for (auto value : allAbandonReasons)
			result_.abandonReasons.push_back(value.asString());
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

std::string GetOptionTemplateResult::getMsg()const
{
	return msg_;
}

bool GetOptionTemplateResult::getSucc()const
{
	return succ_;
}

std::string GetOptionTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOptionTemplateResult::getErrInfo()const
{
	return errInfo_;
}

int GetOptionTemplateResult::getCode()const
{
	return code_;
}

GetOptionTemplateResult::Result GetOptionTemplateResult::getResult()const
{
	return result_;
}

