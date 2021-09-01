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

#ifndef ALIBABACLOUD_MTS_MODEL_CREATEINFERENCESERVERREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_CREATEINFERENCESERVERREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT CreateInferenceServerRequest : public RpcServiceRequest {
public:
	CreateInferenceServerRequest();
	~CreateInferenceServerRequest();
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getModelType() const;
	void setModelType(const std::string &modelType);
	std::string getFunctionName() const;
	void setFunctionName(const std::string &functionName);
	std::string getTestId() const;
	void setTestId(const std::string &testId);
	std::string getModelPath() const;
	void setModelPath(const std::string &modelPath);

private:
	std::string pipelineId_;
	std::string userData_;
	std::string modelType_;
	std::string functionName_;
	std::string testId_;
	std::string modelPath_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_CREATEINFERENCESERVERREQUEST_H_
