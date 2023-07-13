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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEAUTHPOLICYREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEAUTHPOLICYREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateAuthPolicyRequest : public RpcServiceRequest {
public:
	UpdateAuthPolicyRequest();
	~UpdateAuthPolicyRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getAuthRule() const;
	void setAuthRule(const std::string &authRule);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getEnable() const;
	void setEnable(const std::string &enable);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getK8sNamespace() const;
	void setK8sNamespace(const std::string &k8sNamespace);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string mseSessionId_;
	std::string authRule_;
	std::string source_;
	std::string protocol_;
	std::string enable_;
	std::string id_;
	std::string k8sNamespace_;
	std::string appId_;
	std::string name_;
	std::string acceptLanguage_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEAUTHPOLICYREQUEST_H_
