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

#include <alibabacloud/adb/model/DescribeDiagnosisSQLInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDiagnosisSQLInfoResult::DescribeDiagnosisSQLInfoResult() :
	ServiceResult()
{}

DescribeDiagnosisSQLInfoResult::DescribeDiagnosisSQLInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisSQLInfoResult::~DescribeDiagnosisSQLInfoResult()
{}

void DescribeDiagnosisSQLInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStageInfosNode = value["StageInfos"]["StageInfosItem"];
	for (auto valueStageInfosStageInfosItem : allStageInfosNode)
	{
		StageInfosItem stageInfosObject;
		if(!valueStageInfosStageInfosItem["InputRows"].isNull())
			stageInfosObject.inputRows = std::stol(valueStageInfosStageInfosItem["InputRows"].asString());
		if(!valueStageInfosStageInfosItem["InputDataSize"].isNull())
			stageInfosObject.inputDataSize = std::stol(valueStageInfosStageInfosItem["InputDataSize"].asString());
		if(!valueStageInfosStageInfosItem["OutputRows"].isNull())
			stageInfosObject.outputRows = std::stol(valueStageInfosStageInfosItem["OutputRows"].asString());
		if(!valueStageInfosStageInfosItem["OutputDataSize"].isNull())
			stageInfosObject.outputDataSize = std::stol(valueStageInfosStageInfosItem["OutputDataSize"].asString());
		if(!valueStageInfosStageInfosItem["PeakMemory"].isNull())
			stageInfosObject.peakMemory = std::stol(valueStageInfosStageInfosItem["PeakMemory"].asString());
		if(!valueStageInfosStageInfosItem["OperatorCost"].isNull())
			stageInfosObject.operatorCost = std::stol(valueStageInfosStageInfosItem["OperatorCost"].asString());
		if(!valueStageInfosStageInfosItem["StageId"].isNull())
			stageInfosObject.stageId = valueStageInfosStageInfosItem["StageId"].asString();
		if(!valueStageInfosStageInfosItem["State"].isNull())
			stageInfosObject.state = valueStageInfosStageInfosItem["State"].asString();
		if(!valueStageInfosStageInfosItem["Progress"].isNull())
			stageInfosObject.progress = valueStageInfosStageInfosItem["Progress"].asString();
		stageInfos_.push_back(stageInfosObject);
	}
	if(!value["DiagnosisSQLInfo"].isNull())
		diagnosisSQLInfo_ = value["DiagnosisSQLInfo"].asString();

}

std::vector<DescribeDiagnosisSQLInfoResult::StageInfosItem> DescribeDiagnosisSQLInfoResult::getStageInfos()const
{
	return stageInfos_;
}

std::string DescribeDiagnosisSQLInfoResult::getDiagnosisSQLInfo()const
{
	return diagnosisSQLInfo_;
}

