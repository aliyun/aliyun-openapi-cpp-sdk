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

#include <alibabacloud/cbn/model/DescribeCenVpcFlowStatisticSwitchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenVpcFlowStatisticSwitchResult::DescribeCenVpcFlowStatisticSwitchResult() :
	ServiceResult()
{}

DescribeCenVpcFlowStatisticSwitchResult::DescribeCenVpcFlowStatisticSwitchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenVpcFlowStatisticSwitchResult::~DescribeCenVpcFlowStatisticSwitchResult()
{}

void DescribeCenVpcFlowStatisticSwitchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InvalidDate"].isNull())
		invalidDate_ = value["InvalidDate"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["CenId"].isNull())
		cenId_ = value["CenId"].asString();

}

std::string DescribeCenVpcFlowStatisticSwitchResult::getState()const
{
	return state_;
}

std::string DescribeCenVpcFlowStatisticSwitchResult::getInvalidDate()const
{
	return invalidDate_;
}

std::string DescribeCenVpcFlowStatisticSwitchResult::getCenId()const
{
	return cenId_;
}

std::string DescribeCenVpcFlowStatisticSwitchResult::getRegionId()const
{
	return regionId_;
}

