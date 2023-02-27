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

#ifndef ALIBABACLOUD_ICE_MODEL_UPDATELIVETRANSCODEJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_UPDATELIVETRANSCODEJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT UpdateLiveTranscodeJobRequest : public RpcServiceRequest {
public:
	struct StreamInput {
		std::string inputUrl;
		std::string type;
	};
	struct TranscodeOutput {
		std::string domainName;
		std::string type;
	};
	struct TimedConfig {
		std::string endTime;
		std::string startTime;
	};
	UpdateLiveTranscodeJobRequest();
	~UpdateLiveTranscodeJobRequest();
	StreamInput getStreamInput() const;
	void setStreamInput(const StreamInput &streamInput);
	TranscodeOutput getTranscodeOutput() const;
	void setTranscodeOutput(const TranscodeOutput &transcodeOutput);
	TimedConfig getTimedConfig() const;
	void setTimedConfig(const TimedConfig &timedConfig);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	StreamInput streamInput_;
	TranscodeOutput transcodeOutput_;
	TimedConfig timedConfig_;
	std::string jobId_;
	std::string name_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_UPDATELIVETRANSCODEJOBREQUEST_H_
