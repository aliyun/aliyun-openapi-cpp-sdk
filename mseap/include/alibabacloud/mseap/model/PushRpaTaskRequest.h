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

#ifndef ALIBABACLOUD_MSEAP_MODEL_PUSHRPATASKREQUEST_H_
#define ALIBABACLOUD_MSEAP_MODEL_PUSHRPATASKREQUEST_H_

#include <alibabacloud/mseap/MseapExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mseap {
namespace Model {
class ALIBABACLOUD_MSEAP_EXPORT PushRpaTaskRequest : public RpcServiceRequest {
public:
	PushRpaTaskRequest();
	~PushRpaTaskRequest();
	std::string getRequest() const;
	void setRequest(const std::string &request);
	long getUserCallerParentId() const;
	void setUserCallerParentId(long userCallerParentId);
	std::string getApiType() const;
	void setApiType(const std::string &apiType);
	bool getUserMfaPresent() const;
	void setUserMfaPresent(bool userMfaPresent);
	std::string getUserKp() const;
	void setUserKp(const std::string &userKp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getTaskId() const;
	void setTaskId(long taskId);
	std::string getUserCallerType() const;
	void setUserCallerType(const std::string &userCallerType);
	std::string getUserSecurityToken() const;
	void setUserSecurityToken(const std::string &userSecurityToken);
	std::string getUserAccessKeyId() const;
	void setUserAccessKeyId(const std::string &userAccessKeyId);
	long getModelId() const;
	void setModelId(long modelId);
	std::string getAliyunKp() const;
	void setAliyunKp(const std::string &aliyunKp);
	std::string getUserBid() const;
	void setUserBid(const std::string &userBid);
	std::string getOriginalRequest() const;
	void setOriginalRequest(const std::string &originalRequest);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getBid() const;
	void setBid(const std::string &bid);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string request_;
	long userCallerParentId_;
	std::string apiType_;
	bool userMfaPresent_;
	std::string userKp_;
	std::string lang_;
	long taskId_;
	std::string userCallerType_;
	std::string userSecurityToken_;
	std::string userAccessKeyId_;
	long modelId_;
	std::string aliyunKp_;
	std::string userBid_;
	std::string originalRequest_;
	long templateId_;
	std::string userClientIp_;
	std::string name_;
	std::string bid_;
	int status_;
};
} // namespace Model
} // namespace Mseap
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSEAP_MODEL_PUSHRPATASKREQUEST_H_
