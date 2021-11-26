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

#include <alibabacloud/qualitycheck/model/GetScoreInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetScoreInfoResult::GetScoreInfoResult() :
	ServiceResult()
{}

GetScoreInfoResult::GetScoreInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetScoreInfoResult::~GetScoreInfoResult()
{}

void GetScoreInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ScorePo"];
	for (auto valueDataScorePo : allDataNode)
	{
		ScorePo dataObject;
		if(!valueDataScorePo["ScoreId"].isNull())
			dataObject.scoreId = std::stoi(valueDataScorePo["ScoreId"].asString());
		if(!valueDataScorePo["ScoreName"].isNull())
			dataObject.scoreName = valueDataScorePo["ScoreName"].asString();
		auto allScoreInfosNode = valueDataScorePo["ScoreInfos"]["ScoreParam"];
		for (auto valueDataScorePoScoreInfosScoreParam : allScoreInfosNode)
		{
			ScorePo::ScoreParam scoreInfosObject;
			if(!valueDataScorePoScoreInfosScoreParam["ScoreSubName"].isNull())
				scoreInfosObject.scoreSubName = valueDataScorePoScoreInfosScoreParam["ScoreSubName"].asString();
			if(!valueDataScorePoScoreInfosScoreParam["ScoreNum"].isNull())
				scoreInfosObject.scoreNum = std::stoi(valueDataScorePoScoreInfosScoreParam["ScoreNum"].asString());
			if(!valueDataScorePoScoreInfosScoreParam["ScoreSubId"].isNull())
				scoreInfosObject.scoreSubId = std::stoi(valueDataScorePoScoreInfosScoreParam["ScoreSubId"].asString());
			if(!valueDataScorePoScoreInfosScoreParam["ScoreType"].isNull())
				scoreInfosObject.scoreType = std::stoi(valueDataScorePoScoreInfosScoreParam["ScoreType"].asString());
			dataObject.scoreInfos.push_back(scoreInfosObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetScoreInfoResult::getMessage()const
{
	return message_;
}

std::vector<GetScoreInfoResult::ScorePo> GetScoreInfoResult::getData()const
{
	return data_;
}

std::string GetScoreInfoResult::getCode()const
{
	return code_;
}

bool GetScoreInfoResult::getSuccess()const
{
	return success_;
}

