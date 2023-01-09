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

#include <alibabacloud/pts/model/GetPtsSceneBaseLineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetPtsSceneBaseLineResult::GetPtsSceneBaseLineResult() :
	ServiceResult()
{}

GetPtsSceneBaseLineResult::GetPtsSceneBaseLineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPtsSceneBaseLineResult::~GetPtsSceneBaseLineResult()
{}

void GetPtsSceneBaseLineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto baselineNode = value["Baseline"];
	if(!baselineNode["Name"].isNull())
		baseline_.name = baselineNode["Name"].asString();
	auto allApiBaselinesNode = baselineNode["ApiBaselines"]["ChainBaselineData"];
	for (auto baselineNodeApiBaselinesChainBaselineData : allApiBaselinesNode)
	{
		Baseline::ChainBaselineData chainBaselineDataObject;
		if(!baselineNodeApiBaselinesChainBaselineData["FailCountBiz"].isNull())
			chainBaselineDataObject.failCountBiz = std::stol(baselineNodeApiBaselinesChainBaselineData["FailCountBiz"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["AvgTps"].isNull())
			chainBaselineDataObject.avgTps = std::stof(baselineNodeApiBaselinesChainBaselineData["AvgTps"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["MinRt"].isNull())
			chainBaselineDataObject.minRt = std::stoi(baselineNodeApiBaselinesChainBaselineData["MinRt"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["Seg99Rt"].isNull())
			chainBaselineDataObject.seg99Rt = std::stof(baselineNodeApiBaselinesChainBaselineData["Seg99Rt"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["MaxRt"].isNull())
			chainBaselineDataObject.maxRt = std::stoi(baselineNodeApiBaselinesChainBaselineData["MaxRt"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["Seg90Rt"].isNull())
			chainBaselineDataObject.seg90Rt = std::stof(baselineNodeApiBaselinesChainBaselineData["Seg90Rt"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["SuccessRateBiz"].isNull())
			chainBaselineDataObject.successRateBiz = std::stof(baselineNodeApiBaselinesChainBaselineData["SuccessRateBiz"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["AvgRt"].isNull())
			chainBaselineDataObject.avgRt = std::stof(baselineNodeApiBaselinesChainBaselineData["AvgRt"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["FailCountReq"].isNull())
			chainBaselineDataObject.failCountReq = std::stol(baselineNodeApiBaselinesChainBaselineData["FailCountReq"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["Name"].isNull())
			chainBaselineDataObject.name = baselineNodeApiBaselinesChainBaselineData["Name"].asString();
		if(!baselineNodeApiBaselinesChainBaselineData["SuccessRateReq"].isNull())
			chainBaselineDataObject.successRateReq = std::stof(baselineNodeApiBaselinesChainBaselineData["SuccessRateReq"].asString());
		if(!baselineNodeApiBaselinesChainBaselineData["Id"].isNull())
			chainBaselineDataObject.id = std::stol(baselineNodeApiBaselinesChainBaselineData["Id"].asString());
		baseline_.apiBaselines.push_back(chainBaselineDataObject);
	}
	auto sceneBaselineNode = baselineNode["SceneBaseline"];
	if(!sceneBaselineNode["FailCountBiz"].isNull())
		baseline_.sceneBaseline.failCountBiz = std::stol(sceneBaselineNode["FailCountBiz"].asString());
	if(!sceneBaselineNode["SuccessRateBiz"].isNull())
		baseline_.sceneBaseline.successRateBiz = std::stof(sceneBaselineNode["SuccessRateBiz"].asString());
	if(!sceneBaselineNode["AvgRt"].isNull())
		baseline_.sceneBaseline.avgRt = std::stof(sceneBaselineNode["AvgRt"].asString());
	if(!sceneBaselineNode["FailCountReq"].isNull())
		baseline_.sceneBaseline.failCountReq = std::stol(sceneBaselineNode["FailCountReq"].asString());
	if(!sceneBaselineNode["AvgTps"].isNull())
		baseline_.sceneBaseline.avgTps = std::stof(sceneBaselineNode["AvgTps"].asString());
	if(!sceneBaselineNode["Seg99Rt"].isNull())
		baseline_.sceneBaseline.seg99Rt = std::stof(sceneBaselineNode["Seg99Rt"].asString());
	if(!sceneBaselineNode["SuccessRateReq"].isNull())
		baseline_.sceneBaseline.successRateReq = std::stof(sceneBaselineNode["SuccessRateReq"].asString());
	if(!sceneBaselineNode["Seg90Rt"].isNull())
		baseline_.sceneBaseline.seg90Rt = std::stof(sceneBaselineNode["Seg90Rt"].asString());
	if(!value["SceneId"].isNull())
		sceneId_ = value["SceneId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetPtsSceneBaseLineResult::getSceneId()const
{
	return sceneId_;
}

std::string GetPtsSceneBaseLineResult::getMessage()const
{
	return message_;
}

int GetPtsSceneBaseLineResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetPtsSceneBaseLineResult::Baseline GetPtsSceneBaseLineResult::getBaseline()const
{
	return baseline_;
}

std::string GetPtsSceneBaseLineResult::getCode()const
{
	return code_;
}

bool GetPtsSceneBaseLineResult::getSuccess()const
{
	return success_;
}

