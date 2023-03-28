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

#include <alibabacloud/pts/model/GetPtsSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetPtsSceneResult::GetPtsSceneResult() :
	ServiceResult()
{}

GetPtsSceneResult::GetPtsSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPtsSceneResult::~GetPtsSceneResult()
{}

void GetPtsSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sceneNode = value["Scene"];
	if(!sceneNode["Status"].isNull())
		scene_.status = sceneNode["Status"].asString();
	if(!sceneNode["ModifiedTime"].isNull())
		scene_.modifiedTime = sceneNode["ModifiedTime"].asString();
	if(!sceneNode["CreateTime"].isNull())
		scene_.createTime = sceneNode["CreateTime"].asString();
	if(!sceneNode["SceneName"].isNull())
		scene_.sceneName = sceneNode["SceneName"].asString();
	if(!sceneNode["SceneId"].isNull())
		scene_.sceneId = sceneNode["SceneId"].asString();
	auto allFileParameterListNode = sceneNode["FileParameterList"]["FileParameter"];
	for (auto sceneNodeFileParameterListFileParameter : allFileParameterListNode)
	{
		Scene::FileParameter fileParameterObject;
		if(!sceneNodeFileParameterListFileParameter["FileOssAddress"].isNull())
			fileParameterObject.fileOssAddress = sceneNodeFileParameterListFileParameter["FileOssAddress"].asString();
		if(!sceneNodeFileParameterListFileParameter["FileName"].isNull())
			fileParameterObject.fileName = sceneNodeFileParameterListFileParameter["FileName"].asString();
		scene_.fileParameterList.push_back(fileParameterObject);
	}
	auto allRelationListNode = sceneNode["RelationList"]["Relation"];
	for (auto sceneNodeRelationListRelation : allRelationListNode)
	{
		Scene::Relation relationObject;
		if(!sceneNodeRelationListRelation["RelationName"].isNull())
			relationObject.relationName = sceneNodeRelationListRelation["RelationName"].asString();
		if(!sceneNodeRelationListRelation["RelationId"].isNull())
			relationObject.relationId = sceneNodeRelationListRelation["RelationId"].asString();
		auto allFileParameterExplainListNode = sceneNodeRelationListRelation["FileParameterExplainList"]["FileParameterExplain"];
		for (auto sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain : allFileParameterExplainListNode)
		{
			Scene::Relation::FileParameterExplain fileParameterExplainListObject;
			if(!sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["CycleOnce"].isNull())
				fileParameterExplainListObject.cycleOnce = sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["CycleOnce"].asString() == "true";
			if(!sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileParamName"].isNull())
				fileParameterExplainListObject.fileParamName = sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileParamName"].asString();
			if(!sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileName"].isNull())
				fileParameterExplainListObject.fileName = sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileName"].asString();
			if(!sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["BaseFile"].isNull())
				fileParameterExplainListObject.baseFile = sceneNodeRelationListRelationFileParameterExplainListFileParameterExplain["BaseFile"].asString() == "true";
			relationObject.fileParameterExplainList.push_back(fileParameterExplainListObject);
		}
		auto allApiListNode = sceneNodeRelationListRelation["ApiList"]["Api"];
		for (auto sceneNodeRelationListRelationApiListApi : allApiListNode)
		{
			Scene::Relation::Api apiListObject;
			if(!sceneNodeRelationListRelationApiListApi["ApiId"].isNull())
				apiListObject.apiId = sceneNodeRelationListRelationApiListApi["ApiId"].asString();
			if(!sceneNodeRelationListRelationApiListApi["TimeoutInSecond"].isNull())
				apiListObject.timeoutInSecond = std::stoi(sceneNodeRelationListRelationApiListApi["TimeoutInSecond"].asString());
			if(!sceneNodeRelationListRelationApiListApi["Url"].isNull())
				apiListObject.url = sceneNodeRelationListRelationApiListApi["Url"].asString();
			if(!sceneNodeRelationListRelationApiListApi["Method"].isNull())
				apiListObject.method = sceneNodeRelationListRelationApiListApi["Method"].asString();
			if(!sceneNodeRelationListRelationApiListApi["RedirectCountLimit"].isNull())
				apiListObject.redirectCountLimit = std::stoi(sceneNodeRelationListRelationApiListApi["RedirectCountLimit"].asString());
			if(!sceneNodeRelationListRelationApiListApi["ApiName"].isNull())
				apiListObject.apiName = sceneNodeRelationListRelationApiListApi["ApiName"].asString();
			auto allCheckPointListNode = sceneNodeRelationListRelationApiListApi["CheckPointList"]["CheckPoint"];
			for (auto sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint : allCheckPointListNode)
			{
				Scene::Relation::Api::CheckPoint checkPointListObject;
				if(!sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckType"].isNull())
					checkPointListObject.checkType = sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckType"].asString();
				if(!sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["Operator"].isNull())
					checkPointListObject._operator = sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["Operator"].asString();
				if(!sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["ExpectValue"].isNull())
					checkPointListObject.expectValue = sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["ExpectValue"].asString();
				if(!sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckPoint"].isNull())
					checkPointListObject.checkPoint = sceneNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckPoint"].asString();
				apiListObject.checkPointList.push_back(checkPointListObject);
			}
			auto allHeaderListNode = sceneNodeRelationListRelationApiListApi["HeaderList"]["Header"];
			for (auto sceneNodeRelationListRelationApiListApiHeaderListHeader : allHeaderListNode)
			{
				Scene::Relation::Api::Header headerListObject;
				if(!sceneNodeRelationListRelationApiListApiHeaderListHeader["HeaderValue"].isNull())
					headerListObject.headerValue = sceneNodeRelationListRelationApiListApiHeaderListHeader["HeaderValue"].asString();
				if(!sceneNodeRelationListRelationApiListApiHeaderListHeader["HeaderName"].isNull())
					headerListObject.headerName = sceneNodeRelationListRelationApiListApiHeaderListHeader["HeaderName"].asString();
				apiListObject.headerList.push_back(headerListObject);
			}
			auto allExportListNode = sceneNodeRelationListRelationApiListApi["ExportList"]["Export"];
			for (auto sceneNodeRelationListRelationApiListApiExportListExport : allExportListNode)
			{
				Scene::Relation::Api::Export exportListObject;
				if(!sceneNodeRelationListRelationApiListApiExportListExport["ExportType"].isNull())
					exportListObject.exportType = sceneNodeRelationListRelationApiListApiExportListExport["ExportType"].asString();
				if(!sceneNodeRelationListRelationApiListApiExportListExport["ExportValue"].isNull())
					exportListObject.exportValue = sceneNodeRelationListRelationApiListApiExportListExport["ExportValue"].asString();
				if(!sceneNodeRelationListRelationApiListApiExportListExport["ExportName"].isNull())
					exportListObject.exportName = sceneNodeRelationListRelationApiListApiExportListExport["ExportName"].asString();
				if(!sceneNodeRelationListRelationApiListApiExportListExport["Count"].isNull())
					exportListObject.count = sceneNodeRelationListRelationApiListApiExportListExport["Count"].asString();
				apiListObject.exportList.push_back(exportListObject);
			}
			auto bodyNode = value["Body"];
			if(!bodyNode["BodyValue"].isNull())
				apiListObject.body.bodyValue = bodyNode["BodyValue"].asString();
			if(!bodyNode["ContentType"].isNull())
				apiListObject.body.contentType = bodyNode["ContentType"].asString();
			relationObject.apiList.push_back(apiListObject);
		}
		scene_.relationList.push_back(relationObject);
	}
	auto allGlobalParameterListNode = sceneNode["GlobalParameterList"]["GlobalParameter"];
	for (auto sceneNodeGlobalParameterListGlobalParameter : allGlobalParameterListNode)
	{
		Scene::GlobalParameter globalParameterObject;
		if(!sceneNodeGlobalParameterListGlobalParameter["ParamName"].isNull())
			globalParameterObject.paramName = sceneNodeGlobalParameterListGlobalParameter["ParamName"].asString();
		if(!sceneNodeGlobalParameterListGlobalParameter["ParamValue"].isNull())
			globalParameterObject.paramValue = sceneNodeGlobalParameterListGlobalParameter["ParamValue"].asString();
		scene_.globalParameterList.push_back(globalParameterObject);
	}
	auto allHeadersNode = sceneNode["Headers"]["Header"];
	for (auto sceneNodeHeadersHeader : allHeadersNode)
	{
		Scene::Header1 header1Object;
		if(!sceneNodeHeadersHeader["Name"].isNull())
			header1Object.name = sceneNodeHeadersHeader["Name"].asString();
		if(!sceneNodeHeadersHeader["Value"].isNull())
			header1Object.value = sceneNodeHeadersHeader["Value"].asString();
		scene_.headers.push_back(header1Object);
	}
	auto loadConfigNode = sceneNode["LoadConfig"];
	if(!loadConfigNode["MaxRunningTime"].isNull())
		scene_.loadConfig.maxRunningTime = std::stoi(loadConfigNode["MaxRunningTime"].asString());
	if(!loadConfigNode["AgentCount"].isNull())
		scene_.loadConfig.agentCount = std::stoi(loadConfigNode["AgentCount"].asString());
	if(!loadConfigNode["TestMode"].isNull())
		scene_.loadConfig.testMode = loadConfigNode["TestMode"].asString();
	if(!loadConfigNode["AutoStep"].isNull())
		scene_.loadConfig.autoStep = loadConfigNode["AutoStep"].asString() == "true";
	if(!loadConfigNode["Increment"].isNull())
		scene_.loadConfig.increment = std::stoi(loadConfigNode["Increment"].asString());
	if(!loadConfigNode["KeepTime"].isNull())
		scene_.loadConfig.keepTime = std::stoi(loadConfigNode["KeepTime"].asString());
	auto allApiLoadConfigListNode = loadConfigNode["ApiLoadConfigList"]["ApiLoadConfig"];
	for (auto loadConfigNodeApiLoadConfigListApiLoadConfig : allApiLoadConfigListNode)
	{
		Scene::LoadConfig::ApiLoadConfig apiLoadConfigObject;
		if(!loadConfigNodeApiLoadConfigListApiLoadConfig["RpsBegin"].isNull())
			apiLoadConfigObject.rpsBegin = std::stoi(loadConfigNodeApiLoadConfigListApiLoadConfig["RpsBegin"].asString());
		if(!loadConfigNodeApiLoadConfigListApiLoadConfig["RpsLimit"].isNull())
			apiLoadConfigObject.rpsLimit = std::stoi(loadConfigNodeApiLoadConfigListApiLoadConfig["RpsLimit"].asString());
		if(!loadConfigNodeApiLoadConfigListApiLoadConfig["ApiId"].isNull())
			apiLoadConfigObject.apiId = loadConfigNodeApiLoadConfigListApiLoadConfig["ApiId"].asString();
		scene_.loadConfig.apiLoadConfigList.push_back(apiLoadConfigObject);
	}
	auto allRelationLoadConfigListNode = loadConfigNode["RelationLoadConfigList"]["RelationLoadConfig"];
	for (auto loadConfigNodeRelationLoadConfigListRelationLoadConfig : allRelationLoadConfigListNode)
	{
		Scene::LoadConfig::RelationLoadConfig relationLoadConfigObject;
		if(!loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyBegin"].isNull())
			relationLoadConfigObject.concurrencyBegin = std::stoi(loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyBegin"].asString());
		if(!loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyLimit"].isNull())
			relationLoadConfigObject.concurrencyLimit = std::stoi(loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyLimit"].asString());
		if(!loadConfigNodeRelationLoadConfigListRelationLoadConfig["RelationId"].isNull())
			relationLoadConfigObject.relationId = loadConfigNodeRelationLoadConfigListRelationLoadConfig["RelationId"].asString();
		scene_.loadConfig.relationLoadConfigList.push_back(relationLoadConfigObject);
	}
	auto configurationNode = loadConfigNode["Configuration"];
	if(!configurationNode["AllRpsBegin"].isNull())
		scene_.loadConfig.configuration.allRpsBegin = std::stoi(configurationNode["AllRpsBegin"].asString());
	if(!configurationNode["AllConcurrencyBegin"].isNull())
		scene_.loadConfig.configuration.allConcurrencyBegin = std::stoi(configurationNode["AllConcurrencyBegin"].asString());
	if(!configurationNode["AllConcurrencyLimit"].isNull())
		scene_.loadConfig.configuration.allConcurrencyLimit = std::stoi(configurationNode["AllConcurrencyLimit"].asString());
	if(!configurationNode["AllRpsLimit"].isNull())
		scene_.loadConfig.configuration.allRpsLimit = std::stoi(configurationNode["AllRpsLimit"].asString());
	auto vpcLoadConfigNode = loadConfigNode["VpcLoadConfig"];
	if(!vpcLoadConfigNode["VpcId"].isNull())
		scene_.loadConfig.vpcLoadConfig.vpcId = vpcLoadConfigNode["VpcId"].asString();
	if(!vpcLoadConfigNode["VSwitchId"].isNull())
		scene_.loadConfig.vpcLoadConfig.vSwitchId = vpcLoadConfigNode["VSwitchId"].asString();
	if(!vpcLoadConfigNode["SecurityGroupId"].isNull())
		scene_.loadConfig.vpcLoadConfig.securityGroupId = vpcLoadConfigNode["SecurityGroupId"].asString();
	if(!vpcLoadConfigNode["RegionId"].isNull())
		scene_.loadConfig.vpcLoadConfig.regionId = vpcLoadConfigNode["RegionId"].asString();
	auto advanceSettingNode = sceneNode["AdvanceSetting"];
	if(!advanceSettingNode["LogRate"].isNull())
		scene_.advanceSetting.logRate = std::stoi(advanceSettingNode["LogRate"].asString());
	if(!advanceSettingNode["ConnectionTimeoutInSecond"].isNull())
		scene_.advanceSetting.connectionTimeoutInSecond = std::stoi(advanceSettingNode["ConnectionTimeoutInSecond"].asString());
	if(!advanceSettingNode["SuccessCode"].isNull())
		scene_.advanceSetting.successCode = advanceSettingNode["SuccessCode"].asString();
	auto allDomainBindingListNode = advanceSettingNode["DomainBindingList"]["DomainBinding"];
	for (auto advanceSettingNodeDomainBindingListDomainBinding : allDomainBindingListNode)
	{
		Scene::AdvanceSetting::DomainBinding domainBindingObject;
		if(!advanceSettingNodeDomainBindingListDomainBinding["Domain"].isNull())
			domainBindingObject.domain = advanceSettingNodeDomainBindingListDomainBinding["Domain"].asString();
		auto allIps = value["Ips"]["String"];
		for (auto value : allIps)
			domainBindingObject.ips.push_back(value.asString());
		scene_.advanceSetting.domainBindingList.push_back(domainBindingObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetPtsSceneResult::getMessage()const
{
	return message_;
}

int GetPtsSceneResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetPtsSceneResult::Scene GetPtsSceneResult::getScene()const
{
	return scene_;
}

std::string GetPtsSceneResult::getCode()const
{
	return code_;
}

bool GetPtsSceneResult::getSuccess()const
{
	return success_;
}

