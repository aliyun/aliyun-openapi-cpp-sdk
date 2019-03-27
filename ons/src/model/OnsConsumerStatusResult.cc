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

#include <alibabacloud/ons/model/OnsConsumerStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsConsumerStatusResult::OnsConsumerStatusResult() :
	ServiceResult()
{}

OnsConsumerStatusResult::OnsConsumerStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsConsumerStatusResult::~OnsConsumerStatusResult()
{}

void OnsConsumerStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Online"].isNull())
		data_.online = dataNode["Online"].asString() == "true";
	if(!dataNode["TotalDiff"].isNull())
		data_.totalDiff = std::stol(dataNode["TotalDiff"].asString());
	if(!dataNode["ConsumeTps"].isNull())
		data_.consumeTps = std::stof(dataNode["ConsumeTps"].asString());
	if(!dataNode["LastTimestamp"].isNull())
		data_.lastTimestamp = std::stol(dataNode["LastTimestamp"].asString());
	if(!dataNode["DelayTime"].isNull())
		data_.delayTime = std::stol(dataNode["DelayTime"].asString());
	if(!dataNode["ConsumeModel"].isNull())
		data_.consumeModel = dataNode["ConsumeModel"].asString();
	if(!dataNode["SubscriptionSame"].isNull())
		data_.subscriptionSame = dataNode["SubscriptionSame"].asString() == "true";
	if(!dataNode["RebalanceOK"].isNull())
		data_.rebalanceOK = dataNode["RebalanceOK"].asString() == "true";
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	auto allConnectionSet = value["ConnectionSet"]["ConnectionDo"];
	for (auto value : allConnectionSet)
	{
		Data::ConnectionDo connectionDoObject;
		if(!value["ClientId"].isNull())
			connectionDoObject.clientId = value["ClientId"].asString();
		if(!value["ClientAddr"].isNull())
			connectionDoObject.clientAddr = value["ClientAddr"].asString();
		if(!value["Language"].isNull())
			connectionDoObject.language = value["Language"].asString();
		if(!value["Version"].isNull())
			connectionDoObject.version = value["Version"].asString();
		data_.connectionSet.push_back(connectionDoObject);
	}
	auto allDetailInTopicList = value["DetailInTopicList"]["DetailInTopicDo"];
	for (auto value : allDetailInTopicList)
	{
		Data::DetailInTopicDo detailInTopicDoObject;
		if(!value["Topic"].isNull())
			detailInTopicDoObject.topic = value["Topic"].asString();
		if(!value["TotalDiff"].isNull())
			detailInTopicDoObject.totalDiff = std::stol(value["TotalDiff"].asString());
		if(!value["LastTimestamp"].isNull())
			detailInTopicDoObject.lastTimestamp = std::stol(value["LastTimestamp"].asString());
		if(!value["DelayTime"].isNull())
			detailInTopicDoObject.delayTime = std::stol(value["DelayTime"].asString());
		data_.detailInTopicList.push_back(detailInTopicDoObject);
	}
	auto allConsumerConnectionInfoList = value["ConsumerConnectionInfoList"]["ConsumerConnectionInfoDo"];
	for (auto value : allConsumerConnectionInfoList)
	{
		Data::ConsumerConnectionInfoDo consumerConnectionInfoDoObject;
		if(!value["ClientId"].isNull())
			consumerConnectionInfoDoObject.clientId = value["ClientId"].asString();
		if(!value["Connection"].isNull())
			consumerConnectionInfoDoObject.connection = value["Connection"].asString();
		if(!value["Language"].isNull())
			consumerConnectionInfoDoObject.language = value["Language"].asString();
		if(!value["Version"].isNull())
			consumerConnectionInfoDoObject.version = value["Version"].asString();
		if(!value["ConsumeModel"].isNull())
			consumerConnectionInfoDoObject.consumeModel = value["ConsumeModel"].asString();
		if(!value["ConsumeType"].isNull())
			consumerConnectionInfoDoObject.consumeType = value["ConsumeType"].asString();
		if(!value["ThreadCount"].isNull())
			consumerConnectionInfoDoObject.threadCount = std::stoi(value["ThreadCount"].asString());
		if(!value["StartTimeStamp"].isNull())
			consumerConnectionInfoDoObject.startTimeStamp = std::stol(value["StartTimeStamp"].asString());
		if(!value["LastTimeStamp"].isNull())
			consumerConnectionInfoDoObject.lastTimeStamp = std::stol(value["LastTimeStamp"].asString());
		auto allSubscriptionSet = value["SubscriptionSet"]["SubscriptionData"];
		for (auto value : allSubscriptionSet)
		{
			Data::ConsumerConnectionInfoDo::SubscriptionData subscriptionSetObject;
			if(!value["Topic"].isNull())
				subscriptionSetObject.topic = value["Topic"].asString();
			if(!value["SubString"].isNull())
				subscriptionSetObject.subString = value["SubString"].asString();
			if(!value["SubVersion"].isNull())
				subscriptionSetObject.subVersion = std::stol(value["SubVersion"].asString());
			auto allTagsSet = value["TagsSet"]["Tag"];
			for (auto value : allTagsSet)
				subscriptionSetObject.tagsSet.push_back(value.asString());
			consumerConnectionInfoDoObject.subscriptionSet.push_back(subscriptionSetObject);
		}
		auto allRunningDataList = value["RunningDataList"]["ConsumerRunningDataDo"];
		for (auto value : allRunningDataList)
		{
			Data::ConsumerConnectionInfoDo::ConsumerRunningDataDo runningDataListObject;
			if(!value["GroupId"].isNull())
				runningDataListObject.groupId = value["GroupId"].asString();
			if(!value["Topic"].isNull())
				runningDataListObject.topic = value["Topic"].asString();
			if(!value["Rt"].isNull())
				runningDataListObject.rt = std::stof(value["Rt"].asString());
			if(!value["OkTps"].isNull())
				runningDataListObject.okTps = std::stof(value["OkTps"].asString());
			if(!value["FailedTps"].isNull())
				runningDataListObject.failedTps = std::stof(value["FailedTps"].asString());
			if(!value["FailedCountPerHour"].isNull())
				runningDataListObject.failedCountPerHour = std::stol(value["FailedCountPerHour"].asString());
			consumerConnectionInfoDoObject.runningDataList.push_back(runningDataListObject);
		}
		auto allJstack = value["Jstack"]["ThreadTrackDo"];
		for (auto value : allJstack)
		{
			Data::ConsumerConnectionInfoDo::ThreadTrackDo jstackObject;
			if(!value["Thread"].isNull())
				jstackObject.thread = value["Thread"].asString();
			auto allTrackList = value["TrackList"]["Track"];
			for (auto value : allTrackList)
				jstackObject.trackList.push_back(value.asString());
			consumerConnectionInfoDoObject.jstack.push_back(jstackObject);
		}
		data_.consumerConnectionInfoList.push_back(consumerConnectionInfoDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsConsumerStatusResult::Data OnsConsumerStatusResult::getData()const
{
	return data_;
}

std::string OnsConsumerStatusResult::getHelpUrl()const
{
	return helpUrl_;
}

