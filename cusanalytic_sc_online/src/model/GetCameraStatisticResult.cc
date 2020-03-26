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

#include <alibabacloud/cusanalytic_sc_online/model/GetCameraStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetCameraStatisticResult::GetCameraStatisticResult() :
	ServiceResult()
{}

GetCameraStatisticResult::GetCameraStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCameraStatisticResult::~GetCameraStatisticResult()
{}

void GetCameraStatisticResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPvStatisticResultsNode = value["PvStatisticResults"]["PvStatisticResult"];
	for (auto valuePvStatisticResultsPvStatisticResult : allPvStatisticResultsNode)
	{
		PvStatisticResult pvStatisticResultsObject;
		if(!valuePvStatisticResultsPvStatisticResult["ProcessCursor"].isNull())
			pvStatisticResultsObject.processCursor = std::stol(valuePvStatisticResultsPvStatisticResult["ProcessCursor"].asString());
		if(!valuePvStatisticResultsPvStatisticResult["IpcId"].isNull())
			pvStatisticResultsObject.ipcId = std::stol(valuePvStatisticResultsPvStatisticResult["IpcId"].asString());
		if(!valuePvStatisticResultsPvStatisticResult["LocationId"].isNull())
			pvStatisticResultsObject.locationId = std::stol(valuePvStatisticResultsPvStatisticResult["LocationId"].asString());
		if(!valuePvStatisticResultsPvStatisticResult["PvCount"].isNull())
			pvStatisticResultsObject.pvCount = std::stol(valuePvStatisticResultsPvStatisticResult["PvCount"].asString());
		auto allPvRectsNode = allPvStatisticResultsNode["PvRects"]["Rect"];
		for (auto allPvStatisticResultsNodePvRectsRect : allPvRectsNode)
		{
			PvStatisticResult::Rect pvRectsObject;
			if(!allPvStatisticResultsNodePvRectsRect["Right"].isNull())
				pvRectsObject.right = std::stof(allPvStatisticResultsNodePvRectsRect["Right"].asString());
			if(!allPvStatisticResultsNodePvRectsRect["Bottom"].isNull())
				pvRectsObject.bottom = std::stof(allPvStatisticResultsNodePvRectsRect["Bottom"].asString());
			if(!allPvStatisticResultsNodePvRectsRect["Top"].isNull())
				pvRectsObject.top = std::stof(allPvStatisticResultsNodePvRectsRect["Top"].asString());
			if(!allPvStatisticResultsNodePvRectsRect["Left"].isNull())
				pvRectsObject.left = std::stof(allPvStatisticResultsNodePvRectsRect["Left"].asString());
			pvStatisticResultsObject.pvRects.push_back(pvRectsObject);
		}
		pvStatisticResults_.push_back(pvStatisticResultsObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetCameraStatisticResult::PvStatisticResult> GetCameraStatisticResult::getPvStatisticResults()const
{
	return pvStatisticResults_;
}

std::string GetCameraStatisticResult::getErrorMsg()const
{
	return errorMsg_;
}

bool GetCameraStatisticResult::getSuccess()const
{
	return success_;
}

