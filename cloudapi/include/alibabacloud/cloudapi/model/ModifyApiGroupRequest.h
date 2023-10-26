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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYAPIGROUPREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYAPIGROUPREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT ModifyApiGroupRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ModifyApiGroupRequest();
	~ModifyApiGroupRequest();
	std::string getDefaultDomain() const;
	void setDefaultDomain(const std::string &defaultDomain);
	std::string getBasePath() const;
	void setBasePath(const std::string &basePath);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRpcPattern() const;
	void setRpcPattern(const std::string &rpcPattern);
	std::string getUserLogConfig() const;
	void setUserLogConfig(const std::string &userLogConfig);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getCustomerConfigs() const;
	void setCustomerConfigs(const std::string &customerConfigs);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getPassthroughHeaders() const;
	void setPassthroughHeaders(const std::string &passthroughHeaders);
	std::string getCompatibleFlags() const;
	void setCompatibleFlags(const std::string &compatibleFlags);
	std::string getCustomTraceConfig() const;
	void setCustomTraceConfig(const std::string &customTraceConfig);
	std::string getSupportSSE() const;
	void setSupportSSE(const std::string &supportSSE);

private:
	std::string defaultDomain_;
	std::string basePath_;
	std::string description_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string rpcPattern_;
	std::string userLogConfig_;
	std::vector<Tag> tag_;
	std::string customerConfigs_;
	std::string groupId_;
	std::string groupName_;
	std::string passthroughHeaders_;
	std::string compatibleFlags_;
	std::string customTraceConfig_;
	std::string supportSSE_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYAPIGROUPREQUEST_H_
