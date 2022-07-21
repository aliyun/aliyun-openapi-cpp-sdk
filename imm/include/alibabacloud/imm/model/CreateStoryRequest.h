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
	CreateStoryRequest();
	~CreateStoryRequest();
	long getMinFileCount() const;
	void setMinFileCount(long minFileCount);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getCustomLabels() const;
	void setCustomLabels(const std::string &customLabels);
	std::string getStoryStartTime() const;
	void setStoryStartTime(const std::string &storyStartTime);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getStoryType() const;
	void setStoryType(const std::string &storyType);
	std::string getCustomId() const;
	void setCustomId(const std::string &customId);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	long getMaxFileCount() const;
	void setMaxFileCount(long maxFileCount);
	std::string getStorySubType() const;
	void setStorySubType(const std::string &storySubType);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getStoryEndTime() const;
	void setStoryEndTime(const std::string &storyEndTime);
	std::string getObjectId() const;
	void setObjectId(const std::string &objectId);
	std::string getStoryName() const;
	void setStoryName(const std::string &storyName);

private:
	long minFileCount_;
	std::string projectName_;
	std::string customLabels_;
	std::string storyStartTime_;
	std::string notifyTopicName_;
	std::string storyType_;
	std::string customId_;
	std::map<std::string, std::string> tags_;
	std::string userData_;
	std::string notifyEndpoint_;
	long maxFileCount_;
	std::string storySubType_;
	std::string datasetName_;
	std::string storyEndTime_;
	std::string objectId_;
	std::string storyName_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATESTORYREQUEST_H_
