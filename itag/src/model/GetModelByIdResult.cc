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

#include <alibabacloud/itag/model/GetModelByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetModelByIdResult::GetModelByIdResult() :
	ServiceResult()
{}

GetModelByIdResult::GetModelByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetModelByIdResult::~GetModelByIdResult()
{}

void GetModelByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = resultNode["Id"].asString();
	if(!resultNode["CreatorId"].isNull())
		result_.creatorId = resultNode["CreatorId"].asString();
	if(!resultNode["CreatorAccount"].isNull())
		result_.creatorAccount = resultNode["CreatorAccount"].asString();
	if(!resultNode["CreatorName"].isNull())
		result_.creatorName = resultNode["CreatorName"].asString();
	if(!resultNode["TntInstId"].isNull())
		result_.tntInstId = resultNode["TntInstId"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["Type"].isNull())
		result_.type = resultNode["Type"].asString();
	if(!resultNode["Source"].isNull())
		result_.source = resultNode["Source"].asString();
	if(!resultNode["Remark"].isNull())
		result_.remark = resultNode["Remark"].asString();
	if(!resultNode["Async"].isNull())
		result_.async = resultNode["Async"].asString() == "true";
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto modelConfigNode = resultNode["ModelConfig"];
	if(!modelConfigNode["Host"].isNull())
		result_.modelConfig.host = modelConfigNode["Host"].asString();
	if(!modelConfigNode["RequestType"].isNull())
		result_.modelConfig.requestType = modelConfigNode["RequestType"].asString();
	if(!modelConfigNode["ContentType"].isNull())
		result_.modelConfig.contentType = modelConfigNode["ContentType"].asString();
	if(!modelConfigNode["QpsLimit"].isNull())
		result_.modelConfig.qpsLimit = std::stol(modelConfigNode["QpsLimit"].asString());
	if(!modelConfigNode["ServiceCode"].isNull())
		result_.modelConfig.serviceCode = modelConfigNode["ServiceCode"].asString();
	if(!modelConfigNode["AppId"].isNull())
		result_.modelConfig.appId = modelConfigNode["AppId"].asString();
	if(!modelConfigNode["Token"].isNull())
		result_.modelConfig.token = modelConfigNode["Token"].asString();
	if(!modelConfigNode["PaiModelTarget"].isNull())
		result_.modelConfig.paiModelTarget = modelConfigNode["PaiModelTarget"].asString();
	if(!modelConfigNode["UdfContent"].isNull())
		result_.modelConfig.udfContent = modelConfigNode["UdfContent"].asString();
	auto paramConfigNode = resultNode["ParamConfig"];
	auto allPresetParamNode = paramConfigNode["PresetParam"]["PresetParamItem"];
	for (auto paramConfigNodePresetParamPresetParamItem : allPresetParamNode)
	{
		Result::ParamConfig::PresetParamItem presetParamItemObject;
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
		result_.paramConfig.presetParam.push_back(presetParamItemObject);
	}
	auto allPostParamNode = paramConfigNode["PostParam"]["PostParamItem"];
	for (auto paramConfigNodePostParamPostParamItem : allPostParamNode)
	{
		Result::ParamConfig::PostParamItem postParamItemObject;
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
		result_.paramConfig.postParam.push_back(postParamItemObject);
	}
	auto allResponseParamNode = paramConfigNode["ResponseParam"]["ResponseParamItem"];
	for (auto paramConfigNodeResponseParamResponseParamItem : allResponseParamNode)
	{
		Result::ParamConfig::ResponseParamItem responseParamItemObject;
		if(!paramConfigNodeResponseParamResponseParamItem["ResultKey"].isNull())
			responseParamItemObject.resultKey = paramConfigNodeResponseParamResponseParamItem["ResultKey"].asString();
		if(!paramConfigNodeResponseParamResponseParamItem["ResultPath"].isNull())
			responseParamItemObject.resultPath = paramConfigNodeResponseParamResponseParamItem["ResultPath"].asString();
		result_.paramConfig.responseParam.push_back(responseParamItemObject);
	}
	auto modelExtendConfigNode = resultNode["ModelExtendConfig"];
	if(!modelExtendConfigNode["PostUdfModelId"].isNull())
		result_.modelExtendConfig.postUdfModelId = std::stol(modelExtendConfigNode["PostUdfModelId"].asString());
	if(!modelExtendConfigNode["PreUdfModelId"].isNull())
		result_.modelExtendConfig.preUdfModelId = std::stol(modelExtendConfigNode["PreUdfModelId"].asString());
	if(!modelExtendConfigNode["Extra"].isNull())
		result_.modelExtendConfig.extra = modelExtendConfigNode["Extra"].asString();
	auto asyncConfigNode = modelExtendConfigNode["AsyncConfig"];
	if(!asyncConfigNode["ModelId"].isNull())
		result_.modelExtendConfig.asyncConfig.modelId = std::stol(asyncConfigNode["ModelId"].asString());
		auto allAggModelIds = modelExtendConfigNode["AggModelIds"]["AggModelId"];
		for (auto value : allAggModelIds)
			result_.modelExtendConfig.aggModelIds.push_back(value.asString());
	auto creatorNode = resultNode["Creator"];
	if(!creatorNode["UserId"].isNull())
		result_.creator.userId = creatorNode["UserId"].asString();
	if(!creatorNode["UserName"].isNull())
		result_.creator.userName = creatorNode["UserName"].asString();
	if(!creatorNode["AccountType"].isNull())
		result_.creator.accountType = creatorNode["AccountType"].asString();
	if(!creatorNode["AccountNo"].isNull())
		result_.creator.accountNo = creatorNode["AccountNo"].asString();
	if(!creatorNode["Email"].isNull())
		result_.creator.email = creatorNode["Email"].asString();
	if(!creatorNode["PamNo"].isNull())
		result_.creator.pamNo = creatorNode["PamNo"].asString();
	if(!creatorNode["SupplierId"].isNull())
		result_.creator.supplierId = creatorNode["SupplierId"].asString();
	if(!creatorNode["SupplierName"].isNull())
		result_.creator.supplierName = creatorNode["SupplierName"].asString();
	auto modifierNode = resultNode["Modifier"];
	if(!modifierNode["UserId"].isNull())
		result_.modifier.userId = modifierNode["UserId"].asString();
	if(!modifierNode["UserName"].isNull())
		result_.modifier.userName = modifierNode["UserName"].asString();
	if(!modifierNode["AccountType"].isNull())
		result_.modifier.accountType = modifierNode["AccountType"].asString();
	if(!modifierNode["AccountNo"].isNull())
		result_.modifier.accountNo = modifierNode["AccountNo"].asString();
	if(!modifierNode["Email"].isNull())
		result_.modifier.email = modifierNode["Email"].asString();
	if(!modifierNode["PamNo"].isNull())
		result_.modifier.pamNo = modifierNode["PamNo"].asString();
	if(!modifierNode["SupplierId"].isNull())
		result_.modifier.supplierId = modifierNode["SupplierId"].asString();
	if(!modifierNode["SupplierName"].isNull())
		result_.modifier.supplierName = modifierNode["SupplierName"].asString();
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

std::string GetModelByIdResult::getMsg()const
{
	return msg_;
}

long GetModelByIdResult::getRt()const
{
	return rt_;
}

bool GetModelByIdResult::getSucc()const
{
	return succ_;
}

std::string GetModelByIdResult::getHost()const
{
	return host_;
}

std::string GetModelByIdResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetModelByIdResult::getErrInfo()const
{
	return errInfo_;
}

int GetModelByIdResult::getCode()const
{
	return code_;
}

GetModelByIdResult::Result GetModelByIdResult::getResult()const
{
	return result_;
}

