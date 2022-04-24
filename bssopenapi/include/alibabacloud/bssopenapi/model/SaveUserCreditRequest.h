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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_SAVEUSERCREDITREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_SAVEUSERCREDITREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT SaveUserCreditRequest : public RpcServiceRequest {
public:
	SaveUserCreditRequest();
	~SaveUserCreditRequest();
	bool getAvoidExpiration() const;
	void setAvoidExpiration(bool avoidExpiration);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getAvoidPrepaidNotification() const;
	void setAvoidPrepaidNotification(bool avoidPrepaidNotification);
	bool getAvoidPrepaidExpiration() const;
	void setAvoidPrepaidExpiration(bool avoidPrepaidExpiration);
	bool getAvoidNotification() const;
	void setAvoidNotification(bool avoidNotification);
	std::string get_Operator() const;
	void set_Operator(const std::string &_operator);
	std::string getCreditValue() const;
	void setCreditValue(const std::string &creditValue);
	std::string getCreditType() const;
	void setCreditType(const std::string &creditType);

private:
	bool avoidExpiration_;
	std::string description_;
	bool avoidPrepaidNotification_;
	bool avoidPrepaidExpiration_;
	bool avoidNotification_;
	std::string _operator_;
	std::string creditValue_;
	std::string creditType_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_SAVEUSERCREDITREQUEST_H_
