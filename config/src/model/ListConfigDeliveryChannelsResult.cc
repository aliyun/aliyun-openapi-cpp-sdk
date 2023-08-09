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

#include <alibabacloud/config/model/ListConfigDeliveryChannelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListConfigDeliveryChannelsResult::ListConfigDeliveryChannelsResult() :
	ServiceResult()
{}

ListConfigDeliveryChannelsResult::ListConfigDeliveryChannelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConfigDeliveryChannelsResult::~ListConfigDeliveryChannelsResult()
{}

void ListConfigDeliveryChannelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeliveryChannelsNode = value["DeliveryChannels"]["DeliveryChannel"];
	for (auto valueDeliveryChannelsDeliveryChannel : allDeliveryChannelsNode)
	{
		DeliveryChannel deliveryChannelsObject;
		if(!valueDeliveryChannelsDeliveryChannel["Status"].isNull())
			deliveryChannelsObject.status = std::stoi(valueDeliveryChannelsDeliveryChannel["Status"].asString());
		if(!valueDeliveryChannelsDeliveryChannel["DeliveryChannelName"].isNull())
			deliveryChannelsObject.deliveryChannelName = valueDeliveryChannelsDeliveryChannel["DeliveryChannelName"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["DeliveryChannelId"].isNull())
			deliveryChannelsObject.deliveryChannelId = valueDeliveryChannelsDeliveryChannel["DeliveryChannelId"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["DeliveryChannelType"].isNull())
			deliveryChannelsObject.deliveryChannelType = valueDeliveryChannelsDeliveryChannel["DeliveryChannelType"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["DeliveryChannelTargetArn"].isNull())
			deliveryChannelsObject.deliveryChannelTargetArn = valueDeliveryChannelsDeliveryChannel["DeliveryChannelTargetArn"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["DeliveryChannelAssumeRoleArn"].isNull())
			deliveryChannelsObject.deliveryChannelAssumeRoleArn = valueDeliveryChannelsDeliveryChannel["DeliveryChannelAssumeRoleArn"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["DeliveryChannelCondition"].isNull())
			deliveryChannelsObject.deliveryChannelCondition = valueDeliveryChannelsDeliveryChannel["DeliveryChannelCondition"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["OversizedDataOSSTargetArn"].isNull())
			deliveryChannelsObject.oversizedDataOSSTargetArn = valueDeliveryChannelsDeliveryChannel["OversizedDataOSSTargetArn"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["Description"].isNull())
			deliveryChannelsObject.description = valueDeliveryChannelsDeliveryChannel["Description"].asString();
		if(!valueDeliveryChannelsDeliveryChannel["ConfigurationSnapshot"].isNull())
			deliveryChannelsObject.configurationSnapshot = valueDeliveryChannelsDeliveryChannel["ConfigurationSnapshot"].asString() == "true";
		if(!valueDeliveryChannelsDeliveryChannel["ConfigurationItemChangeNotification"].isNull())
			deliveryChannelsObject.configurationItemChangeNotification = valueDeliveryChannelsDeliveryChannel["ConfigurationItemChangeNotification"].asString() == "true";
		if(!valueDeliveryChannelsDeliveryChannel["NonCompliantNotification"].isNull())
			deliveryChannelsObject.nonCompliantNotification = valueDeliveryChannelsDeliveryChannel["NonCompliantNotification"].asString() == "true";
		if(!valueDeliveryChannelsDeliveryChannel["AccountId"].isNull())
			deliveryChannelsObject.accountId = std::stol(valueDeliveryChannelsDeliveryChannel["AccountId"].asString());
		if(!valueDeliveryChannelsDeliveryChannel["DeliverySnapshotTime"].isNull())
			deliveryChannelsObject.deliverySnapshotTime = valueDeliveryChannelsDeliveryChannel["DeliverySnapshotTime"].asString();
		deliveryChannels_.push_back(deliveryChannelsObject);
	}

}

std::vector<ListConfigDeliveryChannelsResult::DeliveryChannel> ListConfigDeliveryChannelsResult::getDeliveryChannels()const
{
	return deliveryChannels_;
}

