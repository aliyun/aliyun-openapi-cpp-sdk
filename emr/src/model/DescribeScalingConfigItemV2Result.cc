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

#include <alibabacloud/emr/model/DescribeScalingConfigItemV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingConfigItemV2Result::DescribeScalingConfigItemV2Result() :
	ServiceResult()
{}

DescribeScalingConfigItemV2Result::DescribeScalingConfigItemV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingConfigItemV2Result::~DescribeScalingConfigItemV2Result()
{}

void DescribeScalingConfigItemV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ConfigItemType"].isNull())
		configItemType_ = value["ConfigItemType"].asString();
	if(!value["ScalingGroupBizId"].isNull())
		scalingGroupBizId_ = value["ScalingGroupBizId"].asString();
	if(!value["ScalingConfigItemBizId"].isNull())
		scalingConfigItemBizId_ = value["ScalingConfigItemBizId"].asString();
	if(!value["ConfigItemInformation"].isNull())
		configItemInformation_ = value["ConfigItemInformation"].asString();

}

std::string DescribeScalingConfigItemV2Result::getScalingConfigItemBizId()const
{
	return scalingConfigItemBizId_;
}

std::string DescribeScalingConfigItemV2Result::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

std::string DescribeScalingConfigItemV2Result::getConfigItemInformation()const
{
	return configItemInformation_;
}

std::string DescribeScalingConfigItemV2Result::getConfigItemType()const
{
	return configItemType_;
}

