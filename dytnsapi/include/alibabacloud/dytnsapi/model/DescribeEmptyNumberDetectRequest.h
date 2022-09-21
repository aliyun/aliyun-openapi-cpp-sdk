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

#ifndef ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEEMPTYNUMBERDETECTREQUEST_H_
#define ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEEMPTYNUMBERDETECTREQUEST_H_

#include <alibabacloud/dytnsapi/DytnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dytnsapi {
namespace Model {
class ALIBABACLOUD_DYTNSAPI_EXPORT DescribeEmptyNumberDetectRequest : public RpcServiceRequest {
public:
	DescribeEmptyNumberDetectRequest();
	~DescribeEmptyNumberDetectRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getEncryptType() const;
	void setEncryptType(const std::string &encryptType);
	std::string getOfferType() const;
	void setOfferType(const std::string &offerType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPhone() const;
	void setPhone(const std::string &phone);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string encryptType_;
	std::string offerType_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string phone_;
};
} // namespace Model
} // namespace Dytnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEEMPTYNUMBERDETECTREQUEST_H_
