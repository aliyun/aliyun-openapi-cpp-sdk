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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEVGROUPREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEVGROUPREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateVGroupRequest : public RpcServiceRequest {
public:
	CreateVGroupRequest();
	~CreateVGroupRequest();
	std::string getPrimaryUser() const;
	void setPrimaryUser(const std::string &primaryUser);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getSeataServerUniqueId() const;
	void setSeataServerUniqueId(const std::string &seataServerUniqueId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string primaryUser_;
	std::string name_;
	std::string acceptLanguage_;
	std::string seataServerUniqueId_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEVGROUPREQUEST_H_
