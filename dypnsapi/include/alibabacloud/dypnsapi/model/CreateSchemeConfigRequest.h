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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_CREATESCHEMECONFIGREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_CREATESCHEMECONFIGREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT CreateSchemeConfigRequest : public RpcServiceRequest {
public:
	CreateSchemeConfigRequest();
	~CreateSchemeConfigRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAndroidPackageSign() const;
	void setAndroidPackageSign(const std::string &androidPackageSign);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getH5Url() const;
	void setH5Url(const std::string &h5Url);
	std::string getIosBundleId() const;
	void setIosBundleId(const std::string &iosBundleId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getH5Origin() const;
	void setH5Origin(const std::string &h5Origin);
	std::string getSchemeName() const;
	void setSchemeName(const std::string &schemeName);
	std::string getAndroidPackageName() const;
	void setAndroidPackageName(const std::string &androidPackageName);

private:
	long resourceOwnerId_;
	std::string androidPackageSign_;
	std::string platform_;
	std::string accessKeyId_;
	std::string h5Url_;
	std::string iosBundleId_;
	std::string appName_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string h5Origin_;
	std::string schemeName_;
	std::string androidPackageName_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_CREATESCHEMECONFIGREQUEST_H_
