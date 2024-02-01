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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATEEVENTSOURCEREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATEEVENTSOURCEREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT UpdateEventSourceRequest : public RpcServiceRequest {
public:
	struct SourceMNSParameters {
		std::string queueName;
		std::string regionId;
		bool isBase64Decode;
	};
	struct SourceRabbitMQParameters {
		std::string queueName;
		std::string virtualHostName;
		std::string instanceId;
		std::string regionId;
	};
	struct SourceRocketMQParameters {
		std::string instanceSecurityGroupId;
		std::string offset;
		std::string groupID;
		std::string instanceUsername;
		std::string authType;
		std::string instancePassword;
		std::string instanceNetwork;
		std::string instanceVSwitchIds;
		std::string instanceId;
		std::string instanceVpcId;
		std::string instanceEndpoint;
		std::string regionId;
		std::string topic;
		std::string instanceType;
		std::string tag;
		long timestamp;
	};
	struct SourceSLSParameters {
		std::string roleName;
		std::string project;
		std::string logStore;
		std::string consumePosition;
	};
	struct SourceScheduledEventParameters {
		std::string schedule;
		std::string userData;
		std::string timeZone;
	};
	struct SourceKafkaParameters {
		std::string instanceId;
		std::string consumerGroup;
		std::string regionId;
		std::string vSwitchIds;
		std::string vpcId;
		std::string securityGroupId;
		std::string topic;
		std::string offsetReset;
		int maximumTasks;
		std::string network;
	};
	struct SourceHttpEventParameters {
		std::string string;
		std::vector<std::string> referer;
		std::string string;
		std::vector<std::string> method;
		std::string string;
		std::vector<std::string> ip;
		std::string securityConfig;
		std::string type;
	};
	UpdateEventSourceRequest();
	~UpdateEventSourceRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEventBusName() const;
	void setEventBusName(const std::string &eventBusName);
	SourceMNSParameters getSourceMNSParameters() const;
	void setSourceMNSParameters(const SourceMNSParameters &sourceMNSParameters);
	bool getLinkedExternalSource() const;
	void setLinkedExternalSource(bool linkedExternalSource);
	std::string getExternalSourceType() const;
	void setExternalSourceType(const std::string &externalSourceType);
	std::map<std::string, std::string> getExternalSourceConfig() const;
	void setExternalSourceConfig(const std::map<std::string, std::string> &externalSourceConfig);
	SourceRabbitMQParameters getSourceRabbitMQParameters() const;
	void setSourceRabbitMQParameters(const SourceRabbitMQParameters &sourceRabbitMQParameters);
	SourceRocketMQParameters getSourceRocketMQParameters() const;
	void setSourceRocketMQParameters(const SourceRocketMQParameters &sourceRocketMQParameters);
	SourceSLSParameters getSourceSLSParameters() const;
	void setSourceSLSParameters(const SourceSLSParameters &sourceSLSParameters);
	SourceScheduledEventParameters getSourceScheduledEventParameters() const;
	void setSourceScheduledEventParameters(const SourceScheduledEventParameters &sourceScheduledEventParameters);
	SourceKafkaParameters getSourceKafkaParameters() const;
	void setSourceKafkaParameters(const SourceKafkaParameters &sourceKafkaParameters);
	SourceHttpEventParameters getSourceHttpEventParameters() const;
	void setSourceHttpEventParameters(const SourceHttpEventParameters &sourceHttpEventParameters);
	std::string getEventSourceName() const;
	void setEventSourceName(const std::string &eventSourceName);

private:
	std::string description_;
	std::string eventBusName_;
	SourceMNSParameters sourceMNSParameters_;
	bool linkedExternalSource_;
	std::string externalSourceType_;
	std::map<std::string, std::string> externalSourceConfig_;
	SourceRabbitMQParameters sourceRabbitMQParameters_;
	SourceRocketMQParameters sourceRocketMQParameters_;
	SourceSLSParameters sourceSLSParameters_;
	SourceScheduledEventParameters sourceScheduledEventParameters_;
	SourceKafkaParameters sourceKafkaParameters_;
	SourceHttpEventParameters sourceHttpEventParameters_;
	std::string eventSourceName_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATEEVENTSOURCEREQUEST_H_
