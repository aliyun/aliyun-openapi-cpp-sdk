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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATEWEBHOOKREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATEWEBHOOKREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdateWebhookRequest : public RpcServiceRequest {
public:
	UpdateWebhookRequest();
	~UpdateWebhookRequest();
	std::string getHttpHeaders() const;
	void setHttpHeaders(const std::string &httpHeaders);
	std::string getMethod() const;
	void setMethod(const std::string &method);
	long getContactId() const;
	void setContactId(long contactId);
	std::string getHttpParams() const;
	void setHttpParams(const std::string &httpParams);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getBody() const;
	void setBody(const std::string &body);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	std::string getContactName() const;
	void setContactName(const std::string &contactName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRecoverBody() const;
	void setRecoverBody(const std::string &recoverBody);

private:
	std::string httpHeaders_;
	std::string method_;
	long contactId_;
	std::string httpParams_;
	std::string proxyUserId_;
	std::string body_;
	std::string url_;
	std::string contactName_;
	std::string regionId_;
	std::string recoverBody_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATEWEBHOOKREQUEST_H_
