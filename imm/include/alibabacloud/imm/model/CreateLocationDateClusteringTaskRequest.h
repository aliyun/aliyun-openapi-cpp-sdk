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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATELOCATIONDATECLUSTERINGTASKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATELOCATIONDATECLUSTERINGTASKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateLocationDateClusteringTaskRequest : public RpcServiceRequest {
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
	struct LocationOptions {
		std::string string;
		std::vector<std::string> locationDateClusterLevels;
	};
	struct DateOptions {
		long minDays;
		long gapDays;
		long maxDays;
	};
	CreateLocationDateClusteringTaskRequest();
	~CreateLocationDateClusteringTaskRequest();
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	LocationOptions getLocationOptions() const;
	void setLocationOptions(const LocationOptions &locationOptions);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getTags() const;
	void setTags(const std::string &tags);
	DateOptions getDateOptions() const;
	void setDateOptions(const DateOptions &dateOptions);

private:
	std::string userData_;
	Notification notification_;
	std::string datasetName_;
	std::string projectName_;
	LocationOptions locationOptions_;
	std::string notifyTopicName_;
	std::string tags_;
	DateOptions dateOptions_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATELOCATIONDATECLUSTERINGTASKREQUEST_H_
