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

#include <alibabacloud/ltl/model/DescribeMPCoSAuthorizedInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

DescribeMPCoSAuthorizedInfoResult::DescribeMPCoSAuthorizedInfoResult() :
	ServiceResult()
{}

DescribeMPCoSAuthorizedInfoResult::DescribeMPCoSAuthorizedInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMPCoSAuthorizedInfoResult::~DescribeMPCoSAuthorizedInfoResult()
{}

void DescribeMPCoSAuthorizedInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allAuthorizedPhaseListNode = dataNode["AuthorizedPhaseList"]["AuthorizedPhase"];
	for (auto dataNodeAuthorizedPhaseListAuthorizedPhase : allAuthorizedPhaseListNode)
	{
		Data::AuthorizedPhase authorizedPhaseObject;
		if(!dataNodeAuthorizedPhaseListAuthorizedPhase["PhaseName"].isNull())
			authorizedPhaseObject.phaseName = dataNodeAuthorizedPhaseListAuthorizedPhase["PhaseName"].asString();
		if(!dataNodeAuthorizedPhaseListAuthorizedPhase["PhaseId"].isNull())
			authorizedPhaseObject.phaseId = dataNodeAuthorizedPhaseListAuthorizedPhase["PhaseId"].asString();
		data_.authorizedPhaseList.push_back(authorizedPhaseObject);
	}
	auto allUnAuthorizedPhaseListNode = dataNode["UnAuthorizedPhaseList"]["UnAuthorizedPhase"];
	for (auto dataNodeUnAuthorizedPhaseListUnAuthorizedPhase : allUnAuthorizedPhaseListNode)
	{
		Data::UnAuthorizedPhase unAuthorizedPhaseObject;
		if(!dataNodeUnAuthorizedPhaseListUnAuthorizedPhase["PhaseName"].isNull())
			unAuthorizedPhaseObject.phaseName = dataNodeUnAuthorizedPhaseListUnAuthorizedPhase["PhaseName"].asString();
		if(!dataNodeUnAuthorizedPhaseListUnAuthorizedPhase["PhaseId"].isNull())
			unAuthorizedPhaseObject.phaseId = dataNodeUnAuthorizedPhaseListUnAuthorizedPhase["PhaseId"].asString();
		data_.unAuthorizedPhaseList.push_back(unAuthorizedPhaseObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMPCoSAuthorizedInfoResult::getMessage()const
{
	return message_;
}

DescribeMPCoSAuthorizedInfoResult::Data DescribeMPCoSAuthorizedInfoResult::getData()const
{
	return data_;
}

int DescribeMPCoSAuthorizedInfoResult::getCode()const
{
	return code_;
}

bool DescribeMPCoSAuthorizedInfoResult::getSuccess()const
{
	return success_;
}

