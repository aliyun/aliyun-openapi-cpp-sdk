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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_RENEWINSTANCEREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT RenewInstanceRequest : public RpcServiceRequest {
public:
	RenewInstanceRequest();
	~RenewInstanceRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getRenewPeriod() const;
	void setRenewPeriod(int renewPeriod);

private:
	std::string productCode_;
	std::string clientToken_;
	long ownerId_;
	std::string productType_;
	std::string instanceId_;
	int renewPeriod_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_RENEWINSTANCEREQUEST_H_
