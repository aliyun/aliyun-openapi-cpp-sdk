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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITIPRODUCTIONJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITIPRODUCTIONJOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitIProductionJobRequest : public RpcServiceRequest {
public:
	SubmitIProductionJobRequest();
	~SubmitIProductionJobRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getJobParams() const;
	void setJobParams(const std::string &jobParams);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getOutput() const;
	void setOutput(const std::string &output);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getFunctionName() const;
	void setFunctionName(const std::string &functionName);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getModelId() const;
	void setModelId(const std::string &modelId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getInput() const;
	void setInput(const std::string &input);
	std::string getScheduleParams() const;
	void setScheduleParams(const std::string &scheduleParams);

private:
	long resourceOwnerId_;
	std::string jobParams_;
	std::string accessKeyId_;
	std::string output_;
	std::string userData_;
	std::string functionName_;
	std::string notifyUrl_;
	std::string resourceOwnerAccount_;
	std::string modelId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string pipelineId_;
	std::string input_;
	std::string scheduleParams_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITIPRODUCTIONJOBREQUEST_H_
