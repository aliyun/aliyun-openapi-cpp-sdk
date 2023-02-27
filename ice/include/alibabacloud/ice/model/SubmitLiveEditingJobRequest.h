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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITLIVEEDITINGJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITLIVEEDITINGJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitLiveEditingJobRequest : public RpcServiceRequest {
public:
	SubmitLiveEditingJobRequest();
	~SubmitLiveEditingJobRequest();
	std::string getLiveStreamConfig() const;
	void setLiveStreamConfig(const std::string &liveStreamConfig);
	std::string getClips() const;
	void setClips(const std::string &clips);
	std::string getOutputMediaTarget() const;
	void setOutputMediaTarget(const std::string &outputMediaTarget);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getOutputMediaConfig() const;
	void setOutputMediaConfig(const std::string &outputMediaConfig);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getMediaProduceConfig() const;
	void setMediaProduceConfig(const std::string &mediaProduceConfig);

private:
	std::string liveStreamConfig_;
	std::string clips_;
	std::string outputMediaTarget_;
	std::string userData_;
	std::string outputMediaConfig_;
	std::string projectId_;
	std::string mediaProduceConfig_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITLIVEEDITINGJOBREQUEST_H_
