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

#ifndef ALIBABACLOUD_LIVE_MODEL_SETLIVESTREAMSNOTIFYURLCONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETLIVESTREAMSNOTIFYURLCONFIGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SetLiveStreamsNotifyUrlConfigRequest : public RpcServiceRequest {
public:
	SetLiveStreamsNotifyUrlConfigRequest();
	~SetLiveStreamsNotifyUrlConfigRequest();
	std::string getAuthKey() const;
	void setAuthKey(const std::string &authKey);
	std::string getAuthType() const;
	void setAuthType(const std::string &authType);
	std::string getNotifyReqAuth() const;
	void setNotifyReqAuth(const std::string &notifyReqAuth);
	std::string getExceptionNotifyUrl() const;
	void setExceptionNotifyUrl(const std::string &exceptionNotifyUrl);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	std::string getNotifyType() const;
	void setNotifyType(const std::string &notifyType);
	std::string getSwitchNotifyUrl() const;
	void setSwitchNotifyUrl(const std::string &switchNotifyUrl);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getExceptionNotifyType() const;
	void setExceptionNotifyType(const std::string &exceptionNotifyType);
	std::string getNotifyAuthKey() const;
	void setNotifyAuthKey(const std::string &notifyAuthKey);

private:
	std::string authKey_;
	std::string authType_;
	std::string notifyReqAuth_;
	std::string exceptionNotifyUrl_;
	std::string notifyUrl_;
	std::string notifyType_;
	std::string switchNotifyUrl_;
	std::string domainName_;
	long ownerId_;
	std::string exceptionNotifyType_;
	std::string notifyAuthKey_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SETLIVESTREAMSNOTIFYURLCONFIGREQUEST_H_
