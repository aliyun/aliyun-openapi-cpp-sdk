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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATESTORYREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATESTORYREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateStoryRequest : public RpcServiceRequest {
public:
	struct Notification {
		struct MNS {
			std::string endpoint;
			std::string topicName;
		};
		MNS mNS;
		struct RocketMQ {
			std::string endpoint;
			std::string instanceId;
			std::string topicName;
		};
		RocketMQ rocketMQ;
	};
	struct Address {
		std::string country;
		std::string province;
		std::string city;
		std::string district;
		std::string township;
	};
	CreateStoryRequest();
	~CreateStoryRequest();
	std::string getCustomLabels() const;
	void setCustomLabels(const std::string &customLabels);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getStoryType() const;
	void setStoryType(const std::string &storyType);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::string getStorySubType() const;
	void setStorySubType(const std::string &storySubType);
	long getMinFileCount() const;
	void setMinFileCount(long minFileCount);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	long getMaxFileCount() const;
	void setMaxFileCount(long maxFileCount);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getStoryStartTime() const;
	void setStoryStartTime(const std::string &storyStartTime);
	Address getAddress() const;
	void setAddress(const Address &address);
	std::string getCustomId() const;
	void setCustomId(const std::string &customId);
	std::string getStoryEndTime() const;
	void setStoryEndTime(const std::string &storyEndTime);
	std::string getObjectId() const;
	void setObjectId(const std::string &objectId);
	std::string getStoryName() const;
	void setStoryName(const std::string &storyName);

private:
	std::string customLabels_;
	Notification notification_;
	std::string notifyEndpoint_;
	std::string projectName_;
	std::string notifyTopicName_;
	std::string storyType_;
	std::map<std::string, std::string> tags_;
	std::string storySubType_;
	long minFileCount_;
	std::string userData_;
	long maxFileCount_;
	std::string datasetName_;
	std::string storyStartTime_;
	Address address_;
	std::string customId_;
	std::string storyEndTime_;
	std::string objectId_;
	std::string storyName_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATESTORYREQUEST_H_
