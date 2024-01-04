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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_JYCREATEVERIFYSCHEMEREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_JYCREATEVERIFYSCHEMEREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT JyCreateVerifySchemeRequest : public RpcServiceRequest {
public:
	JyCreateVerifySchemeRequest();
	~JyCreateVerifySchemeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getPackSign() const;
	void setPackSign(const std::string &packSign);
	std::string getPackName() const;
	void setPackName(const std::string &packName);
	long getCuApiCode() const;
	void setCuApiCode(long cuApiCode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getCtApiCode() const;
	void setCtApiCode(long ctApiCode);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	long getCmApiCode() const;
	void setCmApiCode(long cmApiCode);
	std::string getSchemeName() const;
	void setSchemeName(const std::string &schemeName);

private:
	long resourceOwnerId_;
	std::string bundleId_;
	std::string accessKeyId_;
	std::string appName_;
	std::string packSign_;
	std::string packName_;
	long cuApiCode_;
	std::string resourceOwnerAccount_;
	long ctApiCode_;
	std::string osType_;
	long ownerId_;
	long cmApiCode_;
	std::string schemeName_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_JYCREATEVERIFYSCHEMEREQUEST_H_
