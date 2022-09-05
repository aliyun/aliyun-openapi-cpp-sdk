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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBECONFIGOFVERSIONREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBECONFIGOFVERSIONREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT DescribeConfigOfVersionRequest : public RpcServiceRequest {
public:
	DescribeConfigOfVersionRequest();
	~DescribeConfigOfVersionRequest();
	std::string getVersionId() const;
	void setVersionId(const std::string &versionId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getFunctionName() const;
	void setFunctionName(const std::string &functionName);
	long getGroupId() const;
	void setGroupId(long groupId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getFunctionId() const;
	void setFunctionId(int functionId);

private:
	std::string versionId_;
	std::string securityToken_;
	std::string functionName_;
	long groupId_;
	long ownerId_;
	int functionId_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBECONFIGOFVERSIONREQUEST_H_
