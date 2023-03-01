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

#ifndef ALIBABACLOUD_ICE_MODEL_QUERYSMARTTAGJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_QUERYSMARTTAGJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT QuerySmarttagJobRequest : public RpcServiceRequest {
public:
	QuerySmarttagJobRequest();
	~QuerySmarttagJobRequest();
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getParams() const;
	void setParams(const std::string &params);

private:
	std::string jobId_;
	std::string params_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_QUERYSMARTTAGJOBREQUEST_H_
