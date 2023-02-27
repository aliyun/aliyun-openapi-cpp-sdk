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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITMEDIAPRODUCINGJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITMEDIAPRODUCINGJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitMediaProducingJobRequest : public RpcServiceRequest {
public:
	SubmitMediaProducingJobRequest();
	~SubmitMediaProducingJobRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getOutputMediaTarget() const;
	void setOutputMediaTarget(const std::string &outputMediaTarget);
	std::string getSource() const;
	void setSource(const std::string &source);
	long getResourceRealOwnerId() const;
	void setResourceRealOwnerId(long resourceRealOwnerId);
	std::string getEditingProduceConfig() const;
	void setEditingProduceConfig(const std::string &editingProduceConfig);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getOutputMediaConfig() const;
	void setOutputMediaConfig(const std::string &outputMediaConfig);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getTimeline() const;
	void setTimeline(const std::string &timeline);
	std::string getProjectMetadata() const;
	void setProjectMetadata(const std::string &projectMetadata);
	std::string getClipsParam() const;
	void setClipsParam(const std::string &clipsParam);
	std::string getMediaMarks() const;
	void setMediaMarks(const std::string &mediaMarks);

private:
	std::string clientToken_;
	std::string outputMediaTarget_;
	std::string source_;
	long resourceRealOwnerId_;
	std::string editingProduceConfig_;
	std::string userData_;
	std::string outputMediaConfig_;
	std::string projectId_;
	std::string templateId_;
	std::string timeline_;
	std::string projectMetadata_;
	std::string clipsParam_;
	std::string mediaMarks_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITMEDIAPRODUCINGJOBREQUEST_H_
