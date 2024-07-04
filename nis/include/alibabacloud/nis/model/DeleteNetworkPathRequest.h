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

#ifndef ALIBABACLOUD_NIS_MODEL_DELETENETWORKPATHREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_DELETENETWORKPATHREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT DeleteNetworkPathRequest : public RpcServiceRequest {
public:
	DeleteNetworkPathRequest();
	~DeleteNetworkPathRequest();
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getNetworkPathIds() const;
	void setNetworkPathIds(const std::vector<std::string> &networkPathIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	bool dryRun_;
	std::string clientToken_;
	std::vector<std::string> networkPathIds_;
	std::string regionId_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_DELETENETWORKPATHREQUEST_H_
