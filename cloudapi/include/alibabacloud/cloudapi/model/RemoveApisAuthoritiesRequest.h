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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_REMOVEAPISAUTHORITIESREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_REMOVEAPISAUTHORITIESREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT RemoveApisAuthoritiesRequest : public RpcServiceRequest {
public:
	RemoveApisAuthoritiesRequest();
	~RemoveApisAuthoritiesRequest();
	std::string getStageName() const;
	void setStageName(const std::string &stageName);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	long getAppId() const;
	void setAppId(long appId);
	std::string getApiIds() const;
	void setApiIds(const std::string &apiIds);

private:
	std::string stageName_;
	std::string groupId_;
	std::string description_;
	std::string accessKeyId_;
	std::string securityToken_;
	long appId_;
	std::string apiIds_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_REMOVEAPISAUTHORITIESREQUEST_H_
