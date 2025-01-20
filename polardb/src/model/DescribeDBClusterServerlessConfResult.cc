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

#include <alibabacloud/polardb/model/DescribeDBClusterServerlessConfResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterServerlessConfResult::DescribeDBClusterServerlessConfResult() :
	ServiceResult()
{}

DescribeDBClusterServerlessConfResult::DescribeDBClusterServerlessConfResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterServerlessConfResult::~DescribeDBClusterServerlessConfResult()
{}

void DescribeDBClusterServerlessConfResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ScaleMin"].isNull())
		scaleMin_ = value["ScaleMin"].asString();
	if(!value["ScaleMax"].isNull())
		scaleMax_ = value["ScaleMax"].asString();
	if(!value["ScaleRoNumMin"].isNull())
		scaleRoNumMin_ = value["ScaleRoNumMin"].asString();
	if(!value["ScaleRoNumMax"].isNull())
		scaleRoNumMax_ = value["ScaleRoNumMax"].asString();
	if(!value["AllowShutDown"].isNull())
		allowShutDown_ = value["AllowShutDown"].asString();
	if(!value["SecondsUntilAutoPause"].isNull())
		secondsUntilAutoPause_ = value["SecondsUntilAutoPause"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["ScaleApRoNumMin"].isNull())
		scaleApRoNumMin_ = value["ScaleApRoNumMin"].asString();
	if(!value["ScaleApRoNumMax"].isNull())
		scaleApRoNumMax_ = value["ScaleApRoNumMax"].asString();
	if(!value["Switchs"].isNull())
		switchs_ = value["Switchs"].asString();
	if(!value["DBMaxscaleId"].isNull())
		dBMaxscaleId_ = value["DBMaxscaleId"].asString();
	if(!value["ServerlessRuleMode"].isNull())
		serverlessRuleMode_ = value["ServerlessRuleMode"].asString();
	if(!value["ServerlessRuleCpuEnlargeThreshold"].isNull())
		serverlessRuleCpuEnlargeThreshold_ = value["ServerlessRuleCpuEnlargeThreshold"].asString();
	if(!value["ServerlessRuleCpuShrinkThreshold"].isNull())
		serverlessRuleCpuShrinkThreshold_ = value["ServerlessRuleCpuShrinkThreshold"].asString();
	if(!value["TraditionalScaleMaxThreshold"].isNull())
		traditionalScaleMaxThreshold_ = value["TraditionalScaleMaxThreshold"].asString();
	if(!value["AgileScaleMax"].isNull())
		agileScaleMax_ = value["AgileScaleMax"].asString();

}

std::string DescribeDBClusterServerlessConfResult::getDBMaxscaleId()const
{
	return dBMaxscaleId_;
}

std::string DescribeDBClusterServerlessConfResult::getScaleApRoNumMin()const
{
	return scaleApRoNumMin_;
}

std::string DescribeDBClusterServerlessConfResult::getScaleRoNumMax()const
{
	return scaleRoNumMax_;
}

std::string DescribeDBClusterServerlessConfResult::getTraditionalScaleMaxThreshold()const
{
	return traditionalScaleMaxThreshold_;
}

std::string DescribeDBClusterServerlessConfResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterServerlessConfResult::getScaleMax()const
{
	return scaleMax_;
}

std::string DescribeDBClusterServerlessConfResult::getSwitchs()const
{
	return switchs_;
}

std::string DescribeDBClusterServerlessConfResult::getAgileScaleMax()const
{
	return agileScaleMax_;
}

std::string DescribeDBClusterServerlessConfResult::getServerlessRuleCpuShrinkThreshold()const
{
	return serverlessRuleCpuShrinkThreshold_;
}

std::string DescribeDBClusterServerlessConfResult::getScaleRoNumMin()const
{
	return scaleRoNumMin_;
}

std::string DescribeDBClusterServerlessConfResult::getServerlessRuleCpuEnlargeThreshold()const
{
	return serverlessRuleCpuEnlargeThreshold_;
}

std::string DescribeDBClusterServerlessConfResult::getAllowShutDown()const
{
	return allowShutDown_;
}

std::string DescribeDBClusterServerlessConfResult::getScaleApRoNumMax()const
{
	return scaleApRoNumMax_;
}

std::string DescribeDBClusterServerlessConfResult::getScaleMin()const
{
	return scaleMin_;
}

std::string DescribeDBClusterServerlessConfResult::getServerlessRuleMode()const
{
	return serverlessRuleMode_;
}

std::string DescribeDBClusterServerlessConfResult::getSecondsUntilAutoPause()const
{
	return secondsUntilAutoPause_;
}

