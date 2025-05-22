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

#include <alibabacloud/rds/model/DescribeRdsResourceSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRdsResourceSettingsResult::DescribeRdsResourceSettingsResult() :
	ServiceResult()
{}

DescribeRdsResourceSettingsResult::DescribeRdsResourceSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsResourceSettingsResult::~DescribeRdsResourceSettingsResult()
{}

void DescribeRdsResourceSettingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRdsInstanceResourceSettingsNode = value["RdsInstanceResourceSettings"]["RdsInstanceResourceSetting"];
	for (auto valueRdsInstanceResourceSettingsRdsInstanceResourceSetting : allRdsInstanceResourceSettingsNode)
	{
		RdsInstanceResourceSetting rdsInstanceResourceSettingsObject;
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["EndDate"].isNull())
			rdsInstanceResourceSettingsObject.endDate = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["EndDate"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["IsTop"].isNull())
			rdsInstanceResourceSettingsObject.isTop = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["IsTop"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["NoticeBarContent"].isNull())
			rdsInstanceResourceSettingsObject.noticeBarContent = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["NoticeBarContent"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpButtonText"].isNull())
			rdsInstanceResourceSettingsObject.poppedUpButtonText = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpButtonText"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpButtonType"].isNull())
			rdsInstanceResourceSettingsObject.poppedUpButtonType = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpButtonType"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpButtonUrl"].isNull())
			rdsInstanceResourceSettingsObject.poppedUpButtonUrl = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpButtonUrl"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpContent"].isNull())
			rdsInstanceResourceSettingsObject.poppedUpContent = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["PoppedUpContent"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["ResourceNiche"].isNull())
			rdsInstanceResourceSettingsObject.resourceNiche = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["ResourceNiche"].asString();
		if(!valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["StartDate"].isNull())
			rdsInstanceResourceSettingsObject.startDate = valueRdsInstanceResourceSettingsRdsInstanceResourceSetting["StartDate"].asString();
		rdsInstanceResourceSettings_.push_back(rdsInstanceResourceSettingsObject);
	}

}

std::vector<DescribeRdsResourceSettingsResult::RdsInstanceResourceSetting> DescribeRdsResourceSettingsResult::getRdsInstanceResourceSettings()const
{
	return rdsInstanceResourceSettings_;
}

