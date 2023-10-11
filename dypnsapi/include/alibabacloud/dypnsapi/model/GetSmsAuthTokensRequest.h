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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_GETSMSAUTHTOKENSREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_GETSMSAUTHTOKENSREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT GetSmsAuthTokensRequest : public RpcServiceRequest {
public:
	GetSmsAuthTokensRequest();
	~GetSmsAuthTokensRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSignName() const;
	void setSignName(const std::string &signName);
	std::string getSceneCode() const;
	void setSceneCode(const std::string &sceneCode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getSmsCodeExpire() const;
	void setSmsCodeExpire(int smsCodeExpire);
	std::string getPackageName() const;
	void setPackageName(const std::string &packageName);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSmsTemplateCode() const;
	void setSmsTemplateCode(const std::string &smsTemplateCode);
	long getExpire() const;
	void setExpire(long expire);

private:
	long resourceOwnerId_;
	std::string productCode_;
	std::string bundleId_;
	std::string accessKeyId_;
	std::string signName_;
	std::string sceneCode_;
	std::string resourceOwnerAccount_;
	int smsCodeExpire_;
	std::string packageName_;
	std::string osType_;
	long ownerId_;
	std::string smsTemplateCode_;
	long expire_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_GETSMSAUTHTOKENSREQUEST_H_
