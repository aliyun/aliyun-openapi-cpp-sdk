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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTUSERDEFINEDEVENTSOURCESRESULT_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTUSERDEFINEDEVENTSOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eventbridge/EventbridgeExport.h>

namespace AlibabaCloud
{
	namespace Eventbridge
	{
		namespace Model
		{
			class ALIBABACLOUD_EVENTBRIDGE_EXPORT ListUserDefinedEventSourcesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct EventSourceListItem
					{
						struct SourceMNSParameters
						{
							bool isBase64Decode;
							std::string regionId;
							std::string queueName;
						};
						struct SourceRocketMQParameters
						{
							std::string instanceId;
							float timestamp;
							std::string offset;
							std::string groupId;
							std::string instanceNetwork;
							std::string instancePassword;
							std::string instanceUsername;
							std::string instanceEndpoint;
							std::string instanceVpcId;
							std::string instanceVSwitchIds;
							std::string instanceSecurityGroupId;
							std::string regionId;
							std::string tag;
							std::string authType;
							std::string topic;
							std::string instanceType;
						};
						struct SourceRabbitMQParameters
						{
							std::string virtualHostName;
							std::string instanceId;
							std::string regionId;
							std::string queueName;
						};
						struct SourceSLSParameters
						{
							std::string project;
							std::string roleName;
							std::string logStore;
							std::string consumePosition;
						};
						struct SourceHttpEventParameters
						{
							std::string type;
							std::string securityConfig;
							std::vector<std::string> ip;
							std::vector<std::string> referer;
							std::vector<std::string> publicWebHookUrl;
							std::vector<std::string> method;
							std::vector<std::string> vpcWebHookUrl;
						};
						struct SourceKafkaParameters
						{
							std::string offsetReset;
							std::string vpcId;
							std::string instanceId;
							int maximumTasks;
							std::string vSwitchIds;
							std::string network;
							std::string securityGroupId;
							std::string regionId;
							std::string topic;
							std::string consumerGroup;
						};
						struct SourceScheduledEventParameters
						{
							std::string timeZone;
							std::string userData;
							std::string schedule;
						};
						std::string status;
						std::string eventBusName;
						std::string description;
						SourceRabbitMQParameters sourceRabbitMQParameters;
						SourceMNSParameters sourceMNSParameters;
						std::string externalSourceType;
						std::string externalSourceConfig;
						SourceHttpEventParameters sourceHttpEventParameters;
						std::string name;
						SourceSLSParameters sourceSLSParameters;
						std::string type;
						float ctime;
						SourceKafkaParameters sourceKafkaParameters;
						SourceScheduledEventParameters sourceScheduledEventParameters;
						SourceRocketMQParameters sourceRocketMQParameters;
						std::string arn;
					};
					std::string nextToken;
					std::vector<EventSourceListItem> eventSourceList;
					int total;
				};


				ListUserDefinedEventSourcesResult();
				explicit ListUserDefinedEventSourcesResult(const std::string &payload);
				~ListUserDefinedEventSourcesResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTUSERDEFINEDEVENTSOURCESRESULT_H_