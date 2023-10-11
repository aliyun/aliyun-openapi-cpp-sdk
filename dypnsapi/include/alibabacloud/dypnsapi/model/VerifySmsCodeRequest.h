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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_VERIFYSMSCODEREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_VERIFYSMSCODEREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT VerifySmsCodeRequest : public RpcServiceRequest {
public:
	VerifySmsCodeRequest();
	~VerifySmsCodeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getSmsToken() const;
	void setSmsToken(const std::string &smsToken);
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSmsCode() const;
	void setSmsCode(const std::string &smsCode);

private:
	long resourceOwnerId_;
	std::string productCode_;
	std::string smsToken_;
	std::string phoneNumber_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string smsCode_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_VERIFYSMSCODEREQUEST_H_
