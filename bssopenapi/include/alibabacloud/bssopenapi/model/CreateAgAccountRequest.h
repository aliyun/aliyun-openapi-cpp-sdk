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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_CREATEAGACCOUNTREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_CREATEAGACCOUNTREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT CreateAgAccountRequest : public RpcServiceRequest {
public:
	CreateAgAccountRequest();
	~CreateAgAccountRequest();
	std::string getFirstName() const;
	void setFirstName(const std::string &firstName);
	std::string getCityName() const;
	void setCityName(const std::string &cityName);
	std::string getPostcode() const;
	void setPostcode(const std::string &postcode);
	std::string getEnterpriseName() const;
	void setEnterpriseName(const std::string &enterpriseName);
	std::string getNationCode() const;
	void setNationCode(const std::string &nationCode);
	std::string getLastName() const;
	void setLastName(const std::string &lastName);
	std::string getLoginEmail() const;
	void setLoginEmail(const std::string &loginEmail);
	std::string getProvinceName() const;
	void setProvinceName(const std::string &provinceName);
	std::string getAccountAttr() const;
	void setAccountAttr(const std::string &accountAttr);

private:
	std::string firstName_;
	std::string cityName_;
	std::string postcode_;
	std::string enterpriseName_;
	std::string nationCode_;
	std::string lastName_;
	std::string loginEmail_;
	std::string provinceName_;
	std::string accountAttr_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_CREATEAGACCOUNTREQUEST_H_
