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

#include <alibabacloud/ltl/model/DescribeMPCoSResourceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

DescribeMPCoSResourceInfoResult::DescribeMPCoSResourceInfoResult() :
	ServiceResult()
{}

DescribeMPCoSResourceInfoResult::DescribeMPCoSResourceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMPCoSResourceInfoResult::~DescribeMPCoSResourceInfoResult()
{}

void DescribeMPCoSResourceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PhaseGroupQuota"].isNull())
		data_.phaseGroupQuota = std::stol(dataNode["PhaseGroupQuota"].asString());
	if(!dataNode["MemberQuota"].isNull())
		data_.memberQuota = std::stol(dataNode["MemberQuota"].asString());
	if(!dataNode["UsedMember"].isNull())
		data_.usedMember = std::stol(dataNode["UsedMember"].asString());
	if(!dataNode["UsedPhaseGroup"].isNull())
		data_.usedPhaseGroup = std::stol(dataNode["UsedPhaseGroup"].asString());
	auto allPhaseQuotaInfoListNode = dataNode["PhaseQuotaInfoList"]["PhaseQuotaInfo"];
	for (auto dataNodePhaseQuotaInfoListPhaseQuotaInfo : allPhaseQuotaInfoListNode)
	{
		Data::PhaseQuotaInfo phaseQuotaInfoObject;
		if(!dataNodePhaseQuotaInfoListPhaseQuotaInfo["PhaseGroupId"].isNull())
			phaseQuotaInfoObject.phaseGroupId = dataNodePhaseQuotaInfoListPhaseQuotaInfo["PhaseGroupId"].asString();
		if(!dataNodePhaseQuotaInfoListPhaseQuotaInfo["PhaseGroupName"].isNull())
			phaseQuotaInfoObject.phaseGroupName = dataNodePhaseQuotaInfoListPhaseQuotaInfo["PhaseGroupName"].asString();
		if(!dataNodePhaseQuotaInfoListPhaseQuotaInfo["PhaseQuota"].isNull())
			phaseQuotaInfoObject.phaseQuota = std::stol(dataNodePhaseQuotaInfoListPhaseQuotaInfo["PhaseQuota"].asString());
		if(!dataNodePhaseQuotaInfoListPhaseQuotaInfo["UsedPhase"].isNull())
			phaseQuotaInfoObject.usedPhase = std::stol(dataNodePhaseQuotaInfoListPhaseQuotaInfo["UsedPhase"].asString());
		data_.phaseQuotaInfoList.push_back(phaseQuotaInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMPCoSResourceInfoResult::getMessage()const
{
	return message_;
}

DescribeMPCoSResourceInfoResult::Data DescribeMPCoSResourceInfoResult::getData()const
{
	return data_;
}

int DescribeMPCoSResourceInfoResult::getCode()const
{
	return code_;
}

bool DescribeMPCoSResourceInfoResult::getSuccess()const
{
	return success_;
}

