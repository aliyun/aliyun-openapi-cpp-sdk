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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATEEDGETRANSCODEJOBREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATEEDGETRANSCODEJOBREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateEdgeTranscodeJobRequest : public RpcServiceRequest {
public:
	UpdateEdgeTranscodeJobRequest();
	~UpdateEdgeTranscodeJobRequest();
	std::string getStreamInput() const;
	void setStreamInput(const std::string &streamInput);
	std::string getStreamOutput() const;
	void setStreamOutput(const std::string &streamOutput);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string streamInput_;
	std::string streamOutput_;
	std::string jobId_;
	std::string clusterId_;
	long ownerId_;
	std::string templateId_;
	std::string name_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATEEDGETRANSCODEJOBREQUEST_H_
