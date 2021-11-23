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
	if(!dataNode["ConsumeTps"].isNull())
		data_.consumeTps = std::stof(dataNode["ConsumeTps"].asString());
	if(!dataNode["ConsumeModel"].isNull())
		data_.consumeModel = dataNode["ConsumeModel"].asString();
	if(!dataNode["TotalDiff"].isNull())
		data_.totalDiff = std::stol(dataNode["TotalDiff"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["SubscriptionSame"].isNull())
		data_.subscriptionSame = dataNode["SubscriptionSame"].asString() == "true";
	if(!dataNode["DelayTime"].isNull())
		data_.delayTime = std::stol(dataNode["DelayTime"].asString());
	if(!dataNode["LastTimestamp"].isNull())
		data_.lastTimestamp = std::stol(dataNode["LastTimestamp"].asString());
	if(!dataNode["Online"].isNull())
		data_.online = dataNode["Online"].asString() == "true";
	if(!dataNode["RebalanceOK"].isNull())
		data_.rebalanceOK = dataNode["RebalanceOK"].asString() == "true";
	auto allConnectionSetNode = dataNode["ConnectionSet"]["ConnectionDo"];
	for (auto dataNodeConnectionSetConnectionDo : allConnectionSetNode)
	{
		Data::ConnectionDo connectionDoObject;
		if(!dataNodeConnectionSetConnectionDo["RemoteIP"].isNull())
			connectionDoObject.remoteIP = dataNodeConnectionSetConnectionDo["RemoteIP"].asString();
		if(!dataNodeConnectionSetConnectionDo["Version"].isNull())
			connectionDoObject.version = dataNodeConnectionSetConnectionDo["Version"].asString();
		if(!dataNodeConnectionSetConnectionDo["ClientAddr"].isNull())
			connectionDoObject.clientAddr = dataNodeConnectionSetConnectionDo["ClientAddr"].asString();
		if(!dataNodeConnectionSetConnectionDo["Language"].isNull())
			connectionDoObject.language = dataNodeConnectionSetConnectionDo["Language"].asString();
		if(!dataNodeConnectionSetConnectionDo["ClientId"].isNull())
			connectionDoObject.clientId = dataNodeConnectionSetConnectionDo["ClientId"].asString();
		data_.connectionSet.push_back(connectionDoObject);
	}
	auto allConsumerConnectionInfoListNode = dataNode["ConsumerConnectionInfoList"]["ConsumerConnectionInfoDo"];
	for (auto dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo : allConsumerConnectionInfoListNode)
	{
		Data::ConsumerConnectionInfoDo consumerConnectionInfoDoObject;
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeModel"].isNull())
			consumerConnectionInfoDoObject.consumeModel = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeModel"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["LastTimeStamp"].isNull())
			consumerConnectionInfoDoObject.lastTimeStamp = std::stol(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["LastTimeStamp"].asString());
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["StartTimeStamp"].isNull())
			consumerConnectionInfoDoObject.startTimeStamp = std::stol(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["StartTimeStamp"].asString());
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Language"].isNull())
			consumerConnectionInfoDoObject.language = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Language"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ClientId"].isNull())
			consumerConnectionInfoDoObject.clientId = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ClientId"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Connection"].isNull())
			consumerConnectionInfoDoObject.connection = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Connection"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Version"].isNull())
			consumerConnectionInfoDoObject.version = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Version"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeType"].isNull())
			consumerConnectionInfoDoObject.consumeType = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeType"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ThreadCount"].isNull())
			consumerConnectionInfoDoObject.threadCount = std::stoi(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ThreadCount"].asString());
		auto allRunningDataListNode = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["RunningDataList"]["ConsumerRunningDataDo"];
		for (auto dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo : allRunningDataListNode)
		{
			Data::ConsumerConnectionInfoDo::ConsumerRunningDataDo runningDataListObject;
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["GroupId"].isNull())
				runningDataListObject.groupId = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["GroupId"].asString();
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["Rt"].isNull())
				runningDataListObject.rt = std::stof(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["Rt"].asString());
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["Topic"].isNull())
				runningDataListObject.topic = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["Topic"].asString();
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["FailedCountPerHour"].isNull())
				runningDataListObject.failedCountPerHour = std::stol(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["FailedCountPerHour"].asString());
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["OkTps"].isNull())
				runningDataListObject.okTps = std::stof(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["OkTps"].asString());
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["FailedTps"].isNull())
				runningDataListObject.failedTps = std::stof(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo["FailedTps"].asString());
			consumerConnectionInfoDoObject.runningDataList.push_back(runningDataListObject);
		}
		auto allSubscriptionSetNode = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["SubscriptionSet"]["SubscriptionData"];
		for (auto dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData : allSubscriptionSetNode)
		{
			Data::ConsumerConnectionInfoDo::SubscriptionData subscriptionSetObject;
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData["SubString"].isNull())
				subscriptionSetObject.subString = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData["SubString"].asString();
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData["SubVersion"].isNull())
				subscriptionSetObject.subVersion = std::stol(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData["SubVersion"].asString());
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData["Topic"].isNull())
				subscriptionSetObject.topic = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData["Topic"].asString();
			auto allTagsSet = value["TagsSet"]["Tag"];
			for (auto value : allTagsSet)
				subscriptionSetObject.tagsSet.push_back(value.asString());
			consumerConnectionInfoDoObject.subscriptionSet.push_back(subscriptionSetObject);
		}
		auto allJstackNode = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Jstack"]["ThreadTrackDo"];
		for (auto dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo : allJstackNode)
		{
			Data::ConsumerConnectionInfoDo::ThreadTrackDo jstackObject;
			if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo["Thread"].isNull())
				jstackObject.thread = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo["Thread"].asString();
			auto allTrackList = value["TrackList"]["Track"];
			for (auto value : allTrackList)
				jstackObject.trackList.push_back(value.asString());
			consumerConnectionInfoDoObject.jstack.push_back(jstackObject);
		}
		data_.consumerConnectionInfoList.push_back(consumerConnectionInfoDoObject);
	}
	auto allDetailInTopicListNode = dataNode["DetailInTopicList"]["DetailInTopicDo"];
	for (auto dataNodeDetailInTopicListDetailInTopicDo : allDetailInTopicListNode)
	{
		Data::DetailInTopicDo detailInTopicDoObject;
		if(!dataNodeDetailInTopicListDetailInTopicDo["DelayTime"].isNull())
			detailInTopicDoObject.delayTime = std::stol(dataNodeDetailInTopicListDetailInTopicDo["DelayTime"].asString());
		if(!dataNodeDetailInTopicListDetailInTopicDo["TotalDiff"].isNull())
			detailInTopicDoObject.totalDiff = std::stol(dataNodeDetailInTopicListDetailInTopicDo["TotalDiff"].asString());
		if(!dataNodeDetailInTopicListDetailInTopicDo["LastTimestamp"].isNull())
			detailInTopicDoObject.lastTimestamp = std::stol(dataNodeDetailInTopicListDetailInTopicDo["LastTimestamp"].asString());
		if(!dataNodeDetailInTopicListDetailInTopicDo["Topic"].isNull())
			detailInTopicDoObject.topic = dataNodeDetailInTopicListDetailInTopicDo["Topic"].asString();
		data_.detailInTopicList.push_back(detailInTopicDoObject);
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

