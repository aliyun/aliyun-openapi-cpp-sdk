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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_CONFIGL7RSPOLICYREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_CONFIGL7RSPOLICYREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT ConfigL7RsPolicyRequest : public RpcServiceRequest {
public:
	ConfigL7RsPolicyRequest();
	~ConfigL7RsPolicyRequest();
	int getUpstreamRetry() const;
	void setUpstreamRetry(int upstreamRetry);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);

private:
	int upstreamRetry_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string domain_;
	std::string policy_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_CONFIGL7RSPOLICYREQUEST_H_
