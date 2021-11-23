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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSCONSUMERSTATUSRESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSCONSUMERSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsConsumerStatusResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ConnectionDo
					{
						std::string clientAddr;
						std::string language;
						std::string remoteIP;
						std::string version;
						std::string clientId;
					};
					struct ConsumerConnectionInfoDo
					{
						struct ConsumerRunningDataDo
						{
							float okTps;
							float rt;
							float failedTps;
							std::string topic;
							long failedCountPerHour;
							std::string groupId;
						};
						struct SubscriptionData
						{
							std::string subString;
							std::vector<std::string> tagsSet;
							std::string topic;
							long subVersion;
						};
						struct ThreadTrackDo
						{
							std::vector<std::string> trackList;
							std::string thread;
						};
						long lastTimeStamp;
						std::vector<ConsumerConnectionInfoDo::ConsumerRunningDataDo> runningDataList;
						std::string consumeModel;
						int threadCount;
						std::string language;
						std::string consumeType;
						std::vector<ConsumerConnectionInfoDo::SubscriptionData> subscriptionSet;
						std::string version;
						std::string connection;
						std::string clientId;
						long startTimeStamp;
						std::vector<ConsumerConnectionInfoDo::ThreadTrackDo> jstack;
					};
					struct DetailInTopicDo
					{
						long lastTimestamp;
						long totalDiff;
						long delayTime;
						std::string topic;
					};
					std::vector<ConsumerConnectionInfoDo> consumerConnectionInfoList;
					std::string consumeModel;
					float consumeTps;
					long lastTimestamp;
					std::string instanceId;
					bool subscriptionSame;
					bool rebalanceOK;
					long totalDiff;
					std::vector<ConnectionDo> connectionSet;
					long delayTime;
					bool online;
					std::vector<DetailInTopicDo> detailInTopicList;
				};


				OnsConsumerStatusResult();
				explicit OnsConsumerStatusResult(const std::string &payload);
				~OnsConsumerStatusResult();
				Data getData()const;
				std::string getHelpUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string helpUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSCONSUMERSTATUSRESULT_H_