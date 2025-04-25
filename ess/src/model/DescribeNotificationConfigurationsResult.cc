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

#include <alibabacloud/ess/model/DescribeNotificationConfigurationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeNotificationConfigurationsResult::DescribeNotificationConfigurationsResult() :
	ServiceResult()
{}

DescribeNotificationConfigurationsResult::DescribeNotificationConfigurationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNotificationConfigurationsResult::~DescribeNotificationConfigurationsResult()
{}

void DescribeNotificationConfigurationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNotificationConfigurationModelsNode = value["NotificationConfigurationModels"]["NotificationConfigurationModel"];
	for (auto valueNotificationConfigurationModelsNotificationConfigurationModel : allNotificationConfigurationModelsNode)
	{
		NotificationConfigurationModel notificationConfigurationModelsObject;
		if(!valueNotificationConfigurationModelsNotificationConfigurationModel["NotificationArn"].isNull())
			notificationConfigurationModelsObject.notificationArn = valueNotificationConfigurationModelsNotificationConfigurationModel["NotificationArn"].asString();
		if(!valueNotificationConfigurationModelsNotificationConfigurationModel["ScalingGroupId"].isNull())
			notificationConfigurationModelsObject.scalingGroupId = valueNotificationConfigurationModelsNotificationConfigurationModel["ScalingGroupId"].asString();
		if(!valueNotificationConfigurationModelsNotificationConfigurationModel["TimeZone"].isNull())
			notificationConfigurationModelsObject.timeZone = valueNotificationConfigurationModelsNotificationConfigurationModel["TimeZone"].asString();
		auto allNotificationTypes = value["NotificationTypes"]["NotificationType"];
		for (auto value : allNotificationTypes)
			notificationConfigurationModelsObject.notificationTypes.push_back(value.asString());
		notificationConfigurationModels_.push_back(notificationConfigurationModelsObject);
	}

}

std::vector<DescribeNotificationConfigurationsResult::NotificationConfigurationModel> DescribeNotificationConfigurationsResult::getNotificationConfigurationModels()const
{
	return notificationConfigurationModels_;
}

