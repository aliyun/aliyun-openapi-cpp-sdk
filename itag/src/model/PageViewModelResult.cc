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

#include <alibabacloud/itag/model/PageViewModelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewModelResult::PageViewModelResult() :
	ServiceResult()
{}

PageViewModelResult::PageViewModelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewModelResult::~PageViewModelResult()
{}

void PageViewModelResult::parse(const std::string &payload)
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
		if(!resultNodeListListItem["CreatorId"].isNull())
			listItemObject.creatorId = resultNodeListListItem["CreatorId"].asString();
		if(!resultNodeListListItem["CreatorAccount"].isNull())
			listItemObject.creatorAccount = resultNodeListListItem["CreatorAccount"].asString();
		if(!resultNodeListListItem["CreatorName"].isNull())
			listItemObject.creatorName = resultNodeListListItem["CreatorName"].asString();
		if(!resultNodeListListItem["TntInstId"].isNull())
			listItemObject.tntInstId = resultNodeListListItem["TntInstId"].asString();
		if(!resultNodeListListItem["Name"].isNull())
			listItemObject.name = resultNodeListListItem["Name"].asString();
		if(!resultNodeListListItem["Type"].isNull())
			listItemObject.type = resultNodeListListItem["Type"].asString();
		if(!resultNodeListListItem["Source"].isNull())
			listItemObject.source = resultNodeListListItem["Source"].asString();
		if(!resultNodeListListItem["Remark"].isNull())
			listItemObject.remark = resultNodeListListItem["Remark"].asString();
		if(!resultNodeListListItem["Async"].isNull())
			listItemObject.async = resultNodeListListItem["Async"].asString() == "true";
		if(!resultNodeListListItem["GmtCreate"].isNull())
			listItemObject.gmtCreate = resultNodeListListItem["GmtCreate"].asString();
		if(!resultNodeListListItem["GmtModified"].isNull())
			listItemObject.gmtModified = resultNodeListListItem["GmtModified"].asString();
		if(!resultNodeListListItem["ModelTag"].isNull())
			listItemObject.modelTag = resultNodeListListItem["ModelTag"].asString();
		if(!resultNodeListListItem["UdfType"].isNull())
			listItemObject.udfType = resultNodeListListItem["UdfType"].asString();
		auto modelConfigNode = value["ModelConfig"];
		if(!modelConfigNode["Host"].isNull())
			listItemObject.modelConfig.host = modelConfigNode["Host"].asString();
		if(!modelConfigNode["RequestType"].isNull())
			listItemObject.modelConfig.requestType = modelConfigNode["RequestType"].asString();
		if(!modelConfigNode["ContentType"].isNull())
			listItemObject.modelConfig.contentType = modelConfigNode["ContentType"].asString();
		if(!modelConfigNode["QpsLimit"].isNull())
			listItemObject.modelConfig.qpsLimit = std::stol(modelConfigNode["QpsLimit"].asString());
		if(!modelConfigNode["ServiceCode"].isNull())
			listItemObject.modelConfig.serviceCode = modelConfigNode["ServiceCode"].asString();
		if(!modelConfigNode["AppId"].isNull())
			listItemObject.modelConfig.appId = modelConfigNode["AppId"].asString();
		if(!modelConfigNode["Token"].isNull())
			listItemObject.modelConfig.token = modelConfigNode["Token"].asString();
		if(!modelConfigNode["PaiModelTarget"].isNull())
			listItemObject.modelConfig.paiModelTarget = modelConfigNode["PaiModelTarget"].asString();
		if(!modelConfigNode["UdfContent"].isNull())
			listItemObject.modelConfig.udfContent = modelConfigNode["UdfContent"].asString();
		auto paramConfigNode = value["ParamConfig"];
		auto allPresetParamNode = paramConfigNode["PresetParam"]["PresetParamItem"];
		for (auto paramConfigNodePresetParamPresetParamItem : allPresetParamNode)
		{
			Result::ListItem::ParamConfig::PresetParamItem presetParamItemObject;
			if(!paramConfigNodePresetParamPresetParamItem["Name"].isNull())
				presetParamItemObject.name = paramConfigNodePresetParamPresetParamItem["Name"].asString();
			if(!paramConfigNodePresetParamPresetParamItem["Alias"].isNull())
				presetParamItemObject.alias = paramConfigNodePresetParamPresetParamItem["Alias"].asString();
			if(!paramConfigNodePresetParamPresetParamItem["Type"].isNull())
				presetParamItemObject.type = paramConfigNodePresetParamPresetParamItem["Type"].asString();
			if(!paramConfigNodePresetParamPresetParamItem["Codec"].isNull())
				presetParamItemObject.codec = paramConfigNodePresetParamPresetParamItem["Codec"].asString();
			if(!paramConfigNodePresetParamPresetParamItem["Value"].isNull())
				presetParamItemObject.value = paramConfigNodePresetParamPresetParamItem["Value"].asString();
			if(!paramConfigNodePresetParamPresetParamItem["DefaultValue"].isNull())
				presetParamItemObject.defaultValue = paramConfigNodePresetParamPresetParamItem["DefaultValue"].asString();
			listItemObject.paramConfig.presetParam.push_back(presetParamItemObject);
		}
		auto allPostParamNode = paramConfigNode["PostParam"]["PostParamItem"];
		for (auto paramConfigNodePostParamPostParamItem : allPostParamNode)
		{
			Result::ListItem::ParamConfig::PostParamItem postParamItemObject;
			if(!paramConfigNodePostParamPostParamItem["Name"].isNull())
				postParamItemObject.name = paramConfigNodePostParamPostParamItem["Name"].asString();
			if(!paramConfigNodePostParamPostParamItem["Alias"].isNull())
				postParamItemObject.alias = paramConfigNodePostParamPostParamItem["Alias"].asString();
			if(!paramConfigNodePostParamPostParamItem["Type"].isNull())
				postParamItemObject.type = paramConfigNodePostParamPostParamItem["Type"].asString();
			if(!paramConfigNodePostParamPostParamItem["Codec"].isNull())
				postParamItemObject.codec = paramConfigNodePostParamPostParamItem["Codec"].asString();
			if(!paramConfigNodePostParamPostParamItem["Value"].isNull())
				postParamItemObject.value = paramConfigNodePostParamPostParamItem["Value"].asString();
			if(!paramConfigNodePostParamPostParamItem["DefaultValue"].isNull())
				postParamItemObject.defaultValue = paramConfigNodePostParamPostParamItem["DefaultValue"].asString();
			listItemObject.paramConfig.postParam.push_back(postParamItemObject);
		}
		auto allResponseParamNode = paramConfigNode["ResponseParam"]["ResponseParamItem"];
		for (auto paramConfigNodeResponseParamResponseParamItem : allResponseParamNode)
		{
			Result::ListItem::ParamConfig::ResponseParamItem responseParamItemObject;
			if(!paramConfigNodeResponseParamResponseParamItem["ResultKey"].isNull())
				responseParamItemObject.resultKey = paramConfigNodeResponseParamResponseParamItem["ResultKey"].asString();
			if(!paramConfigNodeResponseParamResponseParamItem["ResultPath"].isNull())
				responseParamItemObject.resultPath = paramConfigNodeResponseParamResponseParamItem["ResultPath"].asString();
			listItemObject.paramConfig.responseParam.push_back(responseParamItemObject);
		}
		auto modelExtendConfigNode = value["ModelExtendConfig"];
		if(!modelExtendConfigNode["PostUdfModelId"].isNull())
			listItemObject.modelExtendConfig.postUdfModelId = std::stol(modelExtendConfigNode["PostUdfModelId"].asString());
		if(!modelExtendConfigNode["PreUdfModelId"].isNull())
			listItemObject.modelExtendConfig.preUdfModelId = std::stol(modelExtendConfigNode["PreUdfModelId"].asString());
		if(!modelExtendConfigNode["Extra"].isNull())
			listItemObject.modelExtendConfig.extra = modelExtendConfigNode["Extra"].asString();
		auto asyncConfigNode = modelExtendConfigNode["AsyncConfig"];
		if(!asyncConfigNode["ModelId"].isNull())
			listItemObject.modelExtendConfig.asyncConfig.modelId = std::stol(asyncConfigNode["ModelId"].asString());
			auto allAggModelIds = modelExtendConfigNode["AggModelIds"]["AggModelId"];
			for (auto value : allAggModelIds)
				listItemObject.modelExtendConfig.aggModelIds.push_back(value.asString());
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			listItemObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			listItemObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			listItemObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			listItemObject.creator.accountNo = creatorNode["AccountNo"].asString();
		if(!creatorNode["Email"].isNull())
			listItemObject.creator.email = creatorNode["Email"].asString();
		if(!creatorNode["PamNo"].isNull())
			listItemObject.creator.pamNo = creatorNode["PamNo"].asString();
		if(!creatorNode["SupplierId"].isNull())
			listItemObject.creator.supplierId = creatorNode["SupplierId"].asString();
		if(!creatorNode["SupplierName"].isNull())
			listItemObject.creator.supplierName = creatorNode["SupplierName"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			listItemObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			listItemObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			listItemObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			listItemObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		if(!modifierNode["Email"].isNull())
			listItemObject.modifier.email = modifierNode["Email"].asString();
		if(!modifierNode["PamNo"].isNull())
			listItemObject.modifier.pamNo = modifierNode["PamNo"].asString();
		if(!modifierNode["SupplierId"].isNull())
			listItemObject.modifier.supplierId = modifierNode["SupplierId"].asString();
		if(!modifierNode["SupplierName"].isNull())
			listItemObject.modifier.supplierName = modifierNode["SupplierName"].asString();
		auto demoModelConfigNode = value["DemoModelConfig"];
		if(!demoModelConfigNode["Host"].isNull())
			listItemObject.demoModelConfig.host = demoModelConfigNode["Host"].asString();
		if(!demoModelConfigNode["RequestType"].isNull())
			listItemObject.demoModelConfig.requestType = demoModelConfigNode["RequestType"].asString();
		if(!demoModelConfigNode["ContentType"].isNull())
			listItemObject.demoModelConfig.contentType = demoModelConfigNode["ContentType"].asString();
		if(!demoModelConfigNode["QpsLimit"].isNull())
			listItemObject.demoModelConfig.qpsLimit = std::stol(demoModelConfigNode["QpsLimit"].asString());
		if(!demoModelConfigNode["ServiceCode"].isNull())
			listItemObject.demoModelConfig.serviceCode = demoModelConfigNode["ServiceCode"].asString();
		if(!demoModelConfigNode["AppId"].isNull())
			listItemObject.demoModelConfig.appId = demoModelConfigNode["AppId"].asString();
		if(!demoModelConfigNode["Token"].isNull())
			listItemObject.demoModelConfig.token = demoModelConfigNode["Token"].asString();
		if(!demoModelConfigNode["PaiModelTarget"].isNull())
			listItemObject.demoModelConfig.paiModelTarget = demoModelConfigNode["PaiModelTarget"].asString();
		if(!demoModelConfigNode["UdfContent"].isNull())
			listItemObject.demoModelConfig.udfContent = demoModelConfigNode["UdfContent"].asString();
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
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string PageViewModelResult::getMsg()const
{
	return msg_;
}

long PageViewModelResult::getRt()const
{
	return rt_;
}

bool PageViewModelResult::getSucc()const
{
	return succ_;
}

std::string PageViewModelResult::getHost()const
{
	return host_;
}

std::string PageViewModelResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewModelResult::getErrInfo()const
{
	return errInfo_;
}

int PageViewModelResult::getCode()const
{
	return code_;
}

PageViewModelResult::Result PageViewModelResult::getResult()const
{
	return result_;
}

