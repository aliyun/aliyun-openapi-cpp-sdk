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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTEVENTSTREAMINGSRESULT_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTEVENTSTREAMINGSRESULT_H_

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
			class ALIBABACLOUD_EVENTBRIDGE_EXPORT ListEventStreamingsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct EventStreamingsItem
					{
						struct Source
						{
							struct SourceMNSParameters
							{
								bool isBase64Decode;
								std::string regionId;
								std::string queueName;
							};
							struct SourceRabbitMQParameters
							{
								std::string virtualHostName;
								std::string instanceId;
								std::string regionId;
								std::string queueName;
							};
							struct SourceRocketMQParameters
							{
								std::string instanceId;
								long timestamp;
								std::string offset;
								std::string groupID;
								std::string instancePassword;
								std::string instanceNetwork;
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
							struct SourceKafkaParameters
							{
								std::string offsetReset;
								std::string vpcId;
								std::string instanceId;
								std::string vSwitchIds;
								std::string network;
								std::string securityGroupId;
								std::string regionId;
								std::string topic;
								std::string consumerGroup;
							};
							struct SourceMQTTParameters
							{
								std::string instanceId;
								std::string regionId;
								std::string topic;
							};
							struct SourceDTSParameters
							{
								std::string taskId;
								std::string username;
								std::string initCheckPoint;
								std::string topic;
								std::string brokerUrl;
								std::string sid;
								std::string password;
							};
							struct SourceSLSParameters
							{
								std::string project;
								std::string roleName;
								std::string logStore;
								std::string consumePosition;
								std::string consumerGroup;
							};
							SourceSLSParameters sourceSLSParameters;
							SourceMQTTParameters sourceMQTTParameters;
							SourceRabbitMQParameters sourceRabbitMQParameters;
							SourceMNSParameters sourceMNSParameters;
							SourceKafkaParameters sourceKafkaParameters;
							SourceDTSParameters sourceDTSParameters;
							SourceRocketMQParameters sourceRocketMQParameters;
						};
						struct Sink
						{
							struct SinkMNSParameters
							{
								struct QueueName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Body
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct IsBase64Encode
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								IsBase64Encode isBase64Encode;
								QueueName queueName;
								Body body;
							};
							struct SinkFcParameters
							{
								struct ServiceName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct FunctionName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Concurrency
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Qualifier
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct InvocationType
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Body1
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								FunctionName functionName;
								ServiceName serviceName;
								Concurrency concurrency;
								InvocationType invocationType;
								Body1 body1;
								Qualifier qualifier;
							};
							struct SinkRabbitMQParameters
							{
								struct InstanceId
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct VirtualHostName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct TargetType
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Exchange
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct RoutingKey
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct QueueName2
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Body3
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct MessageId
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Properties
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								Exchange exchange;
								RoutingKey routingKey;
								QueueName2 queueName2;
								VirtualHostName virtualHostName;
								InstanceId instanceId;
								Body3 body3;
								TargetType targetType;
								Properties properties;
								MessageId messageId;
							};
							struct SinkKafkaParameters
							{
								struct InstanceId4
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Topic
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Acks
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Key
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Value
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct SaslUser
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								Acks acks;
								SaslUser saslUser;
								Value value;
								InstanceId4 instanceId4;
								Topic topic;
								Key key;
							};
							struct SinkRocketMQParameters
							{
								struct InstanceId5
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Topic6
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Body7
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Properties8
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Keys
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Tags
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								Topic6 topic6;
								Body7 body7;
								Keys keys;
								Properties8 properties8;
								InstanceId5 instanceId5;
								Tags tags;
							};
							struct SinkSLSParameters
							{
								struct Project
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct LogStore
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Topic9
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Body10
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct RoleName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								Project project;
								RoleName roleName;
								LogStore logStore;
								Body10 body10;
								Topic9 topic9;
							};
							struct SinkFnfParameters
							{
								struct FlowName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct ExecutionName
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct Input
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								struct RoleName11
								{
									std::string _template;
									std::string form;
									std::string value;
								};
								ExecutionName executionName;
								Input input;
								FlowName flowName;
								RoleName11 roleName11;
							};
							SinkMNSParameters sinkMNSParameters;
							SinkFnfParameters sinkFnfParameters;
							SinkRocketMQParameters sinkRocketMQParameters;
							SinkSLSParameters sinkSLSParameters;
							SinkRabbitMQParameters sinkRabbitMQParameters;
							SinkFcParameters sinkFcParameters;
							SinkKafkaParameters sinkKafkaParameters;
						};
						struct RunOptions
						{
							struct RetryStrategy
							{
								std::string pushRetryStrategy;
								float maximumRetryAttempts;
								float maximumEventAgeInSeconds;
							};
							struct DeadLetterQueue
							{
								std::string arn;
							};
							struct BatchWindow
							{
								int countBasedWindow;
								int timeBasedWindow;
							};
							std::string errorsTolerance;
							DeadLetterQueue deadLetterQueue;
							BatchWindow batchWindow;
							int maximumTasks;
							RetryStrategy retryStrategy;
						};
						struct TransformsItem
						{
							std::string arn;
						};
						std::string status;
						std::string filterPattern;
						std::string description;
						Sink sink;
						std::vector<EventStreamingsItem::TransformsItem> transforms;
						std::string tag;
						std::string eventStreamingName;
						Source source;
						RunOptions runOptions;
					};
					std::vector<EventStreamingsItem> eventStreamings;
					std::string nextToken;
					int total;
				};


				ListEventStreamingsResult();
				explicit ListEventStreamingsResult(const std::string &payload);
				~ListEventStreamingsResult();
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
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTEVENTSTREAMINGSRESULT_H_