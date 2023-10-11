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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_GETFUSIONAUTHTOKENREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_GETFUSIONAUTHTOKENREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT GetFusionAuthTokenRequest : public RpcServiceRequest {
public:
	GetFusionAuthTokenRequest();
	~GetFusionAuthTokenRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSchemeCode() const;
	void setSchemeCode(const std::string &schemeCode);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPackageName() const;
	void setPackageName(const std::string &packageName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPackageSign() const;
	void setPackageSign(const std::string &packageSign);
	long getDurationSeconds() const;
	void setDurationSeconds(long durationSeconds);

private:
	long resourceOwnerId_;
	std::string bundleId_;
	std::string platform_;
	std::string accessKeyId_;
	std::string schemeCode_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	std::string packageName_;
	long ownerId_;
	std::string packageSign_;
	long durationSeconds_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_GETFUSIONAUTHTOKENREQUEST_H_
