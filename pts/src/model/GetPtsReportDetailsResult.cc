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

#include <alibabacloud/pts/model/GetPtsReportDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetPtsReportDetailsResult::GetPtsReportDetailsResult() :
	ServiceResult()
{}

GetPtsReportDetailsResult::GetPtsReportDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPtsReportDetailsResult::~GetPtsReportDetailsResult()
{}

void GetPtsReportDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiMetricsListNode = value["ApiMetricsList"]["ApiMetrics"];
	for (auto valueApiMetricsListApiMetrics : allApiMetricsListNode)
	{
		ApiMetrics apiMetricsListObject;
		if(!valueApiMetricsListApiMetrics["FailCountBiz"].isNull())
			apiMetricsListObject.failCountBiz = std::stol(valueApiMetricsListApiMetrics["FailCountBiz"].asString());
		if(!valueApiMetricsListApiMetrics["Seg75Rt"].isNull())
			apiMetricsListObject.seg75Rt = std::stof(valueApiMetricsListApiMetrics["Seg75Rt"].asString());
		if(!valueApiMetricsListApiMetrics["AllCount"].isNull())
			apiMetricsListObject.allCount = std::stol(valueApiMetricsListApiMetrics["AllCount"].asString());
		if(!valueApiMetricsListApiMetrics["AvgTps"].isNull())
			apiMetricsListObject.avgTps = std::stof(valueApiMetricsListApiMetrics["AvgTps"].asString());
		if(!valueApiMetricsListApiMetrics["MinRt"].isNull())
			apiMetricsListObject.minRt = std::stof(valueApiMetricsListApiMetrics["MinRt"].asString());
		if(!valueApiMetricsListApiMetrics["Seg99Rt"].isNull())
			apiMetricsListObject.seg99Rt = std::stof(valueApiMetricsListApiMetrics["Seg99Rt"].asString());
		if(!valueApiMetricsListApiMetrics["Seg50Rt"].isNull())
			apiMetricsListObject.seg50Rt = std::stof(valueApiMetricsListApiMetrics["Seg50Rt"].asString());
		if(!valueApiMetricsListApiMetrics["MaxRt"].isNull())
			apiMetricsListObject.maxRt = std::stof(valueApiMetricsListApiMetrics["MaxRt"].asString());
		if(!valueApiMetricsListApiMetrics["Seg90Rt"].isNull())
			apiMetricsListObject.seg90Rt = std::stof(valueApiMetricsListApiMetrics["Seg90Rt"].asString());
		if(!valueApiMetricsListApiMetrics["SuccessRateBiz"].isNull())
			apiMetricsListObject.successRateBiz = std::stof(valueApiMetricsListApiMetrics["SuccessRateBiz"].asString());
		if(!valueApiMetricsListApiMetrics["AvgRt"].isNull())
			apiMetricsListObject.avgRt = std::stof(valueApiMetricsListApiMetrics["AvgRt"].asString());
		if(!valueApiMetricsListApiMetrics["FailCountReq"].isNull())
			apiMetricsListObject.failCountReq = std::stol(valueApiMetricsListApiMetrics["FailCountReq"].asString());
		if(!valueApiMetricsListApiMetrics["SuccessRateReq"].isNull())
			apiMetricsListObject.successRateReq = std::stof(valueApiMetricsListApiMetrics["SuccessRateReq"].asString());
		if(!valueApiMetricsListApiMetrics["ApiName"].isNull())
			apiMetricsListObject.apiName = valueApiMetricsListApiMetrics["ApiName"].asString();
		apiMetricsList_.push_back(apiMetricsListObject);
	}
	auto reportOverViewNode = value["ReportOverView"];
	if(!reportOverViewNode["ReportName"].isNull())
		reportOverView_.reportName = reportOverViewNode["ReportName"].asString();
	if(!reportOverViewNode["EndTime"].isNull())
		reportOverView_.endTime = reportOverViewNode["EndTime"].asString();
	if(!reportOverViewNode["StartTime"].isNull())
		reportOverView_.startTime = reportOverViewNode["StartTime"].asString();
	if(!reportOverViewNode["AgentCount"].isNull())
		reportOverView_.agentCount = std::stoi(reportOverViewNode["AgentCount"].asString());
	if(!reportOverViewNode["ReportId"].isNull())
		reportOverView_.reportId = reportOverViewNode["ReportId"].asString();
	if(!reportOverViewNode["Vum"].isNull())
		reportOverView_.vum = std::stol(reportOverViewNode["Vum"].asString());
	auto sceneMetricsNode = value["SceneMetrics"];
	if(!sceneMetricsNode["FailCountBiz"].isNull())
		sceneMetrics_.failCountBiz = std::stol(sceneMetricsNode["FailCountBiz"].asString());
	if(!sceneMetricsNode["AllCount"].isNull())
		sceneMetrics_.allCount = std::stol(sceneMetricsNode["AllCount"].asString());
	if(!sceneMetricsNode["SuccessRateBiz"].isNull())
		sceneMetrics_.successRateBiz = std::stof(sceneMetricsNode["SuccessRateBiz"].asString());
	if(!sceneMetricsNode["AvgRt"].isNull())
		sceneMetrics_.avgRt = std::stof(sceneMetricsNode["AvgRt"].asString());
	if(!sceneMetricsNode["FailCountReq"].isNull())
		sceneMetrics_.failCountReq = std::stol(sceneMetricsNode["FailCountReq"].asString());
	if(!sceneMetricsNode["AvgTps"].isNull())
		sceneMetrics_.avgTps = std::stof(sceneMetricsNode["AvgTps"].asString());
	if(!sceneMetricsNode["Seg99Rt"].isNull())
		sceneMetrics_.seg99Rt = std::stof(sceneMetricsNode["Seg99Rt"].asString());
	if(!sceneMetricsNode["SuccessRateReq"].isNull())
		sceneMetrics_.successRateReq = std::stof(sceneMetricsNode["SuccessRateReq"].asString());
	if(!sceneMetricsNode["Seg90Rt"].isNull())
		sceneMetrics_.seg90Rt = std::stof(sceneMetricsNode["Seg90Rt"].asString());
	auto sceneSnapShotNode = value["SceneSnapShot"];
	if(!sceneSnapShotNode["Status"].isNull())
		sceneSnapShot_.status = sceneSnapShotNode["Status"].asString();
	if(!sceneSnapShotNode["ModifiedTime"].isNull())
		sceneSnapShot_.modifiedTime = sceneSnapShotNode["ModifiedTime"].asString();
	if(!sceneSnapShotNode["CreateTime"].isNull())
		sceneSnapShot_.createTime = sceneSnapShotNode["CreateTime"].asString();
	if(!sceneSnapShotNode["SceneName"].isNull())
		sceneSnapShot_.sceneName = sceneSnapShotNode["SceneName"].asString();
	if(!sceneSnapShotNode["SceneId"].isNull())
		sceneSnapShot_.sceneId = sceneSnapShotNode["SceneId"].asString();
	auto allFileParameterListNode = sceneSnapShotNode["FileParameterList"]["FileParameter"];
	for (auto sceneSnapShotNodeFileParameterListFileParameter : allFileParameterListNode)
	{
		SceneSnapShot::FileParameter fileParameterObject;
		if(!sceneSnapShotNodeFileParameterListFileParameter["FileOssAddress"].isNull())
			fileParameterObject.fileOssAddress = sceneSnapShotNodeFileParameterListFileParameter["FileOssAddress"].asString();
		if(!sceneSnapShotNodeFileParameterListFileParameter["FileName"].isNull())
			fileParameterObject.fileName = sceneSnapShotNodeFileParameterListFileParameter["FileName"].asString();
		sceneSnapShot_.fileParameterList.push_back(fileParameterObject);
	}
	auto allRelationListNode = sceneSnapShotNode["RelationList"]["Relation"];
	for (auto sceneSnapShotNodeRelationListRelation : allRelationListNode)
	{
		SceneSnapShot::Relation relationObject;
		if(!sceneSnapShotNodeRelationListRelation["RelationName"].isNull())
			relationObject.relationName = sceneSnapShotNodeRelationListRelation["RelationName"].asString();
		if(!sceneSnapShotNodeRelationListRelation["RelationId"].isNull())
			relationObject.relationId = sceneSnapShotNodeRelationListRelation["RelationId"].asString();
		auto allFileParameterExplainListNode = sceneSnapShotNodeRelationListRelation["FileParameterExplainList"]["FileParameterExplain"];
		for (auto sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain : allFileParameterExplainListNode)
		{
			SceneSnapShot::Relation::FileParameterExplain fileParameterExplainListObject;
			if(!sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["CycleOnce"].isNull())
				fileParameterExplainListObject.cycleOnce = sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["CycleOnce"].asString() == "true";
			if(!sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileParamName"].isNull())
				fileParameterExplainListObject.fileParamName = sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileParamName"].asString();
			if(!sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileName"].isNull())
				fileParameterExplainListObject.fileName = sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["FileName"].asString();
			if(!sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["BaseFile"].isNull())
				fileParameterExplainListObject.baseFile = sceneSnapShotNodeRelationListRelationFileParameterExplainListFileParameterExplain["BaseFile"].asString() == "true";
			relationObject.fileParameterExplainList.push_back(fileParameterExplainListObject);
		}
		auto allApiListNode = sceneSnapShotNodeRelationListRelation["ApiList"]["Api"];
		for (auto sceneSnapShotNodeRelationListRelationApiListApi : allApiListNode)
		{
			SceneSnapShot::Relation::Api apiListObject;
			if(!sceneSnapShotNodeRelationListRelationApiListApi["ApiId"].isNull())
				apiListObject.apiId = sceneSnapShotNodeRelationListRelationApiListApi["ApiId"].asString();
			if(!sceneSnapShotNodeRelationListRelationApiListApi["TimeoutInSecond"].isNull())
				apiListObject.timeoutInSecond = std::stoi(sceneSnapShotNodeRelationListRelationApiListApi["TimeoutInSecond"].asString());
			if(!sceneSnapShotNodeRelationListRelationApiListApi["Url"].isNull())
				apiListObject.url = sceneSnapShotNodeRelationListRelationApiListApi["Url"].asString();
			if(!sceneSnapShotNodeRelationListRelationApiListApi["Method"].isNull())
				apiListObject.method = sceneSnapShotNodeRelationListRelationApiListApi["Method"].asString();
			if(!sceneSnapShotNodeRelationListRelationApiListApi["RedirectCountLimit"].isNull())
				apiListObject.redirectCountLimit = std::stoi(sceneSnapShotNodeRelationListRelationApiListApi["RedirectCountLimit"].asString());
			if(!sceneSnapShotNodeRelationListRelationApiListApi["ApiName"].isNull())
				apiListObject.apiName = sceneSnapShotNodeRelationListRelationApiListApi["ApiName"].asString();
			auto allCheckPointListNode = sceneSnapShotNodeRelationListRelationApiListApi["CheckPointList"]["CheckPoint"];
			for (auto sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint : allCheckPointListNode)
			{
				SceneSnapShot::Relation::Api::CheckPoint checkPointListObject;
				if(!sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckType"].isNull())
					checkPointListObject.checkType = sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckType"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["Operator"].isNull())
					checkPointListObject._operator = sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["Operator"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["ExpectValue"].isNull())
					checkPointListObject.expectValue = sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["ExpectValue"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckPoint"].isNull())
					checkPointListObject.checkPoint = sceneSnapShotNodeRelationListRelationApiListApiCheckPointListCheckPoint["CheckPoint"].asString();
				apiListObject.checkPointList.push_back(checkPointListObject);
			}
			auto allHeaderListNode = sceneSnapShotNodeRelationListRelationApiListApi["HeaderList"]["Header"];
			for (auto sceneSnapShotNodeRelationListRelationApiListApiHeaderListHeader : allHeaderListNode)
			{
				SceneSnapShot::Relation::Api::Header headerListObject;
				if(!sceneSnapShotNodeRelationListRelationApiListApiHeaderListHeader["HeaderValue"].isNull())
					headerListObject.headerValue = sceneSnapShotNodeRelationListRelationApiListApiHeaderListHeader["HeaderValue"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiHeaderListHeader["HeaderName"].isNull())
					headerListObject.headerName = sceneSnapShotNodeRelationListRelationApiListApiHeaderListHeader["HeaderName"].asString();
				apiListObject.headerList.push_back(headerListObject);
			}
			auto allExportListNode = sceneSnapShotNodeRelationListRelationApiListApi["ExportList"]["Export"];
			for (auto sceneSnapShotNodeRelationListRelationApiListApiExportListExport : allExportListNode)
			{
				SceneSnapShot::Relation::Api::Export exportListObject;
				if(!sceneSnapShotNodeRelationListRelationApiListApiExportListExport["ExportType"].isNull())
					exportListObject.exportType = sceneSnapShotNodeRelationListRelationApiListApiExportListExport["ExportType"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiExportListExport["ExportValue"].isNull())
					exportListObject.exportValue = sceneSnapShotNodeRelationListRelationApiListApiExportListExport["ExportValue"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiExportListExport["ExportName"].isNull())
					exportListObject.exportName = sceneSnapShotNodeRelationListRelationApiListApiExportListExport["ExportName"].asString();
				if(!sceneSnapShotNodeRelationListRelationApiListApiExportListExport["Count"].isNull())
					exportListObject.count = sceneSnapShotNodeRelationListRelationApiListApiExportListExport["Count"].asString();
				apiListObject.exportList.push_back(exportListObject);
			}
			auto bodyNode = value["Body"];
			if(!bodyNode["BodyValue"].isNull())
				apiListObject.body.bodyValue = bodyNode["BodyValue"].asString();
			if(!bodyNode["ContentType"].isNull())
				apiListObject.body.contentType = bodyNode["ContentType"].asString();
			relationObject.apiList.push_back(apiListObject);
		}
		sceneSnapShot_.relationList.push_back(relationObject);
	}
	auto allGlobalParameterListNode = sceneSnapShotNode["GlobalParameterList"]["GlobalParameter"];
	for (auto sceneSnapShotNodeGlobalParameterListGlobalParameter : allGlobalParameterListNode)
	{
		SceneSnapShot::GlobalParameter globalParameterObject;
		if(!sceneSnapShotNodeGlobalParameterListGlobalParameter["ParamName"].isNull())
			globalParameterObject.paramName = sceneSnapShotNodeGlobalParameterListGlobalParameter["ParamName"].asString();
		if(!sceneSnapShotNodeGlobalParameterListGlobalParameter["ParamValue"].isNull())
			globalParameterObject.paramValue = sceneSnapShotNodeGlobalParameterListGlobalParameter["ParamValue"].asString();
		sceneSnapShot_.globalParameterList.push_back(globalParameterObject);
	}
	auto loadConfigNode = sceneSnapShotNode["LoadConfig"];
	if(!loadConfigNode["MaxRunningTime"].isNull())
		sceneSnapShot_.loadConfig.maxRunningTime = std::stoi(loadConfigNode["MaxRunningTime"].asString());
	if(!loadConfigNode["AgentCount"].isNull())
		sceneSnapShot_.loadConfig.agentCount = std::stoi(loadConfigNode["AgentCount"].asString());
	if(!loadConfigNode["TestMode"].isNull())
		sceneSnapShot_.loadConfig.testMode = loadConfigNode["TestMode"].asString();
	auto allApiLoadConfigListNode = loadConfigNode["ApiLoadConfigList"]["ApiLoadConfig"];
	for (auto loadConfigNodeApiLoadConfigListApiLoadConfig : allApiLoadConfigListNode)
	{
		SceneSnapShot::LoadConfig::ApiLoadConfig apiLoadConfigObject;
		if(!loadConfigNodeApiLoadConfigListApiLoadConfig["RpsBegin"].isNull())
			apiLoadConfigObject.rpsBegin = std::stoi(loadConfigNodeApiLoadConfigListApiLoadConfig["RpsBegin"].asString());
		if(!loadConfigNodeApiLoadConfigListApiLoadConfig["RpsLimit"].isNull())
			apiLoadConfigObject.rpsLimit = std::stoi(loadConfigNodeApiLoadConfigListApiLoadConfig["RpsLimit"].asString());
		sceneSnapShot_.loadConfig.apiLoadConfigList.push_back(apiLoadConfigObject);
	}
	auto allRelationLoadConfigListNode = loadConfigNode["RelationLoadConfigList"]["RelationLoadConfig"];
	for (auto loadConfigNodeRelationLoadConfigListRelationLoadConfig : allRelationLoadConfigListNode)
	{
		SceneSnapShot::LoadConfig::RelationLoadConfig relationLoadConfigObject;
		if(!loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyBegin"].isNull())
			relationLoadConfigObject.concurrencyBegin = std::stoi(loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyBegin"].asString());
		if(!loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyLimit"].isNull())
			relationLoadConfigObject.concurrencyLimit = std::stoi(loadConfigNodeRelationLoadConfigListRelationLoadConfig["ConcurrencyLimit"].asString());
		sceneSnapShot_.loadConfig.relationLoadConfigList.push_back(relationLoadConfigObject);
	}
	auto configurationNode = loadConfigNode["Configuration"];
	if(!configurationNode["AllRpsBegin"].isNull())
		sceneSnapShot_.loadConfig.configuration.allRpsBegin = std::stoi(configurationNode["AllRpsBegin"].asString());
	if(!configurationNode["AllConcurrencyBegin"].isNull())
		sceneSnapShot_.loadConfig.configuration.allConcurrencyBegin = std::stoi(configurationNode["AllConcurrencyBegin"].asString());
	if(!configurationNode["AllConcurrencyLimit"].isNull())
		sceneSnapShot_.loadConfig.configuration.allConcurrencyLimit = std::stoi(configurationNode["AllConcurrencyLimit"].asString());
	if(!configurationNode["AllRpsLimit"].isNull())
		sceneSnapShot_.loadConfig.configuration.allRpsLimit = std::stoi(configurationNode["AllRpsLimit"].asString());
	auto advanceSettingNode = sceneSnapShotNode["AdvanceSetting"];
	if(!advanceSettingNode["LogRate"].isNull())
		sceneSnapShot_.advanceSetting.logRate = std::stoi(advanceSettingNode["LogRate"].asString());
	if(!advanceSettingNode["ConnectionTimeoutInSecond"].isNull())
		sceneSnapShot_.advanceSetting.connectionTimeoutInSecond = std::stoi(advanceSettingNode["ConnectionTimeoutInSecond"].asString());
	if(!advanceSettingNode["SuccessCode"].isNull())
		sceneSnapShot_.advanceSetting.successCode = advanceSettingNode["SuccessCode"].asString();
	auto allDomainBindingListNode = advanceSettingNode["DomainBindingList"]["DomainBinding"];
	for (auto advanceSettingNodeDomainBindingListDomainBinding : allDomainBindingListNode)
	{
		SceneSnapShot::AdvanceSetting::DomainBinding domainBindingObject;
		if(!advanceSettingNodeDomainBindingListDomainBinding["Domain"].isNull())
			domainBindingObject.domain = advanceSettingNodeDomainBindingListDomainBinding["Domain"].asString();
		auto allIps = value["Ips"]["String"];
		for (auto value : allIps)
			domainBindingObject.ips.push_back(value.asString());
		sceneSnapShot_.advanceSetting.domainBindingList.push_back(domainBindingObject);
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

GetPtsReportDetailsResult::ReportOverView GetPtsReportDetailsResult::getReportOverView()const
{
	return reportOverView_;
}

GetPtsReportDetailsResult::SceneMetrics GetPtsReportDetailsResult::getSceneMetrics()const
{
	return sceneMetrics_;
}

std::string GetPtsReportDetailsResult::getMessage()const
{
	return message_;
}

std::vector<GetPtsReportDetailsResult::ApiMetrics> GetPtsReportDetailsResult::getApiMetricsList()const
{
	return apiMetricsList_;
}

int GetPtsReportDetailsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetPtsReportDetailsResult::SceneSnapShot GetPtsReportDetailsResult::getSceneSnapShot()const
{
	return sceneSnapShot_;
}

std::string GetPtsReportDetailsResult::getCode()const
{
	return code_;
}

bool GetPtsReportDetailsResult::getSuccess()const
{
	return success_;
}

