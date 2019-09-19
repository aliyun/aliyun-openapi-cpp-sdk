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
	auto allConnectionSetNode = dataNode["ConnectionSet"]["ConnectionDo"];
	for (auto dataNodeConnectionSetConnectionDo : allConnectionSetNode)
	{
		Data::ConnectionDo connectionDoObject;
		if(!dataNodeConnectionSetConnectionDo["ClientId"].isNull())
			connectionDoObject.clientId = dataNodeConnectionSetConnectionDo["ClientId"].asString();
		if(!dataNodeConnectionSetConnectionDo["ClientAddr"].isNull())
			connectionDoObject.clientAddr = dataNodeConnectionSetConnectionDo["ClientAddr"].asString();
		if(!dataNodeConnectionSetConnectionDo["Language"].isNull())
			connectionDoObject.language = dataNodeConnectionSetConnectionDo["Language"].asString();
		if(!dataNodeConnectionSetConnectionDo["Version"].isNull())
			connectionDoObject.version = dataNodeConnectionSetConnectionDo["Version"].asString();
		if(!dataNodeConnectionSetConnectionDo["RemoteIP"].isNull())
			connectionDoObject.remoteIP = dataNodeConnectionSetConnectionDo["RemoteIP"].asString();
		data_.connectionSet.push_back(connectionDoObject);
	}
	auto allDetailInTopicListNode = dataNode["DetailInTopicList"]["DetailInTopicDo"];
	for (auto dataNodeDetailInTopicListDetailInTopicDo : allDetailInTopicListNode)
	{
		Data::DetailInTopicDo detailInTopicDoObject;
		if(!dataNodeDetailInTopicListDetailInTopicDo["Topic"].isNull())
			detailInTopicDoObject.topic = dataNodeDetailInTopicListDetailInTopicDo["Topic"].asString();
		if(!dataNodeDetailInTopicListDetailInTopicDo["TotalDiff"].isNull())
			detailInTopicDoObject.totalDiff = std::stol(dataNodeDetailInTopicListDetailInTopicDo["TotalDiff"].asString());
		if(!dataNodeDetailInTopicListDetailInTopicDo["LastTimestamp"].isNull())
			detailInTopicDoObject.lastTimestamp = std::stol(dataNodeDetailInTopicListDetailInTopicDo["LastTimestamp"].asString());
		if(!dataNodeDetailInTopicListDetailInTopicDo["DelayTime"].isNull())
			detailInTopicDoObject.delayTime = std::stol(dataNodeDetailInTopicListDetailInTopicDo["DelayTime"].asString());
		data_.detailInTopicList.push_back(detailInTopicDoObject);
	}
	auto allConsumerConnectionInfoListNode = dataNode["ConsumerConnectionInfoList"]["ConsumerConnectionInfoDo"];
	for (auto dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo : allConsumerConnectionInfoListNode)
	{
		Data::ConsumerConnectionInfoDo consumerConnectionInfoDoObject;
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ClientId"].isNull())
			consumerConnectionInfoDoObject.clientId = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ClientId"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Connection"].isNull())
			consumerConnectionInfoDoObject.connection = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Connection"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Language"].isNull())
			consumerConnectionInfoDoObject.language = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Language"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Version"].isNull())
			consumerConnectionInfoDoObject.version = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["Version"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeModel"].isNull())
			consumerConnectionInfoDoObject.consumeModel = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeModel"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeType"].isNull())
			consumerConnectionInfoDoObject.consumeType = dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ConsumeType"].asString();
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ThreadCount"].isNull())
			consumerConnectionInfoDoObject.threadCount = std::stoi(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["ThreadCount"].asString());
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["StartTimeStamp"].isNull())
			consumerConnectionInfoDoObject.startTimeStamp = std::stol(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["StartTimeStamp"].asString());
		if(!dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["LastTimeStamp"].isNull())
			consumerConnectionInfoDoObject.lastTimeStamp = std::stol(dataNodeConsumerConnectionInfoListConsumerConnectionInfoDo["LastTimeStamp"].asString());
		auto allSubscriptionSetNode = allConsumerConnectionInfoListNode["SubscriptionSet"]["SubscriptionData"];
		for (auto allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData : allSubscriptionSetNode)
		{
			Data::ConsumerConnectionInfoDo::SubscriptionData subscriptionSetObject;
			if(!allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData["Topic"].isNull())
				subscriptionSetObject.topic = allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData["Topic"].asString();
			if(!allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData["SubString"].isNull())
				subscriptionSetObject.subString = allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData["SubString"].asString();
			if(!allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData["SubVersion"].isNull())
				subscriptionSetObject.subVersion = std::stol(allConsumerConnectionInfoListNodeSubscriptionSetSubscriptionData["SubVersion"].asString());
			auto allTagsSet = value["TagsSet"]["Tag"];
			for (auto value : allTagsSet)
				subscriptionSetObject.tagsSet.push_back(value.asString());
			consumerConnectionInfoDoObject.subscriptionSet.push_back(subscriptionSetObject);
		}
		auto allRunningDataListNode = allConsumerConnectionInfoListNode["RunningDataList"]["ConsumerRunningDataDo"];
		for (auto allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo : allRunningDataListNode)
		{
			Data::ConsumerConnectionInfoDo::ConsumerRunningDataDo runningDataListObject;
			if(!allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["GroupId"].isNull())
				runningDataListObject.groupId = allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["GroupId"].asString();
			if(!allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["Topic"].isNull())
				runningDataListObject.topic = allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["Topic"].asString();
			if(!allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["Rt"].isNull())
				runningDataListObject.rt = std::stof(allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["Rt"].asString());
			if(!allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["OkTps"].isNull())
				runningDataListObject.okTps = std::stof(allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["OkTps"].asString());
			if(!allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["FailedTps"].isNull())
				runningDataListObject.failedTps = std::stof(allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["FailedTps"].asString());
			if(!allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["FailedCountPerHour"].isNull())
				runningDataListObject.failedCountPerHour = std::stol(allConsumerConnectionInfoListNodeRunningDataListConsumerRunningDataDo["FailedCountPerHour"].asString());
			consumerConnectionInfoDoObject.runningDataList.push_back(runningDataListObject);
		}
		auto allJstackNode = allConsumerConnectionInfoListNode["Jstack"]["ThreadTrackDo"];
		for (auto allConsumerConnectionInfoListNodeJstackThreadTrackDo : allJstackNode)
		{
			Data::ConsumerConnectionInfoDo::ThreadTrackDo jstackObject;
			if(!allConsumerConnectionInfoListNodeJstackThreadTrackDo["Thread"].isNull())
				jstackObject.thread = allConsumerConnectionInfoListNodeJstackThreadTrackDo["Thread"].asString();
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

