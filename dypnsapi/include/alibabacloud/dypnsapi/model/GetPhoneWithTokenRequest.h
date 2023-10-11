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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_GETPHONEWITHTOKENREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_GETPHONEWITHTOKENREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT GetPhoneWithTokenRequest : public RpcServiceRequest {
public:
	GetPhoneWithTokenRequest();
	~GetPhoneWithTokenRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSpToken() const;
	void setSpToken(const std::string &spToken);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string productCode_;
	std::string accessKeyId_;
	std::string spToken_;
	std::string resourceOwnerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_GETPHONEWITHTOKENREQUEST_H_
