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

#include <alibabacloud/dataworks-public/model/GetDISyncInstanceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDISyncInstanceInfoResult::GetDISyncInstanceInfoResult() :
	ServiceResult()
{}

GetDISyncInstanceInfoResult::GetDISyncInstanceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDISyncInstanceInfoResult::~GetDISyncInstanceInfoResult()
{}

void GetDISyncInstanceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	auto solutionInfoNode = dataNode["SolutionInfo"];
	if(!solutionInfoNode["Status"].isNull())
		data_.solutionInfo.status = solutionInfoNode["Status"].asString();
	if(!solutionInfoNode["Id"].isNull())
		data_.solutionInfo.id = std::stol(solutionInfoNode["Id"].asString());
	if(!solutionInfoNode["CreatorName"].isNull())
		data_.solutionInfo.creatorName = solutionInfoNode["CreatorName"].asString();
	auto allStepDetailNode = solutionInfoNode["StepDetail"]["StepDetailItem"];
	for (auto solutionInfoNodeStepDetailStepDetailItem : allStepDetailNode)
	{
		Data::SolutionInfo::StepDetailItem stepDetailItemObject;
		if(!solutionInfoNodeStepDetailStepDetailItem["Status"].isNull())
			stepDetailItemObject.status = solutionInfoNodeStepDetailStepDetailItem["Status"].asString();
		if(!solutionInfoNodeStepDetailStepDetailItem["StepId"].isNull())
			stepDetailItemObject.stepId = std::stol(solutionInfoNodeStepDetailStepDetailItem["StepId"].asString());
		if(!solutionInfoNodeStepDetailStepDetailItem["StepName"].isNull())
			stepDetailItemObject.stepName = solutionInfoNodeStepDetailStepDetailItem["StepName"].asString();
		if(!solutionInfoNodeStepDetailStepDetailItem["Info"].isNull())
			stepDetailItemObject.info = solutionInfoNodeStepDetailStepDetailItem["Info"].asString();
		data_.solutionInfo.stepDetail.push_back(stepDetailItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDISyncInstanceInfoResult::Data GetDISyncInstanceInfoResult::getData()const
{
	return data_;
}

bool GetDISyncInstanceInfoResult::getSuccess()const
{
	return success_;
}

