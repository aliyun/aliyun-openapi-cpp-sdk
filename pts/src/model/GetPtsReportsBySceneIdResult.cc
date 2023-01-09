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

#include <alibabacloud/pts/model/GetPtsReportsBySceneIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetPtsReportsBySceneIdResult::GetPtsReportsBySceneIdResult() :
	ServiceResult()
{}

GetPtsReportsBySceneIdResult::GetPtsReportsBySceneIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPtsReportsBySceneIdResult::~GetPtsReportsBySceneIdResult()
{}

void GetPtsReportsBySceneIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReportOverViewListNode = value["ReportOverViewList"]["ReportOverView"];
	for (auto valueReportOverViewListReportOverView : allReportOverViewListNode)
	{
		ReportOverView reportOverViewListObject;
		if(!valueReportOverViewListReportOverView["ReportName"].isNull())
			reportOverViewListObject.reportName = valueReportOverViewListReportOverView["ReportName"].asString();
		if(!valueReportOverViewListReportOverView["EndTime"].isNull())
			reportOverViewListObject.endTime = valueReportOverViewListReportOverView["EndTime"].asString();
		if(!valueReportOverViewListReportOverView["StartTime"].isNull())
			reportOverViewListObject.startTime = valueReportOverViewListReportOverView["StartTime"].asString();
		if(!valueReportOverViewListReportOverView["AgentCount"].isNull())
			reportOverViewListObject.agentCount = std::stoi(valueReportOverViewListReportOverView["AgentCount"].asString());
		if(!valueReportOverViewListReportOverView["ReportId"].isNull())
			reportOverViewListObject.reportId = valueReportOverViewListReportOverView["ReportId"].asString();
		if(!valueReportOverViewListReportOverView["Vum"].isNull())
			reportOverViewListObject.vum = std::stol(valueReportOverViewListReportOverView["Vum"].asString());
		reportOverViewList_.push_back(reportOverViewListObject);
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

std::string GetPtsReportsBySceneIdResult::getMessage()const
{
	return message_;
}

std::vector<GetPtsReportsBySceneIdResult::ReportOverView> GetPtsReportsBySceneIdResult::getReportOverViewList()const
{
	return reportOverViewList_;
}

int GetPtsReportsBySceneIdResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetPtsReportsBySceneIdResult::getCode()const
{
	return code_;
}

bool GetPtsReportsBySceneIdResult::getSuccess()const
{
	return success_;
}

