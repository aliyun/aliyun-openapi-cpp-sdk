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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPPREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPPREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT CreateAppRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateAppRequest();
	~CreateAppRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getAppOwnerUserId() const;
	void setAppOwnerUserId(long appOwnerUserId);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getExtend() const;
	void setExtend(const std::string &extend);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getAppSecret() const;
	void setAppSecret(const std::string &appSecret);
	std::string getAppKey() const;
	void setAppKey(const std::string &appKey);
	std::string getAppCode() const;
	void setAppCode(const std::string &appCode);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	std::string description_;
	long appOwnerUserId_;
	std::string source_;
	std::string accessKeyId_;
	std::string extend_;
	std::string appName_;
	std::string securityToken_;
	std::string appSecret_;
	std::string appKey_;
	std::string appCode_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPPREQUEST_H_
