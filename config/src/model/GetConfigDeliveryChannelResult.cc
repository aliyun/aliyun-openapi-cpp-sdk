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

#include <alibabacloud/config/model/GetConfigDeliveryChannelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetConfigDeliveryChannelResult::GetConfigDeliveryChannelResult() :
	ServiceResult()
{}

GetConfigDeliveryChannelResult::GetConfigDeliveryChannelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConfigDeliveryChannelResult::~GetConfigDeliveryChannelResult()
{}

void GetConfigDeliveryChannelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deliveryChannelNode = value["DeliveryChannel"];
	if(!deliveryChannelNode["Status"].isNull())
		deliveryChannel_.status = std::stoi(deliveryChannelNode["Status"].asString());
	if(!deliveryChannelNode["DeliveryChannelId"].isNull())
		deliveryChannel_.deliveryChannelId = deliveryChannelNode["DeliveryChannelId"].asString();
	if(!deliveryChannelNode["DeliveryChannelName"].isNull())
		deliveryChannel_.deliveryChannelName = deliveryChannelNode["DeliveryChannelName"].asString();
	if(!deliveryChannelNode["DeliveryChannelType"].isNull())
		deliveryChannel_.deliveryChannelType = deliveryChannelNode["DeliveryChannelType"].asString();
	if(!deliveryChannelNode["DeliveryChannelTargetArn"].isNull())
		deliveryChannel_.deliveryChannelTargetArn = deliveryChannelNode["DeliveryChannelTargetArn"].asString();
	if(!deliveryChannelNode["DeliveryChannelAssumeRoleArn"].isNull())
		deliveryChannel_.deliveryChannelAssumeRoleArn = deliveryChannelNode["DeliveryChannelAssumeRoleArn"].asString();
	if(!deliveryChannelNode["DeliveryChannelCondition"].isNull())
		deliveryChannel_.deliveryChannelCondition = deliveryChannelNode["DeliveryChannelCondition"].asString();
	if(!deliveryChannelNode["OversizedDataOSSTargetArn"].isNull())
		deliveryChannel_.oversizedDataOSSTargetArn = deliveryChannelNode["OversizedDataOSSTargetArn"].asString();
	if(!deliveryChannelNode["Description"].isNull())
		deliveryChannel_.description = deliveryChannelNode["Description"].asString();
	if(!deliveryChannelNode["ConfigurationSnapshot"].isNull())
		deliveryChannel_.configurationSnapshot = deliveryChannelNode["ConfigurationSnapshot"].asString() == "true";
	if(!deliveryChannelNode["ConfigurationItemChangeNotification"].isNull())
		deliveryChannel_.configurationItemChangeNotification = deliveryChannelNode["ConfigurationItemChangeNotification"].asString() == "true";
	if(!deliveryChannelNode["NonCompliantNotification"].isNull())
		deliveryChannel_.nonCompliantNotification = deliveryChannelNode["NonCompliantNotification"].asString() == "true";
	if(!deliveryChannelNode["AccountId"].isNull())
		deliveryChannel_.accountId = std::stol(deliveryChannelNode["AccountId"].asString());
	if(!deliveryChannelNode["DeliverySnapshotTime"].isNull())
		deliveryChannel_.deliverySnapshotTime = deliveryChannelNode["DeliverySnapshotTime"].asString();

}

GetConfigDeliveryChannelResult::DeliveryChannel GetConfigDeliveryChannelResult::getDeliveryChannel()const
{
	return deliveryChannel_;
}

