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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTSTREAMINGREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTSTREAMINGREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT CreateEventStreamingRequest : public RpcServiceRequest {
public:
	struct Sink {
		struct SinkRabbitMQParameters {
			struct RoutingKey {
				std::string _template;
				std::string form;
				std::string value;
			};
			RoutingKey routingKey;
			struct QueueName {
				std::string _template;
				std::string form;
				std::string value;
			};
			QueueName queueName;
			struct VirtualHostName {
				std::string _template;
				std::string form;
				std::string value;
			};
			VirtualHostName virtualHostName;
			struct InstanceId {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstanceId instanceId;
			struct TargetType {
				std::string _template;
				std::string form;
				std::string value;
			};
			TargetType targetType;
			struct MessageId {
				std::string _template;
				std::string form;
				std::string value;
			};
			MessageId messageId;
			struct Exchange {
				std::string _template;
				std::string form;
				std::string value;
			};
			Exchange exchange;
			struct Body {
				std::string _template;
				std::string form;
				std::string value;
			};
			Body body;
			struct Properties {
				std::string _template;
				std::string form;
				std::string value;
			};
			Properties properties;
		};
		SinkRabbitMQParameters sinkRabbitMQParameters;
		struct SinkMNSParameters {
			struct QueueName {
				std::string _template;
				std::string form;
				std::string value;
			};
			QueueName queueName;
			struct IsBase64Encode {
				std::string _template;
				std::string form;
				std::string value;
			};
			IsBase64Encode isBase64Encode;
			struct Body {
				std::string _template;
				std::string form;
				std::string value;
			};
			Body body;
		};
		SinkMNSParameters sinkMNSParameters;
		struct SinkDataHubParameters {
			struct RoleName {
				std::string _template;
				std::string form;
				std::string value;
			};
			RoleName roleName;
			struct Project {
				std::string _template;
				std::string form;
				std::string value;
			};
			Project project;
			struct Topic {
				std::string _template;
				std::string form;
				std::string value;
			};
			Topic topic;
			struct TopicType {
				std::string _template;
				std::string form;
				std::string value;
			};
			TopicType topicType;
			struct Body {
				std::string _template;
				std::string form;
				std::string value;
			};
			Body body;
			struct TopicSchema {
				std::string _template;
				std::string form;
				std::string value;
			};
			TopicSchema topicSchema;
		};
		SinkDataHubParameters sinkDataHubParameters;
		struct SinkKafkaParameters {
			struct InstanceId {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstanceId instanceId;
			struct Acks {
				std::string _template;
				std::string form;
				std::string value;
			};
			Acks acks;
			struct Topic {
				std::string _template;
				std::string form;
				std::string value;
			};
			Topic topic;
			struct SaslUser {
				std::string _template;
				std::string form;
				std::string value;
			};
			SaslUser saslUser;
			struct Value {
				std::string _template;
				std::string form;
				std::string value;
			};
			Value value;
			struct Key {
				std::string _template;
				std::string form;
				std::string value;
			};
			Key key;
		};
		SinkKafkaParameters sinkKafkaParameters;
		struct SinkFnfParameters {
			struct Input {
				std::string _template;
				std::string form;
				std::string value;
			};
			Input input;
			struct ExecutionName {
				std::string _template;
				std::string form;
				std::string value;
			};
			ExecutionName executionName;
			struct RoleName {
				std::string _template;
				std::string form;
				std::string value;
			};
			RoleName roleName;
			struct FlowName {
				std::string _template;
				std::string form;
				std::string value;
			};
			FlowName flowName;
		};
		SinkFnfParameters sinkFnfParameters;
		struct SinkFcParameters {
			struct InvocationType {
				std::string _template;
				std::string form;
				std::string value;
			};
			InvocationType invocationType;
			struct FunctionName {
				std::string _template;
				std::string form;
				std::string value;
			};
			FunctionName functionName;
			struct Qualifier {
				std::string _template;
				std::string form;
				std::string value;
			};
			Qualifier qualifier;
			struct ServiceName {
				std::string _template;
				std::string form;
				std::string value;
			};
			ServiceName serviceName;
			struct Body {
				std::string _template;
				std::string form;
				std::string value;
			};
			Body body;
			struct Concurrency {
				std::string _template;
				std::string form;
				std::string value;
			};
			Concurrency concurrency;
		};
		SinkFcParameters sinkFcParameters;
		struct SinkPrometheusParameters {
			struct VSwitchId {
				std::string _template;
				std::string form;
				std::string value;
			};
			VSwitchId vSwitchId;
			struct Password {
				std::string _template;
				std::string form;
				std::string value;
			};
			Password password;
			struct Data {
				std::string _template;
				std::string form;
				std::string value;
			};
			Data data;
			struct VpcId {
				std::string _template;
				std::string form;
				std::string value;
			};
			VpcId vpcId;
			struct SecurityGroupId {
				std::string _template;
				std::string form;
				std::string value;
			};
			SecurityGroupId securityGroupId;
			struct AuthorizationType {
				std::string _template;
				std::string form;
				std::string value;
			};
			AuthorizationType authorizationType;
			struct NetworkType {
				std::string _template;
				std::string form;
				std::string value;
			};
			NetworkType networkType;
			struct URL {
				std::string _template;
				std::string form;
				std::string value;
			};
			URL uRL;
			struct Username {
				std::string _template;
				std::string form;
				std::string value;
			};
			Username username;
		};
		SinkPrometheusParameters sinkPrometheusParameters;
		struct SinkSLSParameters {
			struct RoleName {
				std::string _template;
				std::string form;
				std::string value;
			};
			RoleName roleName;
			struct Project {
				std::string _template;
				std::string form;
				std::string value;
			};
			Project project;
			struct Topic {
				std::string _template;
				std::string form;
				std::string value;
			};
			Topic topic;
			struct Body {
				std::string _template;
				std::string form;
				std::string value;
			};
			Body body;
			struct LogStore {
				std::string _template;
				std::string form;
				std::string value;
			};
			LogStore logStore;
		};
		SinkSLSParameters sinkSLSParameters;
		struct SinkRocketMQParameters {
			struct Keys {
				std::string _template;
				std::string form;
				std::string value;
			};
			Keys keys;
			struct VSwitchIds {
				std::string _template;
				std::string form;
				std::string value;
			};
			VSwitchIds vSwitchIds;
			struct SecurityGroupId {
				std::string _template;
				std::string form;
				std::string value;
			};
			SecurityGroupId securityGroupId;
			struct InstanceUsername {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstanceUsername instanceUsername;
			struct Body {
				std::string _template;
				std::string form;
				std::string value;
			};
			Body body;
			struct Tags {
				std::string _template;
				std::string form;
				std::string value;
			};
			Tags tags;
			struct Network {
				std::string _template;
				std::string form;
				std::string value;
			};
			Network network;
			struct InstancePassword {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstancePassword instancePassword;
			struct InstanceId {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstanceId instanceId;
			struct InstanceEndpoint {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstanceEndpoint instanceEndpoint;
			struct VpcId {
				std::string _template;
				std::string form;
				std::string value;
			};
			VpcId vpcId;
			struct Topic {
				std::string _template;
				std::string form;
				std::string value;
			};
			Topic topic;
			struct InstanceType {
				std::string _template;
				std::string form;
				std::string value;
			};
			InstanceType instanceType;
			struct Properties {
				std::string _template;
				std::string form;
				std::string value;
			};
			Properties properties;
		};
		SinkRocketMQParameters sinkRocketMQParameters;
	};
	struct Transforms {
		std::string arn;
	};
	struct Source {
		struct SourceMQTTParameters {
			std::string instanceId;
			std::string bodyDataType;
			std::string regionId;
			std::string topic;
		};
		SourceMQTTParameters sourceMQTTParameters;
		struct SourceRocketMQParameters {
			std::string filterSql;
			std::string instanceSecurityGroupId;
			std::string offset;
			std::string vSwitchIds;
			std::string groupID;
			std::string securityGroupId;
			std::string instanceUsername;
			std::string filterType;
			std::string network;
			std::string authType;
			std::string instancePassword;
			std::string instanceVSwitchIds;
			std::string instanceNetwork;
			std::string instanceId;
			std::string instanceEndpoint;
			std::string instanceVpcId;
			std::string regionId;
			std::string vpcId;
			std::string topic;
			std::string instanceType;
			std::string tag;
			long timestamp;
		};
		SourceRocketMQParameters sourceRocketMQParameters;
		struct SourceSLSParameters {
			std::string roleName;
			std::string project;
			std::string logStore;
			std::string consumePosition;
		};
		SourceSLSParameters sourceSLSParameters;
		struct SourcePrometheusParameters {
			std::string dataType;
			std::string clusterId;
			std::string labels;
		};
		SourcePrometheusParameters sourcePrometheusParameters;
		struct SourceDTSParameters {
			std::string brokerUrl;
			std::string password;
			long initCheckPoint;
			std::string topic;
			std::string taskId;
			std::string sid;
			std::string username;
		};
		SourceDTSParameters sourceDTSParameters;
		struct SourceKafkaParameters {
			std::string instanceId;
			std::string consumerGroup;
			std::string regionId;
			std::string vSwitchIds;
			std::string vpcId;
			std::string valueDataType;
			std::string securityGroupId;
			std::string topic;
			std::string offsetReset;
			std::string network;
		};
		SourceKafkaParameters sourceKafkaParameters;
		struct SourceMNSParameters {
			std::string queueName;
			std::string regionId;
			bool isBase64Decode;
		};
		SourceMNSParameters sourceMNSParameters;
		struct SourceRabbitMQParameters {
			std::string queueName;
			std::string virtualHostName;
			std::string instanceId;
			std::string regionId;
		};
		SourceRabbitMQParameters sourceRabbitMQParameters;
	};
	struct RunOptions {
		struct BatchWindow {
			int countBasedWindow;
			int timeBasedWindow;
		};
		BatchWindow batchWindow;
		struct RetryStrategy {
			std::string pushRetryStrategy;
			long maximumRetryAttempts;
			long maximumEventAgeInSeconds;
		};
		RetryStrategy retryStrategy;
		struct DeadLetterQueue {
			std::string arn;
		};
		DeadLetterQueue deadLetterQueue;
		long maximumTasks;
		std::string errorsTolerance;
	};
	CreateEventStreamingRequest();
	~CreateEventStreamingRequest();
	Sink getSink() const;
	void setSink(const Sink &sink);
	std::vector<Transforms> getTransforms() const;
	void setTransforms(const std::vector<Transforms> &transforms);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getFilterPattern() const;
	void setFilterPattern(const std::string &filterPattern);
	Source getSource() const;
	void setSource(const Source &source);
	RunOptions getRunOptions() const;
	void setRunOptions(const RunOptions &runOptions);
	std::string getEventStreamingName() const;
	void setEventStreamingName(const std::string &eventStreamingName);
	std::string getTag() const;
	void setTag(const std::string &tag);

private:
	Sink sink_;
	std::vector<Transforms> transforms_;
	std::string description_;
	std::string filterPattern_;
	Source source_;
	RunOptions runOptions_;
	std::string eventStreamingName_;
	std::string tag_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTSTREAMINGREQUEST_H_
