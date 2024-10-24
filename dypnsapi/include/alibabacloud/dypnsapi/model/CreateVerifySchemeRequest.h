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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_CREATEVERIFYSCHEMEREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_CREATEVERIFYSCHEMEREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT CreateVerifySchemeRequest : public RpcServiceRequest {
public:
	CreateVerifySchemeRequest();
	~CreateVerifySchemeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getOrigin() const;
	void setOrigin(const std::string &origin);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAuthType() const;
	void setAuthType(const std::string &authType);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getIpWhiteList() const;
	void setIpWhiteList(const std::string &ipWhiteList);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getHmSignName() const;
	void setHmSignName(const std::string &hmSignName);
	std::string getPackSign() const;
	void setPackSign(const std::string &packSign);
	std::string getPackName() const;
	void setPackName(const std::string &packName);
	std::string getHmAppIdentifier() const;
	void setHmAppIdentifier(const std::string &hmAppIdentifier);
	long getCuApiCode() const;
	void setCuApiCode(long cuApiCode);
	std::string getSceneType() const;
	void setSceneType(const std::string &sceneType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getCtApiCode() const;
	void setCtApiCode(long ctApiCode);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	long getCmApiCode() const;
	void setCmApiCode(long cmApiCode);
	std::string getSchemeName() const;
	void setSchemeName(const std::string &schemeName);
	std::string getSmsSignName() const;
	void setSmsSignName(const std::string &smsSignName);
	std::string getHmPackageName() const;
	void setHmPackageName(const std::string &hmPackageName);

private:
	long resourceOwnerId_;
	std::string origin_;
	std::string bundleId_;
	std::string accessKeyId_;
	std::string authType_;
	std::string appName_;
	std::string ipWhiteList_;
	std::string routeName_;
	std::string email_;
	std::string hmSignName_;
	std::string packSign_;
	std::string packName_;
	std::string hmAppIdentifier_;
	long cuApiCode_;
	std::string sceneType_;
	std::string resourceOwnerAccount_;
	long ctApiCode_;
	std::string osType_;
	long ownerId_;
	std::string url_;
	long cmApiCode_;
	std::string schemeName_;
	std::string smsSignName_;
	std::string hmPackageName_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_CREATEVERIFYSCHEMEREQUEST_H_
