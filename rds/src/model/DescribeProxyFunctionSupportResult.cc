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

#include <alibabacloud/rds/model/DescribeProxyFunctionSupportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeProxyFunctionSupportResult::DescribeProxyFunctionSupportResult() :
	ServiceResult()
{}

DescribeProxyFunctionSupportResult::DescribeProxyFunctionSupportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProxyFunctionSupportResult::~DescribeProxyFunctionSupportResult()
{}

void DescribeProxyFunctionSupportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IsProxySwitchEnable"].isNull())
		isProxySwitchEnable_ = value["IsProxySwitchEnable"].asString() == "true";
	if(!value["IsRwsplitEnable"].isNull())
		isRwsplitEnable_ = value["IsRwsplitEnable"].asString() == "true";
	if(!value["IsRwsplitSupportReplicationLag"].isNull())
		isRwsplitSupportReplicationLag_ = value["IsRwsplitSupportReplicationLag"].asString() == "true";
	if(!value["IsRwsplitSupportWeight"].isNull())
		isRwsplitSupportWeight_ = value["IsRwsplitSupportWeight"].asString() == "true";
	if(!value["IsTransparentSwitchEnable"].isNull())
		isTransparentSwitchEnable_ = value["IsTransparentSwitchEnable"].asString() == "true";
	if(!value["IsShortConnectionOptimizeEnable"].isNull())
		isShortConnectionOptimizeEnable_ = value["IsShortConnectionOptimizeEnable"].asString() == "true";
	if(!value["IsAntiBruteFroceEnable"].isNull())
		isAntiBruteFroceEnable_ = value["IsAntiBruteFroceEnable"].asString() == "true";

}

bool DescribeProxyFunctionSupportResult::getIsRwsplitSupportReplicationLag()const
{
	return isRwsplitSupportReplicationLag_;
}

bool DescribeProxyFunctionSupportResult::getIsAntiBruteFroceEnable()const
{
	return isAntiBruteFroceEnable_;
}

bool DescribeProxyFunctionSupportResult::getIsRwsplitSupportWeight()const
{
	return isRwsplitSupportWeight_;
}

bool DescribeProxyFunctionSupportResult::getIsTransparentSwitchEnable()const
{
	return isTransparentSwitchEnable_;
}

bool DescribeProxyFunctionSupportResult::getIsProxySwitchEnable()const
{
	return isProxySwitchEnable_;
}

bool DescribeProxyFunctionSupportResult::getIsRwsplitEnable()const
{
	return isRwsplitEnable_;
}

bool DescribeProxyFunctionSupportResult::getIsShortConnectionOptimizeEnable()const
{
	return isShortConnectionOptimizeEnable_;
}

