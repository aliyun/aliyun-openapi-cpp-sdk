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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_CREATETOPICREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_CREATETOPICREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT CreateTopicRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateTopicRequest();
	~CreateTopicRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	long getReplicationFactor() const;
	void setReplicationFactor(long replicationFactor);
	long getMinInsyncReplicas() const;
	void setMinInsyncReplicas(long minInsyncReplicas);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTopic() const;
	void setTopic(const std::string &topic);
	bool getCompactTopic() const;
	void setCompactTopic(bool compactTopic);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getPartitionNum() const;
	void setPartitionNum(const std::string &partitionNum);
	std::string getConfig() const;
	void setConfig(const std::string &config);
	bool getLocalTopic() const;
	void setLocalTopic(bool localTopic);

private:
	std::string remark_;
	long replicationFactor_;
	long minInsyncReplicas_;
	std::string instanceId_;
	std::string regionId_;
	std::string topic_;
	bool compactTopic_;
	std::vector<Tag> tag_;
	std::string partitionNum_;
	std::string config_;
	bool localTopic_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_CREATETOPICREQUEST_H_
