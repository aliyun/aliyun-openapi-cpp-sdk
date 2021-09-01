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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITVIDEOQUALITYJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITVIDEOQUALITYJOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitVideoQualityJobRequest : public RpcServiceRequest {
public:
	SubmitVideoQualityJobRequest();
	~SubmitVideoQualityJobRequest();
	std::string getJobParams() const;
	void setJobParams(const std::string &jobParams);
	long getUserId() const;
	void setUserId(long userId);
	std::string getOutput() const;
	void setOutput(const std::string &output);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getModelId() const;
	void setModelId(const std::string &modelId);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getInput() const;
	void setInput(const std::string &input);
	std::string getScheduleParams() const;
	void setScheduleParams(const std::string &scheduleParams);

private:
	std::string jobParams_;
	long userId_;
	std::string output_;
	std::string userData_;
	std::string notifyUrl_;
	std::string sourceType_;
	std::string modelId_;
	std::string pipelineId_;
	std::string input_;
	std::string scheduleParams_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITVIDEOQUALITYJOBREQUEST_H_
