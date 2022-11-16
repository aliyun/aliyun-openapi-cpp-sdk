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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_IMPORTOASREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_IMPORTOASREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT ImportOASRequest : public RpcServiceRequest {
public:
	ImportOASRequest();
	~ImportOASRequest();
	std::string getData() const;
	void setData(const std::string &data);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAuthType() const;
	void setAuthType(const std::string &authType);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	bool getOverwrite() const;
	void setOverwrite(bool overwrite);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getIgnoreWarning() const;
	void setIgnoreWarning(bool ignoreWarning);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getRequestMode() const;
	void setRequestMode(const std::string &requestMode);
	std::string getBackendName() const;
	void setBackendName(const std::string &backendName);
	bool getSkipDryRun() const;
	void setSkipDryRun(bool skipDryRun);
	std::string getOASVersion() const;
	void setOASVersion(const std::string &oASVersion);

private:
	std::string data_;
	std::string accessKeyId_;
	std::string authType_;
	std::string securityToken_;
	bool overwrite_;
	bool dryRun_;
	bool ignoreWarning_;
	std::string groupId_;
	std::string requestMode_;
	std::string backendName_;
	bool skipDryRun_;
	std::string oASVersion_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_IMPORTOASREQUEST_H_
